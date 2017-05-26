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



#include "Inline_response_200_3.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Inline_response_200_3::Inline_response_200_3()
{
    m_MetaIsSet = false;
    
}

Inline_response_200_3::~Inline_response_200_3()
{
}

void Inline_response_200_3::validate()
{
    // TODO: implement validation
}

web::json::value Inline_response_200_3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MetaIsSet)
    {
        val[U("meta")] = ModelBase::toJson(m_Meta);
    }
    

    return val;
}

void Inline_response_200_3::fromJson(web::json::value& val)
{
    if(val.has_field(U("meta")))
    {
        if(!val[U("meta")].is_null())
        {
            std::shared_ptr<Inline_response_200_3_meta> newItem(new Inline_response_200_3_meta());
            newItem->fromJson(val[U("meta")]);
            setMeta( newItem );
        }
        
    }
    
}

void Inline_response_200_3::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_MetaIsSet)
    {
        if (m_Meta.get())
        {
            m_Meta->toMultipart(multipart, U("meta."));
        }
        
    }
    
}

void Inline_response_200_3::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("meta")))
    {
        if(multipart->hasContent(U("meta")))
        {
            std::shared_ptr<Inline_response_200_3_meta> newItem(new Inline_response_200_3_meta());
            newItem->fromMultiPart(multipart, U("meta."));
            setMeta( newItem );
        }
        
    }
    
}


std::shared_ptr<Inline_response_200_3_meta> Inline_response_200_3::getMeta() const
{
    return m_Meta;
}
void Inline_response_200_3::setMeta(std::shared_ptr<Inline_response_200_3_meta> value)
{
    m_Meta = value;
    m_MetaIsSet = true;
}
bool Inline_response_200_3::metaIsSet() const
{
    return m_MetaIsSet;
}
void Inline_response_200_3::unsetMeta()
{
    m_MetaIsSet = false;
}

}
}
}
}

