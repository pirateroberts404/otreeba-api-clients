#import <Foundation/Foundation.h>
#import "SWGInlineResponse200.h"
#import "SWGInlineResponse2001.h"
#import "SWGSeedCompany.h"
#import "SWGApi.h"

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
*/



@interface SWGSeedCompaniesApi: NSObject <SWGApi>

extern NSString* kSWGSeedCompaniesApiErrorDomain;
extern NSInteger kSWGSeedCompaniesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get a list of all current seed companies.
/// Returns a paginated list of seed companies.
///
/// @param page Page to be returned. (optional)
/// @param count The number of items to return. Default 10. Max 50. (optional) (default to 10)
/// @param sort How to sort the items. (optional) (default to -createdAt)
/// 
///  code:200 message:"Successful operation.",
///  code:400 message:"Invalid OCPC supplied.",
///  code:401 message:"Unauthorized action.",
///  code:404 message:"Seed company not found."
///
/// @return SWGInlineResponse2001*
-(NSURLSessionTask*) getSeedCompaniesWithPage: (NSNumber*) page
    count: (NSNumber*) count
    sort: (NSString*) sort
    completionHandler: (void (^)(SWGInlineResponse2001* output, NSError* error)) handler;


/// Find seed company by Open Cannabis Product Code (OCPC).
/// Returns a single seed company.
///
/// @param ocpc OCPC of the seed company to return.
/// 
///  code:200 message:"Successful operation.",
///  code:400 message:"Invalid OCPC supplied.",
///  code:401 message:"Unauthorized action.",
///  code:404 message:"Seed company not found."
///
/// @return SWGSeedCompany*
-(NSURLSessionTask*) getSeedCompanyByOcpcWithOcpc: (NSString*) ocpc
    completionHandler: (void (^)(SWGSeedCompany* output, NSError* error)) handler;


/// Find strains for a seed company by Open Cannabis Product Code (OCPC).
/// Returns a paginated list of strains for a single seed company.
///
/// @param ocpc OCPC of the seed company to return strains for.
/// @param page Page to be returned. (optional)
/// @param count The number of items to return. Default 10. Max 50. (optional) (default to 10)
/// 
///  code:200 message:"Successful operation.",
///  code:400 message:"Invalid OCPC supplied.",
///  code:401 message:"Unauthorized action.",
///  code:404 message:"Seed company not found."
///
/// @return SWGInlineResponse200*
-(NSURLSessionTask*) getSeedCompanyStrainsByOcpcWithOcpc: (NSString*) ocpc
    page: (NSNumber*) page
    count: (NSNumber*) count
    completionHandler: (void (^)(SWGInlineResponse200* output, NSError* error)) handler;



@end
