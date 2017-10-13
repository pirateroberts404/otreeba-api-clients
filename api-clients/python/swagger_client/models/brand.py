# coding: utf-8

"""
    Otreeba Open Cannabis API

    This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).

    OpenAPI spec version: 1.0.0
    Contact: api@otreeba.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class Brand(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'name': 'str',
        'ocpc': 'str',
        'link': 'str',
        'qr': 'str',
        'url': 'str',
        'image': 'str',
        'flowers': 'list[str]',
        'extracts': 'list[str]',
        'edibles': 'list[str]',
        'products': 'list[str]',
        'created_at': 'datetime',
        'updated_at': 'datetime'
    }

    attribute_map = {
        'name': 'name',
        'ocpc': 'ocpc',
        'link': 'link',
        'qr': 'qr',
        'url': 'url',
        'image': 'image',
        'flowers': 'flowers',
        'extracts': 'extracts',
        'edibles': 'edibles',
        'products': 'products',
        'created_at': 'createdAt',
        'updated_at': 'updatedAt'
    }

    def __init__(self, name=None, ocpc=None, link=None, qr=None, url=None, image=None, flowers=None, extracts=None, edibles=None, products=None, created_at=None, updated_at=None):
        """
        Brand - a model defined in Swagger
        """

        self._name = None
        self._ocpc = None
        self._link = None
        self._qr = None
        self._url = None
        self._image = None
        self._flowers = None
        self._extracts = None
        self._edibles = None
        self._products = None
        self._created_at = None
        self._updated_at = None

        self.name = name
        if ocpc is not None:
          self.ocpc = ocpc
        if link is not None:
          self.link = link
        if qr is not None:
          self.qr = qr
        if url is not None:
          self.url = url
        if image is not None:
          self.image = image
        if flowers is not None:
          self.flowers = flowers
        if extracts is not None:
          self.extracts = extracts
        if edibles is not None:
          self.edibles = edibles
        if products is not None:
          self.products = products
        if created_at is not None:
          self.created_at = created_at
        if updated_at is not None:
          self.updated_at = updated_at

    @property
    def name(self):
        """
        Gets the name of this Brand.
        Name of the brand.

        :return: The name of this Brand.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this Brand.
        Name of the brand.

        :param name: The name of this Brand.
        :type: str
        """
        if name is None:
            raise ValueError("Invalid value for `name`, must not be `None`")

        self._name = name

    @property
    def ocpc(self):
        """
        Gets the ocpc of this Brand.
        Open Cannabis Product Code for the brand.

        :return: The ocpc of this Brand.
        :rtype: str
        """
        return self._ocpc

    @ocpc.setter
    def ocpc(self, ocpc):
        """
        Sets the ocpc of this Brand.
        Open Cannabis Product Code for the brand.

        :param ocpc: The ocpc of this Brand.
        :type: str
        """

        self._ocpc = ocpc

    @property
    def link(self):
        """
        Gets the link of this Brand.
        URL for brand on Otreeba.

        :return: The link of this Brand.
        :rtype: str
        """
        return self._link

    @link.setter
    def link(self, link):
        """
        Sets the link of this Brand.
        URL for brand on Otreeba.

        :param link: The link of this Brand.
        :type: str
        """

        self._link = link

    @property
    def qr(self):
        """
        Gets the qr of this Brand.
        URL for QR that leads to page on Cannabis Reports.

        :return: The qr of this Brand.
        :rtype: str
        """
        return self._qr

    @qr.setter
    def qr(self, qr):
        """
        Sets the qr of this Brand.
        URL for QR that leads to page on Cannabis Reports.

        :param qr: The qr of this Brand.
        :type: str
        """

        self._qr = qr

    @property
    def url(self):
        """
        Gets the url of this Brand.
        URL for brand on Cannabis Reports.

        :return: The url of this Brand.
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url):
        """
        Sets the url of this Brand.
        URL for brand on Cannabis Reports.

        :param url: The url of this Brand.
        :type: str
        """

        self._url = url

    @property
    def image(self):
        """
        Gets the image of this Brand.
        URL for logo for brand.

        :return: The image of this Brand.
        :rtype: str
        """
        return self._image

    @image.setter
    def image(self, image):
        """
        Sets the image of this Brand.
        URL for logo for brand.

        :param image: The image of this Brand.
        :type: str
        """

        self._image = image

    @property
    def flowers(self):
        """
        Gets the flowers of this Brand.
        OCPCs of the flowers from this brand.

        :return: The flowers of this Brand.
        :rtype: list[str]
        """
        return self._flowers

    @flowers.setter
    def flowers(self, flowers):
        """
        Sets the flowers of this Brand.
        OCPCs of the flowers from this brand.

        :param flowers: The flowers of this Brand.
        :type: list[str]
        """

        self._flowers = flowers

    @property
    def extracts(self):
        """
        Gets the extracts of this Brand.
        OCPCs of the extracts from this brand.

        :return: The extracts of this Brand.
        :rtype: list[str]
        """
        return self._extracts

    @extracts.setter
    def extracts(self, extracts):
        """
        Sets the extracts of this Brand.
        OCPCs of the extracts from this brand.

        :param extracts: The extracts of this Brand.
        :type: list[str]
        """

        self._extracts = extracts

    @property
    def edibles(self):
        """
        Gets the edibles of this Brand.
        OCPCs of the edibles from this brand.

        :return: The edibles of this Brand.
        :rtype: list[str]
        """
        return self._edibles

    @edibles.setter
    def edibles(self, edibles):
        """
        Sets the edibles of this Brand.
        OCPCs of the edibles from this brand.

        :param edibles: The edibles of this Brand.
        :type: list[str]
        """

        self._edibles = edibles

    @property
    def products(self):
        """
        Gets the products of this Brand.
        OCPCs of the products from this brand.

        :return: The products of this Brand.
        :rtype: list[str]
        """
        return self._products

    @products.setter
    def products(self, products):
        """
        Sets the products of this Brand.
        OCPCs of the products from this brand.

        :param products: The products of this Brand.
        :type: list[str]
        """

        self._products = products

    @property
    def created_at(self):
        """
        Gets the created_at of this Brand.
        Date and time record was created, UTC.

        :return: The created_at of this Brand.
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """
        Sets the created_at of this Brand.
        Date and time record was created, UTC.

        :param created_at: The created_at of this Brand.
        :type: datetime
        """

        self._created_at = created_at

    @property
    def updated_at(self):
        """
        Gets the updated_at of this Brand.
        Date and time record was updated, UTC.

        :return: The updated_at of this Brand.
        :rtype: datetime
        """
        return self._updated_at

    @updated_at.setter
    def updated_at(self, updated_at):
        """
        Sets the updated_at of this Brand.
        Date and time record was updated, UTC.

        :param updated_at: The updated_at of this Brand.
        :type: datetime
        """

        self._updated_at = updated_at

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, Brand):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
