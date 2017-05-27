//
// ExtractsAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class ExtractsAPI: APIBase {
    /**
     Find extract by Open Cannabis Product Code (OCPC).
     
     - parameter ocpc: (path) OCPC of the extract to return. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getExtractByOcpc(ocpc ocpc: String, completion: ((data: Extract?, error: ErrorType?) -> Void)) {
        getExtractByOcpcWithRequestBuilder(ocpc: ocpc).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Find extract by Open Cannabis Product Code (OCPC).
     - GET /extracts/{ocpc}
     - Returns a single extract.
     - examples: [{contentType=application/json, example={
  "strain" : {
    "name" : "Confidential Cheese",
    "ocpc" : "TTUYNUF3TP000000000000000"
  },
  "qr" : "https://www.cannabisreports.com/extract-reports/qr-code/kaizen-medicinal/dna-genetics/confidential-cheese/wax.png",
  "image" : "https://www.cannabisreports.com/images/extracts/2/full_2172a2e37b3711da4666899be1dddc1157d60190.jpg",
  "cbd" : "0.22%",
  "description" : "aeiou",
  "type" : "wax",
  "labTest" : "https://www.cannabisreports.com/lab-tests/c/cc7b037528c7661dafde2a1e36f3c6d3ffcccb40.pdf",
  "url" : "https://www.cannabisreports.com/extract-reports/kaizen-medicinal/dna-genetics/confidential-cheese/wax",
  "thc" : "87.92%",
  "createdAt" : "2014-04-09 09:29:57",
  "ocpc" : "TTUYNUF3TP6DZTPWPG3200000",
  "name" : "Confidential Cheese - Wax",
  "brand" : {
    "name" : "Kaizen Medicinal",
    "ocpc" : "00000000006DZTP0000000000"
  },
  "updatedAt" : "2014-04-09 09:29:57"
}}]
     
     - parameter ocpc: (path) OCPC of the extract to return. 

     - returns: RequestBuilder<Extract> 
     */
    public class func getExtractByOcpcWithRequestBuilder(ocpc ocpc: String) -> RequestBuilder<Extract> {
        var path = "/extracts/{ocpc}"
        path = path.stringByReplacingOccurrencesOfString("{ocpc}", withString: "\(ocpc)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Extract>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**
     * enum for parameter sort
     */
    public enum Sort_getExtracts: String { 
        case Createdat = "-createdAt"
        case Createdat = "createdAt"
        case Updatedat = "-updatedAt"
        case Updatedat = "updatedAt"
        case Name = "-name"
        case Name = "name"
    }

    /**
     Get a list of all current extracts.
     
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getExtracts(page page: Int32? = nil, count: Int32? = nil, sort: Sort_getExtracts? = nil, completion: ((data: InlineResponse2003?, error: ErrorType?) -> Void)) {
        getExtractsWithRequestBuilder(page: page, count: count, sort: sort).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Get a list of all current extracts.
     - GET /extracts
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
     
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)

     - returns: RequestBuilder<InlineResponse2003> 
     */
    public class func getExtractsWithRequestBuilder(page page: Int32? = nil, count: Int32? = nil, sort: Sort_getExtracts? = nil) -> RequestBuilder<InlineResponse2003> {
        let path = "/extracts"
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "page": page?.encodeToJSON(),
            "count": count?.encodeToJSON(),
            "sort": sort?.rawValue
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<InlineResponse2003>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

}
