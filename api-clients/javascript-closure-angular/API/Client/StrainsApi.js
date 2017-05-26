/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.StrainsApi.
 * Do not edit this file by hand or your changes will be lost next time it is
 * generated.
 *
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 * Version: 1.0.0
 * Generated by: io.swagger.codegen.languages.JavascriptClosureAngularClientCodegen
 */
/**
 * @license Attribution 4.0 International (CC BY 4.0)
 * https://creativecommons.org/licenses/by/4.0/
 */

goog.provide('API.Client.StrainsApi');

goog.require('API.Client.Strain');
goog.require('API.Client.inline_response_200_11');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.StrainsApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('StrainsApiBasePath') ?
                   /** @type {!string} */ ($injector.get('StrainsApiBasePath')) :
                   'https://api.otreeba.com/v1';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('StrainsApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('StrainsApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.StrainsApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * Find strain by Open Cannabis Product Code (OCPC).
 * Returns a single strain.
 * @param {!string} ocpc OCPC of the strain to return.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Strain>}
 */
API.Client.StrainsApi.prototype.getStrainByOcpc = function(ocpc, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/strains/{ocpc}'
      .replace('{' + 'ocpc' + '}', String(ocpc));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'ocpc' is set
  if (!ocpc) {
    throw new Error('Missing required parameter ocpc when calling getStrainByOcpc');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Get a list of all current strains.
 * Returns a paginated list of strains.
 * @param {!number=} opt_page Page to be returned.
 * @param {!number=} opt_count The number of items to return. Default 10. Max 50.
 * @param {!string=} opt_sort How to sort the items.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.inline_response_200_11>}
 */
API.Client.StrainsApi.prototype.getStrains = function(opt_page, opt_count, opt_sort, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/strains';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  if (opt_page !== undefined) {
    queryParameters['page'] = opt_page;
  }

  if (opt_count !== undefined) {
    queryParameters['count'] = opt_count;
  }

  if (opt_sort !== undefined) {
    queryParameters['sort'] = opt_sort;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}
