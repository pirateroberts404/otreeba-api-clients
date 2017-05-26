//
// InlineResponse2005Meta.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


/** Gets the current list of Brands. */
public class InlineResponse2005Meta: JSONEncodable {
    /** Gets the current list of Brands. */
    public var pagination: Pagination?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["pagination"] = self.pagination?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
