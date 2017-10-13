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
import org.joda.time.DateTime;

/**
 * Extract
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-10-13T20:29:20.683Z")
public class Extract {
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

  @SerializedName("createdAt")
  private DateTime createdAt = null;

  @SerializedName("updatedAt")
  private DateTime updatedAt = null;

  public Extract name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Name of the extract.
   * @return name
  **/
  @ApiModelProperty(example = "Confidential Cheese - Wax", required = true, value = "Name of the extract.")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public Extract ocpc(String ocpc) {
    this.ocpc = ocpc;
    return this;
  }

   /**
   * Open Cannabis Product Code for the extract.
   * @return ocpc
  **/
  @ApiModelProperty(example = "TTUYNUF3TP6DZTPWPG3200000", value = "Open Cannabis Product Code for the extract.")
  public String getOcpc() {
    return ocpc;
  }

  public void setOcpc(String ocpc) {
    this.ocpc = ocpc;
  }

  public Extract brand(Object brand) {
    this.brand = brand;
    return this;
  }

   /**
   * Name and Open Cannabis Product Code of the brand that created these extract.
   * @return brand
  **/
  @ApiModelProperty(example = "{\"name\":\"Kaizen Medicinal\",\"ocpc\":\"00000000006DZTP0000000000\"}", value = "Name and Open Cannabis Product Code of the brand that created these extract.")
  public Object getBrand() {
    return brand;
  }

  public void setBrand(Object brand) {
    this.brand = brand;
  }

  public Extract type(String type) {
    this.type = type;
    return this;
  }

   /**
   * Type of extract.
   * @return type
  **/
  @ApiModelProperty(example = "wax", value = "Type of extract.")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public Extract strain(Object strain) {
    this.strain = strain;
    return this;
  }

   /**
   * Name and Open Cannabis Product Code of the strain for these extract.
   * @return strain
  **/
  @ApiModelProperty(example = "{\"name\":\"Confidential Cheese\",\"ocpc\":\"TTUYNUF3TP000000000000000\"}", value = "Name and Open Cannabis Product Code of the strain for these extract.")
  public Object getStrain() {
    return strain;
  }

  public void setStrain(Object strain) {
    this.strain = strain;
  }

  public Extract description(String description) {
    this.description = description;
    return this;
  }

   /**
   * Description of the extract.
   * @return description
  **/
  @ApiModelProperty(value = "Description of the extract.")
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public Extract qr(String qr) {
    this.qr = qr;
    return this;
  }

   /**
   * URL for QR that leads to page on Cannabis Reports.
   * @return qr
  **/
  @ApiModelProperty(example = "https://www.cannabisreports.com/extract-reports/qr-code/kaizen-medicinal/dna-genetics/confidential-cheese/wax.png", value = "URL for QR that leads to page on Cannabis Reports.")
  public String getQr() {
    return qr;
  }

  public void setQr(String qr) {
    this.qr = qr;
  }

  public Extract url(String url) {
    this.url = url;
    return this;
  }

   /**
   * URL for the extract on Cannabis Reports.
   * @return url
  **/
  @ApiModelProperty(example = "https://www.cannabisreports.com/extract-reports/kaizen-medicinal/dna-genetics/confidential-cheese/wax", value = "URL for the extract on Cannabis Reports.")
  public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public Extract image(String image) {
    this.image = image;
    return this;
  }

   /**
   * URL for the main photo of the extract.
   * @return image
  **/
  @ApiModelProperty(example = "https://www.cannabisreports.com/images/extracts/2/full_2172a2e37b3711da4666899be1dddc1157d60190.jpg", value = "URL for the main photo of the extract.")
  public String getImage() {
    return image;
  }

  public void setImage(String image) {
    this.image = image;
  }

  public Extract labTest(String labTest) {
    this.labTest = labTest;
    return this;
  }

   /**
   * URL for the PDF containing lab testing information for these extract.
   * @return labTest
  **/
  @ApiModelProperty(example = "https://www.cannabisreports.com/lab-tests/c/cc7b037528c7661dafde2a1e36f3c6d3ffcccb40.pdf", value = "URL for the PDF containing lab testing information for these extract.")
  public String getLabTest() {
    return labTest;
  }

  public void setLabTest(String labTest) {
    this.labTest = labTest;
  }

  public Extract thc(String thc) {
    this.thc = thc;
    return this;
  }

   /**
   * THC measurement for these extract.
   * @return thc
  **/
  @ApiModelProperty(example = "87.92%", value = "THC measurement for these extract.")
  public String getThc() {
    return thc;
  }

  public void setThc(String thc) {
    this.thc = thc;
  }

  public Extract cbd(String cbd) {
    this.cbd = cbd;
    return this;
  }

   /**
   * CBD measurement for these extract.
   * @return cbd
  **/
  @ApiModelProperty(example = "0.22%", value = "CBD measurement for these extract.")
  public String getCbd() {
    return cbd;
  }

  public void setCbd(String cbd) {
    this.cbd = cbd;
  }

  public Extract createdAt(DateTime createdAt) {
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

  public Extract updatedAt(DateTime updatedAt) {
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
    Extract extract = (Extract) o;
    return Objects.equals(this.name, extract.name) &&
        Objects.equals(this.ocpc, extract.ocpc) &&
        Objects.equals(this.brand, extract.brand) &&
        Objects.equals(this.type, extract.type) &&
        Objects.equals(this.strain, extract.strain) &&
        Objects.equals(this.description, extract.description) &&
        Objects.equals(this.qr, extract.qr) &&
        Objects.equals(this.url, extract.url) &&
        Objects.equals(this.image, extract.image) &&
        Objects.equals(this.labTest, extract.labTest) &&
        Objects.equals(this.thc, extract.thc) &&
        Objects.equals(this.cbd, extract.cbd) &&
        Objects.equals(this.createdAt, extract.createdAt) &&
        Objects.equals(this.updatedAt, extract.updatedAt);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, ocpc, brand, type, strain, description, qr, url, image, labTest, thc, cbd, createdAt, updatedAt);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Extract {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    ocpc: ").append(toIndentedString(ocpc)).append("\n");
    sb.append("    brand: ").append(toIndentedString(brand)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    strain: ").append(toIndentedString(strain)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    qr: ").append(toIndentedString(qr)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    image: ").append(toIndentedString(image)).append("\n");
    sb.append("    labTest: ").append(toIndentedString(labTest)).append("\n");
    sb.append("    thc: ").append(toIndentedString(thc)).append("\n");
    sb.append("    cbd: ").append(toIndentedString(cbd)).append("\n");
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

