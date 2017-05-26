/**
 * Otreeba Open Cannabis API
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 *
 * OpenAPI spec version: 1.0.0
 * Contact: api@otreeba.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

package io.swagger.client.model;

import java.util.Date;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class Product {
  
  @SerializedName("name")
  private String name = null;
  @SerializedName("ocpc")
  private String ocpc = null;
  @SerializedName("brand")
  private Object brand = null;
  @SerializedName("type")
  private String type = null;
  @SerializedName("strain")
  private Object strain = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("qr")
  private String qr = null;
  @SerializedName("url")
  private String url = null;
  @SerializedName("image")
  private String image = null;
  @SerializedName("labTest")
  private String labTest = null;
  @SerializedName("thc")
  private String thc = null;
  @SerializedName("cbd")
  private String cbd = null;
  @SerializedName("cannabis")
  private String cannabis = null;
  @SerializedName("hashOil")
  private String hashOil = null;
  @SerializedName("createdAt")
  private Date createdAt = null;
  @SerializedName("updatedAt")
  private Date updatedAt = null;

  /**
   * Name of the product.
   **/
  @ApiModelProperty(required = true, value = "Name of the product.")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Open Cannabis Product Code for the product.
   **/
  @ApiModelProperty(value = "Open Cannabis Product Code for the product.")
  public String getOcpc() {
    return ocpc;
  }
  public void setOcpc(String ocpc) {
    this.ocpc = ocpc;
  }

  /**
   * Name and Open Cannabis Product Code of the brand that created this product.
   **/
  @ApiModelProperty(value = "Name and Open Cannabis Product Code of the brand that created this product.")
  public Object getBrand() {
    return brand;
  }
  public void setBrand(Object brand) {
    this.brand = brand;
  }

  /**
   * Type of product.
   **/
  @ApiModelProperty(value = "Type of product.")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * Name and Open Cannabis Product Code of the strain for this product.
   **/
  @ApiModelProperty(value = "Name and Open Cannabis Product Code of the strain for this product.")
  public Object getStrain() {
    return strain;
  }
  public void setStrain(Object strain) {
    this.strain = strain;
  }

  /**
   * Description of the product.
   **/
  @ApiModelProperty(value = "Description of the product.")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   * URL for QR that leads to page on Cannabis Reports.
   **/
  @ApiModelProperty(value = "URL for QR that leads to page on Cannabis Reports.")
  public String getQr() {
    return qr;
  }
  public void setQr(String qr) {
    this.qr = qr;
  }

  /**
   * URL for the product on Cannabis Reports.
   **/
  @ApiModelProperty(value = "URL for the product on Cannabis Reports.")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  /**
   * URL for the main photo of the product.
   **/
  @ApiModelProperty(value = "URL for the main photo of the product.")
  public String getImage() {
    return image;
  }
  public void setImage(String image) {
    this.image = image;
  }

  /**
   * URL for the PDF containing lab testing information for this product.
   **/
  @ApiModelProperty(value = "URL for the PDF containing lab testing information for this product.")
  public String getLabTest() {
    return labTest;
  }
  public void setLabTest(String labTest) {
    this.labTest = labTest;
  }

  /**
   * THC measurement for this product.
   **/
  @ApiModelProperty(value = "THC measurement for this product.")
  public String getThc() {
    return thc;
  }
  public void setThc(String thc) {
    this.thc = thc;
  }

  /**
   * CBD measurement for this product.
   **/
  @ApiModelProperty(value = "CBD measurement for this product.")
  public String getCbd() {
    return cbd;
  }
  public void setCbd(String cbd) {
    this.cbd = cbd;
  }

  /**
   * Cannabis measurement for this product.
   **/
  @ApiModelProperty(value = "Cannabis measurement for this product.")
  public String getCannabis() {
    return cannabis;
  }
  public void setCannabis(String cannabis) {
    this.cannabis = cannabis;
  }

  /**
   * Hash oil measurement for this product.
   **/
  @ApiModelProperty(value = "Hash oil measurement for this product.")
  public String getHashOil() {
    return hashOil;
  }
  public void setHashOil(String hashOil) {
    this.hashOil = hashOil;
  }

  /**
   * Date and time record was created, UTC.
   **/
  @ApiModelProperty(value = "Date and time record was created, UTC.")
  public Date getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(Date createdAt) {
    this.createdAt = createdAt;
  }

  /**
   * Date and time record was updated, UTC.
   **/
  @ApiModelProperty(value = "Date and time record was updated, UTC.")
  public Date getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(Date updatedAt) {
    this.updatedAt = updatedAt;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Product product = (Product) o;
    return (this.name == null ? product.name == null : this.name.equals(product.name)) &&
        (this.ocpc == null ? product.ocpc == null : this.ocpc.equals(product.ocpc)) &&
        (this.brand == null ? product.brand == null : this.brand.equals(product.brand)) &&
        (this.type == null ? product.type == null : this.type.equals(product.type)) &&
        (this.strain == null ? product.strain == null : this.strain.equals(product.strain)) &&
        (this.description == null ? product.description == null : this.description.equals(product.description)) &&
        (this.qr == null ? product.qr == null : this.qr.equals(product.qr)) &&
        (this.url == null ? product.url == null : this.url.equals(product.url)) &&
        (this.image == null ? product.image == null : this.image.equals(product.image)) &&
        (this.labTest == null ? product.labTest == null : this.labTest.equals(product.labTest)) &&
        (this.thc == null ? product.thc == null : this.thc.equals(product.thc)) &&
        (this.cbd == null ? product.cbd == null : this.cbd.equals(product.cbd)) &&
        (this.cannabis == null ? product.cannabis == null : this.cannabis.equals(product.cannabis)) &&
        (this.hashOil == null ? product.hashOil == null : this.hashOil.equals(product.hashOil)) &&
        (this.createdAt == null ? product.createdAt == null : this.createdAt.equals(product.createdAt)) &&
        (this.updatedAt == null ? product.updatedAt == null : this.updatedAt.equals(product.updatedAt));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.ocpc == null ? 0: this.ocpc.hashCode());
    result = 31 * result + (this.brand == null ? 0: this.brand.hashCode());
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    result = 31 * result + (this.strain == null ? 0: this.strain.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.qr == null ? 0: this.qr.hashCode());
    result = 31 * result + (this.url == null ? 0: this.url.hashCode());
    result = 31 * result + (this.image == null ? 0: this.image.hashCode());
    result = 31 * result + (this.labTest == null ? 0: this.labTest.hashCode());
    result = 31 * result + (this.thc == null ? 0: this.thc.hashCode());
    result = 31 * result + (this.cbd == null ? 0: this.cbd.hashCode());
    result = 31 * result + (this.cannabis == null ? 0: this.cannabis.hashCode());
    result = 31 * result + (this.hashOil == null ? 0: this.hashOil.hashCode());
    result = 31 * result + (this.createdAt == null ? 0: this.createdAt.hashCode());
    result = 31 * result + (this.updatedAt == null ? 0: this.updatedAt.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Product {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  ocpc: ").append(ocpc).append("\n");
    sb.append("  brand: ").append(brand).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  strain: ").append(strain).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  qr: ").append(qr).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  image: ").append(image).append("\n");
    sb.append("  labTest: ").append(labTest).append("\n");
    sb.append("  thc: ").append(thc).append("\n");
    sb.append("  cbd: ").append(cbd).append("\n");
    sb.append("  cannabis: ").append(cannabis).append("\n");
    sb.append("  hashOil: ").append(hashOil).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("  updatedAt: ").append(updatedAt).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
