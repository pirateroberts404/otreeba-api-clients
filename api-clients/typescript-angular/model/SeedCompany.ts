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

import * as models from './models';

export interface SeedCompany {
    /**
     * Name of the seed company.
     */
    "name": string;
    /**
     * Open Cannabis Product Code for the seed company.
     */
    "ocpc"?: string;
    /**
     * URL for QR that leads to page on Cannabis Reports.
     */
    "qr"?: string;
    /**
     * URL for seed company on Cannabis Reports.
     */
    "url"?: string;
    /**
     * URL for logo for seed company.
     */
    "image"?: string;
    /**
     * Object of countries that this seed company has lineages from. {'Country Name' => 'ISO 3166-1 Two Letter Country Code'}
     */
    "lineage"?: any;
    /**
     * OCPCs of the strains from this seed company.
     */
    "strains"?: Array<string>;
    /**
     * Date and time record was created, UTC.
     */
    "createdAt"?: Date;
    /**
     * Date and time record was updated, UTC.
     */
    "updatedAt"?: Date;
}

