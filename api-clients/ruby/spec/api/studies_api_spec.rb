=begin
#Otreeba Open Cannabis API

#This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).

OpenAPI spec version: 1.0.0
Contact: api@otreeba.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.2.3

=end

require 'spec_helper'
require 'json'

# Unit tests for SwaggerClient::StudiesApi
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'StudiesApi' do
  before do
    # run before each test
    @instance = SwaggerClient::StudiesApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of StudiesApi' do
    it 'should create an instance of StudiesApi' do
      expect(@instance).to be_instance_of(SwaggerClient::StudiesApi)
    end
  end

  # unit tests for get_studies
  # Get a list of all current studies.
  # Returns a paginated list of studies.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :page Page to be returned.
  # @option opts [Integer] :count The number of items to return. Default 10. Max 50.
  # @option opts [String] :sort How to sort the items.
  # @return [InlineResponse20012]
  describe 'get_studies test' do
    it "should work" do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for get_studies_by_condition
  # Get a list of all current studies for a given condition.
  # Returns a paginated list of studies.
  # @param condition_slug Slug of the condition to return studies for.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :page Page to be returned.
  # @option opts [Integer] :count The number of items to return. Default 10. Max 50.
  # @option opts [String] :sort How to sort the items.
  # @return [InlineResponse20013]
  describe 'get_studies_by_condition test' do
    it "should work" do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for get_studies_conditions
  # Get a list of all current conditions for studies.
  # Returns a list of all current conditions for studies.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :sort How to sort the items.
  # @return [Object]
  describe 'get_studies_conditions test' do
    it "should work" do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for get_study_by_identifier
  # Find study by DOI, PubMed ID, or slug.
  # Returns a single study.
  # @param identifier_type Type of identifier to for the study to return.
  # @param identifier Identifier for the study to return.
  # @param [Hash] opts the optional parameters
  # @return [Study]
  describe 'get_study_by_identifier test' do
    it "should work" do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
