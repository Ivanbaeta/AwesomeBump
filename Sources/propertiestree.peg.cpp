#include "propertiestree.peg.h"

#include <QFileDialog>
static QtnEnumInfo& create_COLOR_info()
{
    QVector<QtnEnumValueInfo> staticValues;
    staticValues.append(QtnEnumValueInfo(COLOR::red, "red"));
    staticValues.append(QtnEnumValueInfo(COLOR::blue, "blue"));
    staticValues.append(QtnEnumValueInfo(COLOR::green, "green"));
    
    static QtnEnumInfo enumInfo("COLOR", staticValues);
    return enumInfo;
}

const QtnEnumInfo& COLOR::info()
{
    static QtnEnumInfo& enumInfo = create_COLOR_info();
    return enumInfo;
}
static QtnEnumInfo& create_FLAGS_info()
{
    QVector<QtnEnumValueInfo> staticValues;
    staticValues.append(QtnEnumValueInfo(FLAGS::opt1, "Option1"));
    staticValues.append(QtnEnumValueInfo(FLAGS::opt2, "Option2"));
    staticValues.append(QtnEnumValueInfo(FLAGS::opt3, "Option3"));
    
    static QtnEnumInfo enumInfo("FLAGS", staticValues);
    return enumInfo;
}

const QtnEnumInfo& FLAGS::info()
{
    static QtnEnumInfo& enumInfo = create_FLAGS_info();
    return enumInfo;
}
static QtnEnumInfo& create_SHADINGMODEL_info()
{
    QVector<QtnEnumValueInfo> staticValues;
    staticValues.append(QtnEnumValueInfo(SHADINGMODEL::pbr, "PBR shading"));
    staticValues.append(QtnEnumValueInfo(SHADINGMODEL::bumpMapping, "Bump mapping"));
    
    static QtnEnumInfo enumInfo("SHADINGMODEL", staticValues);
    return enumInfo;
}

const QtnEnumInfo& SHADINGMODEL::info()
{
    static QtnEnumInfo& enumInfo = create_SHADINGMODEL_info();
    return enumInfo;
}
static QtnEnumInfo& create_BLENDINGMODE_info()
{
    QVector<QtnEnumValueInfo> staticValues;
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendNormal, "Normal"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendMultiply, "Multiply"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendAdd, "Add"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendSubtract, "Subtract"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendDifference, "Difference"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendDivide, "Divide"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendScreen, "Screen"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendOverlay, "Overlay"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendDodge, "Dodge"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendBurn, "Burn"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendDarkenOnly, "Darken Only"));
    staticValues.append(QtnEnumValueInfo(BLENDINGMODE::blendLightenOnly, "Lighten Only"));
    
    static QtnEnumInfo enumInfo("BLENDINGMODE", staticValues);
    return enumInfo;
}

const QtnEnumInfo& BLENDINGMODE::info()
{
    static QtnEnumInfo& enumInfo = create_BLENDINGMODE_info();
    return enumInfo;
}
static QtnEnumInfo& create_INPUTIMAGE_info()
{
    QVector<QtnEnumValueInfo> staticValues;
    staticValues.append(QtnEnumValueInfo(INPUTIMAGE::inputCurrent, "Current image"));
    staticValues.append(QtnEnumValueInfo(INPUTIMAGE::inputHeightInput, "Height (Input)"));
    staticValues.append(QtnEnumValueInfo(INPUTIMAGE::inputHeightOutput, "Height (Output)"));
    
    static QtnEnumInfo enumInfo("INPUTIMAGE", staticValues);
    return enumInfo;
}

const QtnEnumInfo& INPUTIMAGE::info()
{
    static QtnEnumInfo& enumInfo = create_INPUTIMAGE_info();
    return enumInfo;
}

QtnPropertySetFormImageProp::QtnPropertySetFormImageProp(QObject* parent)
    : QtnPropertySet(parent)
    , GrungeRadius(*new QtnPropertyInt(this))
    , GrungeOverallWeight(*new QtnPropertyInt(this))
    , GrungeSeed(*new QtnPropertyInt(this))
    , GrungeNormalWarp(*new QtnPropertyInt(this))
    , GrungeImageWeight(*new QtnPropertyInt(this))
    , GrungeMainImageWeight(*new QtnPropertyInt(this))
    , ConversionHNDepth(*new QtnPropertyInt(this))
    , NormalMixerAngle(*new QtnPropertyInt(this))
    , NormalMixerScale(*new QtnPropertyInt(this))
    , NormalMixerPosX(*new QtnPropertyInt(this))
    , NormalMixerPosY(*new QtnPropertyInt(this))
    , NormalMixerDepth(*new QtnPropertyInt(this))
    , SSAONoIters(*new QtnPropertyInt(this))
    , SSAODepth(*new QtnPropertyInt(this))
    , SSAOIntensity(*new QtnPropertyInt(this))
    , SSAOBias(*new QtnPropertyInt(this))
    , RoughnessDepth(*new QtnPropertyInt(this))
    , RoughnessTreshold(*new QtnPropertyInt(this))
    , RoughnessAmplifier(*new QtnPropertyInt(this))
    , RoughnessColorOffset(*new QtnPropertyInt(this))
    , RoughnessColorAmplifier(*new QtnPropertyInt(this))
    , RoughnessColorGlobalOffset(*new QtnPropertyInt(this))
    , NormalToHeightItersLarge(*new QtnPropertyInt(this))
    , NormalToHeightItersVerySmall(*new QtnPropertyInt(this))
    , NormalToHeightItersSmall(*new QtnPropertyInt(this))
    , NormalToHeightItersVeryLarge(*new QtnPropertyInt(this))
    , NormalToHeightItersMedium(*new QtnPropertyInt(this))
    , NormalToHeightItersHuge(*new QtnPropertyInt(this))
    , GrayScaleR(*new QtnPropertyInt(this))
    , GrayScaleG(*new QtnPropertyInt(this))
    , GrayScaleB(*new QtnPropertyInt(this))
    , RemoveShadingLFBlending(*new QtnPropertyInt(this))
    , RemoveShadingLFRadius(*new QtnPropertyInt(this))
    , RemoveShadingGaussIter(*new QtnPropertyInt(this))
    , AOCancelation(*new QtnPropertyInt(this))
    , BlurNoPasses(*new QtnPropertyInt(this))
    , DetailDepth(*new QtnPropertyInt(this))
    , NormalsStep(*new QtnPropertyInt(this))
    , ColorHue(*new QtnPropertyInt(this))
    , SharpenBlur(*new QtnPropertyInt(this))
    , MediumDetails(*new QtnPropertyInt(this))
    , SmallDetails(*new QtnPropertyInt(this))
    , HeightAveRadius(*new QtnPropertyInt(this))
    , HeightProcMinValue(*new QtnPropertyInt(this))
    , HeightProcMaxValue(*new QtnPropertyInt(this))
    , HeightOffsetValue(*new QtnPropertyInt(this))
    , SpeculatW1(*new QtnPropertyInt(this))
    , SpecularW2(*new QtnPropertyInt(this))
    , SpecularRadius(*new QtnPropertyInt(this))
    , SpecularContrast(*new QtnPropertyInt(this))
    , SpecularAmplifier(*new QtnPropertyInt(this))
    , SpecularBrightness(*new QtnPropertyInt(this))
    , SelectiveBlurMaskRadius(*new QtnPropertyInt(this))
    , SelectiveBlurBlending(*new QtnPropertyInt(this))
    , SelectiveBlurNoIters(*new QtnPropertyInt(this))
    , SelectiveBlurDOGRadius(*new QtnPropertyInt(this))
    , SelectiveBlurDOGContrast(*new QtnPropertyInt(this))
    , SelectiveBlurDOGAmplifier(*new QtnPropertyInt(this))
    , SelectiveBlurDOGOffset(*new QtnPropertyInt(this))
    , SelectiveBlurMinValue(*new QtnPropertyInt(this))
    , SelectiveBlurMaxValue(*new QtnPropertyInt(this))
    , SelectiveBlurDetails(*new QtnPropertyInt(this))
    , SelectiveBlurOffset(*new QtnPropertyInt(this))
    , BaseToOthersAngleCorrection(*new QtnPropertyInt(this))
    , BaseToOthersAngleWeight(*new QtnPropertyInt(this))
{
    init();
    connectSlots();
    connectDelegates();
}

QtnPropertySetFormImageProp::~QtnPropertySetFormImageProp()
{
    disconnectSlots();
}

QtnPropertySetFormImageProp& QtnPropertySetFormImageProp::operator=(const QtnPropertySetFormImageProp& other)
{
    GrungeRadius = other.GrungeRadius;
    GrungeOverallWeight = other.GrungeOverallWeight;
    GrungeSeed = other.GrungeSeed;
    GrungeNormalWarp = other.GrungeNormalWarp;
    GrungeImageWeight = other.GrungeImageWeight;
    GrungeMainImageWeight = other.GrungeMainImageWeight;
    ConversionHNDepth = other.ConversionHNDepth;
    NormalMixerAngle = other.NormalMixerAngle;
    NormalMixerScale = other.NormalMixerScale;
    NormalMixerPosX = other.NormalMixerPosX;
    NormalMixerPosY = other.NormalMixerPosY;
    NormalMixerDepth = other.NormalMixerDepth;
    SSAONoIters = other.SSAONoIters;
    SSAODepth = other.SSAODepth;
    SSAOIntensity = other.SSAOIntensity;
    SSAOBias = other.SSAOBias;
    RoughnessDepth = other.RoughnessDepth;
    RoughnessTreshold = other.RoughnessTreshold;
    RoughnessAmplifier = other.RoughnessAmplifier;
    RoughnessColorOffset = other.RoughnessColorOffset;
    RoughnessColorAmplifier = other.RoughnessColorAmplifier;
    RoughnessColorGlobalOffset = other.RoughnessColorGlobalOffset;
    NormalToHeightItersLarge = other.NormalToHeightItersLarge;
    NormalToHeightItersVerySmall = other.NormalToHeightItersVerySmall;
    NormalToHeightItersSmall = other.NormalToHeightItersSmall;
    NormalToHeightItersVeryLarge = other.NormalToHeightItersVeryLarge;
    NormalToHeightItersMedium = other.NormalToHeightItersMedium;
    NormalToHeightItersHuge = other.NormalToHeightItersHuge;
    GrayScaleR = other.GrayScaleR;
    GrayScaleG = other.GrayScaleG;
    GrayScaleB = other.GrayScaleB;
    RemoveShadingLFBlending = other.RemoveShadingLFBlending;
    RemoveShadingLFRadius = other.RemoveShadingLFRadius;
    RemoveShadingGaussIter = other.RemoveShadingGaussIter;
    AOCancelation = other.AOCancelation;
    BlurNoPasses = other.BlurNoPasses;
    DetailDepth = other.DetailDepth;
    NormalsStep = other.NormalsStep;
    ColorHue = other.ColorHue;
    SharpenBlur = other.SharpenBlur;
    MediumDetails = other.MediumDetails;
    SmallDetails = other.SmallDetails;
    HeightAveRadius = other.HeightAveRadius;
    HeightProcMinValue = other.HeightProcMinValue;
    HeightProcMaxValue = other.HeightProcMaxValue;
    HeightOffsetValue = other.HeightOffsetValue;
    SpeculatW1 = other.SpeculatW1;
    SpecularW2 = other.SpecularW2;
    SpecularRadius = other.SpecularRadius;
    SpecularContrast = other.SpecularContrast;
    SpecularAmplifier = other.SpecularAmplifier;
    SpecularBrightness = other.SpecularBrightness;
    SelectiveBlurMaskRadius = other.SelectiveBlurMaskRadius;
    SelectiveBlurBlending = other.SelectiveBlurBlending;
    SelectiveBlurNoIters = other.SelectiveBlurNoIters;
    SelectiveBlurDOGRadius = other.SelectiveBlurDOGRadius;
    SelectiveBlurDOGContrast = other.SelectiveBlurDOGContrast;
    SelectiveBlurDOGAmplifier = other.SelectiveBlurDOGAmplifier;
    SelectiveBlurDOGOffset = other.SelectiveBlurDOGOffset;
    SelectiveBlurMinValue = other.SelectiveBlurMinValue;
    SelectiveBlurMaxValue = other.SelectiveBlurMaxValue;
    SelectiveBlurDetails = other.SelectiveBlurDetails;
    SelectiveBlurOffset = other.SelectiveBlurOffset;
    BaseToOthersAngleCorrection = other.BaseToOthersAngleCorrection;
    BaseToOthersAngleWeight = other.BaseToOthersAngleWeight;

    return *this;
}

