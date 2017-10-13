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

import * as models from '../model/models';

/* tslint:disable:no-unused-variable member-ordering */

export class EdiblesApi {
    protected basePath = 'https://api.otreeba.com/v1';
    public defaultHeaders : any = {};

    static $inject: string[] = ['$http', '$httpParamSerializer', 'basePath'];

    constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
        if (basePath !== undefined) {
            this.basePath = basePath;
        }
    }

    /**
     * Returns a single edible.
     * @summary Find edible by Open Cannabis Product Code (OCPC).
     * @param ocpc OCPC of the edible to return.
     */
    public getEdibleByOcpc (ocpc: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.Edible> {
        const localVarPath = this.basePath + '/edibles/{ocpc}'
            .replace('{' + 'ocpc' + '}', String(ocpc));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'ocpc' is not null or undefined
        if (ocpc === null || ocpc === undefined) {
            throw new Error('Required parameter ocpc was null or undefined when calling getEdibleByOcpc.');
        }
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Returns a paginated list of edibles.
     * @summary Get a list of all current edibles.
     * @param page Page to be returned.
     * @param count The number of items to return. Default 10. Max 50.
     * @param sort How to sort the items.
     */
    public getEdibles (page?: number, count?: number, sort?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.InlineResponse2002> {
        const localVarPath = this.basePath + '/edibles';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        if (page !== undefined) {
            queryParameters['page'] = page;
        }

        if (count !== undefined) {
            queryParameters['count'] = count;
        }

        if (sort !== undefined) {
            queryParameters['sort'] = sort;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
}
