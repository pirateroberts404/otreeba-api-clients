using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Gets the current list of Extracts for a Brand.
  /// </summary>
  [DataContract]
  public class InlineResponse2007Meta {
    /// <summary>
    /// Gets the current list of Extracts for a Brand.
    /// </summary>
    /// <value>Gets the current list of Extracts for a Brand.</value>
    [DataMember(Name="pagination", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "pagination")]
    public Pagination Pagination { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class InlineResponse2007Meta {\n");
      sb.Append("  Pagination: ").Append(Pagination).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
