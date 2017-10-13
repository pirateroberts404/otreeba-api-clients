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
 * Condition.h
 *
 * 
 */

#ifndef Condition_H_
#define Condition_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Condition
    : public ModelBase
{
public:
    Condition();
    virtual ~Condition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Condition members

    /// <summary>
    /// Name of the condition.
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// Slug based on the condition name.
    /// </summary>
    utility::string_t getSlug() const;
    bool slugIsSet() const;
    void unsetSlug();
    void setSlug(utility::string_t value);
    /// <summary>
    /// Description of the condition.
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// Date and time record was created, UTC.
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();
    void setCreatedAt(utility::datetime value);
    /// <summary>
    /// Date and time record was updated, UTC.
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();
    void setUpdatedAt(utility::datetime value);

protected:
    utility::string_t m_Name;
        utility::string_t m_Slug;
    bool m_SlugIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
};

}
}
}
}

#endif /* Condition_H_ */
