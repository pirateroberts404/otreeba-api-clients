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
 * SWGInline_response_200_2.h
 * 
 * 
 */

#ifndef SWGInline_response_200_2_H_
#define SWGInline_response_200_2_H_

#include <QJsonObject>


#include "SWGMeta.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_2: public SWGObject {
public:
    SWGInline_response_200_2();
    SWGInline_response_200_2(QString* json);
    virtual ~SWGInline_response_200_2();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_2* fromJson(QString &jsonString);

    SWGMeta* getMeta();
    void setMeta(SWGMeta* meta);


private:
    SWGMeta* meta;
};

}

#endif /* SWGInline_response_200_2_H_ */
