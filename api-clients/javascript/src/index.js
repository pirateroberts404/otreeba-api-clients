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

(function(factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/Brand', 'model/Edible', 'model/Error', 'model/Extract', 'model/Flower', 'model/InlineResponse200', 'model/InlineResponse2001', 'model/InlineResponse20010', 'model/InlineResponse20011', 'model/InlineResponse2002', 'model/InlineResponse2003', 'model/InlineResponse2004', 'model/InlineResponse2005', 'model/InlineResponse2006', 'model/InlineResponse2007', 'model/InlineResponse2008', 'model/InlineResponse2009', 'model/InlineResponse200Meta', 'model/Meta', 'model/Pagination', 'model/Product', 'model/SeedCompany', 'model/Strain', 'api/BrandsApi', 'api/EdiblesApi', 'api/ExtractsApi', 'api/FlowersApi', 'api/ProductsApi', 'api/SeedCompaniesApi', 'api/StrainsApi'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('./ApiClient'), require('./model/Brand'), require('./model/Edible'), require('./model/Error'), require('./model/Extract'), require('./model/Flower'), require('./model/InlineResponse200'), require('./model/InlineResponse2001'), require('./model/InlineResponse20010'), require('./model/InlineResponse20011'), require('./model/InlineResponse2002'), require('./model/InlineResponse2003'), require('./model/InlineResponse2004'), require('./model/InlineResponse2005'), require('./model/InlineResponse2006'), require('./model/InlineResponse2007'), require('./model/InlineResponse2008'), require('./model/InlineResponse2009'), require('./model/InlineResponse200Meta'), require('./model/Meta'), require('./model/Pagination'), require('./model/Product'), require('./model/SeedCompany'), require('./model/Strain'), require('./api/BrandsApi'), require('./api/EdiblesApi'), require('./api/ExtractsApi'), require('./api/FlowersApi'), require('./api/ProductsApi'), require('./api/SeedCompaniesApi'), require('./api/StrainsApi'));
  }
}(function(ApiClient, Brand, Edible, Error, Extract, Flower, InlineResponse200, InlineResponse2001, InlineResponse20010, InlineResponse20011, InlineResponse2002, InlineResponse2003, InlineResponse2004, InlineResponse2005, InlineResponse2006, InlineResponse2007, InlineResponse2008, InlineResponse2009, InlineResponse200Meta, Meta, Pagination, Product, SeedCompany, Strain, BrandsApi, EdiblesApi, ExtractsApi, FlowersApi, ProductsApi, SeedCompaniesApi, StrainsApi) {
  'use strict';

  /**
   * This_is_an_open_canonical_database_of_cannabis_seed_companies_strains_brands_products_retailers_and_studies_from__Otreeba_httpsotreeba_com__It_is_written_on_the_OpenAPI_Specification_AKA_Swagger__You_can_find_out_more_about_the_Open_API_Initiative_at__httpswww_openapis_org_httpswww_openapis_org_or_more_info_on_Swagger_at__httpswagger_io_httpswagger_io_.<br>
   * The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
   * <p>
   * An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
   * <pre>
   * var OtreebaOpenCannabisApi = require('index'); // See note below*.
   * var xxxSvc = new OtreebaOpenCannabisApi.XxxApi(); // Allocate the API class we're going to use.
   * var yyyModel = new OtreebaOpenCannabisApi.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
   * and put the application logic within the callback function.</em>
   * </p>
   * <p>
   * A non-AMD browser application (discouraged) might do something like this:
   * <pre>
   * var xxxSvc = new OtreebaOpenCannabisApi.XxxApi(); // Allocate the API class we're going to use.
   * var yyy = new OtreebaOpenCannabisApi.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * </p>
   * @module index
   * @version 1.0.0
   */
  var exports = {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient: ApiClient,
    /**
     * The Brand model constructor.
     * @property {module:model/Brand}
     */
    Brand: Brand,
    /**
     * The Edible model constructor.
     * @property {module:model/Edible}
     */
    Edible: Edible,
    /**
     * The Error model constructor.
     * @property {module:model/Error}
     */
    Error: Error,
    /**
     * The Extract model constructor.
     * @property {module:model/Extract}
     */
    Extract: Extract,
    /**
     * The Flower model constructor.
     * @property {module:model/Flower}
     */
    Flower: Flower,
    /**
     * The InlineResponse200 model constructor.
     * @property {module:model/InlineResponse200}
     */
    InlineResponse200: InlineResponse200,
    /**
     * The InlineResponse2001 model constructor.
     * @property {module:model/InlineResponse2001}
     */
    InlineResponse2001: InlineResponse2001,
    /**
     * The InlineResponse20010 model constructor.
     * @property {module:model/InlineResponse20010}
     */
    InlineResponse20010: InlineResponse20010,
    /**
     * The InlineResponse20011 model constructor.
     * @property {module:model/InlineResponse20011}
     */
    InlineResponse20011: InlineResponse20011,
    /**
     * The InlineResponse2002 model constructor.
     * @property {module:model/InlineResponse2002}
     */
    InlineResponse2002: InlineResponse2002,
    /**
     * The InlineResponse2003 model constructor.
     * @property {module:model/InlineResponse2003}
     */
    InlineResponse2003: InlineResponse2003,
    /**
     * The InlineResponse2004 model constructor.
     * @property {module:model/InlineResponse2004}
     */
    InlineResponse2004: InlineResponse2004,
    /**
     * The InlineResponse2005 model constructor.
     * @property {module:model/InlineResponse2005}
     */
    InlineResponse2005: InlineResponse2005,
    /**
     * The InlineResponse2006 model constructor.
     * @property {module:model/InlineResponse2006}
     */
    InlineResponse2006: InlineResponse2006,
    /**
     * The InlineResponse2007 model constructor.
     * @property {module:model/InlineResponse2007}
     */
    InlineResponse2007: InlineResponse2007,
    /**
     * The InlineResponse2008 model constructor.
     * @property {module:model/InlineResponse2008}
     */
    InlineResponse2008: InlineResponse2008,
    /**
     * The InlineResponse2009 model constructor.
     * @property {module:model/InlineResponse2009}
     */
    InlineResponse2009: InlineResponse2009,
    /**
     * The InlineResponse200Meta model constructor.
     * @property {module:model/InlineResponse200Meta}
     */
    InlineResponse200Meta: InlineResponse200Meta,
    /**
     * The Meta model constructor.
     * @property {module:model/Meta}
     */
    Meta: Meta,
    /**
     * The Pagination model constructor.
     * @property {module:model/Pagination}
     */
    Pagination: Pagination,
    /**
     * The Product model constructor.
     * @property {module:model/Product}
     */
    Product: Product,
    /**
     * The SeedCompany model constructor.
     * @property {module:model/SeedCompany}
     */
    SeedCompany: SeedCompany,
    /**
     * The Strain model constructor.
     * @property {module:model/Strain}
     */
    Strain: Strain,
    /**
     * The BrandsApi service constructor.
     * @property {module:api/BrandsApi}
     */
    BrandsApi: BrandsApi,
    /**
     * The EdiblesApi service constructor.
     * @property {module:api/EdiblesApi}
     */
    EdiblesApi: EdiblesApi,
    /**
     * The ExtractsApi service constructor.
     * @property {module:api/ExtractsApi}
     */
    ExtractsApi: ExtractsApi,
    /**
     * The FlowersApi service constructor.
     * @property {module:api/FlowersApi}
     */
    FlowersApi: FlowersApi,
    /**
     * The ProductsApi service constructor.
     * @property {module:api/ProductsApi}
     */
    ProductsApi: ProductsApi,
    /**
     * The SeedCompaniesApi service constructor.
     * @property {module:api/SeedCompaniesApi}
     */
    SeedCompaniesApi: SeedCompaniesApi,
    /**
     * The StrainsApi service constructor.
     * @property {module:api/StrainsApi}
     */
    StrainsApi: StrainsApi
  };

  return exports;
}));
