=begin
#Otreeba Open Cannabis API

#This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).

OpenAPI spec version: 1.0.0
Contact: api@otreeba.com
Generated by: https://github.com/swagger-api/swagger-codegen.git

=end

# Common files
require 'swagger_client/api_client'
require 'swagger_client/api_error'
require 'swagger_client/version'
require 'swagger_client/configuration'

# Models
require 'swagger_client/models/brand'
require 'swagger_client/models/edible'
require 'swagger_client/models/error'
require 'swagger_client/models/extract'
require 'swagger_client/models/flower'
require 'swagger_client/models/inline_response_200'
require 'swagger_client/models/inline_response_200_1'
require 'swagger_client/models/inline_response_200_10'
require 'swagger_client/models/inline_response_200_10_meta'
require 'swagger_client/models/inline_response_200_11'
require 'swagger_client/models/inline_response_200_11_meta'
require 'swagger_client/models/inline_response_200_1_meta'
require 'swagger_client/models/inline_response_200_2'
require 'swagger_client/models/inline_response_200_2_meta'
require 'swagger_client/models/inline_response_200_3'
require 'swagger_client/models/inline_response_200_3_meta'
require 'swagger_client/models/inline_response_200_4'
require 'swagger_client/models/inline_response_200_4_meta'
require 'swagger_client/models/inline_response_200_5'
require 'swagger_client/models/inline_response_200_5_meta'
require 'swagger_client/models/inline_response_200_6'
require 'swagger_client/models/inline_response_200_6_meta'
require 'swagger_client/models/inline_response_200_7'
require 'swagger_client/models/inline_response_200_7_meta'
require 'swagger_client/models/inline_response_200_8'
require 'swagger_client/models/inline_response_200_8_meta'
require 'swagger_client/models/inline_response_200_9'
require 'swagger_client/models/inline_response_200_9_meta'
require 'swagger_client/models/inline_response_200_meta'
require 'swagger_client/models/pagination'
require 'swagger_client/models/product'
require 'swagger_client/models/seed_company'
require 'swagger_client/models/strain'

# APIs
require 'swagger_client/api/brands_api'
require 'swagger_client/api/edibles_api'
require 'swagger_client/api/extracts_api'
require 'swagger_client/api/flowers_api'
require 'swagger_client/api/products_api'
require 'swagger_client/api/seed_companies_api'
require 'swagger_client/api/strains_api'

module SwaggerClient
  class << self
    # Customize default settings for the SDK using block.
    #   SwaggerClient.configure do |config|
    #     config.username = "xxx"
    #     config.password = "xxx"
    #   end
    # If no block given, return the default Configuration object.
    def configure
      if block_given?
        yield(Configuration.default)
      else
        Configuration.default
      end
    end
  end
end