QtnPropertySet* QtnPropertySetFormImageProp::createNewImpl(QObject* parentForNew) const
{
    return new QtnPropertySetFormImageProp(parentForNew);
}

QtnPropertySet* QtnPropertySetFormImageProp::createCopyImpl(QObject* parentForCopy) const
{
    QtnPropertySetFormImageProp* p = new QtnPropertySetFormImageProp(parentForCopy);
    *p = *this;
    return p;
}

bool QtnPropertySetFormImageProp::copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask)
{
    QtnPropertySetFormImageProp* theCopyFrom = qobject_cast<QtnPropertySetFormImageProp*>(propertySetCopyFrom);
    if (!theCopyFrom)
        return false;

    if (!(theCopyFrom->GrungeRadius.state() & ignoreMask))
    {
        GrungeRadius = theCopyFrom->GrungeRadius;
    }

    if (!(theCopyFrom->GrungeOverallWeight.state() & ignoreMask))
    {
        GrungeOverallWeight = theCopyFrom->GrungeOverallWeight;
    }

    if (!(theCopyFrom->GrungeSeed.state() & ignoreMask))
    {
        GrungeSeed = theCopyFrom->GrungeSeed;
    }

    if (!(theCopyFrom->GrungeNormalWarp.state() & ignoreMask))
    {
        GrungeNormalWarp = theCopyFrom->GrungeNormalWarp;
    }

    if (!(theCopyFrom->GrungeImageWeight.state() & ignoreMask))
    {
        GrungeImageWeight = theCopyFrom->GrungeImageWeight;
    }

    if (!(theCopyFrom->GrungeMainImageWeight.state() & ignoreMask))
    {
        GrungeMainImageWeight = theCopyFrom->GrungeMainImageWeight;
    }

    if (!(theCopyFrom->ConversionHNDepth.state() & ignoreMask))
    {
        ConversionHNDepth = theCopyFrom->ConversionHNDepth;
    }

    if (!(theCopyFrom->NormalMixerAngle.state() & ignoreMask))
    {
        NormalMixerAngle = theCopyFrom->NormalMixerAngle;
    }

    if (!(theCopyFrom->NormalMixerScale.state() & ignoreMask))
    {
        NormalMixerScale = theCopyFrom->NormalMixerScale;
    }

    if (!(theCopyFrom->NormalMixerPosX.state() & ignoreMask))
    {
        NormalMixerPosX = theCopyFrom->NormalMixerPosX;
    }

    if (!(theCopyFrom->NormalMixerPosY.state() & ignoreMask))
    {
        NormalMixerPosY = theCopyFrom->NormalMixerPosY;
    }

    if (!(theCopyFrom->NormalMixerDepth.state() & ignoreMask))
    {
        NormalMixerDepth = theCopyFrom->NormalMixerDepth;
    }

    if (!(theCopyFrom->SSAONoIters.state() & ignoreMask))
    {
        SSAONoIters = theCopyFrom->SSAONoIters;
    }

    if (!(theCopyFrom->SSAODepth.state() & ignoreMask))
    {
        SSAODepth = theCopyFrom->SSAODepth;
    }

    if (!(theCopyFrom->SSAOIntensity.state() & ignoreMask))
    {
        SSAOIntensity = theCopyFrom->SSAOIntensity;
    }

    if (!(theCopyFrom->SSAOBias.state() & ignoreMask))
    {
        SSAOBias = theCopyFrom->SSAOBias;
    }

    if (!(theCopyFrom->RoughnessDepth.state() & ignoreMask))
    {
        RoughnessDepth = theCopyFrom->RoughnessDepth;
    }

    if (!(theCopyFrom->RoughnessTreshold.state() & ignoreMask))
    {
        RoughnessTreshold = theCopyFrom->RoughnessTreshold;
    }

    if (!(theCopyFrom->RoughnessAmplifier.state() & ignoreMask))
    {
        RoughnessAmplifier = theCopyFrom->RoughnessAmplifier;
    }

    if (!(theCopyFrom->RoughnessColorOffset.state() & ignoreMask))
    {
        RoughnessColorOffset = theCopyFrom->RoughnessColorOffset;
    }

    if (!(theCopyFrom->RoughnessColorAmplifier.state() & ignoreMask))
    {
        RoughnessColorAmplifier = theCopyFrom->RoughnessColorAmplifier;
    }

    if (!(theCopyFrom->RoughnessColorGlobalOffset.state() & ignoreMask))
    {
        RoughnessColorGlobalOffset = theCopyFrom->RoughnessColorGlobalOffset;
    }

    if (!(theCopyFrom->NormalToHeightItersLarge.state() & ignoreMask))
    {
        NormalToHeightItersLarge = theCopyFrom->NormalToHeightItersLarge;
    }

    if (!(theCopyFrom->NormalToHeightItersVerySmall.state() & ignoreMask))
    {
        NormalToHeightItersVerySmall = theCopyFrom->NormalToHeightItersVerySmall;
    }

    if (!(theCopyFrom->NormalToHeightItersSmall.state() & ignoreMask))
    {
        NormalToHeightItersSmall = theCopyFrom->NormalToHeightItersSmall;
    }

    if (!(theCopyFrom->NormalToHeightItersVeryLarge.state() & ignoreMask))
    {
        NormalToHeightItersVeryLarge = theCopyFrom->NormalToHeightItersVeryLarge;
    }

    if (!(theCopyFrom->NormalToHeightItersMedium.state() & ignoreMask))
    {
        NormalToHeightItersMedium = theCopyFrom->NormalToHeightItersMedium;
    }

    if (!(theCopyFrom->NormalToHeightItersHuge.state() & ignoreMask))
    {
        NormalToHeightItersHuge = theCopyFrom->NormalToHeightItersHuge;
    }

    if (!(theCopyFrom->GrayScaleR.state() & ignoreMask))
    {
        GrayScaleR = theCopyFrom->GrayScaleR;
    }

    if (!(theCopyFrom->GrayScaleG.state() & ignoreMask))
    {
        GrayScaleG = theCopyFrom->GrayScaleG;
    }

    if (!(theCopyFrom->GrayScaleB.state() & ignoreMask))
    {
        GrayScaleB = theCopyFrom->GrayScaleB;
    }

    if (!(theCopyFrom->RemoveShadingLFBlending.state() & ignoreMask))
    {
        RemoveShadingLFBlending = theCopyFrom->RemoveShadingLFBlending;
    }

    if (!(theCopyFrom->RemoveShadingLFRadius.state() & ignoreMask))
    {
        RemoveShadingLFRadius = theCopyFrom->RemoveShadingLFRadius;
    }

    if (!(theCopyFrom->RemoveShadingGaussIter.state() & ignoreMask))
    {
        RemoveShadingGaussIter = theCopyFrom->RemoveShadingGaussIter;
    }

    if (!(theCopyFrom->AOCancelation.state() & ignoreMask))
    {
        AOCancelation = theCopyFrom->AOCancelation;
    }

    if (!(theCopyFrom->BlurNoPasses.state() & ignoreMask))
    {
        BlurNoPasses = theCopyFrom->BlurNoPasses;
    }

    if (!(theCopyFrom->DetailDepth.state() & ignoreMask))
    {
        DetailDepth = theCopyFrom->DetailDepth;
    }

    if (!(theCopyFrom->NormalsStep.state() & ignoreMask))
    {
        NormalsStep = theCopyFrom->NormalsStep;
    }

    if (!(theCopyFrom->ColorHue.state() & ignoreMask))
    {
        ColorHue = theCopyFrom->ColorHue;
    }

    if (!(theCopyFrom->SharpenBlur.state() & ignoreMask))
    {
        SharpenBlur = theCopyFrom->SharpenBlur;
    }

    if (!(theCopyFrom->MediumDetails.state() & ignoreMask))
    {
        MediumDetails = theCopyFrom->MediumDetails;
    }

    if (!(theCopyFrom->SmallDetails.state() & ignoreMask))
    {
        SmallDetails = theCopyFrom->SmallDetails;
    }

    if (!(theCopyFrom->HeightAveRadius.state() & ignoreMask))
    {
        HeightAveRadius = theCopyFrom->HeightAveRadius;
    }

    if (!(theCopyFrom->HeightProcMinValue.state() & ignoreMask))
    {
        HeightProcMinValue = theCopyFrom->HeightProcMinValue;
    }

    if (!(theCopyFrom->HeightProcMaxValue.state() & ignoreMask))
    {
        HeightProcMaxValue = theCopyFrom->HeightProcMaxValue;
    }

    if (!(theCopyFrom->HeightOffsetValue.state() & ignoreMask))
    {
        HeightOffsetValue = theCopyFrom->HeightOffsetValue;
    }

    if (!(theCopyFrom->SpeculatW1.state() & ignoreMask))
    {
        SpeculatW1 = theCopyFrom->SpeculatW1;
    }

    if (!(theCopyFrom->SpecularW2.state() & ignoreMask))
    {
        SpecularW2 = theCopyFrom->SpecularW2;
    }

    if (!(theCopyFrom->SpecularRadius.state() & ignoreMask))
    {
        SpecularRadius = theCopyFrom->SpecularRadius;
    }

    if (!(theCopyFrom->SpecularContrast.state() & ignoreMask))
    {
        SpecularContrast = theCopyFrom->SpecularContrast;
    }

    if (!(theCopyFrom->SpecularAmplifier.state() & ignoreMask))
    {
        SpecularAmplifier = theCopyFrom->SpecularAmplifier;
    }

    if (!(theCopyFrom->SpecularBrightness.state() & ignoreMask))
    {
        SpecularBrightness = theCopyFrom->SpecularBrightness;
    }

    if (!(theCopyFrom->SelectiveBlurMaskRadius.state() & ignoreMask))
    {
        SelectiveBlurMaskRadius = theCopyFrom->SelectiveBlurMaskRadius;
    }

    if (!(theCopyFrom->SelectiveBlurBlending.state() & ignoreMask))
    {
        SelectiveBlurBlending = theCopyFrom->SelectiveBlurBlending;
    }

    if (!(theCopyFrom->SelectiveBlurNoIters.state() & ignoreMask))
    {
        SelectiveBlurNoIters = theCopyFrom->SelectiveBlurNoIters;
    }

    if (!(theCopyFrom->SelectiveBlurDOGRadius.state() & ignoreMask))
    {
        SelectiveBlurDOGRadius = theCopyFrom->SelectiveBlurDOGRadius;
    }

    if (!(theCopyFrom->SelectiveBlurDOGContrast.state() & ignoreMask))
    {
        SelectiveBlurDOGContrast = theCopyFrom->SelectiveBlurDOGContrast;
    }

    if (!(theCopyFrom->SelectiveBlurDOGAmplifier.state() & ignoreMask))
    {
        SelectiveBlurDOGAmplifier = theCopyFrom->SelectiveBlurDOGAmplifier;
    }

    if (!(theCopyFrom->SelectiveBlurDOGOffset.state() & ignoreMask))
    {
        SelectiveBlurDOGOffset = theCopyFrom->SelectiveBlurDOGOffset;
    }

    if (!(theCopyFrom->SelectiveBlurMinValue.state() & ignoreMask))
    {
        SelectiveBlurMinValue = theCopyFrom->SelectiveBlurMinValue;
    }

    if (!(theCopyFrom->SelectiveBlurMaxValue.state() & ignoreMask))
    {
        SelectiveBlurMaxValue = theCopyFrom->SelectiveBlurMaxValue;
    }

    if (!(theCopyFrom->SelectiveBlurDetails.state() & ignoreMask))
    {
        SelectiveBlurDetails = theCopyFrom->SelectiveBlurDetails;
    }

    if (!(theCopyFrom->SelectiveBlurOffset.state() & ignoreMask))
    {
        SelectiveBlurOffset = theCopyFrom->SelectiveBlurOffset;
    }

    if (!(theCopyFrom->BaseToOthersAngleCorrection.state() & ignoreMask))
    {
        BaseToOthersAngleCorrection = theCopyFrom->BaseToOthersAngleCorrection;
    }

    if (!(theCopyFrom->BaseToOthersAngleWeight.state() & ignoreMask))
    {
        BaseToOthersAngleWeight = theCopyFrom->BaseToOthersAngleWeight;
    }

    return true;
}

