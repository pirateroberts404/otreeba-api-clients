/**
 * Otreeba Open Cannabis API
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 *
 * OpenAPI spec version: 1.0.0
 * Contact: api@otreeba.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "SWGProductsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGProductsApi::SWGProductsApi() {}

SWGProductsApi::~SWGProductsApi() {}

SWGProductsApi::SWGProductsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGProductsApi::getProductByOcpc(QString* ocpc) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{ocpc}");

    QString ocpcPathParam("{"); ocpcPathParam.append("ocpc").append("}");
    fullPath.replace(ocpcPathParam, stringValue(ocpc));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductsApi::getProductByOcpcCallback);

    worker->execute(&input);
}

void
SWGProductsApi::getProductByOcpcCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGProduct* output = static_cast<SWGProduct*>(create(json, QString("SWGProduct")));
    

    worker->deleteLater();

    emit getProductByOcpcSignal(output);
    
}
void
SWGProductsApi::getProducts(qint32 page, qint32 count, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("count"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(count)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sort"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sort)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductsApi::getProductsCallback);

    worker->execute(&input);
}

void
SWGProductsApi::getProductsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGInline_response_200_10* output = static_cast<SWGInline_response_200_10*>(create(json, QString("SWGInline_response_200_10")));
    

    worker->deleteLater();

    emit getProductsSignal(output);
    
}
} /* namespace Swagger */
