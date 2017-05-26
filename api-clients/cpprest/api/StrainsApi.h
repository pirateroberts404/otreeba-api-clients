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
 * StrainsApi.h
 *
 * 
 */

#ifndef StrainsApi_H_
#define StrainsApi_H_


#include "ApiClient.h"

#include "Inline_response_200_11.h"
#include "Strain.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  StrainsApi
{
public:
    StrainsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~StrainsApi();
    /// <summary>
    /// Find strain by Open Cannabis Product Code (OCPC).
    /// </summary>
    /// <remarks>
    /// Returns a single strain.
    /// </remarks>
    /// <param name="ocpc">OCPC of the strain to return.</param>
    pplx::task<std::shared_ptr<Strain>> getStrainByOcpc(utility::string_t ocpc);
    /// <summary>
    /// Get a list of all current strains.
    /// </summary>
    /// <remarks>
    /// Returns a paginated list of strains.
    /// </remarks>
    /// <param name="page">Page to be returned. (optional)</param>/// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>/// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
    pplx::task<std::shared_ptr<Inline_response_200_11>> getStrains(int32_t page, int32_t count, utility::string_t sort);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* StrainsApi_H_ */

