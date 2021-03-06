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
    define(['ApiClient', 'model/InlineResponse20011', 'model/Strain'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('../model/InlineResponse20011'), require('../model/Strain'));
  } else {
    // Browser globals (root is window)
    if (!root.OtreebaOpenCannabisApi) {
      root.OtreebaOpenCannabisApi = {};
    }
    root.OtreebaOpenCannabisApi.StrainsApi = factory(root.OtreebaOpenCannabisApi.ApiClient, root.OtreebaOpenCannabisApi.InlineResponse20011, root.OtreebaOpenCannabisApi.Strain);
  }
}(this, function(ApiClient, InlineResponse20011, Strain) {
  'use strict';

  /**
   * Strains service.
   * @module api/StrainsApi
   * @version 1.0.0
   */

  /**
   * Constructs a new StrainsApi. 
   * @alias module:api/StrainsApi
   * @class
   * @param {module:ApiClient} apiClient Optional API client implementation to use,
   * default to {@link module:ApiClient#instance} if unspecified.
   */
  var exports = function(apiClient) {
    this.apiClient = apiClient || ApiClient.instance;


    /**
     * Callback function to receive the result of the getStrainByOcpc operation.
     * @callback module:api/StrainsApi~getStrainByOcpcCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Strain} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Find strain by Open Cannabis Product Code (OCPC).
     * Returns a single strain.
     * @param {String} ocpc OCPC of the strain to return.
     * @param {module:api/StrainsApi~getStrainByOcpcCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Strain}
     */
    this.getStrainByOcpc = function(ocpc, callback) {
      var postBody = null;

      // verify the required parameter 'ocpc' is set
      if (ocpc === undefined || ocpc === null) {
        throw new Error("Missing the required parameter 'ocpc' when calling getStrainByOcpc");
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
      var returnType = Strain;

      return this.apiClient.callApi(
        '/strains/{ocpc}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getStrains operation.
     * @callback module:api/StrainsApi~getStrainsCallback
     * @param {String} error Error message, if any.
     * @param {module:model/InlineResponse20011} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a list of all current strains.
     * Returns a paginated list of strains.
     * @param {Object} opts Optional parameters
     * @param {Number} opts.page Page to be returned.
     * @param {Number} opts.count The number of items to return. Default 10. Max 50. (default to 10)
     * @param {module:model/String} opts.sort How to sort the items. (default to -createdAt)
     * @param {module:api/StrainsApi~getStrainsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/InlineResponse20011}
     */
    this.getStrains = function(opts, callback) {
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
      var returnType = InlineResponse20011;

      return this.apiClient.callApi(
        '/strains', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }
  };

  return exports;
}));
