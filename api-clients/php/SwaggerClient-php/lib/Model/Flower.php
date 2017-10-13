<?php
/**
 * Flower
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swaagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * Otreeba Open Cannabis API
 *
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 *
 * OpenAPI spec version: 1.0.0
 * Contact: api@otreeba.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;

/**
 * Flower Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class Flower implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'Flower';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        'name' => 'string',
        'ocpc' => 'string',
        'brand' => 'object',
        'type' => 'string',
        'strain' => 'object',
        'description' => 'string',
        'qr' => 'string',
        'url' => 'string',
        'image' => 'string',
        'lab_test' => 'string',
        'thc' => 'string',
        'cbd' => 'string',
        'created_at' => '\DateTime',
        'updated_at' => '\DateTime'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerFormats = [
        'name' => null,
        'ocpc' => null,
        'brand' => null,
        'type' => null,
        'strain' => null,
        'description' => null,
        'qr' => null,
        'url' => null,
        'image' => null,
        'lab_test' => null,
        'thc' => null,
        'cbd' => null,
        'created_at' => 'date-time',
        'updated_at' => 'date-time'
    ];

    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    public static function swaggerFormats()
    {
        return self::$swaggerFormats;
    }

    /**
     * Array of attributes where the key is the local name, and the value is the original name
     * @var string[]
     */
    protected static $attributeMap = [
        'name' => 'name',
        'ocpc' => 'ocpc',
        'brand' => 'brand',
        'type' => 'type',
        'strain' => 'strain',
        'description' => 'description',
        'qr' => 'qr',
        'url' => 'url',
        'image' => 'image',
        'lab_test' => 'labTest',
        'thc' => 'thc',
        'cbd' => 'cbd',
        'created_at' => 'createdAt',
        'updated_at' => 'updatedAt'
    ];


    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = [
        'name' => 'setName',
        'ocpc' => 'setOcpc',
        'brand' => 'setBrand',
        'type' => 'setType',
        'strain' => 'setStrain',
        'description' => 'setDescription',
        'qr' => 'setQr',
        'url' => 'setUrl',
        'image' => 'setImage',
        'lab_test' => 'setLabTest',
        'thc' => 'setThc',
        'cbd' => 'setCbd',
        'created_at' => 'setCreatedAt',
        'updated_at' => 'setUpdatedAt'
    ];


    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = [
        'name' => 'getName',
        'ocpc' => 'getOcpc',
        'brand' => 'getBrand',
        'type' => 'getType',
        'strain' => 'getStrain',
        'description' => 'getDescription',
        'qr' => 'getQr',
        'url' => 'getUrl',
        'image' => 'getImage',
        'lab_test' => 'getLabTest',
        'thc' => 'getThc',
        'cbd' => 'getCbd',
        'created_at' => 'getCreatedAt',
        'updated_at' => 'getUpdatedAt'
    ];

    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    public static function setters()
    {
        return self::$setters;
    }

    public static function getters()
    {
        return self::$getters;
    }

    

    

    /**
     * Associative array for storing property values
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['ocpc'] = isset($data['ocpc']) ? $data['ocpc'] : null;
        $this->container['brand'] = isset($data['brand']) ? $data['brand'] : null;
        $this->container['type'] = isset($data['type']) ? $data['type'] : null;
        $this->container['strain'] = isset($data['strain']) ? $data['strain'] : null;
        $this->container['description'] = isset($data['description']) ? $data['description'] : null;
        $this->container['qr'] = isset($data['qr']) ? $data['qr'] : null;
        $this->container['url'] = isset($data['url']) ? $data['url'] : null;
        $this->container['image'] = isset($data['image']) ? $data['image'] : null;
        $this->container['lab_test'] = isset($data['lab_test']) ? $data['lab_test'] : null;
        $this->container['thc'] = isset($data['thc']) ? $data['thc'] : null;
        $this->container['cbd'] = isset($data['cbd']) ? $data['cbd'] : null;
        $this->container['created_at'] = isset($data['created_at']) ? $data['created_at'] : null;
        $this->container['updated_at'] = isset($data['updated_at']) ? $data['updated_at'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = [];

        if ($this->container['name'] === null) {
            $invalid_properties[] = "'name' can't be null";
        }
        return $invalid_properties;
    }

    /**
     * validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {

        if ($this->container['name'] === null) {
            return false;
        }
        return true;
    }


    /**
     * Gets name
     * @return string
     */
    public function getName()
    {
        return $this->container['name'];
    }

    /**
     * Sets name
     * @param string $name Name of the flowers.
     * @return $this
     */
    public function setName($name)
    {
        $this->container['name'] = $name;

        return $this;
    }

    /**
     * Gets ocpc
     * @return string
     */
    public function getOcpc()
    {
        return $this->container['ocpc'];
    }

    /**
     * Sets ocpc
     * @param string $ocpc Open Cannabis Product Code for the flowers.
     * @return $this
     */
    public function setOcpc($ocpc)
    {
        $this->container['ocpc'] = $ocpc;

        return $this;
    }

    /**
     * Gets brand
     * @return object
     */
    public function getBrand()
    {
        return $this->container['brand'];
    }

    /**
     * Sets brand
     * @param object $brand Name and Open Cannabis Product Code of the brand that created these flowers.
     * @return $this
     */
    public function setBrand($brand)
    {
        $this->container['brand'] = $brand;

        return $this;
    }

    /**
     * Gets type
     * @return string
     */
    public function getType()
    {
        return $this->container['type'];
    }

    /**
     * Sets type
     * @param string $type Type of flowers.
     * @return $this
     */
    public function setType($type)
    {
        $this->container['type'] = $type;

        return $this;
    }

    /**
     * Gets strain
     * @return object
     */
    public function getStrain()
    {
        return $this->container['strain'];
    }

    /**
     * Sets strain
     * @param object $strain Name and Open Cannabis Product Code of the strain for these flowers.
     * @return $this
     */
    public function setStrain($strain)
    {
        $this->container['strain'] = $strain;

        return $this;
    }

    /**
     * Gets description
     * @return string
     */
    public function getDescription()
    {
        return $this->container['description'];
    }

    /**
     * Sets description
     * @param string $description Description of the flowers.
     * @return $this
     */
    public function setDescription($description)
    {
        $this->container['description'] = $description;

        return $this;
    }

    /**
     * Gets qr
     * @return string
     */
    public function getQr()
    {
        return $this->container['qr'];
    }

    /**
     * Sets qr
     * @param string $qr URL for QR that leads to page on Cannabis Reports.
     * @return $this
     */
    public function setQr($qr)
    {
        $this->container['qr'] = $qr;

        return $this;
    }

    /**
     * Gets url
     * @return string
     */
    public function getUrl()
    {
        return $this->container['url'];
    }

    /**
     * Sets url
     * @param string $url URL for the flowers on Cannabis Reports.
     * @return $this
     */
    public function setUrl($url)
    {
        $this->container['url'] = $url;

        return $this;
    }

    /**
     * Gets image
     * @return string
     */
    public function getImage()
    {
        return $this->container['image'];
    }

    /**
     * Sets image
     * @param string $image URL for the main photo of the flowers.
     * @return $this
     */
    public function setImage($image)
    {
        $this->container['image'] = $image;

        return $this;
    }

    /**
     * Gets lab_test
     * @return string
     */
    public function getLabTest()
    {
        return $this->container['lab_test'];
    }

    /**
     * Sets lab_test
     * @param string $lab_test URL for the PDF containing lab testing information for these flowers.
     * @return $this
     */
    public function setLabTest($lab_test)
    {
        $this->container['lab_test'] = $lab_test;

        return $this;
    }

    /**
     * Gets thc
     * @return string
     */
    public function getThc()
    {
        return $this->container['thc'];
    }

    /**
     * Sets thc
     * @param string $thc THC measurement for these flowers.
     * @return $this
     */
    public function setThc($thc)
    {
        $this->container['thc'] = $thc;

        return $this;
    }

    /**
     * Gets cbd
     * @return string
     */
    public function getCbd()
    {
        return $this->container['cbd'];
    }

    /**
     * Sets cbd
     * @param string $cbd CBD measurement for these flowers.
     * @return $this
     */
    public function setCbd($cbd)
    {
        $this->container['cbd'] = $cbd;

        return $this;
    }

    /**
     * Gets created_at
     * @return \DateTime
     */
    public function getCreatedAt()
    {
        return $this->container['created_at'];
    }

    /**
     * Sets created_at
     * @param \DateTime $created_at Date and time record was created, UTC.
     * @return $this
     */
    public function setCreatedAt($created_at)
    {
        $this->container['created_at'] = $created_at;

        return $this;
    }

    /**
     * Gets updated_at
     * @return \DateTime
     */
    public function getUpdatedAt()
    {
        return $this->container['updated_at'];
    }

    /**
     * Sets updated_at
     * @param \DateTime $updated_at Date and time record was updated, UTC.
     * @return $this
     */
    public function setUpdatedAt($updated_at)
    {
        $this->container['updated_at'] = $updated_at;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     * @param  integer $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        }

        return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
    }
}


