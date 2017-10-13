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


class Strain(object):
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
        'seed_company': 'object',
        'qr': 'str',
        'url': 'str',
        'image': 'str',
        'lineage': 'object',
        'genetics': 'object',
        'children': 'list[str]',
        'created_at': 'datetime',
        'updated_at': 'datetime'
    }

    attribute_map = {
        'name': 'name',
        'ocpc': 'ocpc',
        'seed_company': 'seedCompany',
        'qr': 'qr',
        'url': 'url',
        'image': 'image',
        'lineage': 'lineage',
        'genetics': 'genetics',
        'children': 'children',
        'created_at': 'createdAt',
        'updated_at': 'updatedAt'
    }

    def __init__(self, name=None, ocpc=None, seed_company=None, qr=None, url=None, image=None, lineage=None, genetics=None, children=None, created_at=None, updated_at=None):
        """
        Strain - a model defined in Swagger
        """

        self._name = None
        self._ocpc = None
        self._seed_company = None
        self._qr = None
        self._url = None
        self._image = None
        self._lineage = None
        self._genetics = None
        self._children = None
        self._created_at = None
        self._updated_at = None

        self.name = name
        if ocpc is not None:
          self.ocpc = ocpc
        if seed_company is not None:
          self.seed_company = seed_company
        if qr is not None:
          self.qr = qr
        if url is not None:
          self.url = url
        if image is not None:
          self.image = image
        if lineage is not None:
          self.lineage = lineage
        if genetics is not None:
          self.genetics = genetics
        if children is not None:
          self.children = children
        if created_at is not None:
          self.created_at = created_at
        if updated_at is not None:
          self.updated_at = updated_at

    @property
    def name(self):
        """
        Gets the name of this Strain.
        Name of the strain.

        :return: The name of this Strain.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this Strain.
        Name of the strain.

        :param name: The name of this Strain.
        :type: str
        """
        if name is None:
            raise ValueError("Invalid value for `name`, must not be `None`")

        self._name = name

    @property
    def ocpc(self):
        """
        Gets the ocpc of this Strain.
        Open Cannabis Product Code for the strain.

        :return: The ocpc of this Strain.
        :rtype: str
        """
        return self._ocpc

    @ocpc.setter
    def ocpc(self, ocpc):
        """
        Sets the ocpc of this Strain.
        Open Cannabis Product Code for the strain.

        :param ocpc: The ocpc of this Strain.
        :type: str
        """

        self._ocpc = ocpc

    @property
    def seed_company(self):
        """
        Gets the seed_company of this Strain.
        Name and Open Cannabis Product Code of the seed company that created the strain.

        :return: The seed_company of this Strain.
        :rtype: object
        """
        return self._seed_company

    @seed_company.setter
    def seed_company(self, seed_company):
        """
        Sets the seed_company of this Strain.
        Name and Open Cannabis Product Code of the seed company that created the strain.

        :param seed_company: The seed_company of this Strain.
        :type: object
        """

        self._seed_company = seed_company

    @property
    def qr(self):
        """
        Gets the qr of this Strain.
        URL for QR that leads to page on Cannabis Reports.

        :return: The qr of this Strain.
        :rtype: str
        """
        return self._qr

    @qr.setter
    def qr(self, qr):
        """
        Sets the qr of this Strain.
        URL for QR that leads to page on Cannabis Reports.

        :param qr: The qr of this Strain.
        :type: str
        """

        self._qr = qr

    @property
    def url(self):
        """
        Gets the url of this Strain.
        URL for strain on Cannabis Reports.

        :return: The url of this Strain.
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url):
        """
        Sets the url of this Strain.
        URL for strain on Cannabis Reports.

        :param url: The url of this Strain.
        :type: str
        """

        self._url = url

    @property
    def image(self):
        """
        Gets the image of this Strain.
        URL for the main photo of the strain.

        :return: The image of this Strain.
        :rtype: str
        """
        return self._image

    @image.setter
    def image(self, image):
        """
        Sets the image of this Strain.
        URL for the main photo of the strain.

        :param image: The image of this Strain.
        :type: str
        """

        self._image = image

    @property
    def lineage(self):
        """
        Gets the lineage of this Strain.
        Object of countries that this strain has lineages from. {'Country Name' => 'ISO 3166-1 Two Letter Country Code'}

        :return: The lineage of this Strain.
        :rtype: object
        """
        return self._lineage

    @lineage.setter
    def lineage(self, lineage):
        """
        Sets the lineage of this Strain.
        Object of countries that this strain has lineages from. {'Country Name' => 'ISO 3166-1 Two Letter Country Code'}

        :param lineage: The lineage of this Strain.
        :type: object
        """

        self._lineage = lineage

    @property
    def genetics(self):
        """
        Gets the genetics of this Strain.
        Names of the parents of the strains and their associated Open Cannabis Product Codes.

        :return: The genetics of this Strain.
        :rtype: object
        """
        return self._genetics

    @genetics.setter
    def genetics(self, genetics):
        """
        Sets the genetics of this Strain.
        Names of the parents of the strains and their associated Open Cannabis Product Codes.

        :param genetics: The genetics of this Strain.
        :type: object
        """

        self._genetics = genetics

    @property
    def children(self):
        """
        Gets the children of this Strain.
        Open Cannabis Product Codes of the children of this strain.

        :return: The children of this Strain.
        :rtype: list[str]
        """
        return self._children

    @children.setter
    def children(self, children):
        """
        Sets the children of this Strain.
        Open Cannabis Product Codes of the children of this strain.

        :param children: The children of this Strain.
        :type: list[str]
        """

        self._children = children

    @property
    def created_at(self):
        """
        Gets the created_at of this Strain.
        Date and time record was created, UTC.

        :return: The created_at of this Strain.
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """
        Sets the created_at of this Strain.
        Date and time record was created, UTC.

        :param created_at: The created_at of this Strain.
        :type: datetime
        """

        self._created_at = created_at

    @property
    def updated_at(self):
        """
        Gets the updated_at of this Strain.
        Date and time record was updated, UTC.

        :return: The updated_at of this Strain.
        :rtype: datetime
        """
        return self._updated_at

    @updated_at.setter
    def updated_at(self, updated_at):
        """
        Sets the updated_at of this Strain.
        Date and time record was updated, UTC.

        :param updated_at: The updated_at of this Strain.
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
        if not isinstance(other, Strain):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
