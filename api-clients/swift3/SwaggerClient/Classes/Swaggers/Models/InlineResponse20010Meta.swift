//
// InlineResponse20010Meta.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


/** Gets the current list of Products. */
open class InlineResponse20010Meta: JSONEncodable {
    /** Gets the current list of Products. */
    public var pagination: Pagination?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["pagination"] = self.pagination?.encodeToJSON()
        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
