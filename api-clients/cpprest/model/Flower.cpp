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



#include "Flower.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Flower::Flower()
{
    m_Name = U("");
    m_Ocpc = U("");
    m_OcpcIsSet = false;
    m_BrandIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_StrainIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Qr = U("");
    m_QrIsSet = false;
    m_Url = U("");
    m_UrlIsSet = false;
    m_Image = U("");
    m_ImageIsSet = false;
    m_LabTest = U("");
    m_LabTestIsSet = false;
    m_Thc = U("");
    m_ThcIsSet = false;
    m_Cbd = U("");
    m_CbdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    
}

Flower::~Flower()
{
}

void Flower::validate()
{
    // TODO: implement validation
}

web::json::value Flower::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_OcpcIsSet)
    {
        val[U("ocpc")] = ModelBase::toJson(m_Ocpc);
    }
    if(m_BrandIsSet)
    {
        val[U("brand")] = ModelBase::toJson(m_Brand);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    if(m_StrainIsSet)
    {
        val[U("strain")] = ModelBase::toJson(m_Strain);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_QrIsSet)
    {
        val[U("qr")] = ModelBase::toJson(m_Qr);
    }
    if(m_UrlIsSet)
    {
        val[U("url")] = ModelBase::toJson(m_Url);
    }
    if(m_ImageIsSet)
    {
        val[U("image")] = ModelBase::toJson(m_Image);
    }
    if(m_LabTestIsSet)
    {
        val[U("labTest")] = ModelBase::toJson(m_LabTest);
    }
    if(m_ThcIsSet)
    {
        val[U("thc")] = ModelBase::toJson(m_Thc);
    }
    if(m_CbdIsSet)
    {
        val[U("cbd")] = ModelBase::toJson(m_Cbd);
    }
    if(m_CreatedAtIsSet)
    {
        val[U("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[U("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }
    

    return val;
}

void Flower::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("ocpc")))
    {
        setOcpc(ModelBase::stringFromJson(val[U("ocpc")]));
        
    }
    if(val.has_field(U("brand")))
    {
        if(!val[U("brand")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("brand")]);
            setBrand( newItem );
        }
        
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
        
    }
    if(val.has_field(U("strain")))
    {
        if(!val[U("strain")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("strain")]);
            setStrain( newItem );
        }
        
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    if(val.has_field(U("qr")))
    {
        setQr(ModelBase::stringFromJson(val[U("qr")]));
        
    }
    if(val.has_field(U("url")))
    {
        setUrl(ModelBase::stringFromJson(val[U("url")]));
        
    }
    if(val.has_field(U("image")))
    {
        setImage(ModelBase::stringFromJson(val[U("image")]));
        
    }
    if(val.has_field(U("labTest")))
    {
        setLabTest(ModelBase::stringFromJson(val[U("labTest")]));
        
    }
    if(val.has_field(U("thc")))
    {
        setThc(ModelBase::stringFromJson(val[U("thc")]));
        
    }
    if(val.has_field(U("cbd")))
    {
        setCbd(ModelBase::stringFromJson(val[U("cbd")]));
        
    }
    if(val.has_field(U("createdAt")))
    {
        setCreatedAt(ModelBase::dateFromJson(val[U("createdAt")]));
        
    }
    if(val.has_field(U("updatedAt")))
    {
        setUpdatedAt(ModelBase::dateFromJson(val[U("updatedAt")]));
        
    }
    
}

void Flower::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_OcpcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("ocpc"), m_Ocpc));
        
    }
    if(m_BrandIsSet)
    {
        if (m_Brand.get())
        {
            m_Brand->toMultipart(multipart, U("brand."));
        }
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    if(m_StrainIsSet)
    {
        if (m_Strain.get())
        {
            m_Strain->toMultipart(multipart, U("strain."));
        }
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_QrIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("qr"), m_Qr));
        
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("url"), m_Url));
        
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("image"), m_Image));
        
    }
    if(m_LabTestIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("labTest"), m_LabTest));
        
    }
    if(m_ThcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("thc"), m_Thc));
        
    }
    if(m_CbdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("cbd"), m_Cbd));
        
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("createdAt"), m_CreatedAt));
        
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updatedAt"), m_UpdatedAt));
        
    }
    
}

