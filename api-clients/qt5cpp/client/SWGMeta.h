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
 * SWGMeta.h
 * 
 * 
 */

#ifndef SWGMeta_H_
#define SWGMeta_H_

#include <QJsonObject>


#include "SWGObject.h"

#include "SWGObject.h"


namespace Swagger {

class SWGMeta: public SWGObject {
public:
    SWGMeta();
    SWGMeta(QString* json);
    virtual ~SWGMeta();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeta* fromJson(QString &jsonString);

    SWGObject* getPagination();
    void setPagination(SWGObject* pagination);


private:
    SWGObject* pagination;
};

} /* namespace Swagger */

#endif /* SWGMeta_H_ */
