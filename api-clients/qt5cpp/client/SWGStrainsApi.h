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

#ifndef _SWG_SWGStrainsApi_H_
#define _SWG_SWGStrainsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_11.h"
#include "SWGStrain.h"

#include <QObject>

namespace Swagger {

class SWGStrainsApi: public QObject {
    Q_OBJECT

public:
    SWGStrainsApi();
    SWGStrainsApi(QString host, QString basePath);
    ~SWGStrainsApi();

    QString host;
    QString basePath;

    void getStrainByOcpc(QString* ocpc);
    void getStrains(qint32 page, qint32 count, QString* sort);
    
private:
    void getStrainByOcpcCallback (HttpRequestWorker * worker);
    void getStrainsCallback (HttpRequestWorker * worker);
    
signals:
    void getStrainByOcpcSignal(SWGStrain* summary);
    void getStrainsSignal(SWGInline_response_200_11* summary);
    
};
}
#endif
