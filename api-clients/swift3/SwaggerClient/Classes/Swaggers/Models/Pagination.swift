//
// Pagination.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class Pagination: JSONEncodable {
    /** Total number of results available. */
    public var total: Int32?
    /** Number of results to return. Default 10. Max 50. */
    public var count: Int32?
    /** Number of results per page. */
    public var perPage: Int32?
    /** Page of results. */
    public var currentPage: Int32?
    /** Total number of pages of results. */
    public var totalPages: Int32?
    /** Links to the previous and/or next pages of results. */
    public var links: Any?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["total"] = self.total?.encodeToJSON()
        nillableDictionary["count"] = self.count?.encodeToJSON()
        nillableDictionary["per_page"] = self.perPage?.encodeToJSON()
        nillableDictionary["current_page"] = self.currentPage?.encodeToJSON()
        nillableDictionary["total_pages"] = self.totalPages?.encodeToJSON()
        nillableDictionary["links"] = self.links
        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
