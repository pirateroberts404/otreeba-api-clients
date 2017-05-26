/*
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


package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.model.InlineResponse200;
import io.swagger.client.model.InlineResponse2001;
import io.swagger.client.model.SeedCompany;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for SeedCompaniesApi
 */
@Ignore
public class SeedCompaniesApiTest {

    private final SeedCompaniesApi api = new SeedCompaniesApi();

    
    /**
     * Get a list of all current seed companies.
     *
     * Returns a paginated list of seed companies.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getSeedCompaniesTest() throws ApiException {
        Integer page = null;
        Integer count = null;
        String sort = null;
        InlineResponse2001 response = api.getSeedCompanies(page, count, sort);

        // TODO: test validations
    }
    
    /**
     * Find seed company by Open Cannabis Product Code (OCPC).
     *
     * Returns a single seed company.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getSeedCompanyByOcpcTest() throws ApiException {
        String ocpc = null;
        SeedCompany response = api.getSeedCompanyByOcpc(ocpc);

        // TODO: test validations
    }
    
    /**
     * Find strains for a seed company by Open Cannabis Product Code (OCPC).
     *
     * Returns a paginated list of strains for a single seed company.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getSeedCompanyStrainsByOcpcTest() throws ApiException {
        String ocpc = null;
        Integer page = null;
        Integer count = null;
        InlineResponse200 response = api.getSeedCompanyStrainsByOcpc(ocpc, page, count);

        // TODO: test validations
    }
    
}