void QtnPropertySetFormImageProp::init()
{
    static QString FormImageProp_name = tr("FormImageProp");
    setName(FormImageProp_name);
    
    // start children initialization
    static QString GrungeRadius_name = tr("GrungeRadius");
    GrungeRadius.setName(GrungeRadius_name);
    static QString GrungeRadius_description = "<html><head/><body><p>It scales the UVs of generated random image. Value 1 is 	neutral.</p></body></html>";
    GrungeRadius.setDescription(GrungeRadius_description);
    GrungeRadius.setMaxValue(100);
    GrungeRadius.setMinValue(1);
    GrungeRadius.setStepValue(0);
    GrungeRadius.setValue(1);
    static QString GrungeOverallWeight_name = tr("GrungeOverallWeight");
    GrungeOverallWeight.setName(GrungeOverallWeight_name);
    static QString GrungeOverallWeight_description = "<html><head/><body><p>Set common blending weight factor for all textures 	blending.</p></body></html>";
    GrungeOverallWeight.setDescription(GrungeOverallWeight_description);
    GrungeOverallWeight.setMaxValue(100);
    GrungeOverallWeight.setMinValue(0);
    GrungeOverallWeight.setStepValue(0);
    GrungeOverallWeight.setValue(0);
    static QString GrungeSeed_name = tr("GrungeSeed");
    GrungeSeed.setName(GrungeSeed_name);
    static QString GrungeSeed_description = "<html><head/><body><p>When 0 - use orginal image, otherwise generate random 	seamless image. </p></body></html>";
    GrungeSeed.setDescription(GrungeSeed_description);
    GrungeSeed.setMaxValue(100);
    GrungeSeed.setMinValue(0);
    GrungeSeed.setStepValue(0);
    GrungeSeed.setValue(0);
    static QString GrungeNormalWarp_name = tr("GrungeNormalWarp");
    GrungeNormalWarp.setName(GrungeNormalWarp_name);
    static QString GrungeNormalWarp_description = "<html><head/><body><p>Warps grunge texture pixels along normals of normal 	texture.</p></body></html>";
    GrungeNormalWarp.setDescription(GrungeNormalWarp_description);
    GrungeNormalWarp.setMaxValue(100);
    GrungeNormalWarp.setMinValue(-100);
    GrungeNormalWarp.setStepValue(0);
    GrungeNormalWarp.setValue(0);
    static QString GrungeImageWeight_name = tr("GrungeImageWeight");
    GrungeImageWeight.setName(GrungeImageWeight_name);
    static QString GrungeImageWeight_description = "<html><head/><body><p>This is blending factor for grunge image. 0 - no grunge.</p	></body></html>";
    GrungeImageWeight.setDescription(GrungeImageWeight_description);
    GrungeImageWeight.setMaxValue(100);
    GrungeImageWeight.setMinValue(0);
    GrungeImageWeight.setStepValue(0);
    GrungeImageWeight.setValue(0);
    static QString GrungeMainImageWeight_name = tr("GrungeMainImageWeight");
    GrungeMainImageWeight.setName(GrungeMainImageWeight_name);
    static QString GrungeMainImageWeight_description = "<html><head/><body><p>This is blending factor for this image. 0 - no grunge.</p><	/body></html>";
    GrungeMainImageWeight.setDescription(GrungeMainImageWeight_description);
    GrungeMainImageWeight.setMaxValue(100);
    GrungeMainImageWeight.setMinValue(0);
    GrungeMainImageWeight.setStepValue(0);
    GrungeMainImageWeight.setValue(0);
    static QString ConversionHNDepth_name = tr("ConversionHNDepth");
    ConversionHNDepth.setName(ConversionHNDepth_name);
    static QString ConversionHNDepth_description = "<html><head/><body><p>It changes the depth of the calculated normal map in pixels 	unit.</p><p>For example: lets assume that you have picture of wall of size 1x1 m<span style=\" 	vertical-align:super;\">2 </span> in real world with bricks pattern and your image has size 	1024x1024 pixels. Then you want to generate normals for texture which depth is 3cm = 0.03 m. So the 	depth in pixels is 0.03*1024 = 30.72 ~ 31 pixels. </p></body></html>";
    ConversionHNDepth.setDescription(ConversionHNDepth_description);
    ConversionHNDepth.setMaxValue(500);
    ConversionHNDepth.setMinValue(0);
    ConversionHNDepth.setStepValue(1);
    ConversionHNDepth.setValue(20);
    static QString NormalMixerAngle_name = tr("NormalMixerAngle");
    NormalMixerAngle.setName(NormalMixerAngle_name);
    static QString NormalMixerAngle_description = "";
    NormalMixerAngle.setDescription(NormalMixerAngle_description);
    NormalMixerAngle.setMaxValue(99);
    NormalMixerAngle.setMinValue(-180);
    NormalMixerAngle.setStepValue(0);
    NormalMixerAngle.setValue(0);
    static QString NormalMixerScale_name = tr("NormalMixerScale");
    NormalMixerScale.setName(NormalMixerScale_name);
    static QString NormalMixerScale_description = "";
    NormalMixerScale.setDescription(NormalMixerScale_description);
    NormalMixerScale.setMaxValue(100);
    NormalMixerScale.setMinValue(0);
    NormalMixerScale.setStepValue(0);
    NormalMixerScale.setValue(10);
    static QString NormalMixerPosX_name = tr("NormalMixerPosX");
    NormalMixerPosX.setName(NormalMixerPosX_name);
    static QString NormalMixerPosX_description = "";
    NormalMixerPosX.setDescription(NormalMixerPosX_description);
    NormalMixerPosX.setMaxValue(100);
    NormalMixerPosX.setMinValue(-100);
    NormalMixerPosX.setStepValue(0);
    NormalMixerPosX.setValue(0);
    static QString NormalMixerPosY_name = tr("NormalMixerPosY");
    NormalMixerPosY.setName(NormalMixerPosY_name);
    static QString NormalMixerPosY_description = "";
    NormalMixerPosY.setDescription(NormalMixerPosY_description);
    NormalMixerPosY.setMaxValue(100);
    NormalMixerPosY.setMinValue(-100);
    NormalMixerPosY.setStepValue(0);
    NormalMixerPosY.setValue(0);
    static QString NormalMixerDepth_name = tr("NormalMixerDepth");
    NormalMixerDepth.setName(NormalMixerDepth_name);
    static QString NormalMixerDepth_description = "";
    NormalMixerDepth.setDescription(NormalMixerDepth_description);
    NormalMixerDepth.setMaxValue(200);
    NormalMixerDepth.setMinValue(-200);
    NormalMixerDepth.setStepValue(0);
    NormalMixerDepth.setValue(0);
    static QString SSAONoIters_name = tr("SSAONoIters");
    SSAONoIters.setName(SSAONoIters_name);
    static QString SSAONoIters_description = "<html><head/><body><p>Radius of the mask. Large number will lead to poor 	performance. For small images (about 1024x1024) this should not be a problem, but for larger you 	should use this parameter carefully.</p></body></html>";
    SSAONoIters.setDescription(SSAONoIters_description);
    SSAONoIters.setMaxValue(50);
    SSAONoIters.setMinValue(1);
    SSAONoIters.setStepValue(0);
    SSAONoIters.setValue(4);
    static QString SSAODepth_name = tr("SSAODepth");
    SSAODepth.setName(SSAODepth_name);
    static QString SSAODepth_description = "It changes the scale of the effect. ";
    SSAODepth.setDescription(SSAODepth_description);
    SSAODepth.setMaxValue(100);
    SSAODepth.setMinValue(1);
    SSAODepth.setStepValue(0);
    SSAODepth.setValue(1);
    static QString SSAOIntensity_name = tr("SSAOIntensity");
    SSAOIntensity.setName(SSAOIntensity_name);
    static QString SSAOIntensity_description = "It changes the contrast of the image. ";
    SSAOIntensity.setDescription(SSAOIntensity_description);
    SSAOIntensity.setMaxValue(500);
    SSAOIntensity.setMinValue(0);
    SSAOIntensity.setStepValue(0);
    SSAOIntensity.setValue(100);
    static QString SSAOBias_name = tr("SSAOBias");
    SSAOBias.setName(SSAOBias_name);
    static QString SSAOBias_description = "This again allows you to control the contrast of the image.";
    SSAOBias.setDescription(SSAOBias_description);
    SSAOBias.setMaxValue(400);
    SSAOBias.setMinValue(-400);
    SSAOBias.setStepValue(0);
    SSAOBias.setValue(0);
    static QString RoughnessDepth_name = tr("RoughnessDepth");
    RoughnessDepth.setName(RoughnessDepth_name);
    static QString RoughnessDepth_description = "<html><head/><body><p>Changes range of the effect.</p></body></html>";
    RoughnessDepth.setDescription(RoughnessDepth_description);
    RoughnessDepth.setMaxValue(100);
    RoughnessDepth.setMinValue(0);
    RoughnessDepth.setStepValue(0);
    RoughnessDepth.setValue(0);
    static QString RoughnessTreshold_name = tr("RoughnessTreshold");
    RoughnessTreshold.setName(RoughnessTreshold_name);
    static QString RoughnessTreshold_description = "<html><head/><body><p>Basically it sets the cutoff level of roughness. Lower 	values will lead to higher rgouhness level.</p></body></html>";
    RoughnessTreshold.setDescription(RoughnessTreshold_description);
    RoughnessTreshold.setMaxValue(255);
    RoughnessTreshold.setMinValue(-255);
    RoughnessTreshold.setStepValue(0);
    RoughnessTreshold.setValue(0);
    static QString RoughnessAmplifier_name = tr("RoughnessAmplifier");
    RoughnessAmplifier.setName(RoughnessAmplifier_name);
    static QString RoughnessAmplifier_description = "<html><head/><body><p>Amplifies the effect.</p></body></html>";
    RoughnessAmplifier.setDescription(RoughnessAmplifier_description);
    RoughnessAmplifier.setMaxValue(100);
    RoughnessAmplifier.setMinValue(-100);
    RoughnessAmplifier.setStepValue(0);
    RoughnessAmplifier.setValue(0);
    static QString RoughnessColorOffset_name = tr("RoughnessColorOffset");
    RoughnessColorOffset.setName(RoughnessColorOffset_name);
    static QString RoughnessColorOffset_description = "Offset value of color comparison test";
    RoughnessColorOffset.setDescription(RoughnessColorOffset_description);
    RoughnessColorOffset.setMaxValue(100);
    RoughnessColorOffset.setMinValue(-100);
    RoughnessColorOffset.setStepValue(0);
    RoughnessColorOffset.setValue(0);
    static QString RoughnessColorAmplifier_name = tr("RoughnessColorAmplifier");
    RoughnessColorAmplifier.setName(RoughnessColorAmplifier_name);
    static QString RoughnessColorAmplifier_description = "Amplify effect";
    RoughnessColorAmplifier.setDescription(RoughnessColorAmplifier_description);
    RoughnessColorAmplifier.setMaxValue(100);
    RoughnessColorAmplifier.setMinValue(-100);
    RoughnessColorAmplifier.setStepValue(0);
    RoughnessColorAmplifier.setValue(0);
    static QString RoughnessColorGlobalOffset_name = tr("RoughnessColorGlobalOffset");
    RoughnessColorGlobalOffset.setName(RoughnessColorGlobalOffset_name);
    static QString RoughnessColorGlobalOffset_description = "";
    RoughnessColorGlobalOffset.setDescription(RoughnessColorGlobalOffset_description);
    RoughnessColorGlobalOffset.setMaxValue(255);
    RoughnessColorGlobalOffset.setMinValue(-255);
    RoughnessColorGlobalOffset.setStepValue(0);
    RoughnessColorGlobalOffset.setValue(0);
    static QString NormalToHeightItersLarge_name = tr("NormalToHeightItersLarge");
    NormalToHeightItersLarge.setName(NormalToHeightItersLarge_name);
    static QString NormalToHeightItersLarge_description = "Number of iterations done on large grid.";
    NormalToHeightItersLarge.setDescription(NormalToHeightItersLarge_description);
    NormalToHeightItersLarge.setMaxValue(99);
    NormalToHeightItersLarge.setMinValue(0);
    NormalToHeightItersLarge.setStepValue(10);
    NormalToHeightItersLarge.setValue(0);
    static QString NormalToHeightItersVerySmall_name = tr("NormalToHeightItersVerySmall");
    NormalToHeightItersVerySmall.setName(NormalToHeightItersVerySmall_name);
    static QString NormalToHeightItersVerySmall_description = "Number of iterations done on very small grid (nearest neighbours).";
    NormalToHeightItersVerySmall.setDescription(NormalToHeightItersVerySmall_description);
    NormalToHeightItersVerySmall.setMaxValue(99);
    NormalToHeightItersVerySmall.setMinValue(0);
    NormalToHeightItersVerySmall.setStepValue(10);
    NormalToHeightItersVerySmall.setValue(0);
    static QString NormalToHeightItersSmall_name = tr("NormalToHeightItersSmall");
    NormalToHeightItersSmall.setName(NormalToHeightItersSmall_name);
    static QString NormalToHeightItersSmall_description = "Number of iterations done on  small grid (second nearest neighbours).";
    NormalToHeightItersSmall.setDescription(NormalToHeightItersSmall_description);
    NormalToHeightItersSmall.setMaxValue(99);
    NormalToHeightItersSmall.setMinValue(0);
    NormalToHeightItersSmall.setStepValue(10);
    NormalToHeightItersSmall.setValue(0);
    static QString NormalToHeightItersVeryLarge_name = tr("NormalToHeightItersVeryLarge");
    NormalToHeightItersVeryLarge.setName(NormalToHeightItersVeryLarge_name);
    static QString NormalToHeightItersVeryLarge_description = "Number of iterations done on very large grid.";
    NormalToHeightItersVeryLarge.setDescription(NormalToHeightItersVeryLarge_description);
    NormalToHeightItersVeryLarge.setMaxValue(100);
    NormalToHeightItersVeryLarge.setMinValue(0);
    NormalToHeightItersVeryLarge.setStepValue(10);
    NormalToHeightItersVeryLarge.setValue(4);
    static QString NormalToHeightItersMedium_name = tr("NormalToHeightItersMedium");
    NormalToHeightItersMedium.setName(NormalToHeightItersMedium_name);
    static QString NormalToHeightItersMedium_description = "Number of iterations done on medium grid.";
    NormalToHeightItersMedium.setDescription(NormalToHeightItersMedium_description);
    NormalToHeightItersMedium.setMaxValue(99);
    NormalToHeightItersMedium.setMinValue(0);
    NormalToHeightItersMedium.setStepValue(10);
    NormalToHeightItersMedium.setValue(0);
    static QString NormalToHeightItersHuge_name = tr("NormalToHeightItersHuge");
    NormalToHeightItersHuge.setName(NormalToHeightItersHuge_name);
    static QString NormalToHeightItersHuge_description = "<html><head/><body><p>Number of iterations done on huge grid.</p></body></html>";
    NormalToHeightItersHuge.setDescription(NormalToHeightItersHuge_description);
    NormalToHeightItersHuge.setMaxValue(99);
    NormalToHeightItersHuge.setMinValue(0);
    NormalToHeightItersHuge.setStepValue(10);
    NormalToHeightItersHuge.setValue(0);
    static QString GrayScaleR_name = tr("GrayScaleR");
    GrayScaleR.setName(GrayScaleR_name);
    static QString GrayScaleR_description = "";
    GrayScaleR.setDescription(GrayScaleR_description);
    GrayScaleR.setMaxValue(255);
    GrayScaleR.setMinValue(0);
    GrayScaleR.setStepValue(10);
    GrayScaleR.setValue(0);
    static QString GrayScaleG_name = tr("GrayScaleG");
    GrayScaleG.setName(GrayScaleG_name);
    static QString GrayScaleG_description = "";
    GrayScaleG.setDescription(GrayScaleG_description);
    GrayScaleG.setMaxValue(255);
    GrayScaleG.setMinValue(0);
    GrayScaleG.setStepValue(10);
    GrayScaleG.setValue(0);
    static QString GrayScaleB_name = tr("GrayScaleB");
    GrayScaleB.setName(GrayScaleB_name);
    static QString GrayScaleB_description = "";
    GrayScaleB.setDescription(GrayScaleB_description);
    GrayScaleB.setMaxValue(255);
    GrayScaleB.setMinValue(0);
    GrayScaleB.setStepValue(10);
    GrayScaleB.setValue(0);
    static QString RemoveShadingLFBlending_name = tr("RemoveShadingLFBlending");
    RemoveShadingLFBlending.setName(RemoveShadingLFBlending_name);
    static QString RemoveShadingLFBlending_description = "";
    RemoveShadingLFBlending.setDescription(RemoveShadingLFBlending_description);
    RemoveShadingLFBlending.setMaxValue(100);
    RemoveShadingLFBlending.setMinValue(0);
    RemoveShadingLFBlending.setStepValue(0);
    RemoveShadingLFBlending.setValue(0);
    static QString RemoveShadingLFRadius_name = tr("RemoveShadingLFRadius");
    RemoveShadingLFRadius.setName(RemoveShadingLFRadius_name);
    static QString RemoveShadingLFRadius_description = "<html><head/><body><p>Set the mask <span style=\" font-weight:600;\">radius</span	>: larger values remove lower frequencies, lower values - higher frequencies. This tool is a 	analogical to <span style=\" font-weight:600;\">Low Frequency Even GIMP</span> plugin.</p></body></	html>";
    RemoveShadingLFRadius.setDescription(RemoveShadingLFRadius_description);
    RemoveShadingLFRadius.setMaxValue(100);
    RemoveShadingLFRadius.setMinValue(0);
    RemoveShadingLFRadius.setStepValue(0);
    RemoveShadingLFRadius.setValue(0);
    static QString RemoveShadingGaussIter_name = tr("RemoveShadingGaussIter");
    RemoveShadingGaussIter.setName(RemoveShadingGaussIter_name);
    static QString RemoveShadingGaussIter_description = "<html><head/><body><p>In case if option <span style=\" font-weight:600;\">Remove 	shading</span> is enabled it changes the number of iterations to be performed.</p></body></html>";
    RemoveShadingGaussIter.setDescription(RemoveShadingGaussIter_description);
    RemoveShadingGaussIter.setMaxValue(100);
    RemoveShadingGaussIter.setMinValue(1);
    RemoveShadingGaussIter.setStepValue(2);
    RemoveShadingGaussIter.setValue(10);
    static QString AOCancelation_name = tr("AOCancelation");
    AOCancelation.setName(AOCancelation_name);
    static QString AOCancelation_description = "<html><head/><body><p>Remove dark regions using calculated AO map. </p></body></	html>";
    AOCancelation.setDescription(AOCancelation_description);
    AOCancelation.setMaxValue(100);
    AOCancelation.setMinValue(0);
    AOCancelation.setStepValue(0);
    AOCancelation.setValue(0);
    static QString BlurNoPasses_name = tr("BlurNoPasses");
    BlurNoPasses.setName(BlurNoPasses_name);
    static QString BlurNoPasses_description = "<html><head/><body><p>Basically it works like gamma correction. </p><p>Especially 	useful in case of height texture.</p></body></html>";
    BlurNoPasses.setDescription(BlurNoPasses_description);
    BlurNoPasses.setMaxValue(10);
    BlurNoPasses.setMinValue(0);
    BlurNoPasses.setStepValue(1);
    BlurNoPasses.setValue(0);
    static QString DetailDepth_name = tr("DetailDepth");
    DetailDepth.setName(DetailDepth_name);
    static QString DetailDepth_description = "<html><head/><body><p>It changes the depth of the <span style=\" font-weight:600;	\">Small details</span> and <span style=\" font-weight:600;\">Medium details</span> effect.</p></	body></html>";
    DetailDepth.setDescription(DetailDepth_description);
    DetailDepth.setMaxValue(100);
    DetailDepth.setMinValue(0);
    DetailDepth.setStepValue(10);
    DetailDepth.setValue(40);
    static QString NormalsStep_name = tr("NormalsStep");
    NormalsStep.setName(NormalsStep_name);
    static QString NormalsStep_description = "<html><head/><body><p>It changes the steepness of the normal image in %.</p><p>	For example 100% means that the image is not changed. 0% means that the  image is completely flat.  	</p></body></html>";
    NormalsStep.setDescription(NormalsStep_description);
    NormalsStep.setMaxValue(500);
    NormalsStep.setMinValue(-500);
    NormalsStep.setStepValue(10);
    NormalsStep.setValue(0);
    static QString ColorHue_name = tr("ColorHue");
    ColorHue.setName(ColorHue_name);
    static QString ColorHue_description = "Change color Hue";
    ColorHue.setDescription(ColorHue_description);
    ColorHue.setMaxValue(180);
    ColorHue.setMinValue(0);
    ColorHue.setStepValue(10);
    ColorHue.setValue(0);
    static QString SharpenBlur_name = tr("SharpenBlur");
    SharpenBlur.setName(SharpenBlur_name);
    static QString SharpenBlur_description = "<html><head/><body><p>Smooth or sharpen the image (it uses the gaussian 	distribution  in both cases).</p></body></html>";
    SharpenBlur.setDescription(SharpenBlur_description);
    SharpenBlur.setMaxValue(20);
    SharpenBlur.setMinValue(-20);
    SharpenBlur.setStepValue(10);
    SharpenBlur.setValue(0);
    static QString MediumDetails_name = tr("MediumDetails");
    MediumDetails.setName(MediumDetails_name);
    static QString MediumDetails_description = "The same as above.";
    MediumDetails.setDescription(MediumDetails_description);
    MediumDetails.setMaxValue(100);
    MediumDetails.setMinValue(0);
    MediumDetails.setStepValue(10);
    MediumDetails.setValue(0);
    static QString SmallDetails_name = tr("SmallDetails");
    SmallDetails.setName(SmallDetails_name);
    static QString SmallDetails_description = "<html><head/><body><p>Enhance small details. This option is connected with <span 	style=\" font-weight:600;\">Depth</span> scroll bar. </p><p>Note that if <span style=\" font-	weight:600;\">Depth</span> scroll bar is set to zero, this parameter does not affect the image.</p><	/body></html>";
    SmallDetails.setDescription(SmallDetails_description);
    SmallDetails.setMaxValue(100);
    SmallDetails.setMinValue(0);
    SmallDetails.setStepValue(10);
    SmallDetails.setValue(0);
    static QString HeightAveRadius_name = tr("HeightAveRadius");
    HeightAveRadius.setName(HeightAveRadius_name);
    static QString HeightAveRadius_description = "";
    HeightAveRadius.setDescription(HeightAveRadius_description);
    HeightAveRadius.setMaxValue(100);
    HeightAveRadius.setMinValue(1);
    HeightAveRadius.setStepValue(0);
    HeightAveRadius.setValue(1);
    static QString HeightProcMinValue_name = tr("HeightProcMinValue");
    HeightProcMinValue.setName(HeightProcMinValue_name);
    static QString HeightProcMinValue_description = "";
    HeightProcMinValue.setDescription(HeightProcMinValue_description);
    HeightProcMinValue.setMaxValue(200);
    HeightProcMinValue.setMinValue(0);
    HeightProcMinValue.setStepValue(0);
    HeightProcMinValue.setValue(0);
    static QString HeightProcMaxValue_name = tr("HeightProcMaxValue");
    HeightProcMaxValue.setName(HeightProcMaxValue_name);
    static QString HeightProcMaxValue_description = "";
    HeightProcMaxValue.setDescription(HeightProcMaxValue_description);
    HeightProcMaxValue.setMaxValue(200);
    HeightProcMaxValue.setMinValue(0);
    HeightProcMaxValue.setStepValue(0);
    HeightProcMaxValue.setValue(200);
    static QString HeightOffsetValue_name = tr("HeightOffsetValue");
    HeightOffsetValue.setName(HeightOffsetValue_name);
    static QString HeightOffsetValue_description = "";
    HeightOffsetValue.setDescription(HeightOffsetValue_description);
    HeightOffsetValue.setMaxValue(100);
    HeightOffsetValue.setMinValue(-100);
    HeightOffsetValue.setStepValue(0);
    HeightOffsetValue.setValue(0);
    static QString SpeculatW1_name = tr("SpeculatW1");
    SpeculatW1.setName(SpeculatW1_name);
    static QString SpeculatW1_description = "Radius of the first gaussian";
    SpeculatW1.setDescription(SpeculatW1_description);
    SpeculatW1.setMaxValue(4000);
    SpeculatW1.setMinValue(1);
    SpeculatW1.setStepValue(50);
    SpeculatW1.setValue(10);
    static QString SpecularW2_name = tr("SpecularW2");
    SpecularW2.setName(SpecularW2_name);
    static QString SpecularW2_description = "Radius of the second gaussian";
    SpecularW2.setDescription(SpecularW2_description);
    SpecularW2.setMaxValue(4000);
    SpecularW2.setMinValue(1);
    SpecularW2.setStepValue(50);
    SpecularW2.setValue(1000);
    static QString SpecularRadius_name = tr("SpecularRadius");
    SpecularRadius.setName(SpecularRadius_name);
    static QString SpecularRadius_description = "<html><head/><body><p>Mask radius. Usually it is greater than <span style=\" font	-weight:600;\">Weight #1</span> and <span style=\" font-weight:600;\">Weight #2</span>. But here you 	can choose any value.</p></body></html>";
    SpecularRadius.setDescription(SpecularRadius_description);
    SpecularRadius.setMaxValue(40);
    SpecularRadius.setMinValue(1);
    SpecularRadius.setStepValue(1);
    SpecularRadius.setValue(10);
    static QString SpecularContrast_name = tr("SpecularContrast");
    SpecularContrast.setName(SpecularContrast_name);
    static QString SpecularContrast_description = "It changes the contrast of the image.";
    SpecularContrast.setDescription(SpecularContrast_description);
    SpecularContrast.setMaxValue(200);
    SpecularContrast.setMinValue(0);
    SpecularContrast.setStepValue(5);
    SpecularContrast.setValue(105);
    static QString SpecularAmplifier_name = tr("SpecularAmplifier");
    SpecularAmplifier.setName(SpecularAmplifier_name);
    static QString SpecularAmplifier_description = "It multiplies the output image by a given number.";
    SpecularAmplifier.setDescription(SpecularAmplifier_description);
    SpecularAmplifier.setMaxValue(100);
    SpecularAmplifier.setMinValue(-100);
    SpecularAmplifier.setStepValue(1);
    SpecularAmplifier.setValue(30);
    static QString SpecularBrightness_name = tr("SpecularBrightness");
    SpecularBrightness.setName(SpecularBrightness_name);
    static QString SpecularBrightness_description = "";
    SpecularBrightness.setDescription(SpecularBrightness_description);
    SpecularBrightness.setMaxValue(100);
    SpecularBrightness.setMinValue(-100);
    SpecularBrightness.setStepValue(10);
    SpecularBrightness.setValue(0);
    static QString SelectiveBlurMaskRadius_name = tr("SelectiveBlurMaskRadius");
    SelectiveBlurMaskRadius.setName(SelectiveBlurMaskRadius_name);
    static QString SelectiveBlurMaskRadius_description = "Gaussian blur radius";
    SelectiveBlurMaskRadius.setDescription(SelectiveBlurMaskRadius_description);
    SelectiveBlurMaskRadius.setMaxValue(50);
    SelectiveBlurMaskRadius.setMinValue(0);
    SelectiveBlurMaskRadius.setStepValue(10);
    SelectiveBlurMaskRadius.setValue(5);
    static QString SelectiveBlurBlending_name = tr("SelectiveBlurBlending");
    SelectiveBlurBlending.setName(SelectiveBlurBlending_name);
    static QString SelectiveBlurBlending_description = "Strenght of the effect.  ";
    SelectiveBlurBlending.setDescription(SelectiveBlurBlending_description);
    SelectiveBlurBlending.setMaxValue(100);
    SelectiveBlurBlending.setMinValue(0);
    SelectiveBlurBlending.setStepValue(0);
    SelectiveBlurBlending.setValue(0);
    static QString SelectiveBlurNoIters_name = tr("SelectiveBlurNoIters");
    SelectiveBlurNoIters.setName(SelectiveBlurNoIters_name);
    static QString SelectiveBlurNoIters_description = "Number of gaussian blur iterations";
    SelectiveBlurNoIters.setDescription(SelectiveBlurNoIters_description);
    SelectiveBlurNoIters.setMaxValue(10);
    SelectiveBlurNoIters.setMinValue(1);
    SelectiveBlurNoIters.setStepValue(0);
    SelectiveBlurNoIters.setValue(1);
    static QString SelectiveBlurDOGRadius_name = tr("SelectiveBlurDOGRadius");
    SelectiveBlurDOGRadius.setName(SelectiveBlurDOGRadius_name);
    static QString SelectiveBlurDOGRadius_description = "Difference of Gaussians blur radius. First image is not blured.";
    SelectiveBlurDOGRadius.setDescription(SelectiveBlurDOGRadius_description);
    SelectiveBlurDOGRadius.setMaxValue(50);
    SelectiveBlurDOGRadius.setMinValue(0);
    SelectiveBlurDOGRadius.setStepValue(0);
    SelectiveBlurDOGRadius.setValue(5);
    static QString SelectiveBlurDOGContrast_name = tr("SelectiveBlurDOGContrast");
    SelectiveBlurDOGContrast.setName(SelectiveBlurDOGContrast_name);
    static QString SelectiveBlurDOGContrast_description = "";
    SelectiveBlurDOGContrast.setDescription(SelectiveBlurDOGContrast_description);
    SelectiveBlurDOGContrast.setMaxValue(100);
    SelectiveBlurDOGContrast.setMinValue(-100);
    SelectiveBlurDOGContrast.setStepValue(0);
    SelectiveBlurDOGContrast.setValue(0);
    static QString SelectiveBlurDOGAmplifier_name = tr("SelectiveBlurDOGAmplifier");
    SelectiveBlurDOGAmplifier.setName(SelectiveBlurDOGAmplifier_name);
    static QString SelectiveBlurDOGAmplifier_description = "";
    SelectiveBlurDOGAmplifier.setDescription(SelectiveBlurDOGAmplifier_description);
    SelectiveBlurDOGAmplifier.setMaxValue(100);
    SelectiveBlurDOGAmplifier.setMinValue(-100);
    SelectiveBlurDOGAmplifier.setStepValue(0);
    SelectiveBlurDOGAmplifier.setValue(-30);
    static QString SelectiveBlurDOGOffset_name = tr("SelectiveBlurDOGOffset");
    SelectiveBlurDOGOffset.setName(SelectiveBlurDOGOffset_name);
    static QString SelectiveBlurDOGOffset_description = "Move the result value up/down";
    SelectiveBlurDOGOffset.setDescription(SelectiveBlurDOGOffset_description);
    SelectiveBlurDOGOffset.setMaxValue(255);
    SelectiveBlurDOGOffset.setMinValue(-255);
    SelectiveBlurDOGOffset.setStepValue(0);
    SelectiveBlurDOGOffset.setValue(0);
    static QString SelectiveBlurMinValue_name = tr("SelectiveBlurMinValue");
    SelectiveBlurMinValue.setName(SelectiveBlurMinValue_name);
    static QString SelectiveBlurMinValue_description = "";
    SelectiveBlurMinValue.setDescription(SelectiveBlurMinValue_description);
    SelectiveBlurMinValue.setMaxValue(255);
    SelectiveBlurMinValue.setMinValue(0);
    SelectiveBlurMinValue.setStepValue(0);
    SelectiveBlurMinValue.setValue(0);
    static QString SelectiveBlurMaxValue_name = tr("SelectiveBlurMaxValue");
    SelectiveBlurMaxValue.setName(SelectiveBlurMaxValue_name);
    static QString SelectiveBlurMaxValue_description = "";
    SelectiveBlurMaxValue.setDescription(SelectiveBlurMaxValue_description);
    SelectiveBlurMaxValue.setMaxValue(255);
    SelectiveBlurMaxValue.setMinValue(0);
    SelectiveBlurMaxValue.setStepValue(0);
    SelectiveBlurMaxValue.setValue(255);
    static QString SelectiveBlurDetails_name = tr("SelectiveBlurDetails");
    SelectiveBlurDetails.setName(SelectiveBlurDetails_name);
    static QString SelectiveBlurDetails_description = "";
    SelectiveBlurDetails.setDescription(SelectiveBlurDetails_description);
    SelectiveBlurDetails.setMaxValue(100);
    SelectiveBlurDetails.setMinValue(1);
    SelectiveBlurDetails.setStepValue(0);
    SelectiveBlurDetails.setValue(1);
    static QString SelectiveBlurOffset_name = tr("SelectiveBlurOffset");
    SelectiveBlurOffset.setName(SelectiveBlurOffset_name);
    static QString SelectiveBlurOffset_description = "";
    SelectiveBlurOffset.setDescription(SelectiveBlurOffset_description);
    SelectiveBlurOffset.setMaxValue(255);
    SelectiveBlurOffset.setMinValue(-255);
    SelectiveBlurOffset.setStepValue(0);
    SelectiveBlurOffset.setValue(0);
    static QString BaseToOthersAngleCorrection_name = tr("BaseToOthersAngleCorrection");
    BaseToOthersAngleCorrection.setName(BaseToOthersAngleCorrection_name);
    static QString BaseToOthersAngleCorrection_description = "";
    BaseToOthersAngleCorrection.setDescription(BaseToOthersAngleCorrection_description);
    BaseToOthersAngleCorrection.setMaxValue(360);
    BaseToOthersAngleCorrection.setMinValue(0);
    BaseToOthersAngleCorrection.setStepValue(0);
    BaseToOthersAngleCorrection.setValue(0);
    static QString BaseToOthersAngleWeight_name = tr("BaseToOthersAngleWeight");
    BaseToOthersAngleWeight.setName(BaseToOthersAngleWeight_name);
    static QString BaseToOthersAngleWeight_description = "";
    BaseToOthersAngleWeight.setDescription(BaseToOthersAngleWeight_description);
    BaseToOthersAngleWeight.setMaxValue(100);
    BaseToOthersAngleWeight.setMinValue(-100);
    BaseToOthersAngleWeight.setStepValue(0);
    BaseToOthersAngleWeight.setValue(0);
    // end children initialization
}

