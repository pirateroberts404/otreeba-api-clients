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


class BrandsApi(object):
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

    def get_brand_by_ocpc(self, ocpc, **kwargs):
        """
        Find brand by Open Cannabis Product Code (OCPC).
        Returns a single brand.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_by_ocpc(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to return. (required)
        :return: Brand
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_brand_by_ocpc_with_http_info(ocpc, **kwargs)
        else:
            (data) = self.get_brand_by_ocpc_with_http_info(ocpc, **kwargs)
            return data

    def get_brand_by_ocpc_with_http_info(self, ocpc, **kwargs):
        """
        Find brand by Open Cannabis Product Code (OCPC).
        Returns a single brand.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_by_ocpc_with_http_info(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to return. (required)
        :return: Brand
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
                    " to method get_brand_by_ocpc" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'ocpc' is set
        if ('ocpc' not in params) or (params['ocpc'] is None):
            raise ValueError("Missing the required parameter `ocpc` when calling `get_brand_by_ocpc`")


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

        return self.api_client.call_api('/brands/{ocpc}', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='Brand',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def get_brand_edibles(self, ocpc, **kwargs):
        """
        Get a list of all current edibles for the given brand.
        Returns a paginated list of edibles.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_edibles(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to list edibles for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2008
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_brand_edibles_with_http_info(ocpc, **kwargs)
        else:
            (data) = self.get_brand_edibles_with_http_info(ocpc, **kwargs)
            return data

    def get_brand_edibles_with_http_info(self, ocpc, **kwargs):
        """
        Get a list of all current edibles for the given brand.
        Returns a paginated list of edibles.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_edibles_with_http_info(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to list edibles for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2008
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['ocpc', 'page', 'count', 'sort']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_brand_edibles" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'ocpc' is set
        if ('ocpc' not in params) or (params['ocpc'] is None):
            raise ValueError("Missing the required parameter `ocpc` when calling `get_brand_edibles`")


        collection_formats = {}

        path_params = {}
        if 'ocpc' in params:
            path_params['ocpc'] = params['ocpc']

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

        return self.api_client.call_api('/brands/{ocpc}/edibles', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='InlineResponse2008',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def get_brand_extracts(self, ocpc, **kwargs):
        """
        Get a list of all current extracts for the given brand.
        Returns a paginated list of extracts.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_extracts(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to list extracts for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2007
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_brand_extracts_with_http_info(ocpc, **kwargs)
        else:
            (data) = self.get_brand_extracts_with_http_info(ocpc, **kwargs)
            return data

    def get_brand_extracts_with_http_info(self, ocpc, **kwargs):
        """
        Get a list of all current extracts for the given brand.
        Returns a paginated list of extracts.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_extracts_with_http_info(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to list extracts for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2007
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['ocpc', 'page', 'count', 'sort']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_brand_extracts" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'ocpc' is set
        if ('ocpc' not in params) or (params['ocpc'] is None):
            raise ValueError("Missing the required parameter `ocpc` when calling `get_brand_extracts`")


        collection_formats = {}

        path_params = {}
        if 'ocpc' in params:
            path_params['ocpc'] = params['ocpc']

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

        return self.api_client.call_api('/brands/{ocpc}/extracts', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='InlineResponse2007',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def get_brand_flowers(self, ocpc, **kwargs):
        """
        Get a list of all current flowers for the given brand.
        Returns a paginated list of flowers.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_flowers(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to list flowers for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2006
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_brand_flowers_with_http_info(ocpc, **kwargs)
        else:
            (data) = self.get_brand_flowers_with_http_info(ocpc, **kwargs)
            return data

    def get_brand_flowers_with_http_info(self, ocpc, **kwargs):
        """
        Get a list of all current flowers for the given brand.
        Returns a paginated list of flowers.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_flowers_with_http_info(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to list flowers for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2006
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['ocpc', 'page', 'count', 'sort']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_brand_flowers" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'ocpc' is set
        if ('ocpc' not in params) or (params['ocpc'] is None):
            raise ValueError("Missing the required parameter `ocpc` when calling `get_brand_flowers`")


        collection_formats = {}

        path_params = {}
        if 'ocpc' in params:
            path_params['ocpc'] = params['ocpc']

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

        return self.api_client.call_api('/brands/{ocpc}/flowers', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='InlineResponse2006',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def get_brand_products(self, ocpc, **kwargs):
        """
        Get a list of all current products for the given brand.
        Returns a paginated list of products.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_products(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to list products for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2009
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_brand_products_with_http_info(ocpc, **kwargs)
        else:
            (data) = self.get_brand_products_with_http_info(ocpc, **kwargs)
            return data

    def get_brand_products_with_http_info(self, ocpc, **kwargs):
        """
        Get a list of all current products for the given brand.
        Returns a paginated list of products.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brand_products_with_http_info(ocpc, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str ocpc: OCPC of the brand to list products for. (required)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2009
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['ocpc', 'page', 'count', 'sort']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_brand_products" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'ocpc' is set
        if ('ocpc' not in params) or (params['ocpc'] is None):
            raise ValueError("Missing the required parameter `ocpc` when calling `get_brand_products`")


        collection_formats = {}

        path_params = {}
        if 'ocpc' in params:
            path_params['ocpc'] = params['ocpc']

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

        return self.api_client.call_api('/brands/{ocpc}/products', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='InlineResponse2009',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def get_brands(self, **kwargs):
        """
        Get a list of all current brands.
        Returns a paginated list of brands.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brands(callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2005
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_brands_with_http_info(**kwargs)
        else:
            (data) = self.get_brands_with_http_info(**kwargs)
            return data

    def get_brands_with_http_info(self, **kwargs):
        """
        Get a list of all current brands.
        Returns a paginated list of brands.
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_brands_with_http_info(callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param int page: Page to be returned.
        :param int count: The number of items to return. Default 10. Max 50.
        :param str sort: How to sort the items.
        :return: InlineResponse2005
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
                    " to method get_brands" % key
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

        return self.api_client.call_api('/brands', 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='InlineResponse2005',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)
