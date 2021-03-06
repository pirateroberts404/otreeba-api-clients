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


#include "SWGStrain.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGStrain::SWGStrain(QString* json) {
    init();
    this->fromJson(*json);
}

SWGStrain::SWGStrain() {
    init();
}

SWGStrain::~SWGStrain() {
    this->cleanup();
}

void
SWGStrain::init() {
    name = new QString("");
    ocpc = new QString("");
    seed_company = NULL;
    qr = new QString("");
    url = new QString("");
    image = new QString("");
    lineage = NULL;
    genetics = NULL;
    children = new QList<QString*>();
    created_at = NULL;
    updated_at = NULL;
}

void
SWGStrain::cleanup() {
    
    if(name != nullptr) {
        delete name;
    }

    if(ocpc != nullptr) {
        delete ocpc;
    }

    if(seed_company != nullptr) {
        delete seed_company;
    }

    if(qr != nullptr) {
        delete qr;
    }

    if(url != nullptr) {
        delete url;
    }

    if(image != nullptr) {
        delete image;
    }

    if(lineage != nullptr) {
        delete lineage;
    }

    if(genetics != nullptr) {
        delete genetics;
    }

    if(children != nullptr) {
        QList<QString*>* arr = children;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete children;
    }

    if(created_at != nullptr) {
        delete created_at;
    }

    if(updated_at != nullptr) {
        delete updated_at;
    }
}

SWGStrain*
SWGStrain::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGStrain::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&ocpc, pJson["ocpc"], "QString", "QString");
    ::Swagger::setValue(&seed_company, pJson["seedCompany"], "SWGObject", "SWGObject");
    ::Swagger::setValue(&qr, pJson["qr"], "QString", "QString");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
    ::Swagger::setValue(&image, pJson["image"], "QString", "QString");
    ::Swagger::setValue(&lineage, pJson["lineage"], "SWGObject", "SWGObject");
    ::Swagger::setValue(&genetics, pJson["genetics"], "SWGObject", "SWGObject");
    
    ::Swagger::setValue(&children, pJson["children"], "QList", "QString");
    
    ::Swagger::setValue(&created_at, pJson["createdAt"], "QDateTime", "QDateTime");
    ::Swagger::setValue(&updated_at, pJson["updatedAt"], "QDateTime", "QDateTime");
}

QString
SWGStrain::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGStrain::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("ocpc"), ocpc, obj, QString("QString"));

    toJsonValue(QString("seedCompany"), seed_company, obj, QString("SWGObject"));

    toJsonValue(QString("qr"), qr, obj, QString("QString"));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    toJsonValue(QString("image"), image, obj, QString("QString"));

    toJsonValue(QString("lineage"), lineage, obj, QString("SWGObject"));

    toJsonValue(QString("genetics"), genetics, obj, QString("SWGObject"));

    QJsonArray childrenJsonArray;
    toJsonArray((QList<void*>*)children, &childrenJsonArray, "children", "QString");
    obj->insert("children", childrenJsonArray);

    toJsonValue(QString("createdAt"), created_at, obj, QString("QDateTime"));

    toJsonValue(QString("updatedAt"), updated_at, obj, QString("QDateTime"));

    return obj;
}

QString*
SWGStrain::getName() {
    return name;
}
void
SWGStrain::setName(QString* name) {
    this->name = name;
}

QString*
SWGStrain::getOcpc() {
    return ocpc;
}
void
SWGStrain::setOcpc(QString* ocpc) {
    this->ocpc = ocpc;
}

SWGObject*
SWGStrain::getSeedCompany() {
    return seed_company;
}
void
SWGStrain::setSeedCompany(SWGObject* seed_company) {
    this->seed_company = seed_company;
}

QString*
SWGStrain::getQr() {
    return qr;
}
void
SWGStrain::setQr(QString* qr) {
    this->qr = qr;
}

QString*
SWGStrain::getUrl() {
    return url;
}
void
SWGStrain::setUrl(QString* url) {
    this->url = url;
}

QString*
SWGStrain::getImage() {
    return image;
}
void
SWGStrain::setImage(QString* image) {
    this->image = image;
}

SWGObject*
SWGStrain::getLineage() {
    return lineage;
}
void
SWGStrain::setLineage(SWGObject* lineage) {
    this->lineage = lineage;
}

SWGObject*
SWGStrain::getGenetics() {
    return genetics;
}
void
SWGStrain::setGenetics(SWGObject* genetics) {
    this->genetics = genetics;
}

QList<QString*>*
SWGStrain::getChildren() {
    return children;
}
void
SWGStrain::setChildren(QList<QString*>* children) {
    this->children = children;
}

QDateTime*
SWGStrain::getCreatedAt() {
    return created_at;
}
void
SWGStrain::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGStrain::getUpdatedAt() {
    return updated_at;
}
void
SWGStrain::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}


}

