//
// SeedCompany.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class SeedCompany: JSONEncodable {
    /** Name of the seed company. */
    public var name: String?
    /** Open Cannabis Product Code for the seed company. */
    public var ocpc: String?
    /** Description of the seed company. */
    public var description: String?
    /** URL for QR that leads to page on Cannabis Reports. */
    public var qr: String?
    /** URL for seed company on Cannabis Reports. */
    public var url: String?
    /** URL for logo for seed company. */
    public var image: String?
    /** Object of countries that this seed company has lineages from. {&#39;Country Name&#39; &#x3D;&gt; &#39;ISO 3166-1 Two Letter Country Code&#39;} */
    public var lineage: AnyObject?
    /** OCPCs of the strains from this seed company. */
    public var strains: [String]?
    /** Date and time record was created, UTC. */
    public var createdAt: NSDate?
    /** Date and time record was updated, UTC. */
    public var updatedAt: NSDate?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["name"] = self.name
        nillableDictionary["ocpc"] = self.ocpc
        nillableDictionary["description"] = self.description
        nillableDictionary["qr"] = self.qr
        nillableDictionary["url"] = self.url
        nillableDictionary["image"] = self.image
        nillableDictionary["lineage"] = self.lineage
        nillableDictionary["strains"] = self.strains?.encodeToJSON()
        nillableDictionary["createdAt"] = self.createdAt?.encodeToJSON()
        nillableDictionary["updatedAt"] = self.updatedAt?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
