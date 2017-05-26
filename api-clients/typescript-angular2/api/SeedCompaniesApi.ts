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

import { Inject, Injectable, Optional }                      from '@angular/core';
import { Http, Headers, URLSearchParams }                    from '@angular/http';
import { RequestMethod, RequestOptions, RequestOptionsArgs } from '@angular/http';
import { Response, ResponseContentType }                     from '@angular/http';

import { Observable }                                        from 'rxjs/Observable';
import 'rxjs/add/operator/map';

import * as models                                           from '../model/models';
import { BASE_PATH, COLLECTION_FORMATS }                     from '../variables';
import { Configuration }                                     from '../configuration';

/* tslint:disable:no-unused-variable member-ordering */


@Injectable()
export class SeedCompaniesApi {
    protected basePath = 'https://api.otreeba.com/v1';
    public defaultHeaders: Headers = new Headers();
    public configuration: Configuration = new Configuration();

    constructor(protected http: Http, @Optional()@Inject(BASE_PATH) basePath: string, @Optional() configuration: Configuration) {
        if (basePath) {
            this.basePath = basePath;
        }
        if (configuration) {
            this.configuration = configuration;
        }
    }

    /**
     * Get a list of all current seed companies.
     * Returns a paginated list of seed companies.
     * @param page Page to be returned.
     * @param count The number of items to return. Default 10. Max 50.
     * @param sort How to sort the items.
     */
    public getSeedCompanies(page?: number, count?: number, sort?: string, extraHttpRequestParams?: any): Observable<models.InlineResponse2001> {
        return this.getSeedCompaniesWithHttpInfo(page, count, sort, extraHttpRequestParams)
            .map((response: Response) => {
                if (response.status === 204) {
                    return undefined;
                } else {
                    return response.json();
                }
            });
    }

    /**
     * Find seed company by Open Cannabis Product Code (OCPC).
     * Returns a single seed company.
     * @param ocpc OCPC of the seed company to return.
     */
    public getSeedCompanyByOcpc(ocpc: string, extraHttpRequestParams?: any): Observable<models.SeedCompany> {
        return this.getSeedCompanyByOcpcWithHttpInfo(ocpc, extraHttpRequestParams)
            .map((response: Response) => {
                if (response.status === 204) {
                    return undefined;
                } else {
                    return response.json();
                }
            });
    }

    /**
     * Find strains for a seed company by Open Cannabis Product Code (OCPC).
     * Returns a paginated list of strains for a single seed company.
     * @param ocpc OCPC of the seed company to return strains for.
     * @param page Page to be returned.
     * @param count The number of items to return. Default 10. Max 50.
     */
    public getSeedCompanyStrainsByOcpc(ocpc: string, page?: number, count?: number, extraHttpRequestParams?: any): Observable<models.InlineResponse200> {
        return this.getSeedCompanyStrainsByOcpcWithHttpInfo(ocpc, page, count, extraHttpRequestParams)
            .map((response: Response) => {
                if (response.status === 204) {
                    return undefined;
                } else {
                    return response.json();
                }
            });
    }


    /**
     * Get a list of all current seed companies.
     * Returns a paginated list of seed companies.
     * @param page Page to be returned.
     * @param count The number of items to return. Default 10. Max 50.
     * @param sort How to sort the items.
     */
    public getSeedCompaniesWithHttpInfo(page?: number, count?: number, sort?: string, extraHttpRequestParams?: any): Observable<Response> {
        const path = this.basePath + `/seed-companies`;

        let queryParameters = new URLSearchParams();
        let headers = new Headers(this.defaultHeaders.toJSON()); // https://github.com/angular/angular/issues/6845
        if (page !== undefined) {
            if(page instanceof Date) {
                queryParameters.set('page', <any>page.d.toISOString());
            } else {
                queryParameters.set('page', <any>page);
            }
        }

        if (count !== undefined) {
            if(count instanceof Date) {
                queryParameters.set('count', <any>count.d.toISOString());
            } else {
                queryParameters.set('count', <any>count);
            }
        }

        if (sort !== undefined) {
            if(sort instanceof Date) {
                queryParameters.set('sort', <any>sort.d.toISOString());
            } else {
                queryParameters.set('sort', <any>sort);
            }
        }

        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        let requestOptions: RequestOptionsArgs = new RequestOptions({
            method: RequestMethod.Get,
            headers: headers,
            search: queryParameters
        });

        // https://github.com/swagger-api/swagger-codegen/issues/4037
        if (extraHttpRequestParams) {
            requestOptions = (<any>Object).assign(requestOptions, extraHttpRequestParams);
        }

        return this.http.request(path, requestOptions);
    }

    /**
     * Find seed company by Open Cannabis Product Code (OCPC).
     * Returns a single seed company.
     * @param ocpc OCPC of the seed company to return.
     */
    public getSeedCompanyByOcpcWithHttpInfo(ocpc: string, extraHttpRequestParams?: any): Observable<Response> {
        const path = this.basePath + `/seed-companies/${ocpc}`;

        let queryParameters = new URLSearchParams();
        let headers = new Headers(this.defaultHeaders.toJSON()); // https://github.com/angular/angular/issues/6845
        // verify required parameter 'ocpc' is not null or undefined
        if (ocpc === null || ocpc === undefined) {
            throw new Error('Required parameter ocpc was null or undefined when calling getSeedCompanyByOcpc.');
        }
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        let requestOptions: RequestOptionsArgs = new RequestOptions({
            method: RequestMethod.Get,
            headers: headers,
            search: queryParameters
        });

        // https://github.com/swagger-api/swagger-codegen/issues/4037
        if (extraHttpRequestParams) {
            requestOptions = (<any>Object).assign(requestOptions, extraHttpRequestParams);
        }

        return this.http.request(path, requestOptions);
    }

    /**
     * Find strains for a seed company by Open Cannabis Product Code (OCPC).
     * Returns a paginated list of strains for a single seed company.
     * @param ocpc OCPC of the seed company to return strains for.
     * @param page Page to be returned.
     * @param count The number of items to return. Default 10. Max 50.
     */
    public getSeedCompanyStrainsByOcpcWithHttpInfo(ocpc: string, page?: number, count?: number, extraHttpRequestParams?: any): Observable<Response> {
        const path = this.basePath + `/seed-companies/${ocpc}/strains`;

        let queryParameters = new URLSearchParams();
        let headers = new Headers(this.defaultHeaders.toJSON()); // https://github.com/angular/angular/issues/6845
        // verify required parameter 'ocpc' is not null or undefined
        if (ocpc === null || ocpc === undefined) {
            throw new Error('Required parameter ocpc was null or undefined when calling getSeedCompanyStrainsByOcpc.');
        }
        if (page !== undefined) {
            if(page instanceof Date) {
                queryParameters.set('page', <any>page.d.toISOString());
            } else {
                queryParameters.set('page', <any>page);
            }
        }

        if (count !== undefined) {
            if(count instanceof Date) {
                queryParameters.set('count', <any>count.d.toISOString());
            } else {
                queryParameters.set('count', <any>count);
            }
        }

        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        let requestOptions: RequestOptionsArgs = new RequestOptions({
            method: RequestMethod.Get,
            headers: headers,
            search: queryParameters
        });

        // https://github.com/swagger-api/swagger-codegen/issues/4037
        if (extraHttpRequestParams) {
            requestOptions = (<any>Object).assign(requestOptions, extraHttpRequestParams);
        }

        return this.http.request(path, requestOptions);
    }

}
