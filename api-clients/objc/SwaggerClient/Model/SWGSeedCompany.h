#import <Foundation/Foundation.h>
#import "SWGObject.h"

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




@protocol SWGSeedCompany
@end

@interface SWGSeedCompany : SWGObject

/* Name of the seed company. 
 */
@property(nonatomic) NSString* name;
/* Open Cannabis Product Code for the seed company. [optional]
 */
@property(nonatomic) NSString* ocpc;
/* Description of the seed company. [optional]
 */
@property(nonatomic) NSString* _description;
/* URL for QR that leads to page on Cannabis Reports. [optional]
 */
@property(nonatomic) NSString* qr;
/* URL for seed company on Cannabis Reports. [optional]
 */
@property(nonatomic) NSString* url;
/* URL for logo for seed company. [optional]
 */
@property(nonatomic) NSString* image;
/* Object of countries that this seed company has lineages from. {'Country Name' => 'ISO 3166-1 Two Letter Country Code'} [optional]
 */
@property(nonatomic) NSObject* lineage;
/* OCPCs of the strains from this seed company. [optional]
 */
@property(nonatomic) NSArray<NSString*>* strains;
/* Date and time record was created, UTC. [optional]
 */
@property(nonatomic) NSDate* createdAt;
/* Date and time record was updated, UTC. [optional]
 */
@property(nonatomic) NSDate* updatedAt;

@end
