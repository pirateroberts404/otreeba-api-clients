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



#include "Inline_response_200_7_meta.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Inline_response_200_7_meta::Inline_response_200_7_meta()
{
    m_PaginationIsSet = false;
    
}

Inline_response_200_7_meta::~Inline_response_200_7_meta()
{
}

void Inline_response_200_7_meta::validate()
{
    // TODO: implement validation
}

web::json::value Inline_response_200_7_meta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PaginationIsSet)
    {
        val[U("pagination")] = ModelBase::toJson(m_Pagination);
    }
    

    return val;
}

void Inline_response_200_7_meta::fromJson(web::json::value& val)
{
    if(val.has_field(U("pagination")))
    {
        if(!val[U("pagination")].is_null())
        {
            std::shared_ptr<Pagination> newItem(new Pagination());
            newItem->fromJson(val[U("pagination")]);
            setPagination( newItem );
        }
        
    }
    
}

void Inline_response_200_7_meta::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void Inline_response_200_7_meta::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
            std::shared_ptr<Pagination> newItem(new Pagination());
            newItem->fromMultiPart(multipart, U("pagination."));
            setPagination( newItem );
        }
        
    }
    
}


std::shared_ptr<Pagination> Inline_response_200_7_meta::getPagination() const
{
    return m_Pagination;
}
void Inline_response_200_7_meta::setPagination(std::shared_ptr<Pagination> value)
{
    m_Pagination = value;
    m_PaginationIsSet = true;
}
bool Inline_response_200_7_meta::paginationIsSet() const
{
    return m_PaginationIsSet;
}
void Inline_response_200_7_meta::unsetPagination()
{
    m_PaginationIsSet = false;
}

}
}
}
}

