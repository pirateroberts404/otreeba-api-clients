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


#include "FlowersApi.h"
#include "IHttpBody.h"
#include "JsonBody.h"
#include "MultipartFormData.h"

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

FlowersApi::FlowersApi( std::shared_ptr<ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

FlowersApi::~FlowersApi()
{
}

pplx::task<std::shared_ptr<Flower>> FlowersApi::getFlowerByOcpc(utility::string_t ocpc)
{


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = U("/flowers/{ocpc}");
    boost::replace_all(path, U("{") U("ocpc") U("}"), ApiClient::parameterToString(ocpc));

    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( U("application/json") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = U("application/json");
    }
    // JSON
    else if ( responseHttpContentTypes.find(U("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(U("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("multipart/form-data");
    }
    else
    {
        throw ApiException(400, U("FlowersApi->getFlowerByOcpc does not produce any supported media type"));
    }

    headerParams[U("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;
    consumeHttpContentTypes.insert( U("application/json") );


    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(U("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(U("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("multipart/form-data");
    }
    else
    {
        throw ApiException(415, U("FlowersApi->getFlowerByOcpc does not consume any supported media type"));
    }

    //Set the request content type in the header.
    headerParams[U("Content-Type")] = requestHttpContentType;

    // authentication (api_key) required
    {
        utility::string_t apiKey = apiConfiguration->getApiKey(U("X-API-Key"));
        if ( apiKey.size() > 0 )
        {
            headerParams[U("X-API-Key")] = apiKey;
        }
    }

    return m_ApiClient->callApi(path, U("GET"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , U("error calling getFlowerByOcpc: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(U("Content-Type")))
        {
            utility::string_t contentType = response.headers()[U("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , U("error calling getFlowerByOcpc: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        std::shared_ptr<Flower> result(new Flower());

        if(responseHttpContentType == U("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result->fromJson(json);
        }
        // else if(responseHttpContentType == U("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , U("error calling getFlowerByOcpc: unsupported response type"));
        }

        return result;
    });
}
pplx::task<std::shared_ptr<Inline_response_200_4>> FlowersApi::getFlowers(int32_t page, int32_t count, utility::string_t sort)
{


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = U("/flowers");
    
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( U("application/json") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = U("application/json");
    }
    // JSON
    else if ( responseHttpContentTypes.find(U("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(U("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("multipart/form-data");
    }
    else
    {
        throw ApiException(400, U("FlowersApi->getFlowers does not produce any supported media type"));
    }

    headerParams[U("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;
    consumeHttpContentTypes.insert( U("application/json") );

    
    {
        queryParams[U("page")] = ApiClient::parameterToString(page);
    }
    
    {
        queryParams[U("count")] = ApiClient::parameterToString(count);
    }
    
    {
        queryParams[U("sort")] = ApiClient::parameterToString(sort);
    }

    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(U("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(U("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("multipart/form-data");
    }
    else
    {
        throw ApiException(415, U("FlowersApi->getFlowers does not consume any supported media type"));
    }

    //Set the request content type in the header.
    headerParams[U("Content-Type")] = requestHttpContentType;

    // authentication (api_key) required
    {
        utility::string_t apiKey = apiConfiguration->getApiKey(U("X-API-Key"));
        if ( apiKey.size() > 0 )
        {
            headerParams[U("X-API-Key")] = apiKey;
        }
    }

    return m_ApiClient->callApi(path, U("GET"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , U("error calling getFlowers: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(U("Content-Type")))
        {
            utility::string_t contentType = response.headers()[U("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , U("error calling getFlowers: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        std::shared_ptr<Inline_response_200_4> result(new Inline_response_200_4());

        if(responseHttpContentType == U("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result->fromJson(json);
        }
        // else if(responseHttpContentType == U("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , U("error calling getFlowers: unsupported response type"));
        }

        return result;
    });
}

}
}
}
}

