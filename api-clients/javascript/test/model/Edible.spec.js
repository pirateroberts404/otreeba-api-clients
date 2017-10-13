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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.OtreebaOpenCannabisApi);
  }
}(this, function(expect, OtreebaOpenCannabisApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new OtreebaOpenCannabisApi.Edible();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('Edible', function() {
    it('should create an instance of Edible', function() {
      // uncomment below and update the code to test Edible
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be.a(OtreebaOpenCannabisApi.Edible);
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property ocpc (base name: "ocpc")', function() {
      // uncomment below and update the code to test the property ocpc
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property brand (base name: "brand")', function() {
      // uncomment below and update the code to test the property brand
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property strain (base name: "strain")', function() {
      // uncomment below and update the code to test the property strain
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property description (base name: "description")', function() {
      // uncomment below and update the code to test the property description
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property qr (base name: "qr")', function() {
      // uncomment below and update the code to test the property qr
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property url (base name: "url")', function() {
      // uncomment below and update the code to test the property url
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property image (base name: "image")', function() {
      // uncomment below and update the code to test the property image
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property labTest (base name: "labTest")', function() {
      // uncomment below and update the code to test the property labTest
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property thc (base name: "thc")', function() {
      // uncomment below and update the code to test the property thc
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property cbd (base name: "cbd")', function() {
      // uncomment below and update the code to test the property cbd
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property cannabis (base name: "cannabis")', function() {
      // uncomment below and update the code to test the property cannabis
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property hashOil (base name: "hashOil")', function() {
      // uncomment below and update the code to test the property hashOil
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property createdAt (base name: "createdAt")', function() {
      // uncomment below and update the code to test the property createdAt
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

    it('should have the property updatedAt (base name: "updatedAt")', function() {
      // uncomment below and update the code to test the property updatedAt
      //var instane = new OtreebaOpenCannabisApi.Edible();
      //expect(instance).to.be();
    });

  });

}));
