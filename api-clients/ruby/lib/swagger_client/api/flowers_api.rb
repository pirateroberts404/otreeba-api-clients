=begin
#Otreeba Open Cannabis API

#This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).

OpenAPI spec version: 1.0.0
Contact: api@otreeba.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.2.3

=end

require "uri"

module SwaggerClient
  class FlowersApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end

    # Find flower by Open Cannabis Product Code (OCPC).
    # Returns a single flower.
    # @param ocpc OCPC of the flower to return.
    # @param [Hash] opts the optional parameters
    # @return [Flower]
    def get_flower_by_ocpc(ocpc, opts = {})
      data, _status_code, _headers = get_flower_by_ocpc_with_http_info(ocpc, opts)
      return data
    end

    # Find flower by Open Cannabis Product Code (OCPC).
    # Returns a single flower.
    # @param ocpc OCPC of the flower to return.
    # @param [Hash] opts the optional parameters
    # @return [Array<(Flower, Fixnum, Hash)>] Flower data, response status code and response headers
    def get_flower_by_ocpc_with_http_info(ocpc, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: FlowersApi.get_flower_by_ocpc ..."
      end
      # verify the required parameter 'ocpc' is set
      if @api_client.config.client_side_validation && ocpc.nil?
        fail ArgumentError, "Missing the required parameter 'ocpc' when calling FlowersApi.get_flower_by_ocpc"
      end
      # resource path
      local_var_path = "/flowers/{ocpc}".sub('{' + 'ocpc' + '}', ocpc.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = ['api_key']
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Flower')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: FlowersApi#get_flower_by_ocpc\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Get a list of all current flowers.
    # Returns a paginated list of flowers.
    # @param [Hash] opts the optional parameters
    # @option opts [Integer] :page Page to be returned.
    # @option opts [Integer] :count The number of items to return. Default 10. Max 50. (default to 10)
    # @option opts [String] :sort How to sort the items. (default to -createdAt)
    # @return [InlineResponse2004]
    def get_flowers(opts = {})
      data, _status_code, _headers = get_flowers_with_http_info(opts)
      return data
    end

    # Get a list of all current flowers.
    # Returns a paginated list of flowers.
    # @param [Hash] opts the optional parameters
    # @option opts [Integer] :page Page to be returned.
    # @option opts [Integer] :count The number of items to return. Default 10. Max 50.
    # @option opts [String] :sort How to sort the items.
    # @return [Array<(InlineResponse2004, Fixnum, Hash)>] InlineResponse2004 data, response status code and response headers
    def get_flowers_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: FlowersApi.get_flowers ..."
      end
      if @api_client.config.client_side_validation && opts[:'sort'] && !['-createdAt', 'createdAt', '-updatedAt', 'updatedAt', '-name', 'name'].include?(opts[:'sort'])
        fail ArgumentError, 'invalid value for "sort", must be one of -createdAt, createdAt, -updatedAt, updatedAt, -name, name'
      end
      # resource path
      local_var_path = "/flowers"

      # query parameters
      query_params = {}
      query_params[:'page'] = opts[:'page'] if !opts[:'page'].nil?
      query_params[:'count'] = opts[:'count'] if !opts[:'count'].nil?
      query_params[:'sort'] = opts[:'sort'] if !opts[:'sort'].nil?

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = ['api_key']
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'InlineResponse2004')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: FlowersApi#get_flowers\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
