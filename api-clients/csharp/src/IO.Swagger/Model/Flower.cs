/* 
 * Otreeba Open Cannabis API
 *
 * This is an open, canonical database of cannabis seed companies, strains, brands, products, retailers, and studies from [Otreeba](https://otreeba.com). It is written on the OpenAPI Specification AKA Swagger. You can find out more about the Open API Initiative at [https://www.openapis.org/](https://www.openapis.org), or more info on Swagger at [http://swagger.io/](http://swagger.io/).
 *
 * OpenAPI spec version: 1.0.0
 * Contact: api@otreeba.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;

namespace IO.Swagger.Model
{
    /// <summary>
    /// Flower
    /// </summary>
    [DataContract]
    public partial class Flower :  IEquatable<Flower>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Flower" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected Flower() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="Flower" /> class.
        /// </summary>
        /// <param name="Name">Name of the flowers. (required).</param>
        /// <param name="Ocpc">Open Cannabis Product Code for the flowers..</param>
        /// <param name="Brand">Name and Open Cannabis Product Code of the brand that created these flowers..</param>
        /// <param name="Type">Type of flowers..</param>
        /// <param name="Strain">Name and Open Cannabis Product Code of the strain for these flowers..</param>
        /// <param name="Description">Description of the flowers..</param>
        /// <param name="Qr">URL for QR that leads to page on Cannabis Reports..</param>
        /// <param name="Url">URL for the flowers on Cannabis Reports..</param>
        /// <param name="Image">URL for the main photo of the flowers..</param>
        /// <param name="LabTest">URL for the PDF containing lab testing information for these flowers..</param>
        /// <param name="Thc">THC measurement for these flowers..</param>
        /// <param name="Cbd">CBD measurement for these flowers..</param>
        /// <param name="CreatedAt">Date and time record was created, UTC..</param>
        /// <param name="UpdatedAt">Date and time record was updated, UTC..</param>
        public Flower(string Name = default(string), string Ocpc = default(string), Object Brand = default(Object), string Type = default(string), Object Strain = default(Object), string Description = default(string), string Qr = default(string), string Url = default(string), string Image = default(string), string LabTest = default(string), string Thc = default(string), string Cbd = default(string), DateTime? CreatedAt = default(DateTime?), DateTime? UpdatedAt = default(DateTime?))
        {
            // to ensure "Name" is required (not null)
            if (Name == null)
            {
                throw new InvalidDataException("Name is a required property for Flower and cannot be null");
            }
            else
            {
                this.Name = Name;
            }
            this.Ocpc = Ocpc;
            this.Brand = Brand;
            this.Type = Type;
            this.Strain = Strain;
            this.Description = Description;
            this.Qr = Qr;
            this.Url = Url;
            this.Image = Image;
            this.LabTest = LabTest;
            this.Thc = Thc;
            this.Cbd = Cbd;
            this.CreatedAt = CreatedAt;
            this.UpdatedAt = UpdatedAt;
        }
        
        /// <summary>
        /// Name of the flowers.
        /// </summary>
        /// <value>Name of the flowers.</value>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }
        /// <summary>
        /// Open Cannabis Product Code for the flowers.
        /// </summary>
        /// <value>Open Cannabis Product Code for the flowers.</value>
        [DataMember(Name="ocpc", EmitDefaultValue=false)]
        public string Ocpc { get; set; }
        /// <summary>
        /// Name and Open Cannabis Product Code of the brand that created these flowers.
        /// </summary>
        /// <value>Name and Open Cannabis Product Code of the brand that created these flowers.</value>
        [DataMember(Name="brand", EmitDefaultValue=false)]
        public Object Brand { get; set; }
        /// <summary>
        /// Type of flowers.
        /// </summary>
        /// <value>Type of flowers.</value>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }
        /// <summary>
        /// Name and Open Cannabis Product Code of the strain for these flowers.
        /// </summary>
        /// <value>Name and Open Cannabis Product Code of the strain for these flowers.</value>
        [DataMember(Name="strain", EmitDefaultValue=false)]
        public Object Strain { get; set; }
        /// <summary>
        /// Description of the flowers.
        /// </summary>
        /// <value>Description of the flowers.</value>
        [DataMember(Name="description", EmitDefaultValue=false)]
        public string Description { get; set; }
        /// <summary>
        /// URL for QR that leads to page on Cannabis Reports.
        /// </summary>
        /// <value>URL for QR that leads to page on Cannabis Reports.</value>
        [DataMember(Name="qr", EmitDefaultValue=false)]
        public string Qr { get; set; }
        /// <summary>
        /// URL for the flowers on Cannabis Reports.
        /// </summary>
        /// <value>URL for the flowers on Cannabis Reports.</value>
        [DataMember(Name="url", EmitDefaultValue=false)]
        public string Url { get; set; }
        /// <summary>
        /// URL for the main photo of the flowers.
        /// </summary>
        /// <value>URL for the main photo of the flowers.</value>
        [DataMember(Name="image", EmitDefaultValue=false)]
        public string Image { get; set; }
        /// <summary>
        /// URL for the PDF containing lab testing information for these flowers.
        /// </summary>
        /// <value>URL for the PDF containing lab testing information for these flowers.</value>
        [DataMember(Name="labTest", EmitDefaultValue=false)]
        public string LabTest { get; set; }
        /// <summary>
        /// THC measurement for these flowers.
        /// </summary>
        /// <value>THC measurement for these flowers.</value>
        [DataMember(Name="thc", EmitDefaultValue=false)]
        public string Thc { get; set; }
        /// <summary>
        /// CBD measurement for these flowers.
        /// </summary>
        /// <value>CBD measurement for these flowers.</value>
        [DataMember(Name="cbd", EmitDefaultValue=false)]
        public string Cbd { get; set; }
        /// <summary>
        /// Date and time record was created, UTC.
        /// </summary>
        /// <value>Date and time record was created, UTC.</value>
        [DataMember(Name="createdAt", EmitDefaultValue=false)]
        public DateTime? CreatedAt { get; set; }
        /// <summary>
        /// Date and time record was updated, UTC.
        /// </summary>
        /// <value>Date and time record was updated, UTC.</value>
        [DataMember(Name="updatedAt", EmitDefaultValue=false)]
        public DateTime? UpdatedAt { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Flower {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Ocpc: ").Append(Ocpc).Append("\n");
            sb.Append("  Brand: ").Append(Brand).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Strain: ").Append(Strain).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Qr: ").Append(Qr).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  Image: ").Append(Image).Append("\n");
            sb.Append("  LabTest: ").Append(LabTest).Append("\n");
            sb.Append("  Thc: ").Append(Thc).Append("\n");
            sb.Append("  Cbd: ").Append(Cbd).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as Flower);
        }

        /// <summary>
        /// Returns true if Flower instances are equal
        /// </summary>
        /// <param name="other">Instance of Flower to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Flower other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.Ocpc == other.Ocpc ||
                    this.Ocpc != null &&
                    this.Ocpc.Equals(other.Ocpc)
                ) && 
                (
                    this.Brand == other.Brand ||
                    this.Brand != null &&
                    this.Brand.Equals(other.Brand)
                ) && 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
                ) && 
                (
                    this.Strain == other.Strain ||
                    this.Strain != null &&
                    this.Strain.Equals(other.Strain)
                ) && 
                (
                    this.Description == other.Description ||
                    this.Description != null &&
                    this.Description.Equals(other.Description)
                ) && 
                (
                    this.Qr == other.Qr ||
                    this.Qr != null &&
                    this.Qr.Equals(other.Qr)
                ) && 
                (
                    this.Url == other.Url ||
                    this.Url != null &&
                    this.Url.Equals(other.Url)
                ) && 
                (
                    this.Image == other.Image ||
                    this.Image != null &&
                    this.Image.Equals(other.Image)
                ) && 
                (
                    this.LabTest == other.LabTest ||
                    this.LabTest != null &&
                    this.LabTest.Equals(other.LabTest)
                ) && 
                (
                    this.Thc == other.Thc ||
                    this.Thc != null &&
                    this.Thc.Equals(other.Thc)
                ) && 
                (
                    this.Cbd == other.Cbd ||
                    this.Cbd != null &&
                    this.Cbd.Equals(other.Cbd)
                ) && 
                (
                    this.CreatedAt == other.CreatedAt ||
                    this.CreatedAt != null &&
                    this.CreatedAt.Equals(other.CreatedAt)
                ) && 
                (
                    this.UpdatedAt == other.UpdatedAt ||
                    this.UpdatedAt != null &&
                    this.UpdatedAt.Equals(other.UpdatedAt)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                if (this.Ocpc != null)
                    hash = hash * 59 + this.Ocpc.GetHashCode();
                if (this.Brand != null)
                    hash = hash * 59 + this.Brand.GetHashCode();
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                if (this.Strain != null)
                    hash = hash * 59 + this.Strain.GetHashCode();
                if (this.Description != null)
                    hash = hash * 59 + this.Description.GetHashCode();
                if (this.Qr != null)
                    hash = hash * 59 + this.Qr.GetHashCode();
                if (this.Url != null)
                    hash = hash * 59 + this.Url.GetHashCode();
                if (this.Image != null)
                    hash = hash * 59 + this.Image.GetHashCode();
                if (this.LabTest != null)
                    hash = hash * 59 + this.LabTest.GetHashCode();
                if (this.Thc != null)
                    hash = hash * 59 + this.Thc.GetHashCode();
                if (this.Cbd != null)
                    hash = hash * 59 + this.Cbd.GetHashCode();
                if (this.CreatedAt != null)
                    hash = hash * 59 + this.CreatedAt.GetHashCode();
                if (this.UpdatedAt != null)
                    hash = hash * 59 + this.UpdatedAt.GetHashCode();
                return hash;
            }
        }

        public IEnumerable<ValidationResult> Validate(ValidationContext validationContext)
        { 
            yield break;
        }
    }

}
