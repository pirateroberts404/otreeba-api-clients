/*
 * SamiInline_response_200_5.h
 * 
 * 
 */

#ifndef SamiInline_response_200_5_H_
#define SamiInline_response_200_5_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMeta.h"


namespace Swagger {

class SamiInline_response_200_5: public SamiObject {
public:
    SamiInline_response_200_5();
    SamiInline_response_200_5(String* json);
    virtual ~SamiInline_response_200_5();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_5* fromJson(String* obj);

    SamiMeta* getPMeta();
    void setPMeta(SamiMeta* pMeta);

private:
    SamiMeta* pMeta;
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_5_H_ */
