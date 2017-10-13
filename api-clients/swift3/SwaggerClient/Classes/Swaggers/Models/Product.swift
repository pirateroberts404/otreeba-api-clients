//
// Product.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class Product: JSONEncodable {

    /** Name of the product. */
    public var name: String?
    /** Open Cannabis Product Code for the product. */
    public var ocpc: String?
    /** Name and Open Cannabis Product Code of the brand that created this product. */
    public var brand: Any?
    /** Type of product. */
    public var type: String?
    /** Name and Open Cannabis Product Code of the strain for this product. */
    public var strain: Any?
    /** Description of the product. */
    public var description: String?
    /** URL for QR that leads to page on Cannabis Reports. */
    public var qr: String?
    /** URL for the product on Cannabis Reports. */
    public var url: String?
    /** URL for the main photo of the product. */
    public var image: String?
    /** URL for the PDF containing lab testing information for this product. */
    public var labTest: String?
    /** THC measurement for this product. */
    public var thc: String?
    /** CBD measurement for this product. */
    public var cbd: String?
    /** Cannabis measurement for this product. */
    public var cannabis: String?
    /** Hash oil measurement for this product. */
    public var hashOil: String?
    /** Date and time record was created, UTC. */
    public var createdAt: Date?
    /** Date and time record was updated, UTC. */
    public var updatedAt: Date?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name
        nillableDictionary["ocpc"] = self.ocpc
        nillableDictionary["brand"] = self.brand
        nillableDictionary["type"] = self.type
        nillableDictionary["strain"] = self.strain
        nillableDictionary["description"] = self.description
        nillableDictionary["qr"] = self.qr
        nillableDictionary["url"] = self.url
        nillableDictionary["image"] = self.image
        nillableDictionary["labTest"] = self.labTest
        nillableDictionary["thc"] = self.thc
        nillableDictionary["cbd"] = self.cbd
        nillableDictionary["cannabis"] = self.cannabis
        nillableDictionary["hashOil"] = self.hashOil
        nillableDictionary["createdAt"] = self.createdAt?.encodeToJSON()
        nillableDictionary["updatedAt"] = self.updatedAt?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
