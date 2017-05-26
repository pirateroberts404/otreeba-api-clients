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
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.OtreebaOpenCannabisApi) {
      root.OtreebaOpenCannabisApi = {};
    }
    root.OtreebaOpenCannabisApi.Brand = factory(root.OtreebaOpenCannabisApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The Brand model module.
   * @module model/Brand
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>Brand</code>.
   * @alias module:model/Brand
   * @class
   * @param name {String} Name of the brand.
   */
  var exports = function(name) {
    var _this = this;

    _this['name'] = name;











  };

  /**
   * Constructs a <code>Brand</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/Brand} obj Optional instance to populate.
   * @return {module:model/Brand} The populated <code>Brand</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('ocpc')) {
        obj['ocpc'] = ApiClient.convertToType(data['ocpc'], 'String');
      }
      if (data.hasOwnProperty('link')) {
        obj['link'] = ApiClient.convertToType(data['link'], 'String');
      }
      if (data.hasOwnProperty('qr')) {
        obj['qr'] = ApiClient.convertToType(data['qr'], 'String');
      }
      if (data.hasOwnProperty('url')) {
        obj['url'] = ApiClient.convertToType(data['url'], 'String');
      }
      if (data.hasOwnProperty('image')) {
        obj['image'] = ApiClient.convertToType(data['image'], 'String');
      }
      if (data.hasOwnProperty('flowers')) {
        obj['flowers'] = ApiClient.convertToType(data['flowers'], ['String']);
      }
      if (data.hasOwnProperty('extracts')) {
        obj['extracts'] = ApiClient.convertToType(data['extracts'], ['String']);
      }
      if (data.hasOwnProperty('edibles')) {
        obj['edibles'] = ApiClient.convertToType(data['edibles'], ['String']);
      }
      if (data.hasOwnProperty('products')) {
        obj['products'] = ApiClient.convertToType(data['products'], ['String']);
      }
      if (data.hasOwnProperty('createdAt')) {
        obj['createdAt'] = ApiClient.convertToType(data['createdAt'], 'Date');
      }
      if (data.hasOwnProperty('updatedAt')) {
        obj['updatedAt'] = ApiClient.convertToType(data['updatedAt'], 'Date');
      }
    }
    return obj;
  }

  /**
   * Name of the brand.
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * Open Cannabis Product Code for the brand.
   * @member {String} ocpc
   */
  exports.prototype['ocpc'] = undefined;
  /**
   * URL for brand on Otreeba.
   * @member {String} link
   */
  exports.prototype['link'] = undefined;
  /**
   * URL for QR that leads to page on Cannabis Reports.
   * @member {String} qr
   */
  exports.prototype['qr'] = undefined;
  /**
   * URL for brand on Cannabis Reports.
   * @member {String} url
   */
  exports.prototype['url'] = undefined;
  /**
   * URL for logo for brand.
   * @member {String} image
   */
  exports.prototype['image'] = undefined;
  /**
   * OCPCs of the flowers from this brand.
   * @member {Array.<String>} flowers
   */
  exports.prototype['flowers'] = undefined;
  /**
   * OCPCs of the extracts from this brand.
   * @member {Array.<String>} extracts
   */
  exports.prototype['extracts'] = undefined;
  /**
   * OCPCs of the edibles from this brand.
   * @member {Array.<String>} edibles
   */
  exports.prototype['edibles'] = undefined;
  /**
   * OCPCs of the products from this brand.
   * @member {Array.<String>} products
   */
  exports.prototype['products'] = undefined;
  /**
   * Date and time record was created, UTC.
   * @member {Date} createdAt
   */
  exports.prototype['createdAt'] = undefined;
  /**
   * Date and time record was updated, UTC.
   * @member {Date} updatedAt
   */
  exports.prototype['updatedAt'] = undefined;



  return exports;
}));