void Flower::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("ocpc")))
    {
        setOcpc(ModelBase::stringFromHttpContent(multipart->getContent(U("ocpc"))));
        
    }
    if(multipart->hasContent(U("brand")))
    {
        if(multipart->hasContent(U("brand")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("brand."));
            setBrand( newItem );
        }
        
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
        
    }
    if(multipart->hasContent(U("strain")))
    {
        if(multipart->hasContent(U("strain")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("strain."));
            setStrain( newItem );
        }
        
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
        
    }
    if(multipart->hasContent(U("qr")))
    {
        setQr(ModelBase::stringFromHttpContent(multipart->getContent(U("qr"))));
        
    }
    if(multipart->hasContent(U("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("url"))));
        
    }
    if(multipart->hasContent(U("image")))
    {
        setImage(ModelBase::stringFromHttpContent(multipart->getContent(U("image"))));
        
    }
    if(multipart->hasContent(U("labTest")))
    {
        setLabTest(ModelBase::stringFromHttpContent(multipart->getContent(U("labTest"))));
        
    }
    if(multipart->hasContent(U("thc")))
    {
        setThc(ModelBase::stringFromHttpContent(multipart->getContent(U("thc"))));
        
    }
    if(multipart->hasContent(U("cbd")))
    {
        setCbd(ModelBase::stringFromHttpContent(multipart->getContent(U("cbd"))));
        
    }
    if(multipart->hasContent(U("createdAt")))
    {
        setCreatedAt(ModelBase::dateFromHttpContent(multipart->getContent(U("createdAt"))));
        
    }
    if(multipart->hasContent(U("updatedAt")))
    {
        setUpdatedAt(ModelBase::dateFromHttpContent(multipart->getContent(U("updatedAt"))));
        
    }
    
}


utility::string_t Flower::getName() const
{
    return m_Name;
}
void Flower::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t Flower::getOcpc() const
{
    return m_Ocpc;
}
void Flower::setOcpc(utility::string_t value)
{
    m_Ocpc = value;
    m_OcpcIsSet = true;
}
bool Flower::ocpcIsSet() const
{
    return m_OcpcIsSet;
}
void Flower::unsetOcpc()
{
    m_OcpcIsSet = false;
}
std::shared_ptr<Object> Flower::getBrand() const
{
    return m_Brand;
}
void Flower::setBrand(std::shared_ptr<Object> value)
{
    m_Brand = value;
    m_BrandIsSet = true;
}
bool Flower::brandIsSet() const
{
    return m_BrandIsSet;
}
void Flower::unsetBrand()
{
    m_BrandIsSet = false;
}
utility::string_t Flower::getType() const
{
    return m_Type;
}
void Flower::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool Flower::typeIsSet() const
{
    return m_TypeIsSet;
}
void Flower::unsetType()
{
    m_TypeIsSet = false;
}
std::shared_ptr<Object> Flower::getStrain() const
{
    return m_Strain;
}
void Flower::setStrain(std::shared_ptr<Object> value)
{
    m_Strain = value;
    m_StrainIsSet = true;
}
bool Flower::strainIsSet() const
{
    return m_StrainIsSet;
}
void Flower::unsetStrain()
{
    m_StrainIsSet = false;
}
utility::string_t Flower::getDescription() const
{
    return m_Description;
}
void Flower::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool Flower::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Flower::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Flower::getQr() const
{
    return m_Qr;
}
void Flower::setQr(utility::string_t value)
{
    m_Qr = value;
    m_QrIsSet = true;
}
bool Flower::qrIsSet() const
{
    return m_QrIsSet;
}
void Flower::unsetQr()
{
    m_QrIsSet = false;
}
utility::string_t Flower::getUrl() const
{
    return m_Url;
}
void Flower::setUrl(utility::string_t value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool Flower::urlIsSet() const
{
    return m_UrlIsSet;
}
void Flower::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t Flower::getImage() const
{
    return m_Image;
}
void Flower::setImage(utility::string_t value)
{
    m_Image = value;
    m_ImageIsSet = true;
}
bool Flower::imageIsSet() const
{
    return m_ImageIsSet;
}
void Flower::unsetImage()
{
    m_ImageIsSet = false;
}
utility::string_t Flower::getLabTest() const
{
    return m_LabTest;
}
void Flower::setLabTest(utility::string_t value)
{
    m_LabTest = value;
    m_LabTestIsSet = true;
}
bool Flower::labTestIsSet() const
{
    return m_LabTestIsSet;
}
void Flower::unsetLabTest()
{
    m_LabTestIsSet = false;
}
utility::string_t Flower::getThc() const
{
    return m_Thc;
}
void Flower::setThc(utility::string_t value)
{
    m_Thc = value;
    m_ThcIsSet = true;
}
bool Flower::thcIsSet() const
{
    return m_ThcIsSet;
}
void Flower::unsetThc()
{
    m_ThcIsSet = false;
}
utility::string_t Flower::getCbd() const
{
    return m_Cbd;
}
void Flower::setCbd(utility::string_t value)
{
    m_Cbd = value;
    m_CbdIsSet = true;
}
bool Flower::cbdIsSet() const
{
    return m_CbdIsSet;
}
void Flower::unsetCbd()
{
    m_CbdIsSet = false;
}
utility::datetime Flower::getCreatedAt() const
{
    return m_CreatedAt;
}
void Flower::setCreatedAt(utility::datetime value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}
bool Flower::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}
void Flower::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime Flower::getUpdatedAt() const
{
    return m_UpdatedAt;
}
void Flower::setUpdatedAt(utility::datetime value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}
bool Flower::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}
void Flower::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}

}
}
}
}

