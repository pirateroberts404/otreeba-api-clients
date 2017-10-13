/*
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

import java.util.Objects;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.joda.time.DateTime;

/**
 * SeedCompany
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-10-13T20:29:20.683Z")
public class SeedCompany {
  @SerializedName("name")
  private String name = null;

  @SerializedName("ocpc")
  private String ocpc = null;

  @SerializedName("description")
  private String description = null;

  @SerializedName("qr")
  private String qr = null;

  @SerializedName("url")
  private String url = null;

  @SerializedName("image")
  private String image = null;

  @SerializedName("lineage")
  private Object lineage = null;

  @SerializedName("strains")
  private List<String> strains = null;

  @SerializedName("createdAt")
  private DateTime createdAt = null;

  @SerializedName("updatedAt")
  private DateTime updatedAt = null;

  public SeedCompany name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Name of the seed company.
   * @return name
  **/
  @ApiModelProperty(example = "Sensi Seeds", required = true, value = "Name of the seed company.")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public SeedCompany ocpc(String ocpc) {
    this.ocpc = ocpc;
    return this;
  }

   /**
   * Open Cannabis Product Code for the seed company.
   * @return ocpc
  **/
  @ApiModelProperty(example = "VUJCJ00000000000000000000", value = "Open Cannabis Product Code for the seed company.")
  public String getOcpc() {
    return ocpc;
  }

  public void setOcpc(String ocpc) {
    this.ocpc = ocpc;
  }

  public SeedCompany description(String description) {
    this.description = description;
    return this;
  }

   /**
   * Description of the seed company.
   * @return description
  **/
  @ApiModelProperty(value = "Description of the seed company.")
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public SeedCompany qr(String qr) {
    this.qr = qr;
    return this;
  }

   /**
   * URL for QR that leads to page on Cannabis Reports.
   * @return qr
  **/
  @ApiModelProperty(example = "https://www.cannabisreports.com/strain-reports/sensi-seeds/qr-code.svg", value = "URL for QR that leads to page on Cannabis Reports.")
  public String getQr() {
    return qr;
  }

  public void setQr(String qr) {
    this.qr = qr;
  }

  public SeedCompany url(String url) {
    this.url = url;
    return this;
  }

   /**
   * URL for seed company on Cannabis Reports.
   * @return url
  **/
  @ApiModelProperty(example = "https://www.cannabisreports.com/strain-reports/sensi-seeds", value = "URL for seed company on Cannabis Reports.")
  public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public SeedCompany image(String image) {
    this.image = image;
    return this;
  }

   /**
   * URL for logo for seed company.
   * @return image
  **/
  @ApiModelProperty(example = "https://www.cannabisreports.com/images/profile/1/full_15fda07a135540c1de6afbb38dafe2113a11a7a4.jpg", value = "URL for logo for seed company.")
  public String getImage() {
    return image;
  }

  public void setImage(String image) {
    this.image = image;
  }

  public SeedCompany lineage(Object lineage) {
    this.lineage = lineage;
    return this;
  }

   /**
   * Object of countries that this seed company has lineages from. {&#39;Country Name&#39; &#x3D;&gt; &#39;ISO 3166-1 Two Letter Country Code&#39;}
   * @return lineage
  **/
  @ApiModelProperty(example = "{\"Afghanistan\":\"AF\",\"Canada\":\"CA\",\"Colombia\":\"CO\",\"Hungary\":\"HU\",\"India\":\"IN\"}", value = "Object of countries that this seed company has lineages from. {'Country Name' => 'ISO 3166-1 Two Letter Country Code'}")
  public Object getLineage() {
    return lineage;
  }

  public void setLineage(Object lineage) {
    this.lineage = lineage;
  }

  public SeedCompany strains(List<String> strains) {
    this.strains = strains;
    return this;
  }

  public SeedCompany addStrainsItem(String strainsItem) {
    if (this.strains == null) {
      this.strains = new ArrayList<String>();
    }
    this.strains.add(strainsItem);
    return this;
  }

   /**
   * OCPCs of the strains from this seed company.
   * @return strains
  **/
  @ApiModelProperty(value = "OCPCs of the strains from this seed company.")
  public List<String> getStrains() {
    return strains;
  }

  public void setStrains(List<String> strains) {
    this.strains = strains;
  }

  public SeedCompany createdAt(DateTime createdAt) {
    this.createdAt = createdAt;
    return this;
  }

   /**
   * Date and time record was created, UTC.
   * @return createdAt
  **/
  @ApiModelProperty(example = "2014-04-09 09:29:57", value = "Date and time record was created, UTC.")
  public DateTime getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(DateTime createdAt) {
    this.createdAt = createdAt;
  }

  public SeedCompany updatedAt(DateTime updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

   /**
   * Date and time record was updated, UTC.
   * @return updatedAt
  **/
  @ApiModelProperty(example = "2014-04-09 09:29:57", value = "Date and time record was updated, UTC.")
  public DateTime getUpdatedAt() {
    return updatedAt;
  }

  public void setUpdatedAt(DateTime updatedAt) {
    this.updatedAt = updatedAt;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SeedCompany seedCompany = (SeedCompany) o;
    return Objects.equals(this.name, seedCompany.name) &&
        Objects.equals(this.ocpc, seedCompany.ocpc) &&
        Objects.equals(this.description, seedCompany.description) &&
        Objects.equals(this.qr, seedCompany.qr) &&
        Objects.equals(this.url, seedCompany.url) &&
        Objects.equals(this.image, seedCompany.image) &&
        Objects.equals(this.lineage, seedCompany.lineage) &&
        Objects.equals(this.strains, seedCompany.strains) &&
        Objects.equals(this.createdAt, seedCompany.createdAt) &&
        Objects.equals(this.updatedAt, seedCompany.updatedAt);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, ocpc, description, qr, url, image, lineage, strains, createdAt, updatedAt);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SeedCompany {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    ocpc: ").append(toIndentedString(ocpc)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    qr: ").append(toIndentedString(qr)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    image: ").append(toIndentedString(image)).append("\n");
    sb.append("    lineage: ").append(toIndentedString(lineage)).append("\n");
    sb.append("    strains: ").append(toIndentedString(strains)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
  
}

