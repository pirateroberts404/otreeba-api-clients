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


#include "SWGStudy.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGStudy::SWGStudy(QString* json) {
    init();
    this->fromJson(*json);
}

SWGStudy::SWGStudy() {
    init();
}

SWGStudy::~SWGStudy() {
    this->cleanup();
}

void
SWGStudy::init() {
    name = new QString("");
    year = 0;
    doi = new QString("");
    pub_med_id = new QString("");
    slug = new QString("");
    key_findings = new QString("");
    conditions = new QList<SWGCondition*>();
    created_at = NULL;
    updated_at = NULL;
}

void
SWGStudy::cleanup() {
    
    if(name != nullptr) {
        delete name;
    }


    if(doi != nullptr) {
        delete doi;
    }

    if(pub_med_id != nullptr) {
        delete pub_med_id;
    }

    if(slug != nullptr) {
        delete slug;
    }

    if(key_findings != nullptr) {
        delete key_findings;
    }

    if(conditions != nullptr) {
        QList<SWGCondition*>* arr = conditions;
        foreach(SWGCondition* o, *arr) {
            delete o;
        }
        delete conditions;
    }

    if(created_at != nullptr) {
        delete created_at;
    }

    if(updated_at != nullptr) {
        delete updated_at;
    }
}

SWGStudy*
SWGStudy::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGStudy::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&year, pJson["year"], "qint32", "");
    ::Swagger::setValue(&doi, pJson["doi"], "QString", "QString");
    ::Swagger::setValue(&pub_med_id, pJson["pubMedId"], "QString", "QString");
    ::Swagger::setValue(&slug, pJson["slug"], "QString", "QString");
    ::Swagger::setValue(&key_findings, pJson["keyFindings"], "QString", "QString");
    
    ::Swagger::setValue(&conditions, pJson["conditions"], "QList", "SWGCondition");
    
    ::Swagger::setValue(&created_at, pJson["createdAt"], "QDateTime", "QDateTime");
    ::Swagger::setValue(&updated_at, pJson["updatedAt"], "QDateTime", "QDateTime");
}

QString
SWGStudy::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGStudy::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("name"), name, obj, QString("QString"));

    obj->insert("year", QJsonValue(year));

    toJsonValue(QString("doi"), doi, obj, QString("QString"));

    toJsonValue(QString("pubMedId"), pub_med_id, obj, QString("QString"));

    toJsonValue(QString("slug"), slug, obj, QString("QString"));

    toJsonValue(QString("keyFindings"), key_findings, obj, QString("QString"));

    QJsonArray conditionsJsonArray;
    toJsonArray((QList<void*>*)conditions, &conditionsJsonArray, "conditions", "SWGCondition");
    obj->insert("conditions", conditionsJsonArray);

    toJsonValue(QString("createdAt"), created_at, obj, QString("QDateTime"));

    toJsonValue(QString("updatedAt"), updated_at, obj, QString("QDateTime"));

    return obj;
}

QString*
SWGStudy::getName() {
    return name;
}
void
SWGStudy::setName(QString* name) {
    this->name = name;
}

qint32
SWGStudy::getYear() {
    return year;
}
void
SWGStudy::setYear(qint32 year) {
    this->year = year;
}

QString*
SWGStudy::getDoi() {
    return doi;
}
void
SWGStudy::setDoi(QString* doi) {
    this->doi = doi;
}

QString*
SWGStudy::getPubMedId() {
    return pub_med_id;
}
void
SWGStudy::setPubMedId(QString* pub_med_id) {
    this->pub_med_id = pub_med_id;
}

QString*
SWGStudy::getSlug() {
    return slug;
}
void
SWGStudy::setSlug(QString* slug) {
    this->slug = slug;
}

QString*
SWGStudy::getKeyFindings() {
    return key_findings;
}
void
SWGStudy::setKeyFindings(QString* key_findings) {
    this->key_findings = key_findings;
}

QList<SWGCondition*>*
SWGStudy::getConditions() {
    return conditions;
}
void
SWGStudy::setConditions(QList<SWGCondition*>* conditions) {
    this->conditions = conditions;
}

QDateTime*
SWGStudy::getCreatedAt() {
    return created_at;
}
void
SWGStudy::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGStudy::getUpdatedAt() {
    return updated_at;
}
void
SWGStudy::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}


}

