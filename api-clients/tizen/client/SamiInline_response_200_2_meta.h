/*
 * SamiInline_response_200_2_meta.h
 * 
 * Gets the current list of Edibles.
 */

#ifndef SamiInline_response_200_2_meta_H_
#define SamiInline_response_200_2_meta_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPagination.h"


namespace Swagger {

class SamiInline_response_200_2_meta: public SamiObject {
public:
    SamiInline_response_200_2_meta();
    SamiInline_response_200_2_meta(String* json);
    virtual ~SamiInline_response_200_2_meta();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_2_meta* fromJson(String* obj);

    SamiPagination* getPPagination();
    void setPPagination(SamiPagination* pPagination);

private:
    SamiPagination* pPagination;
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_2_meta_H_ */
