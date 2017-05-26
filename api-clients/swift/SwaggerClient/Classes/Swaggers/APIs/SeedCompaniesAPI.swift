//
// SeedCompaniesAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class SeedCompaniesAPI: APIBase {
    /**
     * enum for parameter sort
     */
    public enum Sort_getSeedCompanies: String { 
        case Createdat = "-createdAt"
        case Createdat = "createdAt"
        case Updatedat = "-updatedAt"
        case Updatedat = "updatedAt"
        case Name = "-name"
        case Name = "name"
    }

    /**
     Get a list of all current seed companies.
     
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getSeedCompanies(page page: Int32? = nil, count: Int32? = nil, sort: Sort_getSeedCompanies? = nil, completion: ((data: InlineResponse2001?, error: ErrorType?) -> Void)) {
        getSeedCompaniesWithRequestBuilder(page: page, count: count, sort: sort).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Get a list of all current seed companies.
     - GET /seed-companies
     - Returns a paginated list of seed companies.
     - examples: [{contentType=application/json, example={
  "meta" : {
    "pagination" : {
      "per_page" : 10,
      "total" : 64,
      "count" : 10,
      "links" : {
        "previous" : "https://api.otreeba.com/v1/seed-companies/VUJCJ00000000000000000000/strains?page=1",
        "next" : "https://api.otreeba.com/v1/seed-companies/VUJCJ00000000000000000000/strains?page=3"
      },
      "total_pages" : 1,
      "current_page" : 1
    }
  }
}}]
     
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)

     - returns: RequestBuilder<InlineResponse2001> 
     */
    public class func getSeedCompaniesWithRequestBuilder(page page: Int32? = nil, count: Int32? = nil, sort: Sort_getSeedCompanies? = nil) -> RequestBuilder<InlineResponse2001> {
        let path = "/seed-companies"
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "page": page?.encodeToJSON(),
            "count": count?.encodeToJSON(),
            "sort": sort?.rawValue
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<InlineResponse2001>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**
     Find seed company by Open Cannabis Product Code (OCPC).
     
     - parameter ocpc: (path) OCPC of the seed company to return. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getSeedCompanyByOcpc(ocpc ocpc: String, completion: ((data: SeedCompany?, error: ErrorType?) -> Void)) {
        getSeedCompanyByOcpcWithRequestBuilder(ocpc: ocpc).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Find seed company by Open Cannabis Product Code (OCPC).
     - GET /seed-companies/{ocpc}
     - Returns a single seed company.
     - examples: [{contentType=application/json, example={
  "lineage" : {
    "Afghanistan" : "AF",
    "Canada" : "CA",
    "Colombia" : "CO",
    "Hungary" : "HU",
    "India" : "IN"
  },
  "qr" : "https://www.cannabisreports.com/strain-reports/sensi-seeds/qr-code.svg",
  "image" : "https://www.cannabisreports.com/images/profile/1/full_15fda07a135540c1de6afbb38dafe2113a11a7a4.jpg",
  "createdAt" : "2014-04-09 09:29:57",
  "ocpc" : "VUJCJ00000000000000000000",
  "name" : "Sensi Seeds",
  "strains" : [ "aeiou" ],
  "url" : "https://www.cannabisreports.com/strain-reports/sensi-seeds",
  "updatedAt" : "2014-04-09 09:29:57"
}}]
     
     - parameter ocpc: (path) OCPC of the seed company to return. 

     - returns: RequestBuilder<SeedCompany> 
     */
    public class func getSeedCompanyByOcpcWithRequestBuilder(ocpc ocpc: String) -> RequestBuilder<SeedCompany> {
        var path = "/seed-companies/{ocpc}"
        path = path.stringByReplacingOccurrencesOfString("{ocpc}", withString: "\(ocpc)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<SeedCompany>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**
     Find strains for a seed company by Open Cannabis Product Code (OCPC).
     
     - parameter ocpc: (path) OCPC of the seed company to return strains for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getSeedCompanyStrainsByOcpc(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil, completion: ((data: InlineResponse200?, error: ErrorType?) -> Void)) {
        getSeedCompanyStrainsByOcpcWithRequestBuilder(ocpc: ocpc, page: page, count: count).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Find strains for a seed company by Open Cannabis Product Code (OCPC).
     - GET /seed-companies/{ocpc}/strains
     - Returns a paginated list of strains for a single seed company.
     - examples: [{contentType=application/json, example={
  "meta" : {
    "pagination" : {
      "per_page" : 10,
      "total" : 64,
      "count" : 10,
      "links" : {
        "previous" : "https://api.otreeba.com/v1/seed-companies/VUJCJ00000000000000000000/strains?page=1",
        "next" : "https://api.otreeba.com/v1/seed-companies/VUJCJ00000000000000000000/strains?page=3"
      },
      "total_pages" : 1,
      "current_page" : 1
    }
  }
}}]
     
     - parameter ocpc: (path) OCPC of the seed company to return strains for. 
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)

     - returns: RequestBuilder<InlineResponse200> 
     */
    public class func getSeedCompanyStrainsByOcpcWithRequestBuilder(ocpc ocpc: String, page: Int32? = nil, count: Int32? = nil) -> RequestBuilder<InlineResponse200> {
        var path = "/seed-companies/{ocpc}/strains"
        path = path.stringByReplacingOccurrencesOfString("{ocpc}", withString: "\(ocpc)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "page": page?.encodeToJSON(),
            "count": count?.encodeToJSON()
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<InlineResponse200>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

}
