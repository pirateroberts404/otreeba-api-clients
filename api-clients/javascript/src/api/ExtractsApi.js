/**
 * Otreeba Open Cannabis API
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 *
 * OpenAPI spec version: 1.0.0
 * Contact: api@otreeba.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.2.3
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/Extract', 'model/InlineResponse2003'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('../model/Extract'), require('../model/InlineResponse2003'));
  } else {
    // Browser globals (root is window)
    if (!root.OtreebaOpenCannabisApi) {
      root.OtreebaOpenCannabisApi = {};
    }
    root.OtreebaOpenCannabisApi.ExtractsApi = factory(root.OtreebaOpenCannabisApi.ApiClient, root.OtreebaOpenCannabisApi.Extract, root.OtreebaOpenCannabisApi.InlineResponse2003);
  }
}(this, function(ApiClient, Extract, InlineResponse2003) {
  'use strict';

  /**
   * Extracts service.
   * @module api/ExtractsApi
   * @version 1.0.0
   */

  /**
   * Constructs a new ExtractsApi. 
   * @alias module:api/ExtractsApi
   * @class
   * @param {module:ApiClient} apiClient Optional API client implementation to use,
   * default to {@link module:ApiClient#instance} if unspecified.
   */
  var exports = function(apiClient) {
    this.apiClient = apiClient || ApiClient.instance;


    /**
     * Callback function to receive the result of the getExtractByOcpc operation.
     * @callback module:api/ExtractsApi~getExtractByOcpcCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Extract} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Find extract by Open Cannabis Product Code (OCPC).
     * Returns a single extract.
     * @param {String} ocpc OCPC of the extract to return.
     * @param {module:api/ExtractsApi~getExtractByOcpcCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Extract}
     */
    this.getExtractByOcpc = function(ocpc, callback) {
      var postBody = null;

      // verify the required parameter 'ocpc' is set
      if (ocpc === undefined || ocpc === null) {
        throw new Error("Missing the required parameter 'ocpc' when calling getExtractByOcpc");
      }


      var pathParams = {
        'ocpc': ocpc
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['api_key'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = Extract;

      return this.apiClient.callApi(
        '/extracts/{ocpc}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getExtracts operation.
     * @callback module:api/ExtractsApi~getExtractsCallback
     * @param {String} error Error message, if any.
     * @param {module:model/InlineResponse2003} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a list of all current extracts.
     * Returns a paginated list of extracts.
     * @param {Object} opts Optional parameters
     * @param {Number} opts.page Page to be returned.
     * @param {Number} opts.count The number of items to return. Default 10. Max 50. (default to 10)
     * @param {module:model/String} opts.sort How to sort the items. (default to -createdAt)
     * @param {module:api/ExtractsApi~getExtractsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/InlineResponse2003}
     */
    this.getExtracts = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'page': opts['page'],
        'count': opts['count'],
        'sort': opts['sort']
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['api_key'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = InlineResponse2003;

      return this.apiClient.callApi(
        '/extracts', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }
  };

  return exports;
}));
