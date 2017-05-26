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


#include "SWGEdible.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGEdible::SWGEdible(QString* json) {
    init();
    this->fromJson(*json);
}

SWGEdible::SWGEdible() {
    init();
}

SWGEdible::~SWGEdible() {
    this->cleanup();
}

void
SWGEdible::init() {
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
    cannabis = new QString("");
    hash_oil = new QString("");
    created_at = NULL;
    updated_at = NULL;
}

void
SWGEdible::cleanup() {
    
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

    if(cannabis != nullptr) {
        delete cannabis;
    }

    if(hash_oil != nullptr) {
        delete hash_oil;
    }

    if(created_at != nullptr) {
        delete created_at;
    }

    if(updated_at != nullptr) {
        delete updated_at;
    }
}

SWGEdible*
SWGEdible::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGEdible::fromJsonObject(QJsonObject &pJson) {
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
    ::Swagger::setValue(&cannabis, pJson["cannabis"], "QString", "QString");
    ::Swagger::setValue(&hash_oil, pJson["hashOil"], "QString", "QString");
    ::Swagger::setValue(&created_at, pJson["createdAt"], "QDateTime", "QDateTime");
    ::Swagger::setValue(&updated_at, pJson["updatedAt"], "QDateTime", "QDateTime");
}

QString
SWGEdible::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGEdible::asJsonObject() {
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

    toJsonValue(QString("cannabis"), cannabis, obj, QString("QString"));

    toJsonValue(QString("hashOil"), hash_oil, obj, QString("QString"));

    toJsonValue(QString("createdAt"), created_at, obj, QString("QDateTime"));

    toJsonValue(QString("updatedAt"), updated_at, obj, QString("QDateTime"));

    return obj;
}

QString*
SWGEdible::getName() {
    return name;
}
void
SWGEdible::setName(QString* name) {
    this->name = name;
}

QString*
SWGEdible::getOcpc() {
    return ocpc;
}
void
SWGEdible::setOcpc(QString* ocpc) {
    this->ocpc = ocpc;
}

SWGObject*
SWGEdible::getBrand() {
    return brand;
}
void
SWGEdible::setBrand(SWGObject* brand) {
    this->brand = brand;
}

QString*
SWGEdible::getType() {
    return type;
}
void
SWGEdible::setType(QString* type) {
    this->type = type;
}

SWGObject*
SWGEdible::getStrain() {
    return strain;
}
void
SWGEdible::setStrain(SWGObject* strain) {
    this->strain = strain;
}

QString*
SWGEdible::getDescription() {
    return description;
}
void
SWGEdible::setDescription(QString* description) {
    this->description = description;
}

QString*
SWGEdible::getQr() {
    return qr;
}
void
SWGEdible::setQr(QString* qr) {
    this->qr = qr;
}

QString*
SWGEdible::getUrl() {
    return url;
}
void
SWGEdible::setUrl(QString* url) {
    this->url = url;
}

QString*
SWGEdible::getImage() {
    return image;
}
void
SWGEdible::setImage(QString* image) {
    this->image = image;
}

QString*
SWGEdible::getLabTest() {
    return lab_test;
}
void
SWGEdible::setLabTest(QString* lab_test) {
    this->lab_test = lab_test;
}

QString*
SWGEdible::getThc() {
    return thc;
}
void
SWGEdible::setThc(QString* thc) {
    this->thc = thc;
}

QString*
SWGEdible::getCbd() {
    return cbd;
}
void
SWGEdible::setCbd(QString* cbd) {
    this->cbd = cbd;
}

QString*
SWGEdible::getCannabis() {
    return cannabis;
}
void
SWGEdible::setCannabis(QString* cannabis) {
    this->cannabis = cannabis;
}

QString*
SWGEdible::getHashOil() {
    return hash_oil;
}
void
SWGEdible::setHashOil(QString* hash_oil) {
    this->hash_oil = hash_oil;
}

QDateTime*
SWGEdible::getCreatedAt() {
    return created_at;
}
void
SWGEdible::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGEdible::getUpdatedAt() {
    return updated_at;
}
void
SWGEdible::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

