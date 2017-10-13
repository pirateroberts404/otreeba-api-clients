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

/**
 * Pagination
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-10-13T20:29:20.683Z")
public class Pagination {
  @SerializedName("total")
  private Integer total = null;

  @SerializedName("count")
  private Integer count = null;

  @SerializedName("per_page")
  private Integer perPage = null;

  @SerializedName("current_page")
  private Integer currentPage = null;

  @SerializedName("total_pages")
  private Integer totalPages = null;

  @SerializedName("links")
  private Object links = null;

  public Pagination total(Integer total) {
    this.total = total;
    return this;
  }

   /**
   * Total number of results available.
   * @return total
  **/
  @ApiModelProperty(example = "64", value = "Total number of results available.")
  public Integer getTotal() {
    return total;
  }

  public void setTotal(Integer total) {
    this.total = total;
  }

  public Pagination count(Integer count) {
    this.count = count;
    return this;
  }

   /**
   * Number of results to return. Default 10. Max 50.
   * @return count
  **/
  @ApiModelProperty(example = "10", value = "Number of results to return. Default 10. Max 50.")
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public Pagination perPage(Integer perPage) {
    this.perPage = perPage;
    return this;
  }

   /**
   * Number of results per page.
   * @return perPage
  **/
  @ApiModelProperty(example = "10", value = "Number of results per page.")
  public Integer getPerPage() {
    return perPage;
  }

  public void setPerPage(Integer perPage) {
    this.perPage = perPage;
  }

  public Pagination currentPage(Integer currentPage) {
    this.currentPage = currentPage;
    return this;
  }

   /**
   * Page of results.
   * @return currentPage
  **/
  @ApiModelProperty(example = "1", value = "Page of results.")
  public Integer getCurrentPage() {
    return currentPage;
  }

  public void setCurrentPage(Integer currentPage) {
    this.currentPage = currentPage;
  }

  public Pagination totalPages(Integer totalPages) {
    this.totalPages = totalPages;
    return this;
  }

   /**
   * Total number of pages of results.
   * @return totalPages
  **/
  @ApiModelProperty(example = "1", value = "Total number of pages of results.")
  public Integer getTotalPages() {
    return totalPages;
  }

  public void setTotalPages(Integer totalPages) {
    this.totalPages = totalPages;
  }

  public Pagination links(Object links) {
    this.links = links;
    return this;
  }

   /**
   * Links to the previous and/or next pages of results.
   * @return links
  **/
  @ApiModelProperty(example = "{\"previous\":\"https://api.otreeba.com/v1/seed-companies/VUJCJ00000000000000000000/strains?page=1\",\"next\":\"https://api.otreeba.com/v1/seed-companies/VUJCJ00000000000000000000/strains?page=3\"}", value = "Links to the previous and/or next pages of results.")
  public Object getLinks() {
    return links;
  }

  public void setLinks(Object links) {
    this.links = links;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Pagination pagination = (Pagination) o;
    return Objects.equals(this.total, pagination.total) &&
        Objects.equals(this.count, pagination.count) &&
        Objects.equals(this.perPage, pagination.perPage) &&
        Objects.equals(this.currentPage, pagination.currentPage) &&
        Objects.equals(this.totalPages, pagination.totalPages) &&
        Objects.equals(this.links, pagination.links);
  }

  @Override
  public int hashCode() {
    return Objects.hash(total, count, perPage, currentPage, totalPages, links);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Pagination {\n");
    
    sb.append("    total: ").append(toIndentedString(total)).append("\n");
    sb.append("    count: ").append(toIndentedString(count)).append("\n");
    sb.append("    perPage: ").append(toIndentedString(perPage)).append("\n");
    sb.append("    currentPage: ").append(toIndentedString(currentPage)).append("\n");
    sb.append("    totalPages: ").append(toIndentedString(totalPages)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
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

