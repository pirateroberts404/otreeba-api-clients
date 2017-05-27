//
// BrandsAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class BrandsAPI: APIBase {
    /**
     Find brand by Open Cannabis Product Code (OCPC).
     
     - parameter ocpc: (path) OCPC of the brand to return. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getBrandByOcpc(ocpc ocpc: String, completion: ((data: Brand?, error: ErrorType?) -> Void)) {
        getBrandByOcpcWithRequestBuilder(ocpc: ocpc).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Find brand by Open Cannabis Product Code (OCPC).
     - GET /brands/{ocpc}
     - Returns a single brand.
     - examples: [{contentType=application/json, example={
  "qr" : "https://www.cannabisreports.com/producer-reports/kiva/qr-code",
  "image" : "https://www.cannabisreports.com/images/profile/8/full_8b44ce75bfba676790018d8a1d275d4d736883a9.jpg",
  "createdAt" : "2014-04-09 09:29:57",
  "flowers" : [ "aeiou" ],
  "ocpc" : "0000000000L6M7E0000000000",
  "name" : "Kiva",
  "link" : "https://api.otreeba.com/v1/brands/0000000000L6M7E0000000000",
  "extracts" : [ "aeiou" ],
  "edibles" : [ "aeiou" ],
  "url" : "https://www.cannabisreports.com/producer-reports/kiva",
  "products" : [ "aeiou" ],
  "updatedAt" : "2014-04-09 09:29:57"
}}]
     
     - parameter ocpc: (path) OCPC of the brand to return. 

     - returns: RequestBuilder<Brand> 
     */
    public class func getBrandByOcpcWithRequestBuilder(ocpc ocpc: String) -> RequestBuilder<Brand> {
        var path = "/brands/{ocpc}"
        path = path.stringByReplacingOccurrencesOfString("{ocpc}", withString: "\(ocpc)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Brand>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**
     * enum for parameter sort
     */
    public enum Sort_getBrandEdibles: String { 
        case Createdat = "-createdAt"
        case Createdat = "createdAt"
        case Updatedat = "-updatedAt"
        case Updatedat = "updatedAt"
        case Name = "-name"
        case Name = "name"
    }

    /**
     Get a list of all current edibles for the given brand.
     
     - parameter ocpc: (path) OCPC of the brand to list edibles for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getBrandEdibles(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrandEdibles? = nil, completion: ((data: InlineResponse2008?, error: ErrorType?) -> Void)) {
        getBrandEdiblesWithRequestBuilder(ocpc: ocpc, page: page, count: count, sort: sort).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Get a list of all current edibles for the given brand.
     - GET /brands/{ocpc}/edibles
     - Returns a paginated list of edibles.
     - examples: [{contentType=application/json, example={
  "meta" : {
    "pagination" : {
      "total" : 592,
      "count" : 10,
      "per_page" : 10,
      "current_page" : 1,
      "total_pages" : 60,
      "links" : {
        "next" : "https://api.otreeba.com/v1/seed-companies?sort=-createdAt&count=10&page=2"
      }
    }
  }
}}]
     
     - parameter ocpc: (path) OCPC of the brand to list edibles for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)

     - returns: RequestBuilder<InlineResponse2008> 
     */
    public class func getBrandEdiblesWithRequestBuilder(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrandEdibles? = nil) -> RequestBuilder<InlineResponse2008> {
        var path = "/brands/{ocpc}/edibles"
        path = path.stringByReplacingOccurrencesOfString("{ocpc}", withString: "\(ocpc)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "page": page?.encodeToJSON(),
            "count": count?.encodeToJSON(),
            "sort": sort?.rawValue
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<InlineResponse2008>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**
     * enum for parameter sort
     */
    public enum Sort_getBrandExtracts: String { 
        case Createdat = "-createdAt"
        case Createdat = "createdAt"
        case Updatedat = "-updatedAt"
        case Updatedat = "updatedAt"
        case Name = "-name"
        case Name = "name"
    }

    /**
     Get a list of all current extracts for the given brand.
     
     - parameter ocpc: (path) OCPC of the brand to list extracts for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getBrandExtracts(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrandExtracts? = nil, completion: ((data: InlineResponse2007?, error: ErrorType?) -> Void)) {
        getBrandExtractsWithRequestBuilder(ocpc: ocpc, page: page, count: count, sort: sort).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Get a list of all current extracts for the given brand.
     - GET /brands/{ocpc}/extracts
     - Returns a paginated list of extracts.
     - examples: [{contentType=application/json, example={
  "meta" : {
    "pagination" : {
      "total" : 592,
      "count" : 10,
      "per_page" : 10,
      "current_page" : 1,
      "total_pages" : 60,
      "links" : {
        "next" : "https://api.otreeba.com/v1/seed-companies?sort=-createdAt&count=10&page=2"
      }
    }
  }
}}]
     
     - parameter ocpc: (path) OCPC of the brand to list extracts for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)

     - returns: RequestBuilder<InlineResponse2007> 
     */
    public class func getBrandExtractsWithRequestBuilder(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrandExtracts? = nil) -> RequestBuilder<InlineResponse2007> {
        var path = "/brands/{ocpc}/extracts"
        path = path.stringByReplacingOccurrencesOfString("{ocpc}", withString: "\(ocpc)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "page": page?.encodeToJSON(),
            "count": count?.encodeToJSON(),
            "sort": sort?.rawValue
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<InlineResponse2007>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**
     * enum for parameter sort
     */
    public enum Sort_getBrandFlowers: String { 
        case Createdat = "-createdAt"
        case Createdat = "createdAt"
        case Updatedat = "-updatedAt"
        case Updatedat = "updatedAt"
        case Name = "-name"
        case Name = "name"
    }

    /**
     Get a list of all current flowers for the given brand.
     
     - parameter ocpc: (path) OCPC of the brand to list flowers for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getBrandFlowers(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrandFlowers? = nil, completion: ((data: InlineResponse2006?, error: ErrorType?) -> Void)) {
        getBrandFlowersWithRequestBuilder(ocpc: ocpc, page: page, count: count, sort: sort).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Get a list of all current flowers for the given brand.
     - GET /brands/{ocpc}/flowers
     - Returns a paginated list of flowers.
     - examples: [{contentType=application/json, example={
  "meta" : {
    "pagination" : {
      "total" : 592,
      "count" : 10,
      "per_page" : 10,
      "current_page" : 1,
      "total_pages" : 60,
      "links" : {
        "next" : "https://api.otreeba.com/v1/seed-companies?sort=-createdAt&count=10&page=2"
      }
    }
  }
}}]
     
     - parameter ocpc: (path) OCPC of the brand to list flowers for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)

     - returns: RequestBuilder<InlineResponse2006> 
     */
    public class func getBrandFlowersWithRequestBuilder(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrandFlowers? = nil) -> RequestBuilder<InlineResponse2006> {
        var path = "/brands/{ocpc}/flowers"
        path = path.stringByReplacingOccurrencesOfString("{ocpc}", withString: "\(ocpc)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "page": page?.encodeToJSON(),
            "count": count?.encodeToJSON(),
            "sort": sort?.rawValue
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<InlineResponse2006>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**
     * enum for parameter sort
     */
    public enum Sort_getBrandProducts: String { 
        case Createdat = "-createdAt"
        case Createdat = "createdAt"
        case Updatedat = "-updatedAt"
        case Updatedat = "updatedAt"
        case Name = "-name"
        case Name = "name"
    }

    /**
     Get a list of all current products for the given brand.
     
     - parameter ocpc: (path) OCPC of the brand to list products for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getBrandProducts(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrandProducts? = nil, completion: ((data: InlineResponse2009?, error: ErrorType?) -> Void)) {
        getBrandProductsWithRequestBuilder(ocpc: ocpc, page: page, count: count, sort: sort).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Get a list of all current products for the given brand.
     - GET /brands/{ocpc}/products
     - Returns a paginated list of products.
     - examples: [{contentType=application/json, example={
  "meta" : {
    "pagination" : {
      "total" : 592,
      "count" : 10,
      "per_page" : 10,
      "current_page" : 1,
      "total_pages" : 60,
      "links" : {
        "next" : "https://api.otreeba.com/v1/seed-companies?sort=-createdAt&count=10&page=2"
      }
    }
  }
}}]
     
     - parameter ocpc: (path) OCPC of the brand to list products for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)

     - returns: RequestBuilder<InlineResponse2009> 
     */
    public class func getBrandProductsWithRequestBuilder(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrandProducts? = nil) -> RequestBuilder<InlineResponse2009> {
        var path = "/brands/{ocpc}/products"
        path = path.stringByReplacingOccurrencesOfString("{ocpc}", withString: "\(ocpc)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "page": page?.encodeToJSON(),
            "count": count?.encodeToJSON(),
            "sort": sort?.rawValue
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<InlineResponse2009>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**
     * enum for parameter sort
     */
    public enum Sort_getBrands: String { 
        case Createdat = "-createdAt"
        case Createdat = "createdAt"
        case Updatedat = "-updatedAt"
        case Updatedat = "updatedAt"
        case Name = "-name"
        case Name = "name"
    }

    /**
     Get a list of all current brands.
     
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getBrands(page page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrands? = nil, completion: ((data: InlineResponse2005?, error: ErrorType?) -> Void)) {
        getBrandsWithRequestBuilder(page: page, count: count, sort: sort).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Get a list of all current brands.
     - GET /brands
     - Returns a paginated list of brands.
     - examples: [{contentType=application/json, example={
  "meta" : {
    "pagination" : {
      "total" : 592,
      "count" : 10,
      "per_page" : 10,
      "current_page" : 1,
      "total_pages" : 60,
      "links" : {
        "next" : "https://api.otreeba.com/v1/seed-companies?sort=-createdAt&count=10&page=2"
      }
    }
  }
}}]
     
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)

     - returns: RequestBuilder<InlineResponse2005> 
     */
    public class func getBrandsWithRequestBuilder(page page: Int32? = nil, count: Int32? = nil, sort: Sort_getBrands? = nil) -> RequestBuilder<InlineResponse2005> {
        let path = "/brands"
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "page": page?.encodeToJSON(),
            "count": count?.encodeToJSON(),
            "sort": sort?.rawValue
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<InlineResponse2005>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

}
