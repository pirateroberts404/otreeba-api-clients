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
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/InlineResponse2004Meta'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./InlineResponse2004Meta'));
  } else {
    // Browser globals (root is window)
    if (!root.OtreebaOpenCannabisApi) {
      root.OtreebaOpenCannabisApi = {};
    }
    root.OtreebaOpenCannabisApi.InlineResponse2004 = factory(root.OtreebaOpenCannabisApi.ApiClient, root.OtreebaOpenCannabisApi.InlineResponse2004Meta);
  }
}(this, function(ApiClient, InlineResponse2004Meta) {
  'use strict';




  /**
   * The InlineResponse2004 model module.
   * @module model/InlineResponse2004
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>InlineResponse2004</code>.
   * @alias module:model/InlineResponse2004
   * @class
   */
  var exports = function() {
    var _this = this;


  };

  /**
   * Constructs a <code>InlineResponse2004</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/InlineResponse2004} obj Optional instance to populate.
   * @return {module:model/InlineResponse2004} The populated <code>InlineResponse2004</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('meta')) {
        obj['meta'] = InlineResponse2004Meta.constructFromObject(data['meta']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/InlineResponse2004Meta} meta
   */
  exports.prototype['meta'] = undefined;



  return exports;
}));