void QtnPropertySetFormImageProp::connectSlots()
{
}

void QtnPropertySetFormImageProp::disconnectSlots()
{
}

void QtnPropertySetFormImageProp::connectDelegates()
{
}

QtnPropertySetMaterialsImageType::QtnPropertySetMaterialsImageType(QObject* parent)
    : QtnPropertySet(parent)
    , Dummy(*new QtnPropertyQString(this))
{
    init();
    connectSlots();
    connectDelegates();
}

QtnPropertySetMaterialsImageType::~QtnPropertySetMaterialsImageType()
{
    disconnectSlots();
}

QtnPropertySetMaterialsImageType& QtnPropertySetMaterialsImageType::operator=(const QtnPropertySetMaterialsImageType& other)
{
    Dummy = other.Dummy;

    return *this;
}

QtnPropertySet* QtnPropertySetMaterialsImageType::createNewImpl(QObject* parentForNew) const
{
    return new QtnPropertySetMaterialsImageType(parentForNew);
}

QtnPropertySet* QtnPropertySetMaterialsImageType::createCopyImpl(QObject* parentForCopy) const
{
    QtnPropertySetMaterialsImageType* p = new QtnPropertySetMaterialsImageType(parentForCopy);
    *p = *this;
    return p;
}

bool QtnPropertySetMaterialsImageType::copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask)
{
    QtnPropertySetMaterialsImageType* theCopyFrom = qobject_cast<QtnPropertySetMaterialsImageType*>(propertySetCopyFrom);
    if (!theCopyFrom)
        return false;

    if (!(theCopyFrom->Dummy.state() & ignoreMask))
    {
        Dummy = theCopyFrom->Dummy;
    }

    return true;
}

