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
import io.swagger.client.model.Extract;
import io.swagger.client.model.InlineResponse2003;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for ExtractsApi
 */
@Ignore
public class ExtractsApiTest {

    private final ExtractsApi api = new ExtractsApi();

    
    /**
     * Find extract by Open Cannabis Product Code (OCPC).
     *
     * Returns a single extract.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getExtractByOcpcTest() throws ApiException {
        String ocpc = null;
        Extract response = api.getExtractByOcpc(ocpc);

        // TODO: test validations
    }
    
    /**
     * Get a list of all current extracts.
     *
     * Returns a paginated list of extracts.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getExtractsTest() throws ApiException {
        Integer page = null;
        Integer count = null;
        String sort = null;
        InlineResponse2003 response = api.getExtracts(page, count, sort);

        // TODO: test validations
    }
    
}
