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

type Extract struct {

	// Name of the extract.
	Name string `json:"name"`

	// Open Cannabis Product Code for the extract.
	Ocpc string `json:"ocpc,omitempty"`

	// Name and Open Cannabis Product Code of the brand that created these extract.
	Brand interface{} `json:"brand,omitempty"`

	// Type of extract.
	Type_ string `json:"type,omitempty"`

	// Name and Open Cannabis Product Code of the strain for these extract.
	Strain interface{} `json:"strain,omitempty"`

	// Description of the extract.
	Description string `json:"description,omitempty"`

	// URL for QR that leads to page on Cannabis Reports.
	Qr string `json:"qr,omitempty"`

	// URL for the extract on Cannabis Reports.
	Url string `json:"url,omitempty"`

	// URL for the main photo of the extract.
	Image string `json:"image,omitempty"`

	// URL for the PDF containing lab testing information for these extract.
	LabTest string `json:"labTest,omitempty"`

	// THC measurement for these extract.
	Thc string `json:"thc,omitempty"`

	// CBD measurement for these extract.
	Cbd string `json:"cbd,omitempty"`

	// Date and time record was created, UTC.
	CreatedAt time.Time `json:"createdAt,omitempty"`

	// Date and time record was updated, UTC.
	UpdatedAt time.Time `json:"updatedAt,omitempty"`
}
