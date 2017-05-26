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

export interface Flower {
    /**
     * Name of the flowers.
     */
    name: string;

    /**
     * Open Cannabis Product Code for the flowers.
     */
    ocpc?: string;

    /**
     * Name and Open Cannabis Product Code of the brand that created these flowers.
     */
    brand?: any;

    /**
     * Type of flowers.
     */
    type?: string;

    /**
     * Name and Open Cannabis Product Code of the strain for these flowers.
     */
    strain?: any;

    /**
     * Description of the flowers.
     */
    description?: string;

    /**
     * URL for QR that leads to page on Cannabis Reports.
     */
    qr?: string;

    /**
     * URL for the flowers on Cannabis Reports.
     */
    url?: string;

    /**
     * URL for the main photo of the flowers.
     */
    image?: string;

    /**
     * URL for the PDF containing lab testing information for these flowers.
     */
    labTest?: string;

    /**
     * THC measurement for these flowers.
     */
    thc?: string;

    /**
     * CBD measurement for these flowers.
     */
    cbd?: string;

    /**
     * Date and time record was created, UTC.
     */
    createdAt?: Date;

    /**
     * Date and time record was updated, UTC.
     */
    updatedAt?: Date;

}
