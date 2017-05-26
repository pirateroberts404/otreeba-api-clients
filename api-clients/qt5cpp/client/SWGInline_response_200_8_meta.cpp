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


#include "SWGInline_response_200_8_meta.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_8_meta::SWGInline_response_200_8_meta(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_8_meta::SWGInline_response_200_8_meta() {
    init();
}

SWGInline_response_200_8_meta::~SWGInline_response_200_8_meta() {
    this->cleanup();
}

void
SWGInline_response_200_8_meta::init() {
    pagination = new SWGPagination();
}

void
SWGInline_response_200_8_meta::cleanup() {
    
    if(pagination != nullptr) {
        delete pagination;
    }
}

SWGInline_response_200_8_meta*
SWGInline_response_200_8_meta::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_8_meta::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&pagination, pJson["pagination"], "SWGPagination", "SWGPagination");
}

QString
SWGInline_response_200_8_meta::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_8_meta::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("pagination"), pagination, obj, QString("SWGPagination"));

    return obj;
}

SWGPagination*
SWGInline_response_200_8_meta::getPagination() {
    return pagination;
}
void
SWGInline_response_200_8_meta::setPagination(SWGPagination* pagination) {
    this->pagination = pagination;
}



} /* namespace Swagger */

