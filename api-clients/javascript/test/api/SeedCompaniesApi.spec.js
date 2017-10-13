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
    instance = new OtreebaOpenCannabisApi.SeedCompaniesApi();
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

  describe('SeedCompaniesApi', function() {
    describe('getSeedCompanies', function() {
      it('should call getSeedCompanies successfully', function(done) {
        //uncomment below and update the code to test getSeedCompanies
        //instance.getSeedCompanies(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getSeedCompanyByOcpc', function() {
      it('should call getSeedCompanyByOcpc successfully', function(done) {
        //uncomment below and update the code to test getSeedCompanyByOcpc
        //instance.getSeedCompanyByOcpc(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getSeedCompanyStrainsByOcpc', function() {
      it('should call getSeedCompanyStrainsByOcpc successfully', function(done) {
        //uncomment below and update the code to test getSeedCompanyStrainsByOcpc
        //instance.getSeedCompanyStrainsByOcpc(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
