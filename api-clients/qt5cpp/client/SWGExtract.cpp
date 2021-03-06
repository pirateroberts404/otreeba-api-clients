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


#include "SWGExtract.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGExtract::SWGExtract(QString* json) {
    init();
    this->fromJson(*json);
}

SWGExtract::SWGExtract() {
    init();
}

SWGExtract::~SWGExtract() {
    this->cleanup();
}

void
SWGExtract::init() {
    name = new QString("");
    ocpc = new QString("");
    brand = NULL;
    type = new QString("");
    strain = NULL;
    description = new QString("");
    qr = new QString("");
    url = new QString("");
    image = new QString("");
    lab_test = new QString("");
    thc = new QString("");
    cbd = new QString("");
    created_at = NULL;
    updated_at = NULL;
}

void
SWGExtract::cleanup() {
    
    if(name != nullptr) {
        delete name;
    }

    if(ocpc != nullptr) {
        delete ocpc;
    }

    if(brand != nullptr) {
        delete brand;
    }

    if(type != nullptr) {
        delete type;
    }

    if(strain != nullptr) {
        delete strain;
    }

    if(description != nullptr) {
        delete description;
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

    if(lab_test != nullptr) {
        delete lab_test;
    }

    if(thc != nullptr) {
        delete thc;
    }

    if(cbd != nullptr) {
        delete cbd;
    }

    if(created_at != nullptr) {
        delete created_at;
    }

    if(updated_at != nullptr) {
        delete updated_at;
    }
}

SWGExtract*
SWGExtract::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGExtract::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&ocpc, pJson["ocpc"], "QString", "QString");
    ::Swagger::setValue(&brand, pJson["brand"], "SWGObject", "SWGObject");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&strain, pJson["strain"], "SWGObject", "SWGObject");
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    ::Swagger::setValue(&qr, pJson["qr"], "QString", "QString");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
    ::Swagger::setValue(&image, pJson["image"], "QString", "QString");
    ::Swagger::setValue(&lab_test, pJson["labTest"], "QString", "QString");
    ::Swagger::setValue(&thc, pJson["thc"], "QString", "QString");
    ::Swagger::setValue(&cbd, pJson["cbd"], "QString", "QString");
    ::Swagger::setValue(&created_at, pJson["createdAt"], "QDateTime", "QDateTime");
    ::Swagger::setValue(&updated_at, pJson["updatedAt"], "QDateTime", "QDateTime");
}

QString
SWGExtract::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGExtract::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("ocpc"), ocpc, obj, QString("QString"));

    toJsonValue(QString("brand"), brand, obj, QString("SWGObject"));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("strain"), strain, obj, QString("SWGObject"));

    toJsonValue(QString("description"), description, obj, QString("QString"));

    toJsonValue(QString("qr"), qr, obj, QString("QString"));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    toJsonValue(QString("image"), image, obj, QString("QString"));

    toJsonValue(QString("labTest"), lab_test, obj, QString("QString"));

    toJsonValue(QString("thc"), thc, obj, QString("QString"));

    toJsonValue(QString("cbd"), cbd, obj, QString("QString"));

    toJsonValue(QString("createdAt"), created_at, obj, QString("QDateTime"));

    toJsonValue(QString("updatedAt"), updated_at, obj, QString("QDateTime"));

    return obj;
}

QString*
SWGExtract::getName() {
    return name;
}
void
SWGExtract::setName(QString* name) {
    this->name = name;
}

QString*
SWGExtract::getOcpc() {
    return ocpc;
}
void
SWGExtract::setOcpc(QString* ocpc) {
    this->ocpc = ocpc;
}

SWGObject*
SWGExtract::getBrand() {
    return brand;
}
void
SWGExtract::setBrand(SWGObject* brand) {
    this->brand = brand;
}

QString*
SWGExtract::getType() {
    return type;
}
void
SWGExtract::setType(QString* type) {
    this->type = type;
}

SWGObject*
SWGExtract::getStrain() {
    return strain;
}
void
SWGExtract::setStrain(SWGObject* strain) {
    this->strain = strain;
}

QString*
SWGExtract::getDescription() {
    return description;
}
void
SWGExtract::setDescription(QString* description) {
    this->description = description;
}

QString*
SWGExtract::getQr() {
    return qr;
}
void
SWGExtract::setQr(QString* qr) {
    this->qr = qr;
}

QString*
SWGExtract::getUrl() {
    return url;
}
void
SWGExtract::setUrl(QString* url) {
    this->url = url;
}

QString*
SWGExtract::getImage() {
    return image;
}
void
SWGExtract::setImage(QString* image) {
    this->image = image;
}

QString*
SWGExtract::getLabTest() {
    return lab_test;
}
void
SWGExtract::setLabTest(QString* lab_test) {
    this->lab_test = lab_test;
}

QString*
SWGExtract::getThc() {
    return thc;
}
void
SWGExtract::setThc(QString* thc) {
    this->thc = thc;
}

QString*
SWGExtract::getCbd() {
    return cbd;
}
void
SWGExtract::setCbd(QString* cbd) {
    this->cbd = cbd;
}

QDateTime*
SWGExtract::getCreatedAt() {
    return created_at;
}
void
SWGExtract::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGExtract::getUpdatedAt() {
    return updated_at;
}
void
SWGExtract::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}


}

