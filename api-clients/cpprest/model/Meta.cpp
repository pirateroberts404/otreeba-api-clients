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



#include "Meta.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Meta::Meta()
{
    m_PaginationIsSet = false;
    
}

Meta::~Meta()
{
}

void Meta::validate()
{
    // TODO: implement validation
}

web::json::value Meta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PaginationIsSet)
    {
        val[U("pagination")] = ModelBase::toJson(m_Pagination);
    }
    

    return val;
}

void Meta::fromJson(web::json::value& val)
{
    if(val.has_field(U("pagination")))
    {
        if(!val[U("pagination")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("pagination")]);
            setPagination( newItem );
        }
        
    }
    
}

void Meta::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_PaginationIsSet)
    {
        if (m_Pagination.get())
        {
            m_Pagination->toMultipart(multipart, U("pagination."));
        }
        
    }
    
}

void Meta::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("pagination")))
    {
        if(multipart->hasContent(U("pagination")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("pagination."));
            setPagination( newItem );
        }
        
    }
    
}


std::shared_ptr<Object> Meta::getPagination() const
{
    return m_Pagination;
}
void Meta::setPagination(std::shared_ptr<Object> value)
{
    m_Pagination = value;
    m_PaginationIsSet = true;
}
bool Meta::paginationIsSet() const
{
    return m_PaginationIsSet;
}
void Meta::unsetPagination()
{
    m_PaginationIsSet = false;
}

}
}
}
}

