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



#include "Condition.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Condition::Condition()
{
    m_Name = U("");
    m_Slug = U("");
    m_SlugIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
}

Condition::~Condition()
{
}

void Condition::validate()
{
    // TODO: implement validation
}

web::json::value Condition::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_SlugIsSet)
    {
        val[U("slug")] = ModelBase::toJson(m_Slug);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_CreatedAtIsSet)
    {
        val[U("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[U("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

void Condition::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("slug")))
    {
        setSlug(ModelBase::stringFromJson(val[U("slug")]));
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
    }
    if(val.has_field(U("createdAt")))
    {
        setCreatedAt(ModelBase::dateFromJson(val[U("createdAt")]));
    }
    if(val.has_field(U("updatedAt")))
    {
        setUpdatedAt(ModelBase::dateFromJson(val[U("updatedAt")]));
    }
}

void Condition::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_SlugIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("slug"), m_Slug));
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("createdAt"), m_CreatedAt));
        
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updatedAt"), m_UpdatedAt));
        
    }
}

void Condition::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("slug")))
    {
        setSlug(ModelBase::stringFromHttpContent(multipart->getContent(U("slug"))));
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    if(multipart->hasContent(U("createdAt")))
    {
        setCreatedAt(ModelBase::dateFromHttpContent(multipart->getContent(U("createdAt"))));
    }
    if(multipart->hasContent(U("updatedAt")))
    {
        setUpdatedAt(ModelBase::dateFromHttpContent(multipart->getContent(U("updatedAt"))));
    }
}

utility::string_t Condition::getName() const
{
    return m_Name;
}


void Condition::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t Condition::getSlug() const
{
    return m_Slug;
}


void Condition::setSlug(utility::string_t value)
{
    m_Slug = value;
    m_SlugIsSet = true;
}
bool Condition::slugIsSet() const
{
    return m_SlugIsSet;
}

void Condition::unsetSlug()
{
    m_SlugIsSet = false;
}

utility::string_t Condition::getDescription() const
{
    return m_Description;
}


void Condition::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool Condition::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Condition::unsetDescription()
{
    m_DescriptionIsSet = false;
}

utility::datetime Condition::getCreatedAt() const
{
    return m_CreatedAt;
}


void Condition::setCreatedAt(utility::datetime value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}
bool Condition::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void Condition::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}

utility::datetime Condition::getUpdatedAt() const
{
    return m_UpdatedAt;
}


void Condition::setUpdatedAt(utility::datetime value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}
bool Condition::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void Condition::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}

}
}
}
}

