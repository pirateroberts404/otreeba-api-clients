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

import io.swagger.client.model.Pagination;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Gets the Strains for a Seed Company listing from a given OCPC.
 **/
@ApiModel(description = "Gets the Strains for a Seed Company listing from a given OCPC.")
public class InlineResponse200Meta {
  
  @SerializedName("pagination")
  private Pagination pagination = null;

  /**
   * Gets the Strains for a Seed Company listing from a given OCPC.
   **/
  @ApiModelProperty(value = "Gets the Strains for a Seed Company listing from a given OCPC.")
  public Pagination getPagination() {
    return pagination;
  }
  public void setPagination(Pagination pagination) {
    this.pagination = pagination;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse200Meta inlineResponse200Meta = (InlineResponse200Meta) o;
    return (this.pagination == null ? inlineResponse200Meta.pagination == null : this.pagination.equals(inlineResponse200Meta.pagination));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.pagination == null ? 0: this.pagination.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse200Meta {\n");
    
    sb.append("  pagination: ").append(pagination).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