void QtnPropertySetMaterialsImageType::init()
{
    static QString MaterialsImage_name = tr("MaterialsImage");
    setName(MaterialsImage_name);
    static QString description = "Materials Image";
    setDescription(description);
    setState(QtnPropertyStateCollapsed);
    
    // start children initialization
    static QString Dummy_name = tr("Dummy");
    Dummy.setName(Dummy_name);
    static QString Dummy_description = "Dummy";
    Dummy.setDescription(Dummy_description);
    // end children initialization
}

void QtnPropertySetMaterialsImageType::connectSlots()
{
}

void QtnPropertySetMaterialsImageType::disconnectSlots()
{
}

void QtnPropertySetMaterialsImageType::connectDelegates()
{
}

QtnPropertySetGrungeGeneralSettingsType::QtnPropertySetGrungeGeneralSettingsType(QObject* parent)
    : QtnPropertySet(parent)
    , OverallWeight(*new QtnPropertyInt(this))
    , Randomize(*new QtnPropertyInt(this))
    , Scale(*new QtnPropertyInt(this))
    , NormalWarp(*new QtnPropertyInt(this))
    , Predefined(*new QtnPropertyQString(this))
    , RandomTranslations(*new QtnPropertyBool(this))
    , ReplotAllTexturesWhenChanges(*new QtnPropertyBool(this))
{
    init();
    connectSlots();
    connectDelegates();
}

