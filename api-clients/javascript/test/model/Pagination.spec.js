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
    instance = new OtreebaOpenCannabisApi.Pagination();
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

  describe('Pagination', function() {
    it('should create an instance of Pagination', function() {
      // uncomment below and update the code to test Pagination
      //var instane = new OtreebaOpenCannabisApi.Pagination();
      //expect(instance).to.be.a(OtreebaOpenCannabisApi.Pagination);
    });

    it('should have the property total (base name: "total")', function() {
      // uncomment below and update the code to test the property total
      //var instane = new OtreebaOpenCannabisApi.Pagination();
      //expect(instance).to.be();
    });

    it('should have the property count (base name: "count")', function() {
      // uncomment below and update the code to test the property count
      //var instane = new OtreebaOpenCannabisApi.Pagination();
      //expect(instance).to.be();
    });

    it('should have the property perPage (base name: "per_page")', function() {
      // uncomment below and update the code to test the property perPage
      //var instane = new OtreebaOpenCannabisApi.Pagination();
      //expect(instance).to.be();
    });

    it('should have the property currentPage (base name: "current_page")', function() {
      // uncomment below and update the code to test the property currentPage
      //var instane = new OtreebaOpenCannabisApi.Pagination();
      //expect(instance).to.be();
    });

    it('should have the property totalPages (base name: "total_pages")', function() {
      // uncomment below and update the code to test the property totalPages
      //var instane = new OtreebaOpenCannabisApi.Pagination();
      //expect(instance).to.be();
    });

    it('should have the property links (base name: "links")', function() {
      // uncomment below and update the code to test the property links
      //var instane = new OtreebaOpenCannabisApi.Pagination();
      //expect(instance).to.be();
    });

  });

}));
