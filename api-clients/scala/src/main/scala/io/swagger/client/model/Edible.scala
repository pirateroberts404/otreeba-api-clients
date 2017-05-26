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

import org.joda.time.DateTime

case class Edible (
  /* Name of the edible. */
  name: String,
  /* Open Cannabis Product Code for the edible. */
  ocpc: String,
  /* Name and Open Cannabis Product Code of the brand that created this edible. */
  brand: Any,
  /* Type of edible. */
  _type: String,
  /* Name and Open Cannabis Product Code of the strain for this edible. */
  strain: Any,
  /* Description of the edible. */
  description: String,
  /* URL for QR that leads to page on Cannabis Reports. */
  qr: String,
  /* URL for the edible on Cannabis Reports. */
  url: String,
  /* URL for the main photo of the edible. */
  image: String,
  /* URL for the PDF containing lab testing information for this edible. */
  labTest: String,
  /* THC measurement for this edible. */
  thc: String,
  /* CBD measurement for this edible. */
  cbd: String,
  /* Cannabis measurement for this edible. */
  cannabis: String,
  /* Hash oil measurement for this edible. */
  hashOil: String,
  /* Date and time record was created, UTC. */
  createdAt: DateTime,
  /* Date and time record was updated, UTC. */
  updatedAt: DateTime
)