QtnPropertySetGrungeGeneralSettingsType::~QtnPropertySetGrungeGeneralSettingsType()
{
    disconnectSlots();
}

QtnPropertySetGrungeGeneralSettingsType& QtnPropertySetGrungeGeneralSettingsType::operator=(const QtnPropertySetGrungeGeneralSettingsType& other)
{
    OverallWeight = other.OverallWeight;
    Randomize = other.Randomize;
    Scale = other.Scale;
    NormalWarp = other.NormalWarp;
    Predefined = other.Predefined;
    RandomTranslations = other.RandomTranslations;
    ReplotAllTexturesWhenChanges = other.ReplotAllTexturesWhenChanges;

    return *this;
}

QtnPropertySet* QtnPropertySetGrungeGeneralSettingsType::createNewImpl(QObject* parentForNew) const
{
    return new QtnPropertySetGrungeGeneralSettingsType(parentForNew);
}

QtnPropertySet* QtnPropertySetGrungeGeneralSettingsType::createCopyImpl(QObject* parentForCopy) const
{
    QtnPropertySetGrungeGeneralSettingsType* p = new QtnPropertySetGrungeGeneralSettingsType(parentForCopy);
    *p = *this;
    return p;
}

bool QtnPropertySetGrungeGeneralSettingsType::copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask)
{
    QtnPropertySetGrungeGeneralSettingsType* theCopyFrom = qobject_cast<QtnPropertySetGrungeGeneralSettingsType*>(propertySetCopyFrom);
    if (!theCopyFrom)
        return false;

    if (!(theCopyFrom->OverallWeight.state() & ignoreMask))
    {
        OverallWeight = theCopyFrom->OverallWeight;
    }

    if (!(theCopyFrom->Randomize.state() & ignoreMask))
    {
        Randomize = theCopyFrom->Randomize;
    }

    if (!(theCopyFrom->Scale.state() & ignoreMask))
    {
        Scale = theCopyFrom->Scale;
    }

    if (!(theCopyFrom->NormalWarp.state() & ignoreMask))
    {
        NormalWarp = theCopyFrom->NormalWarp;
    }

    if (!(theCopyFrom->Predefined.state() & ignoreMask))
    {
        Predefined = theCopyFrom->Predefined;
    }

    if (!(theCopyFrom->RandomTranslations.state() & ignoreMask))
    {
        RandomTranslations = theCopyFrom->RandomTranslations;
    }

    if (!(theCopyFrom->ReplotAllTexturesWhenChanges.state() & ignoreMask))
    {
        ReplotAllTexturesWhenChanges = theCopyFrom->ReplotAllTexturesWhenChanges;
    }

    return true;
}

