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


class Condition(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, name=None, slug=None, description=None, created_at=None, updated_at=None):
        """
        Condition - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'name': 'str',
            'slug': 'str',
            'description': 'str',
            'created_at': 'datetime',
            'updated_at': 'datetime'
        }

        self.attribute_map = {
            'name': 'name',
            'slug': 'slug',
            'description': 'description',
            'created_at': 'createdAt',
            'updated_at': 'updatedAt'
        }

        self._name = name
        self._slug = slug
        self._description = description
        self._created_at = created_at
        self._updated_at = updated_at

    @property
    def name(self):
        """
        Gets the name of this Condition.
        Name of the condition.

        :return: The name of this Condition.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this Condition.
        Name of the condition.

        :param name: The name of this Condition.
        :type: str
        """
        if name is None:
            raise ValueError("Invalid value for `name`, must not be `None`")

        self._name = name

    @property
    def slug(self):
        """
        Gets the slug of this Condition.
        Slug based on the condition name.

        :return: The slug of this Condition.
        :rtype: str
        """
        return self._slug

    @slug.setter
    def slug(self, slug):
        """
        Sets the slug of this Condition.
        Slug based on the condition name.

        :param slug: The slug of this Condition.
        :type: str
        """

        self._slug = slug

    @property
    def description(self):
        """
        Gets the description of this Condition.
        Description of the condition.

        :return: The description of this Condition.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """
        Sets the description of this Condition.
        Description of the condition.

        :param description: The description of this Condition.
        :type: str
        """

        self._description = description

    @property
    def created_at(self):
        """
        Gets the created_at of this Condition.
        Date and time record was created, UTC.

        :return: The created_at of this Condition.
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """
        Sets the created_at of this Condition.
        Date and time record was created, UTC.

        :param created_at: The created_at of this Condition.
        :type: datetime
        """

        self._created_at = created_at

    @property
    def updated_at(self):
        """
        Gets the updated_at of this Condition.
        Date and time record was updated, UTC.

        :return: The updated_at of this Condition.
        :rtype: datetime
        """
        return self._updated_at

    @updated_at.setter
    def updated_at(self, updated_at):
        """
        Sets the updated_at of this Condition.
        Date and time record was updated, UTC.

        :param updated_at: The updated_at of this Condition.
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
        if not isinstance(other, Condition):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other