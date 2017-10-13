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

package io.swagger.client.model


case class Pagination (
  /* Total number of results available. */
  total: Option[Integer],
  /* Number of results to return. Default 10. Max 50. */
  count: Option[Integer],
  /* Number of results per page. */
  perPage: Option[Integer],
  /* Page of results. */
  currentPage: Option[Integer],
  /* Total number of pages of results. */
  totalPages: Option[Integer],
  /* Links to the previous and/or next pages of results. */
  links: Option[Any]
)