void QtnPropertySetGrungeGeneralSettingsType::init()
{
    static QString GrungeGeneralSettings_name = tr("GrungeGeneralSettings");
    setName(GrungeGeneralSettings_name);
    static QString description = "Grunge general settings";
    setDescription(description);
    
    // start children initialization
    static QString OverallWeight_name = tr("OverallWeight");
    OverallWeight.setName(OverallWeight_name);
    static QString OverallWeight_description = "Set common blending weight factor for all textures blending.";
    OverallWeight.setDescription(OverallWeight_description);
    OverallWeight.setMaxValue(100);
    OverallWeight.setMinValue(0);
    OverallWeight.setStepValue(1);
    OverallWeight.setValue(0);
    static QString Randomize_name = tr("Randomize");
    Randomize.setName(Randomize_name);
    static QString Randomize_description = "When 0 - use orginal image, otherwise generate random seamless image.";
    Randomize.setDescription(Randomize_description);
    Randomize.setMaxValue(100);
    Randomize.setMinValue(0);
    Randomize.setStepValue(1);
    Randomize.setValue(0);
    static QString Scale_name = tr("Scale");
    Scale.setName(Scale_name);
    static QString Scale_description = "It scales the UVs of generated random image. Value 1 is neutral.";
    Scale.setDescription(Scale_description);
    Scale.setMaxValue(100);
    Scale.setMinValue(1);
    Scale.setStepValue(25);
    Scale.setValue(1);
    static QString NormalWarp_name = tr("NormalWarp");
    NormalWarp.setName(NormalWarp_name);
    static QString NormalWarp_description = "Warps grunge texture pixels along normals of normal texture.";
    NormalWarp.setDescription(NormalWarp_description);
    NormalWarp.setMaxValue(100);
    NormalWarp.setMinValue(-100);
    NormalWarp.setStepValue(1);
    NormalWarp.setValue(0);
    static QString Predefined_name = tr("Predefined");
    Predefined.setName(Predefined_name);
    static QString Predefined_description = "Load predefined grunge map from list. Note that predefined grunge textures are located in Core/2D/grungefolder. You can paste there your own images in oder to make your own list of grunge images.";
    Predefined.setDescription(Predefined_description);
    static QString RandomTranslations_name = tr("RandomTranslations");
    RandomTranslations.setName(RandomTranslations_name);
    static QString RandomTranslations_description = "Random translations.";
    RandomTranslations.setDescription(RandomTranslations_description);
    RandomTranslations.setValue(false);
    static QString ReplotAllTexturesWhenChanges_name = tr("ReplotAllTexturesWhenChanges");
    ReplotAllTexturesWhenChanges.setName(ReplotAllTexturesWhenChanges_name);
    static QString ReplotAllTexturesWhenChanges_description = "Replot all textures when changes.";
    ReplotAllTexturesWhenChanges.setDescription(ReplotAllTexturesWhenChanges_description);
    ReplotAllTexturesWhenChanges.setValue(false);
    // end children initialization
}

void QtnPropertySetGrungeGeneralSettingsType::connectSlots()
{
}

void QtnPropertySetGrungeGeneralSettingsType::disconnectSlots()
{
}

void QtnPropertySetGrungeGeneralSettingsType::connectDelegates()
{
    Predefined.setDelegateCallback([] () -> const QtnPropertyDelegateInfo * {
        QScopedPointer<QtnPropertyDelegateInfo> info(new QtnPropertyDelegateInfo());
        info->name = "List";
        info->attributes["items"] = QStringList() << "one" << "two" << "three" << "four";
        return info.take();
    });
}

QtnPropertySetGrungePatternType::QtnPropertySetGrungePatternType(QObject* parent)
    : QtnPropertySet(parent)
    , BlendingMode(*new QtnPropertyEnum(this))
    , GrungeWeight(*new QtnPropertyInt(this))
    , ImageWeight(*new QtnPropertyInt(this))
{
    init();
    connectSlots();
    connectDelegates();
}

QtnPropertySetGrungePatternType::~QtnPropertySetGrungePatternType()
{
    disconnectSlots();
}

QtnPropertySetGrungePatternType& QtnPropertySetGrungePatternType::operator=(const QtnPropertySetGrungePatternType& other)
{
    BlendingMode = other.BlendingMode;
    GrungeWeight = other.GrungeWeight;
    ImageWeight = other.ImageWeight;

    return *this;
}

QtnPropertySet* QtnPropertySetGrungePatternType::createNewImpl(QObject* parentForNew) const
{
    return new QtnPropertySetGrungePatternType(parentForNew);
}

QtnPropertySet* QtnPropertySetGrungePatternType::createCopyImpl(QObject* parentForCopy) const
{
    QtnPropertySetGrungePatternType* p = new QtnPropertySetGrungePatternType(parentForCopy);
    *p = *this;
    return p;
}

bool QtnPropertySetGrungePatternType::copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask)
{
    QtnPropertySetGrungePatternType* theCopyFrom = qobject_cast<QtnPropertySetGrungePatternType*>(propertySetCopyFrom);
    if (!theCopyFrom)
        return false;

    if (!(theCopyFrom->BlendingMode.state() & ignoreMask))
    {
        BlendingMode = theCopyFrom->BlendingMode;
    }

    if (!(theCopyFrom->GrungeWeight.state() & ignoreMask))
    {
        GrungeWeight = theCopyFrom->GrungeWeight;
    }

    if (!(theCopyFrom->ImageWeight.state() & ignoreMask))
    {
        ImageWeight = theCopyFrom->ImageWeight;
    }

    return true;
}

void QtnPropertySetGrungePatternType::init()
{
    static QString GrungePattern_name = tr("GrungePattern");
    setName(GrungePattern_name);
    static QString description = "Grunge pattern";
    setDescription(description);
    
    // start children initialization
    static QString BlendingMode_name = tr("BlendingMode");
    BlendingMode.setName(BlendingMode_name);
    static QString BlendingMode_description = "Blending modes are same as in GIMP program.";
    BlendingMode.setDescription(BlendingMode_description);
    BlendingMode.setEnumInfo(&BLENDINGMODE::info());
    BlendingMode.setValue(BLENDINGMODE::blendNormal);
    static QString GrungeWeight_name = tr("GrungeWeight");
    GrungeWeight.setName(GrungeWeight_name);
    static QString GrungeWeight_description = "This is blending factor for grunge image. 0 - no grunge.";
    GrungeWeight.setDescription(GrungeWeight_description);
    GrungeWeight.setMaxValue(100);
    GrungeWeight.setMinValue(0);
    GrungeWeight.setStepValue(1);
    GrungeWeight.setValue(0);
    static QString ImageWeight_name = tr("ImageWeight");
    ImageWeight.setName(ImageWeight_name);
    static QString ImageWeight_description = "This is blending factor for this image. 0 - no grunge.";
    ImageWeight.setDescription(ImageWeight_description);
    ImageWeight.setMaxValue(100);
    ImageWeight.setMinValue(0);
    ImageWeight.setStepValue(1);
    ImageWeight.setValue(0);
    // end children initialization
}

void QtnPropertySetGrungePatternType::connectSlots()
{
}

void QtnPropertySetGrungePatternType::disconnectSlots()
{
}

void QtnPropertySetGrungePatternType::connectDelegates()
{
}

QtnPropertySetUVSettingsType::QtnPropertySetUVSettingsType(QObject* parent)
    : QtnPropertySet(parent)
    , SeamlessContrastPower(*new QtnPropertyInt(this))
    , SeamlessContrastStrenght(*new QtnPropertyInt(this))
    , MakeSeamlessRadius(*new QtnPropertyInt(this))
    , RandomPatchesInnerRadius(*new QtnPropertyInt(this))
    , RandomPatchesRotate(*new QtnPropertyInt(this))
    , RandomPatchesOuterRadius(*new QtnPropertyInt(this))
{
    init();
    connectSlots();
    connectDelegates();
}

QtnPropertySetUVSettingsType::~QtnPropertySetUVSettingsType()
{
    disconnectSlots();
}

QtnPropertySetUVSettingsType& QtnPropertySetUVSettingsType::operator=(const QtnPropertySetUVSettingsType& other)
{
    SeamlessContrastPower = other.SeamlessContrastPower;
    SeamlessContrastStrenght = other.SeamlessContrastStrenght;
    MakeSeamlessRadius = other.MakeSeamlessRadius;
    RandomPatchesInnerRadius = other.RandomPatchesInnerRadius;
    RandomPatchesRotate = other.RandomPatchesRotate;
    RandomPatchesOuterRadius = other.RandomPatchesOuterRadius;

    return *this;
}

QtnPropertySet* QtnPropertySetUVSettingsType::createNewImpl(QObject* parentForNew) const
{
    return new QtnPropertySetUVSettingsType(parentForNew);
}

QtnPropertySet* QtnPropertySetUVSettingsType::createCopyImpl(QObject* parentForCopy) const
{
    QtnPropertySetUVSettingsType* p = new QtnPropertySetUVSettingsType(parentForCopy);
    *p = *this;
    return p;
}

bool QtnPropertySetUVSettingsType::copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask)
{
    QtnPropertySetUVSettingsType* theCopyFrom = qobject_cast<QtnPropertySetUVSettingsType*>(propertySetCopyFrom);
    if (!theCopyFrom)
        return false;

    if (!(theCopyFrom->SeamlessContrastPower.state() & ignoreMask))
    {
        SeamlessContrastPower = theCopyFrom->SeamlessContrastPower;
    }

    if (!(theCopyFrom->SeamlessContrastStrenght.state() & ignoreMask))
    {
        SeamlessContrastStrenght = theCopyFrom->SeamlessContrastStrenght;
    }

    if (!(theCopyFrom->MakeSeamlessRadius.state() & ignoreMask))
    {
        MakeSeamlessRadius = theCopyFrom->MakeSeamlessRadius;
    }

    if (!(theCopyFrom->RandomPatchesInnerRadius.state() & ignoreMask))
    {
        RandomPatchesInnerRadius = theCopyFrom->RandomPatchesInnerRadius;
    }

    if (!(theCopyFrom->RandomPatchesRotate.state() & ignoreMask))
    {
        RandomPatchesRotate = theCopyFrom->RandomPatchesRotate;
    }

    if (!(theCopyFrom->RandomPatchesOuterRadius.state() & ignoreMask))
    {
        RandomPatchesOuterRadius = theCopyFrom->RandomPatchesOuterRadius;
    }

    return true;
}

