package io.swagger.model;

import io.swagger.annotations.ApiModel;
import io.swagger.model.Pagination;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;

@ApiModel(description="Gets the current list of Extracts.")
public class InlineResponse2003Meta  {
  
  @ApiModelProperty(example = "null", value = "Gets the current list of Extracts.")
  private Pagination pagination = null;

 /**
   * Gets the current list of Extracts.
   * @return pagination
  **/
  public Pagination getPagination() {
    return pagination;
  }

  public void setPagination(Pagination pagination) {
    this.pagination = pagination;
  }

  public InlineResponse2003Meta pagination(Pagination pagination) {
    this.pagination = pagination;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2003Meta {\n");
    
    sb.append("    pagination: ").append(toIndentedString(pagination)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

