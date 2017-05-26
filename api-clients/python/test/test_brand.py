# coding: utf-8

"""
    Otreeba Open Cannabis API

    This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).

    OpenAPI spec version: 1.0.0
    Contact: api@otreeba.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import os
import sys
import unittest

import swagger_client
from swagger_client.rest import ApiException
from swagger_client.models.brand import Brand


class TestBrand(unittest.TestCase):
    """ Brand unit test stubs """

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testBrand(self):
        """
        Test Brand
        """
        model = swagger_client.models.brand.Brand()


if __name__ == '__main__':
    unittest.main()
