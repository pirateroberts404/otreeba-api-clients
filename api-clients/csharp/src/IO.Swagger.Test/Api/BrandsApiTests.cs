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
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using IO.Swagger.Client;
using IO.Swagger.Api;
using IO.Swagger.Model;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing BrandsApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class BrandsApiTests
    {
        private BrandsApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new BrandsApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of BrandsApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' BrandsApi
            //Assert.IsInstanceOfType(typeof(BrandsApi), instance, "instance is a BrandsApi");
        }

        
        /// <summary>
        /// Test GetBrandByOcpc
        /// </summary>
        [Test]
        public void GetBrandByOcpcTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string ocpc = null;
            //var response = instance.GetBrandByOcpc(ocpc);
            //Assert.IsInstanceOf<Brand> (response, "response is Brand");
        }
        
        /// <summary>
        /// Test GetBrandEdibles
        /// </summary>
        [Test]
        public void GetBrandEdiblesTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string ocpc = null;
            //int? page = null;
            //int? count = null;
            //string sort = null;
            //var response = instance.GetBrandEdibles(ocpc, page, count, sort);
            //Assert.IsInstanceOf<InlineResponse2008> (response, "response is InlineResponse2008");
        }
        
        /// <summary>
        /// Test GetBrandExtracts
        /// </summary>
        [Test]
        public void GetBrandExtractsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string ocpc = null;
            //int? page = null;
            //int? count = null;
            //string sort = null;
            //var response = instance.GetBrandExtracts(ocpc, page, count, sort);
            //Assert.IsInstanceOf<InlineResponse2007> (response, "response is InlineResponse2007");
        }
        
        /// <summary>
        /// Test GetBrandFlowers
        /// </summary>
        [Test]
        public void GetBrandFlowersTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string ocpc = null;
            //int? page = null;
            //int? count = null;
            //string sort = null;
            //var response = instance.GetBrandFlowers(ocpc, page, count, sort);
            //Assert.IsInstanceOf<InlineResponse2006> (response, "response is InlineResponse2006");
        }
        
        /// <summary>
        /// Test GetBrandProducts
        /// </summary>
        [Test]
        public void GetBrandProductsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string ocpc = null;
            //int? page = null;
            //int? count = null;
            //string sort = null;
            //var response = instance.GetBrandProducts(ocpc, page, count, sort);
            //Assert.IsInstanceOf<InlineResponse2009> (response, "response is InlineResponse2009");
        }
        
        /// <summary>
        /// Test GetBrands
        /// </summary>
        [Test]
        public void GetBrandsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int? page = null;
            //int? count = null;
            //string sort = null;
            //var response = instance.GetBrands(page, count, sort);
            //Assert.IsInstanceOf<InlineResponse2005> (response, "response is InlineResponse2005");
        }
        
    }

}
