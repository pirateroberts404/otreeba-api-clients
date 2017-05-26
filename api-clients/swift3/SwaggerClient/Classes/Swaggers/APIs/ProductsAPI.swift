//
// ProductsAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



open class ProductsAPI: APIBase {
    /**
     Find product by Open Cannabis Product Code (OCPC).
     
     - parameter ocpc: (path) OCPC of the product to return. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getProductByOcpc(ocpc: String, completion: @escaping ((_ data: Product?,_ error: Error?) -> Void)) {
        getProductByOcpcWithRequestBuilder(ocpc: ocpc).execute { (response, error) -> Void in
            completion(response?.body, error);
        }
    }


    /**
     Find product by Open Cannabis Product Code (OCPC).
     - GET /products/{ocpc}
     - Returns a single product.
     - examples: [{contentType=application/json, example={
  "strain" : {
    "name" : "Confidential Cheese",
    "ocpc" : "TTUYNUF3TP000000000000000"
  },
  "qr" : "https://www.cannabisreports.com/product-reports/qr-code/elixinol/x-pen.png",
  "image" : "https://www.cannabisreports.com/images/products/f/full_f592eb462df530c23a98d0fb6330fc895c8cfe18.jpg",
  "cbd" : "1,000mg",
  "cannabis" : "",
  "description" : "aeiou",
  "type" : "Oil Applicator",
  "labTest" : "https://www.cannabisreports.com/lab-tests/1/140c73d2606fded84e6a14ca07aed77eb1e73827.pdf",
  "url" : "https://www.cannabisreports.com/product-reports/elixinol/x-pen",
  "thc" : "0mg",
  "createdAt" : "2014-04-09 09:29:57",
  "ocpc" : "0000000000YPLU3Z2YUM00000",
  "hashOil" : "",
  "name" : "X-Pen",
  "brand" : {
    "name" : "Elixinol",
    "ocpc" : "0000000000YPLU30000000000"
  },
  "updatedAt" : "2014-04-09 09:29:57"
}}]
     
     - parameter ocpc: (path) OCPC of the product to return. 

     - returns: RequestBuilder<Product> 
     */
    open class func getProductByOcpcWithRequestBuilder(ocpc: String) -> RequestBuilder<Product> {
        var path = "/products/{ocpc}"
        path = path.replacingOccurrences(of: "{ocpc}", with: "\(ocpc)", options: .literal, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters: [String:Any]? = nil

        let url = NSURLComponents(string: URLString)


        let requestBuilder: RequestBuilder<Product>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**
     * enum for parameter sort
     */
    public enum Sort_getProducts: String { 
        case createdat = "-createdAt"
        case createdat = "createdAt"
        case updatedat = "-updatedAt"
        case updatedat = "updatedAt"
        case name = "-name"
        case name = "name"
    }

    /**
     Get a list of all current products.
     
     - parameter page: (query) Page to be returned. (optional)
     - parameter count: (query) The number of items to return. Default 10. Max 50. (optional, default to 10)
     - parameter sort: (query) How to sort the items. (optional, default to -createdAt)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getProducts(page: Int32? = nil, count: Int32? = nil, sort: Sort_getProducts? = nil, completion: @escaping ((_ data: InlineResponse20010?,_ error: Error?) -> Void)) {
        getProductsWithRequestBuilder(page: page, count: count, sort: sort).execute { (response, error) -> Void in
            completion(response?.body, error);
        }
    }


    /**
     Get a list of all current products.
     - GET /products
     - Returns a paginated list of products.
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

     - returns: RequestBuilder<InlineResponse20010> 
     */
    open class func getProductsWithRequestBuilder(page: Int32? = nil, count: Int32? = nil, sort: Sort_getProducts? = nil) -> RequestBuilder<InlineResponse20010> {
        let path = "/products"
        let URLString = SwaggerClientAPI.basePath + path
        let parameters: [String:Any]? = nil

        let url = NSURLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems(values:[
            "page": page?.encodeToJSON(), 
            "count": count?.encodeToJSON(), 
            "sort": sort?.rawValue
        ])
        

        let requestBuilder: RequestBuilder<InlineResponse20010>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

}