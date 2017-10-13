//
// Study.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class Study: JSONEncodable {

    /** Name of the study. */
    public var name: String?
    /** Year of the study. */
    public var year: Int32?
    /** Digital Object Identifier for the study. */
    public var doi: String?
    /** PubMed ID for the study. */
    public var pubMedId: String?
    /** Slug based on the study name. */
    public var slug: String?
    /** Key findings for the study. */
    public var keyFindings: String?
    public var conditions: [Condition]?
    /** Date and time record was created, UTC. */
    public var createdAt: Date?
    /** Date and time record was updated, UTC. */
    public var updatedAt: Date?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name
        nillableDictionary["year"] = self.year?.encodeToJSON()
        nillableDictionary["doi"] = self.doi
        nillableDictionary["pubMedId"] = self.pubMedId
        nillableDictionary["slug"] = self.slug
        nillableDictionary["keyFindings"] = self.keyFindings
        nillableDictionary["conditions"] = self.conditions?.encodeToJSON()
        nillableDictionary["createdAt"] = self.createdAt?.encodeToJSON()
        nillableDictionary["updatedAt"] = self.updatedAt?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
