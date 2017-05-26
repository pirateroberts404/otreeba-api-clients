/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime

case class Flower (
  /* Name of the flowers. */
  name: String,
  /* Open Cannabis Product Code for the flowers. */
  ocpc: Option[String],
  /* Name and Open Cannabis Product Code of the brand that created these flowers. */
  brand: Option[Any],
  /* Type of flowers. */
  `type`: Option[String],
  /* Name and Open Cannabis Product Code of the strain for these flowers. */
  strain: Option[Any],
  /* Description of the flowers. */
  description: Option[String],
  /* URL for QR that leads to page on Cannabis Reports. */
  qr: Option[String],
  /* URL for the flowers on Cannabis Reports. */
  url: Option[String],
  /* URL for the main photo of the flowers. */
  image: Option[String],
  /* URL for the PDF containing lab testing information for these flowers. */
  labTest: Option[String],
  /* THC measurement for these flowers. */
  thc: Option[String],
  /* CBD measurement for these flowers. */
  cbd: Option[String],
  /* Date and time record was created, UTC. */
  createdAt: Option[DateTime],
  /* Date and time record was updated, UTC. */
  updatedAt: Option[DateTime]
) extends ApiModel


