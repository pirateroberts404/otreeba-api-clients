# coding: utf-8

"""
    Otreeba Open Cannabis API

    This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).

    OpenAPI spec version: 1.0.0
    Contact: api@otreeba.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import sys
import os
import re

# python 2 and python 3 compatibility library
from six import iteritems

from ..configuration import Configuration
from ..api_client import ApiClient


class SeedCompaniesApi(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    Ref: https://github.com/swagger-api/swagger-codegen
    """

    def __init__(self, api_client=None):
        config = Configuration()
        if api_client:
            self.api_client = api_client
        else:
            if not config.api_client:
                config.api_client = ApiClient()
            self.api_client = config.api_client

    def get_seed_companies(self, **kwargs):
        """
        Get a list of all current seed companies.
        Returns a paginated list of seed companies.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_seed_companies(callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse200
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_seed_companies_with_http_info(**kwargs)
        else:
            (data) = self.get_seed_companies_with_http_info(**kwargs)
            return data

    def get_seed_companies_with_http_info(self, **kwargs):
        """
        Get a list of all current seed companies.
        Returns a paginated list of seed companies.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_seed_companies_with_http_info(callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse200
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['page', 'count', 'sort']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_seed_companies" % key
                )
            params[key] = val
        del params['kwargs']


        collection_formats = {}

        path_params = {}

        query_params = []
        if 'page' in params:
            query_params.append(('page', params['page']))
        if 'count' in params:
            query_params.append(('count', params['count']))
        if 'sort' in params:
            query_params.append(('sort', params['sort']))

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.\
            select_header_accept(['application/json'])

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.\
            select_header_content_type(['application/json'])

        # Authentication setting
        auth_settings = ['api_key']

        return self.api_client.call_api('/seed-companies', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='InlineResponse200',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def get_seed_company_by_ocpc(self, ocpc, **kwargs):
        """
        Find seed company by Open Cannabis Product Code (OCPC).
        Returns a single seed company.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_seed_company_by_ocpc(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the seed company to return. (required)
        :return: SeedCompany
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_seed_company_by_ocpc_with_http_info(ocpc, **kwargs)
        else:
            (data) = self.get_seed_company_by_ocpc_with_http_info(ocpc, **kwargs)
            return data

    def get_seed_company_by_ocpc_with_http_info(self, ocpc, **kwargs):
        """
        Find seed company by Open Cannabis Product Code (OCPC).
        Returns a single seed company.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_seed_company_by_ocpc_with_http_info(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the seed company to return. (required)
        :return: SeedCompany
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['ocpc']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_seed_company_by_ocpc" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'ocpc' is set
        if ('ocpc' not in params) or (params['ocpc'] is None):
            raise ValueError("Missing the required parameter `ocpc` when calling `get_seed_company_by_ocpc`")


        collection_formats = {}

        path_params = {}
        if 'ocpc' in params:
            path_params['ocpc'] = params['ocpc']

        query_params = []

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.\
            select_header_accept(['application/json'])

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.\
            select_header_content_type(['application/json'])

        # Authentication setting
        auth_settings = ['api_key']

        return self.api_client.call_api('/seed-companies/{ocpc}', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='SeedCompany',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def get_seed_company_strains_by_ocpc(self, ocpc, **kwargs):
        """
        Find strains for a seed company by Open Cannabis Product Code (OCPC).
        Returns a paginated list of strains for a single seed company.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_seed_company_strains_by_ocpc(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the seed company to return strains for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :return: InlineResponse2001
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_seed_company_strains_by_ocpc_with_http_info(ocpc, **kwargs)
        else:
            (data) = self.get_seed_company_strains_by_ocpc_with_http_info(ocpc, **kwargs)
            return data

    def get_seed_company_strains_by_ocpc_with_http_info(self, ocpc, **kwargs):
        """
        Find strains for a seed company by Open Cannabis Product Code (OCPC).
        Returns a paginated list of strains for a single seed company.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_seed_company_strains_by_ocpc_with_http_info(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the seed company to return strains for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :return: InlineResponse2001
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['ocpc', 'page', 'count']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_seed_company_strains_by_ocpc" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'ocpc' is set
        if ('ocpc' not in params) or (params['ocpc'] is None):
            raise ValueError("Missing the required parameter `ocpc` when calling `get_seed_company_strains_by_ocpc`")


        collection_formats = {}

        path_params = {}
        if 'ocpc' in params:
            path_params['ocpc'] = params['ocpc']

        query_params = []
        if 'page' in params:
            query_params.append(('page', params['page']))
        if 'count' in params:
            query_params.append(('count', params['count']))

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.\
            select_header_accept(['application/json'])

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.\
            select_header_content_type(['application/json'])

        # Authentication setting
        auth_settings = ['api_key']

        return self.api_client.call_api('/seed-companies/{ocpc}/strains', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='InlineResponse2001',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)
