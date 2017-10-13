<?php
/**
 * Brand
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
 * Brand Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class Brand implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'Brand';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        'name' => 'string',
        'ocpc' => 'string',
        'link' => 'string',
        'qr' => 'string',
        'url' => 'string',
        'image' => 'string',
        'flowers' => 'string[]',
        'extracts' => 'string[]',
        'edibles' => 'string[]',
        'products' => 'string[]',
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
        'link' => null,
        'qr' => null,
        'url' => null,
        'image' => null,
        'flowers' => null,
        'extracts' => null,
        'edibles' => null,
        'products' => null,
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
        'link' => 'link',
        'qr' => 'qr',
        'url' => 'url',
        'image' => 'image',
        'flowers' => 'flowers',
        'extracts' => 'extracts',
        'edibles' => 'edibles',
        'products' => 'products',
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
        'link' => 'setLink',
        'qr' => 'setQr',
        'url' => 'setUrl',
        'image' => 'setImage',
        'flowers' => 'setFlowers',
        'extracts' => 'setExtracts',
        'edibles' => 'setEdibles',
        'products' => 'setProducts',
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
        'link' => 'getLink',
        'qr' => 'getQr',
        'url' => 'getUrl',
        'image' => 'getImage',
        'flowers' => 'getFlowers',
        'extracts' => 'getExtracts',
        'edibles' => 'getEdibles',
        'products' => 'getProducts',
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
        $this->container['link'] = isset($data['link']) ? $data['link'] : null;
        $this->container['qr'] = isset($data['qr']) ? $data['qr'] : null;
        $this->container['url'] = isset($data['url']) ? $data['url'] : null;
        $this->container['image'] = isset($data['image']) ? $data['image'] : null;
        $this->container['flowers'] = isset($data['flowers']) ? $data['flowers'] : null;
        $this->container['extracts'] = isset($data['extracts']) ? $data['extracts'] : null;
        $this->container['edibles'] = isset($data['edibles']) ? $data['edibles'] : null;
        $this->container['products'] = isset($data['products']) ? $data['products'] : null;
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
     * @param string $name Name of the brand.
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
     * @param string $ocpc Open Cannabis Product Code for the brand.
     * @return $this
     */
    public function setOcpc($ocpc)
    {
        $this->container['ocpc'] = $ocpc;

        return $this;
    }

    /**
     * Gets link
     * @return string
     */
    public function getLink()
    {
        return $this->container['link'];
    }

    /**
     * Sets link
     * @param string $link URL for brand on Otreeba.
     * @return $this
     */
    public function setLink($link)
    {
        $this->container['link'] = $link;

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
     * @param string $url URL for brand on Cannabis Reports.
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
     * @param string $image URL for logo for brand.
     * @return $this
     */
    public function setImage($image)
    {
        $this->container['image'] = $image;

        return $this;
    }

    /**
     * Gets flowers
     * @return string[]
     */
    public function getFlowers()
    {
        return $this->container['flowers'];
    }

    /**
     * Sets flowers
     * @param string[] $flowers OCPCs of the flowers from this brand.
     * @return $this
     */
    public function setFlowers($flowers)
    {
        $this->container['flowers'] = $flowers;

        return $this;
    }

    /**
     * Gets extracts
     * @return string[]
     */
    public function getExtracts()
    {
        return $this->container['extracts'];
    }

    /**
     * Sets extracts
     * @param string[] $extracts OCPCs of the extracts from this brand.
     * @return $this
     */
    public function setExtracts($extracts)
    {
        $this->container['extracts'] = $extracts;

        return $this;
    }

    /**
     * Gets edibles
     * @return string[]
     */
    public function getEdibles()
    {
        return $this->container['edibles'];
    }

    /**
     * Sets edibles
     * @param string[] $edibles OCPCs of the edibles from this brand.
     * @return $this
     */
    public function setEdibles($edibles)
    {
        $this->container['edibles'] = $edibles;

        return $this;
    }

    /**
     * Gets products
     * @return string[]
     */
    public function getProducts()
    {
        return $this->container['products'];
    }

    /**
     * Sets products
     * @param string[] $products OCPCs of the products from this brand.
     * @return $this
     */
    public function setProducts($products)
    {
        $this->container['products'] = $products;

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


