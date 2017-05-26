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


#include "SWGInline_response_200_1.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_1::SWGInline_response_200_1(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_1::SWGInline_response_200_1() {
    init();
}

SWGInline_response_200_1::~SWGInline_response_200_1() {
    this->cleanup();
}

void
SWGInline_response_200_1::init() {
    meta = new SWGInline_response_200_1_meta();
}

void
SWGInline_response_200_1::cleanup() {
    
    if(meta != nullptr) {
        delete meta;
    }
}

SWGInline_response_200_1*
SWGInline_response_200_1::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_1::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&meta, pJson["meta"], "SWGInline_response_200_1_meta", "SWGInline_response_200_1_meta");
}

QString
SWGInline_response_200_1::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_1::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("meta"), meta, obj, QString("SWGInline_response_200_1_meta"));

    return obj;
}

SWGInline_response_200_1_meta*
SWGInline_response_200_1::getMeta() {
    return meta;
}
void
SWGInline_response_200_1::setMeta(SWGInline_response_200_1_meta* meta) {
    this->meta = meta;
}



} /* namespace Swagger */