void QtnPropertySetUVSettingsType::init()
{
    static QString UVSettings_name = tr("UVSettings");
    setName(UVSettings_name);
    static QString description = "UV/Tiling Settings";
    setDescription(description);
    
    // start children initialization
    static QString SeamlessContrastPower_name = tr("SeamlessContrastPower");
    SeamlessContrastPower.setName(SeamlessContrastPower_name);
    static QString SeamlessContrastPower_description = "<html><head/><body><p>Another parameter which allows you to control blending weights  between two colors.</p></body></html>";
    SeamlessContrastPower.setDescription(SeamlessContrastPower_description);
    SeamlessContrastPower.setMaxValue(99);
    SeamlessContrastPower.setMinValue(0);
    SeamlessContrastPower.setStepValue(10);
    SeamlessContrastPower.setValue(0);
    static QString SeamlessContrastStrenght_name = tr("SeamlessContrastStrenght");
    SeamlessContrastStrenght.setName(SeamlessContrastStrenght_name);
    static QString SeamlessContrastStrenght_description = "<html><head/><body><p>It corrects the blending equation according to contrast between two mixed colors. When slider is set to <span style=\" font-weight:600;\">zero</span> standard linear interpolation is applied. This tool works best with <span style=\" font-weight:600;\">simple tilling</span> algorithm.</p><p><br/></p></body></html>";
    SeamlessContrastStrenght.setDescription(SeamlessContrastStrenght_description);
    SeamlessContrastStrenght.setMaxValue(100);
    SeamlessContrastStrenght.setMinValue(0);
    SeamlessContrastStrenght.setStepValue(10);
    SeamlessContrastStrenght.setValue(0);
    static QString MakeSeamlessRadius_name = tr("MakeSeamlessRadius");
    MakeSeamlessRadius.setName(MakeSeamlessRadius_name);
    static QString MakeSeamlessRadius_description = "";
    MakeSeamlessRadius.setDescription(MakeSeamlessRadius_description);
    MakeSeamlessRadius.setMaxValue(100);
    MakeSeamlessRadius.setMinValue(0);
    MakeSeamlessRadius.setStepValue(10);
    MakeSeamlessRadius.setValue(50);
    static QString RandomPatchesInnerRadius_name = tr("RandomPatchesInnerRadius");
    RandomPatchesInnerRadius.setName(RandomPatchesInnerRadius_name);
    static QString RandomPatchesInnerRadius_description = "";
    RandomPatchesInnerRadius.setDescription(RandomPatchesInnerRadius_description);
    RandomPatchesInnerRadius.setMaxValue(100);
    RandomPatchesInnerRadius.setMinValue(0);
    RandomPatchesInnerRadius.setStepValue(10);
    RandomPatchesInnerRadius.setValue(20);
    static QString RandomPatchesRotate_name = tr("RandomPatchesRotate");
    RandomPatchesRotate.setName(RandomPatchesRotate_name);
    static QString RandomPatchesRotate_description = "";
    RandomPatchesRotate.setDescription(RandomPatchesRotate_description);
    RandomPatchesRotate.setMaxValue(180);
    RandomPatchesRotate.setMinValue(-180);
    RandomPatchesRotate.setStepValue(10);
    RandomPatchesRotate.setValue(0);
    static QString RandomPatchesOuterRadius_name = tr("RandomPatchesOuterRadius");
    RandomPatchesOuterRadius.setName(RandomPatchesOuterRadius_name);
    static QString RandomPatchesOuterRadius_description = "";
    RandomPatchesOuterRadius.setDescription(RandomPatchesOuterRadius_description);
    RandomPatchesOuterRadius.setMaxValue(100);
    RandomPatchesOuterRadius.setMinValue(0);
    RandomPatchesOuterRadius.setStepValue(10);
    RandomPatchesOuterRadius.setValue(40);
    // end children initialization
}

void QtnPropertySetUVSettingsType::connectSlots()
{
}

void QtnPropertySetUVSettingsType::disconnectSlots()
{
}

void QtnPropertySetUVSettingsType::connectDelegates()
{
}

QtnPropertySetAwesomeBump::QtnPropertySetAwesomeBump(QObject* parent)
    : QtnPropertySet(parent)
    , DiffuseImage(*new QtnPropertySetFormImageProp(this))
    , NormalImage(*new QtnPropertySetFormImageProp(this))
    , SpecularImage(*new QtnPropertySetFormImageProp(this))
    , OcclusionImage(*new QtnPropertySetFormImageProp(this))
    , RoughnessImage(*new QtnPropertySetFormImageProp(this))
    , MetallicImage(*new QtnPropertySetFormImageProp(this))
    , MaterialsImage(*new QtnPropertySetMaterialsImageType(this))
    , GrungeGeneralSettings(*new QtnPropertySetGrungeGeneralSettingsType(this))
    , GrungePattern(*new QtnPropertySetGrungePatternType(this))
    , UVSettings(*new QtnPropertySetUVSettingsType(this))
    , InputImage(*new QtnPropertyEnum(this))
    , DepthInPixels(*new QtnPropertyFloat(this))
{
    init();
    connectSlots();
    connectDelegates();
}

QtnPropertySetAwesomeBump::~QtnPropertySetAwesomeBump()
{
    disconnectSlots();
}

QtnPropertySetAwesomeBump& QtnPropertySetAwesomeBump::operator=(const QtnPropertySetAwesomeBump& other)
{
    DiffuseImage = other.DiffuseImage;
    NormalImage = other.NormalImage;
    SpecularImage = other.SpecularImage;
    OcclusionImage = other.OcclusionImage;
    RoughnessImage = other.RoughnessImage;
    MetallicImage = other.MetallicImage;
    MaterialsImage = other.MaterialsImage;
    GrungeGeneralSettings = other.GrungeGeneralSettings;
    GrungePattern = other.GrungePattern;
    UVSettings = other.UVSettings;
    InputImage = other.InputImage;
    DepthInPixels = other.DepthInPixels;

    return *this;
}

QtnPropertySet* QtnPropertySetAwesomeBump::createNewImpl(QObject* parentForNew) const
{
    return new QtnPropertySetAwesomeBump(parentForNew);
}

QtnPropertySet* QtnPropertySetAwesomeBump::createCopyImpl(QObject* parentForCopy) const
{
    QtnPropertySetAwesomeBump* p = new QtnPropertySetAwesomeBump(parentForCopy);
    *p = *this;
    return p;
}

bool QtnPropertySetAwesomeBump::copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask)
{
    QtnPropertySetAwesomeBump* theCopyFrom = qobject_cast<QtnPropertySetAwesomeBump*>(propertySetCopyFrom);
    if (!theCopyFrom)
        return false;

    DiffuseImage.copyValues(&theCopyFrom->DiffuseImage, ignoreMask);

    NormalImage.copyValues(&theCopyFrom->NormalImage, ignoreMask);

    SpecularImage.copyValues(&theCopyFrom->SpecularImage, ignoreMask);

    OcclusionImage.copyValues(&theCopyFrom->OcclusionImage, ignoreMask);

    RoughnessImage.copyValues(&theCopyFrom->RoughnessImage, ignoreMask);

    MetallicImage.copyValues(&theCopyFrom->MetallicImage, ignoreMask);

    MaterialsImage.copyValues(&theCopyFrom->MaterialsImage, ignoreMask);

    GrungeGeneralSettings.copyValues(&theCopyFrom->GrungeGeneralSettings, ignoreMask);

    GrungePattern.copyValues(&theCopyFrom->GrungePattern, ignoreMask);

    UVSettings.copyValues(&theCopyFrom->UVSettings, ignoreMask);

    if (!(theCopyFrom->InputImage.state() & ignoreMask))
    {
        InputImage = theCopyFrom->InputImage;
    }

    if (!(theCopyFrom->DepthInPixels.state() & ignoreMask))
    {
        DepthInPixels = theCopyFrom->DepthInPixels;
    }

    return true;
}

void QtnPropertySetAwesomeBump::init()
{
    static QString AwesomeBump_name = tr("AwesomeBump");
    setName(AwesomeBump_name);
    
    // start children initialization
    static QString DiffuseImage_name = tr("DiffuseImage");
    DiffuseImage.setName(DiffuseImage_name);
    static QString DiffuseImage_description = "Diffuse Image";
    DiffuseImage.setDescription(DiffuseImage_description);
    DiffuseImage.setState(QtnPropertyStateCollapsed);
    static QString NormalImage_name = tr("NormalImage");
    NormalImage.setName(NormalImage_name);
    static QString NormalImage_description = "Normal Image";
    NormalImage.setDescription(NormalImage_description);
    NormalImage.setState(QtnPropertyStateCollapsed);
    static QString SpecularImage_name = tr("SpecularImage");
    SpecularImage.setName(SpecularImage_name);
    static QString SpecularImage_description = "Specular processing";
    SpecularImage.setDescription(SpecularImage_description);
    SpecularImage.setState(QtnPropertyStateCollapsed);
    static QString OcclusionImage_name = tr("OcclusionImage");
    OcclusionImage.setName(OcclusionImage_name);
    static QString OcclusionImage_description = "Occlusion Image";
    OcclusionImage.setDescription(OcclusionImage_description);
    OcclusionImage.setState(QtnPropertyStateCollapsed);
    static QString RoughnessImage_name = tr("RoughnessImage");
    RoughnessImage.setName(RoughnessImage_name);
    static QString RoughnessImage_description = "Roughness Image";
    RoughnessImage.setDescription(RoughnessImage_description);
    RoughnessImage.setState(QtnPropertyStateCollapsed);
    static QString MetallicImage_name = tr("MetallicImage");
    MetallicImage.setName(MetallicImage_name);
    static QString MetallicImage_description = "Metallic Image";
    MetallicImage.setDescription(MetallicImage_description);
    MetallicImage.setState(QtnPropertyStateCollapsed);
    static QString MaterialsImage_name = tr("MaterialsImage");
    MaterialsImage.setName(MaterialsImage_name);
    static QString MaterialsImage_description = "Materials Image";
    MaterialsImage.setDescription(MaterialsImage_description);
    MaterialsImage.setState(QtnPropertyStateCollapsed);
    static QString GrungeGeneralSettings_name = tr("GrungeGeneralSettings");
    GrungeGeneralSettings.setName(GrungeGeneralSettings_name);
    static QString GrungeGeneralSettings_description = "Grunge general settings";
    GrungeGeneralSettings.setDescription(GrungeGeneralSettings_description);
    static QString GrungePattern_name = tr("GrungePattern");
    GrungePattern.setName(GrungePattern_name);
    static QString GrungePattern_description = "Grunge pattern";
    GrungePattern.setDescription(GrungePattern_description);
    static QString UVSettings_name = tr("UVSettings");
    UVSettings.setName(UVSettings_name);
    static QString UVSettings_description = "UV/Tiling Settings";
    UVSettings.setDescription(UVSettings_description);
    static QString InputImage_name = tr("InputImage");
    InputImage.setName(InputImage_name);
    static QString InputImage_description = "Choose the input image for further processing. Warning: when current image is selected and UV transformation are applied then output normal image may not by transformed properly.";
    InputImage.setDescription(InputImage_description);
    InputImage.setEnumInfo(&INPUTIMAGE::info());
    InputImage.setValue(INPUTIMAGE::inputCurrent);
    static QString DepthInPixels_name = tr("DepthInPixels");
    DepthInPixels.setName(DepthInPixels_name);
    static QString DepthInPixels_description = "It changes the depth of the calculated normal map in pixels unit. For example: lets assume that you have picture of wall of size 1x1 m2 in real world with bricks pattern and your image has size 1024x1024 pixels. Then you want to generate normals for texture which depth is 3cm = 0.03 m. So the depth in pixels is 0.03*1024 = 30.72 ~ 31 pixels.";
    DepthInPixels.setDescription(DepthInPixels_description);
    DepthInPixels.setMaxValue(1000);
    DepthInPixels.setMinValue(0);
    DepthInPixels.setStepValue(1);
    DepthInPixels.setValue(20);
    // end children initialization
}

void QtnPropertySetAwesomeBump::connectSlots()
{
}

void QtnPropertySetAwesomeBump::disconnectSlots()
{
}

void QtnPropertySetAwesomeBump::connectDelegates()
{
}
