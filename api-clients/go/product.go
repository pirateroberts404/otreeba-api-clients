/* 
 * Otreeba Open Cannabis API
 *
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 *
 * OpenAPI spec version: 1.0.0
 * Contact: api@otreeba.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

package swagger

import (
	"time"
)

type Product struct {

	// Name of the product.
	Name string `json:"name"`

	// Open Cannabis Product Code for the product.
	Ocpc string `json:"ocpc,omitempty"`

	// Name and Open Cannabis Product Code of the brand that created this product.
	Brand interface{} `json:"brand,omitempty"`

	// Type of product.
	Type_ string `json:"type,omitempty"`

	// Name and Open Cannabis Product Code of the strain for this product.
	Strain interface{} `json:"strain,omitempty"`

	// Description of the product.
	Description string `json:"description,omitempty"`

	// URL for QR that leads to page on Cannabis Reports.
	Qr string `json:"qr,omitempty"`

	// URL for the product on Cannabis Reports.
	Url string `json:"url,omitempty"`

	// URL for the main photo of the product.
	Image string `json:"image,omitempty"`

	// URL for the PDF containing lab testing information for this product.
	LabTest string `json:"labTest,omitempty"`

	// THC measurement for this product.
	Thc string `json:"thc,omitempty"`

	// CBD measurement for this product.
	Cbd string `json:"cbd,omitempty"`

	// Cannabis measurement for this product.
	Cannabis string `json:"cannabis,omitempty"`

	// Hash oil measurement for this product.
	HashOil string `json:"hashOil,omitempty"`

	// Date and time record was created, UTC.
	CreatedAt time.Time `json:"createdAt,omitempty"`

	// Date and time record was updated, UTC.
	UpdatedAt time.Time `json:"updatedAt,omitempty"`
}