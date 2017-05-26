//
// Brand.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class Brand: JSONEncodable {
    /** Name of the brand. */
    public var name: String?
    /** Open Cannabis Product Code for the brand. */
    public var ocpc: String?
    /** URL for brand on Otreeba. */
    public var link: String?
    /** URL for QR that leads to page on Cannabis Reports. */
    public var qr: String?
    /** URL for brand on Cannabis Reports. */
    public var url: String?
    /** URL for logo for brand. */
    public var image: String?
    /** OCPCs of the flowers from this brand. */
    public var flowers: [String]?
    /** OCPCs of the extracts from this brand. */
    public var extracts: [String]?
    /** OCPCs of the edibles from this brand. */
    public var edibles: [String]?
    /** OCPCs of the products from this brand. */
    public var products: [String]?
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
        nillableDictionary["link"] = self.link
        nillableDictionary["qr"] = self.qr
        nillableDictionary["url"] = self.url
        nillableDictionary["image"] = self.image
        nillableDictionary["flowers"] = self.flowers?.encodeToJSON()
        nillableDictionary["extracts"] = self.extracts?.encodeToJSON()
        nillableDictionary["edibles"] = self.edibles?.encodeToJSON()
        nillableDictionary["products"] = self.products?.encodeToJSON()
        nillableDictionary["createdAt"] = self.createdAt?.encodeToJSON()
        nillableDictionary["updatedAt"] = self.updatedAt?.encodeToJSON()
        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
