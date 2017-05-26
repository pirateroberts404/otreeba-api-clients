/* 
 * Otreeba Open Cannabis API
 *
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 *
 * OpenAPI spec version: 1.0.0
 * Contact: api@otreeba.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IEdiblesApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Find edible by Open Cannabis Product Code (OCPC).
        /// </summary>
        /// <remarks>
        /// Returns a single edible.
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="ocpc">OCPC of the edible to return.</param>
        /// <returns>Edible</returns>
        Edible GetEdibleByOcpc (string ocpc);

        /// <summary>
        /// Find edible by Open Cannabis Product Code (OCPC).
        /// </summary>
        /// <remarks>
        /// Returns a single edible.
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="ocpc">OCPC of the edible to return.</param>
        /// <returns>ApiResponse of Edible</returns>
        ApiResponse<Edible> GetEdibleByOcpcWithHttpInfo (string ocpc);
        /// <summary>
        /// Get a list of all current edibles.
        /// </summary>
        /// <remarks>
        /// Returns a paginated list of edibles.
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="page">Page to be returned. (optional)</param>
        /// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>
        /// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
        /// <returns>InlineResponse2002</returns>
        InlineResponse2002 GetEdibles (int? page = null, int? count = null, string sort = null);

        /// <summary>
        /// Get a list of all current edibles.
        /// </summary>
        /// <remarks>
        /// Returns a paginated list of edibles.
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="page">Page to be returned. (optional)</param>
        /// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>
        /// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
        /// <returns>ApiResponse of InlineResponse2002</returns>
        ApiResponse<InlineResponse2002> GetEdiblesWithHttpInfo (int? page = null, int? count = null, string sort = null);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Find edible by Open Cannabis Product Code (OCPC).
        /// </summary>
        /// <remarks>
        /// Returns a single edible.
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="ocpc">OCPC of the edible to return.</param>
        /// <returns>Task of Edible</returns>
        System.Threading.Tasks.Task<Edible> GetEdibleByOcpcAsync (string ocpc);

        /// <summary>
        /// Find edible by Open Cannabis Product Code (OCPC).
        /// </summary>
        /// <remarks>
        /// Returns a single edible.
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="ocpc">OCPC of the edible to return.</param>
        /// <returns>Task of ApiResponse (Edible)</returns>
        System.Threading.Tasks.Task<ApiResponse<Edible>> GetEdibleByOcpcAsyncWithHttpInfo (string ocpc);
        /// <summary>
        /// Get a list of all current edibles.
        /// </summary>
        /// <remarks>
        /// Returns a paginated list of edibles.
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="page">Page to be returned. (optional)</param>
        /// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>
        /// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
        /// <returns>Task of InlineResponse2002</returns>
        System.Threading.Tasks.Task<InlineResponse2002> GetEdiblesAsync (int? page = null, int? count = null, string sort = null);

        /// <summary>
        /// Get a list of all current edibles.
        /// </summary>
        /// <remarks>
        /// Returns a paginated list of edibles.
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="page">Page to be returned. (optional)</param>
        /// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>
        /// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
        /// <returns>Task of ApiResponse (InlineResponse2002)</returns>
        System.Threading.Tasks.Task<ApiResponse<InlineResponse2002>> GetEdiblesAsyncWithHttpInfo (int? page = null, int? count = null, string sort = null);
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class EdiblesApi : IEdiblesApi
    {
        private IO.Swagger.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="EdiblesApi"/> class.
        /// </summary>
        /// <returns></returns>
        public EdiblesApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            ExceptionFactory = IO.Swagger.Client.Configuration.DefaultExceptionFactory;

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="EdiblesApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public EdiblesApi(Configuration configuration = null)
        {
            if (configuration == null) // use the default one in Configuration
                this.Configuration = Configuration.Default;
            else
                this.Configuration = configuration;

            ExceptionFactory = IO.Swagger.Client.Configuration.DefaultExceptionFactory;

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }

        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public String GetBasePath()
        {
            return this.Configuration.ApiClient.RestClient.BaseUrl.ToString();
        }

        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        [Obsolete("SetBasePath is deprecated, please do 'Configuration.ApiClient = new ApiClient(\"http://new-path\")' instead.")]
        public void SetBasePath(String basePath)
        {
            // do nothing
        }

        /// <summary>
        /// Gets or sets the configuration object
        /// </summary>
        /// <value>An instance of the Configuration</value>
        public Configuration Configuration {get; set;}

        /// <summary>
        /// Provides a factory method hook for the creation of exceptions.
        /// </summary>
        public IO.Swagger.Client.ExceptionFactory ExceptionFactory
        {
            get
            {
                if (_exceptionFactory != null && _exceptionFactory.GetInvocationList().Length > 1)
                {
                    throw new InvalidOperationException("Multicast delegate for ExceptionFactory is unsupported.");
                }
                return _exceptionFactory;
            }
            set { _exceptionFactory = value; }
        }

        /// <summary>
        /// Gets the default header.
        /// </summary>
        /// <returns>Dictionary of HTTP header</returns>
        [Obsolete("DefaultHeader is deprecated, please use Configuration.DefaultHeader instead.")]
        public Dictionary<String, String> DefaultHeader()
        {
            return this.Configuration.DefaultHeader;
        }

        /// <summary>
        /// Add default header.
        /// </summary>
        /// <param name="key">Header field name.</param>
        /// <param name="value">Header field value.</param>
        /// <returns></returns>
        [Obsolete("AddDefaultHeader is deprecated, please use Configuration.AddDefaultHeader instead.")]
        public void AddDefaultHeader(string key, string value)
        {
            this.Configuration.AddDefaultHeader(key, value);
        }

        /// <summary>
        /// Find edible by Open Cannabis Product Code (OCPC). Returns a single edible.
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="ocpc">OCPC of the edible to return.</param>
        /// <returns>Edible</returns>
        public Edible GetEdibleByOcpc (string ocpc)
        {
             ApiResponse<Edible> localVarResponse = GetEdibleByOcpcWithHttpInfo(ocpc);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Find edible by Open Cannabis Product Code (OCPC). Returns a single edible.
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="ocpc">OCPC of the edible to return.</param>
        /// <returns>ApiResponse of Edible</returns>
        public ApiResponse< Edible > GetEdibleByOcpcWithHttpInfo (string ocpc)
        {
            // verify the required parameter 'ocpc' is set
            if (ocpc == null)
                throw new ApiException(400, "Missing required parameter 'ocpc' when calling EdiblesApi->GetEdibleByOcpc");

            var localVarPath = "/edibles/{ocpc}";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (ocpc != null) localVarPathParams.Add("ocpc", Configuration.ApiClient.ParameterToString(ocpc)); // path parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetEdibleByOcpc", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<Edible>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Edible) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Edible)));
            
        }

        /// <summary>
        /// Find edible by Open Cannabis Product Code (OCPC). Returns a single edible.
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="ocpc">OCPC of the edible to return.</param>
        /// <returns>Task of Edible</returns>
        public async System.Threading.Tasks.Task<Edible> GetEdibleByOcpcAsync (string ocpc)
        {
             ApiResponse<Edible> localVarResponse = await GetEdibleByOcpcAsyncWithHttpInfo(ocpc);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Find edible by Open Cannabis Product Code (OCPC). Returns a single edible.
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="ocpc">OCPC of the edible to return.</param>
        /// <returns>Task of ApiResponse (Edible)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Edible>> GetEdibleByOcpcAsyncWithHttpInfo (string ocpc)
        {
            // verify the required parameter 'ocpc' is set
            if (ocpc == null)
                throw new ApiException(400, "Missing required parameter 'ocpc' when calling EdiblesApi->GetEdibleByOcpc");

            var localVarPath = "/edibles/{ocpc}";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (ocpc != null) localVarPathParams.Add("ocpc", Configuration.ApiClient.ParameterToString(ocpc)); // path parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetEdibleByOcpc", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<Edible>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Edible) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Edible)));
            
        }

        /// <summary>
        /// Get a list of all current edibles. Returns a paginated list of edibles.
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="page">Page to be returned. (optional)</param>
        /// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>
        /// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
        /// <returns>InlineResponse2002</returns>
        public InlineResponse2002 GetEdibles (int? page = null, int? count = null, string sort = null)
        {
             ApiResponse<InlineResponse2002> localVarResponse = GetEdiblesWithHttpInfo(page, count, sort);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Get a list of all current edibles. Returns a paginated list of edibles.
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="page">Page to be returned. (optional)</param>
        /// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>
        /// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
        /// <returns>ApiResponse of InlineResponse2002</returns>
        public ApiResponse< InlineResponse2002 > GetEdiblesWithHttpInfo (int? page = null, int? count = null, string sort = null)
        {

            var localVarPath = "/edibles";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (page != null) localVarQueryParams.Add("page", Configuration.ApiClient.ParameterToString(page)); // query parameter
            if (count != null) localVarQueryParams.Add("count", Configuration.ApiClient.ParameterToString(count)); // query parameter
            if (sort != null) localVarQueryParams.Add("sort", Configuration.ApiClient.ParameterToString(sort)); // query parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetEdibles", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<InlineResponse2002>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (InlineResponse2002) Configuration.ApiClient.Deserialize(localVarResponse, typeof(InlineResponse2002)));
            
        }

        /// <summary>
        /// Get a list of all current edibles. Returns a paginated list of edibles.
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="page">Page to be returned. (optional)</param>
        /// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>
        /// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
        /// <returns>Task of InlineResponse2002</returns>
        public async System.Threading.Tasks.Task<InlineResponse2002> GetEdiblesAsync (int? page = null, int? count = null, string sort = null)
        {
             ApiResponse<InlineResponse2002> localVarResponse = await GetEdiblesAsyncWithHttpInfo(page, count, sort);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Get a list of all current edibles. Returns a paginated list of edibles.
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="page">Page to be returned. (optional)</param>
        /// <param name="count">The number of items to return. Default 10. Max 50. (optional, default to 10)</param>
        /// <param name="sort">How to sort the items. (optional, default to -createdAt)</param>
        /// <returns>Task of ApiResponse (InlineResponse2002)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<InlineResponse2002>> GetEdiblesAsyncWithHttpInfo (int? page = null, int? count = null, string sort = null)
        {

            var localVarPath = "/edibles";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (page != null) localVarQueryParams.Add("page", Configuration.ApiClient.ParameterToString(page)); // query parameter
            if (count != null) localVarQueryParams.Add("count", Configuration.ApiClient.ParameterToString(count)); // query parameter
            if (sort != null) localVarQueryParams.Add("sort", Configuration.ApiClient.ParameterToString(sort)); // query parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetEdibles", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<InlineResponse2002>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (InlineResponse2002) Configuration.ApiClient.Deserialize(localVarResponse, typeof(InlineResponse2002)));
            
        }

    }
}
