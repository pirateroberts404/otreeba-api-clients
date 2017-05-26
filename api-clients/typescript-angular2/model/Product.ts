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

export interface Product {
    /**
     * Name of the product.
     */
    name: string;

    /**
     * Open Cannabis Product Code for the product.
     */
    ocpc?: string;

    /**
     * Name and Open Cannabis Product Code of the brand that created this product.
     */
    brand?: any;

    /**
     * Type of product.
     */
    type?: string;

    /**
     * Name and Open Cannabis Product Code of the strain for this product.
     */
    strain?: any;

    /**
     * Description of the product.
     */
    description?: string;

    /**
     * URL for QR that leads to page on Cannabis Reports.
     */
    qr?: string;

    /**
     * URL for the product on Cannabis Reports.
     */
    url?: string;

    /**
     * URL for the main photo of the product.
     */
    image?: string;

    /**
     * URL for the PDF containing lab testing information for this product.
     */
    labTest?: string;

    /**
     * THC measurement for this product.
     */
    thc?: string;

    /**
     * CBD measurement for this product.
     */
    cbd?: string;

    /**
     * Cannabis measurement for this product.
     */
    cannabis?: string;

    /**
     * Hash oil measurement for this product.
     */
    hashOil?: string;

    /**
     * Date and time record was created, UTC.
     */
    createdAt?: Date;

    /**
     * Date and time record was updated, UTC.
     */
    updatedAt?: Date;

}
