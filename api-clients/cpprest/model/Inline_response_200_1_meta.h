/**
 * Otreeba Open Cannabis API
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 *
 * OpenAPI spec version: 1.0.0
 * Contact: api@otreeba.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Inline_response_200_1_meta.h
 *
 * Gets the Strains for a Seed Company listing from a given OCPC.
 */

#ifndef Inline_response_200_1_meta_H_
#define Inline_response_200_1_meta_H_


#include "ModelBase.h"

#include "Pagination.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Gets the Strains for a Seed Company listing from a given OCPC.
/// </summary>
class  Inline_response_200_1_meta
    : public ModelBase
{
public:
    Inline_response_200_1_meta();
    virtual ~Inline_response_200_1_meta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Inline_response_200_1_meta members

    /// <summary>
    /// Gets the Strains for a Seed Company listing from a given OCPC.
    /// </summary>
    std::shared_ptr<Pagination> getPagination() const;
    bool paginationIsSet() const;
    void unsetPagination();
    void setPagination(std::shared_ptr<Pagination> value);

protected:
    std::shared_ptr<Pagination> m_Pagination;
    bool m_PaginationIsSet;
};

}
}
}
}

#endif /* Inline_response_200_1_meta_H_ */
