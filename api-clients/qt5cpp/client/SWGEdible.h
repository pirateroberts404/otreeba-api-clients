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

/*
 * SWGEdible.h
 * 
 * 
 */

#ifndef SWGEdible_H_
#define SWGEdible_H_

#include <QJsonObject>


#include "SWGObject.h"
#include <QDateTime>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGEdible: public SWGObject {
public:
    SWGEdible();
    SWGEdible(QString* json);
    virtual ~SWGEdible();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGEdible* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);

    QString* getOcpc();
    void setOcpc(QString* ocpc);

    SWGObject* getBrand();
    void setBrand(SWGObject* brand);

    QString* getType();
    void setType(QString* type);

    SWGObject* getStrain();
    void setStrain(SWGObject* strain);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getQr();
    void setQr(QString* qr);

    QString* getUrl();
    void setUrl(QString* url);

    QString* getImage();
    void setImage(QString* image);

    QString* getLabTest();
    void setLabTest(QString* lab_test);

    QString* getThc();
    void setThc(QString* thc);

    QString* getCbd();
    void setCbd(QString* cbd);

    QString* getCannabis();
    void setCannabis(QString* cannabis);

    QString* getHashOil();
    void setHashOil(QString* hash_oil);

    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);

    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);


private:
    QString* name;
    QString* ocpc;
    SWGObject* brand;
    QString* type;
    SWGObject* strain;
    QString* description;
    QString* qr;
    QString* url;
    QString* image;
    QString* lab_test;
    QString* thc;
    QString* cbd;
    QString* cannabis;
    QString* hash_oil;
    QDateTime* created_at;
    QDateTime* updated_at;
};

}

#endif /* SWGEdible_H_ */
