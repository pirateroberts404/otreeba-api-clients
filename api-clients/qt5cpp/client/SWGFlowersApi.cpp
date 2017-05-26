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

#include "SWGFlowersApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGFlowersApi::SWGFlowersApi() {}

SWGFlowersApi::~SWGFlowersApi() {}

SWGFlowersApi::SWGFlowersApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGFlowersApi::getFlowerByOcpc(QString* ocpc) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/flowers/{ocpc}");

    QString ocpcPathParam("{"); ocpcPathParam.append("ocpc").append("}");
    fullPath.replace(ocpcPathParam, stringValue(ocpc));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGFlowersApi::getFlowerByOcpcCallback);

    worker->execute(&input);
}

void
SWGFlowersApi::getFlowerByOcpcCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGFlower* output = static_cast<SWGFlower*>(create(json, QString("SWGFlower")));
    

    worker->deleteLater();

    emit getFlowerByOcpcSignal(output);
    
}
void
SWGFlowersApi::getFlowers(qint32 page, qint32 count, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/flowers");


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
            &SWGFlowersApi::getFlowersCallback);

    worker->execute(&input);
}

void
SWGFlowersApi::getFlowersCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGInline_response_200_4* output = static_cast<SWGInline_response_200_4*>(create(json, QString("SWGInline_response_200_4")));
    

    worker->deleteLater();

    emit getFlowersSignal(output);
    
}
} /* namespace Swagger */
