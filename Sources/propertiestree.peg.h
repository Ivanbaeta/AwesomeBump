#ifndef PROPERTIESTREE_H
#define PROPERTIESTREE_H

#include <Core/PropertyCore.h>
#include <Core/PropertyGUI.h>

class COLOR
{
public:
    enum Enum
    {
        red = 1,
        blue = 2,
        green = 3
    };
    
    static const QtnEnumInfo& info();
    static const unsigned int values_count = 3;
};

class FLAGS
{
public:
    enum Enum
    {
        opt1 = 1,
        opt2 = 2,
        opt3 = 4
    };
    
    static const QtnEnumInfo& info();
    static const unsigned int values_count = 3;
};

class SHADINGMODEL
{
public:
    enum Enum
    {
        pbr = 0,
        bumpMapping = 1
    };
    
    static const QtnEnumInfo& info();
    static const unsigned int values_count = 2;
};

class BLENDINGMODE
{
public:
    enum Enum
    {
        blendNormal = 0,
        blendMultiply = 1,
        blendAdd = 2,
        blendSubtract = 3,
        blendDifference = 4,
        blendDivide = 5,
        blendScreen = 6,
        blendOverlay = 7,
        blendDodge = 8,
        blendBurn = 9,
        blendDarkenOnly = 10,
        blendLightenOnly = 11
    };
    
    static const QtnEnumInfo& info();
    static const unsigned int values_count = 12;
};

class INPUTIMAGE
{
public:
    enum Enum
    {
        inputCurrent = 0,
        inputHeightInput = 1,
        inputHeightOutput = 2
    };
    
    static const QtnEnumInfo& info();
    static const unsigned int values_count = 3;
};

class QtnPropertySetFormImageProp: public QtnPropertySet
{
    Q_OBJECT
    //Q_DISABLE_COPY(QtnPropertySetFormImageProp)

public:
    // constructor declaration
    explicit QtnPropertySetFormImageProp(QObject* parent = 0);
    // destructor declaration
    virtual ~QtnPropertySetFormImageProp();
    // assignment declaration
    QtnPropertySetFormImageProp& operator=(const QtnPropertySetFormImageProp& other);
    
    // start children declarations
    QtnPropertyInt& GrungeRadius;
    QtnPropertyInt& GrungeOverallWeight;
    QtnPropertyInt& GrungeSeed;
    QtnPropertyInt& GrungeNormalWarp;
    QtnPropertyInt& GrungeImageWeight;
    QtnPropertyInt& GrungeMainImageWeight;
    QtnPropertyInt& ConversionHNDepth;
    QtnPropertyInt& NormalMixerAngle;
    QtnPropertyInt& NormalMixerScale;
    QtnPropertyInt& NormalMixerPosX;
    QtnPropertyInt& NormalMixerPosY;
    QtnPropertyInt& NormalMixerDepth;
    QtnPropertyInt& SSAONoIters;
    QtnPropertyInt& SSAODepth;
    QtnPropertyInt& SSAOIntensity;
    QtnPropertyInt& SSAOBias;
    QtnPropertyInt& RoughnessDepth;
    QtnPropertyInt& RoughnessTreshold;
    QtnPropertyInt& RoughnessAmplifier;
    QtnPropertyInt& RoughnessColorOffset;
    QtnPropertyInt& RoughnessColorAmplifier;
    QtnPropertyInt& RoughnessColorGlobalOffset;
    QtnPropertyInt& NormalToHeightItersLarge;
    QtnPropertyInt& NormalToHeightItersVerySmall;
    QtnPropertyInt& NormalToHeightItersSmall;
    QtnPropertyInt& NormalToHeightItersVeryLarge;
    QtnPropertyInt& NormalToHeightItersMedium;
    QtnPropertyInt& NormalToHeightItersHuge;
    QtnPropertyInt& GrayScaleR;
    QtnPropertyInt& GrayScaleG;
    QtnPropertyInt& GrayScaleB;
    QtnPropertyInt& RemoveShadingLFBlending;
    QtnPropertyInt& RemoveShadingLFRadius;
    QtnPropertyInt& RemoveShadingGaussIter;
    QtnPropertyInt& AOCancelation;
    QtnPropertyInt& BlurNoPasses;
    QtnPropertyInt& DetailDepth;
    QtnPropertyInt& NormalsStep;
    QtnPropertyInt& ColorHue;
    QtnPropertyInt& SharpenBlur;
    QtnPropertyInt& MediumDetails;
    QtnPropertyInt& SmallDetails;
    QtnPropertyInt& HeightAveRadius;
    QtnPropertyInt& HeightProcMinValue;
    QtnPropertyInt& HeightProcMaxValue;
    QtnPropertyInt& HeightOffsetValue;
    QtnPropertyInt& SpeculatW1;
    QtnPropertyInt& SpecularW2;
    QtnPropertyInt& SpecularRadius;
    QtnPropertyInt& SpecularContrast;
    QtnPropertyInt& SpecularAmplifier;
    QtnPropertyInt& SpecularBrightness;
    QtnPropertyInt& SelectiveBlurMaskRadius;
    QtnPropertyInt& SelectiveBlurBlending;
    QtnPropertyInt& SelectiveBlurNoIters;
    QtnPropertyInt& SelectiveBlurDOGRadius;
    QtnPropertyInt& SelectiveBlurDOGContrast;
    QtnPropertyInt& SelectiveBlurDOGAmplifier;
    QtnPropertyInt& SelectiveBlurDOGOffset;
    QtnPropertyInt& SelectiveBlurMinValue;
    QtnPropertyInt& SelectiveBlurMaxValue;
    QtnPropertyInt& SelectiveBlurDetails;
    QtnPropertyInt& SelectiveBlurOffset;
    QtnPropertyInt& BaseToOthersAngleCorrection;
    QtnPropertyInt& BaseToOthersAngleWeight;
    // end children declarations

protected:
    // cloning implementation
    QtnPropertySet* createNewImpl(QObject* parentForNew) const override;
    QtnPropertySet* createCopyImpl(QObject* parentForCopy) const override;
    // copy values implementation
    bool copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask) override;

private:
    void init();
    void connectSlots();
    void disconnectSlots();
    void connectDelegates();
};

class QtnPropertySetMaterialsImageType: public QtnPropertySet
{
    Q_OBJECT
    //Q_DISABLE_COPY(QtnPropertySetMaterialsImageType)

public:
    // constructor declaration
    explicit QtnPropertySetMaterialsImageType(QObject* parent = 0);
    // destructor declaration
    virtual ~QtnPropertySetMaterialsImageType();
    // assignment declaration
    QtnPropertySetMaterialsImageType& operator=(const QtnPropertySetMaterialsImageType& other);
    
    // start children declarations
    QtnPropertyQString& Dummy;
    // end children declarations

protected:
    // cloning implementation
    QtnPropertySet* createNewImpl(QObject* parentForNew) const override;
    QtnPropertySet* createCopyImpl(QObject* parentForCopy) const override;
    // copy values implementation
    bool copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask) override;

private:
    void init();
    void connectSlots();
    void disconnectSlots();
    void connectDelegates();
};

class QtnPropertySetGrungeGeneralSettingsType: public QtnPropertySet
{
    Q_OBJECT
    //Q_DISABLE_COPY(QtnPropertySetGrungeGeneralSettingsType)

public:
    // constructor declaration
    explicit QtnPropertySetGrungeGeneralSettingsType(QObject* parent = 0);
    // destructor declaration
    virtual ~QtnPropertySetGrungeGeneralSettingsType();
    // assignment declaration
    QtnPropertySetGrungeGeneralSettingsType& operator=(const QtnPropertySetGrungeGeneralSettingsType& other);
    
    // start children declarations
    QtnPropertyInt& OverallWeight;
    QtnPropertyInt& Randomize;
    QtnPropertyInt& Scale;
    QtnPropertyInt& NormalWarp;
    QtnPropertyQString& Predefined;
    QtnPropertyBool& RandomTranslations;
    QtnPropertyBool& ReplotAllTexturesWhenChanges;
    // end children declarations

protected:
    // cloning implementation
    QtnPropertySet* createNewImpl(QObject* parentForNew) const override;
    QtnPropertySet* createCopyImpl(QObject* parentForCopy) const override;
    // copy values implementation
    bool copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask) override;

private:
    void init();
    void connectSlots();
    void disconnectSlots();
    void connectDelegates();
};

class QtnPropertySetGrungePatternType: public QtnPropertySet
{
    Q_OBJECT
    //Q_DISABLE_COPY(QtnPropertySetGrungePatternType)

public:
    // constructor declaration
    explicit QtnPropertySetGrungePatternType(QObject* parent = 0);
    // destructor declaration
    virtual ~QtnPropertySetGrungePatternType();
    // assignment declaration
    QtnPropertySetGrungePatternType& operator=(const QtnPropertySetGrungePatternType& other);
    
    // start children declarations
    QtnPropertyEnum& BlendingMode;
    QtnPropertyInt& GrungeWeight;
    QtnPropertyInt& ImageWeight;
    // end children declarations

protected:
    // cloning implementation
    QtnPropertySet* createNewImpl(QObject* parentForNew) const override;
    QtnPropertySet* createCopyImpl(QObject* parentForCopy) const override;
    // copy values implementation
    bool copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask) override;

private:
    void init();
    void connectSlots();
    void disconnectSlots();
    void connectDelegates();
};

class QtnPropertySetUVSettingsType: public QtnPropertySet
{
    Q_OBJECT
    //Q_DISABLE_COPY(QtnPropertySetUVSettingsType)

public:
    // constructor declaration
    explicit QtnPropertySetUVSettingsType(QObject* parent = 0);
    // destructor declaration
    virtual ~QtnPropertySetUVSettingsType();
    // assignment declaration
    QtnPropertySetUVSettingsType& operator=(const QtnPropertySetUVSettingsType& other);
    
    // start children declarations
    QtnPropertyInt& SeamlessContrastPower;
    QtnPropertyInt& SeamlessContrastStrenght;
    QtnPropertyInt& MakeSeamlessRadius;
    QtnPropertyInt& RandomPatchesInnerRadius;
    QtnPropertyInt& RandomPatchesRotate;
    QtnPropertyInt& RandomPatchesOuterRadius;
    // end children declarations

protected:
    // cloning implementation
    QtnPropertySet* createNewImpl(QObject* parentForNew) const override;
    QtnPropertySet* createCopyImpl(QObject* parentForCopy) const override;
    // copy values implementation
    bool copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask) override;

private:
    void init();
    void connectSlots();
    void disconnectSlots();
    void connectDelegates();
};

class QtnPropertySetAwesomeBump: public QtnPropertySet
{
    Q_OBJECT
    //Q_DISABLE_COPY(QtnPropertySetAwesomeBump)

public:
    // constructor declaration
    explicit QtnPropertySetAwesomeBump(QObject* parent = 0);
    // destructor declaration
    virtual ~QtnPropertySetAwesomeBump();
    // assignment declaration
    QtnPropertySetAwesomeBump& operator=(const QtnPropertySetAwesomeBump& other);
    
    // start children declarations
    QtnPropertySetFormImageProp& DiffuseImage;
    QtnPropertySetFormImageProp& NormalImage;
    QtnPropertySetFormImageProp& SpecularImage;
    QtnPropertySetFormImageProp& OcclusionImage;
    QtnPropertySetFormImageProp& RoughnessImage;
    QtnPropertySetFormImageProp& MetallicImage;
    QtnPropertySetMaterialsImageType& MaterialsImage;
    QtnPropertySetGrungeGeneralSettingsType& GrungeGeneralSettings;
    QtnPropertySetGrungePatternType& GrungePattern;
    QtnPropertySetUVSettingsType& UVSettings;
    QtnPropertyEnum& InputImage;
    QtnPropertyFloat& DepthInPixels;
    // end children declarations

protected:
    // cloning implementation
    QtnPropertySet* createNewImpl(QObject* parentForNew) const override;
    QtnPropertySet* createCopyImpl(QObject* parentForCopy) const override;
    // copy values implementation
    bool copyValuesImpl(QtnPropertySet* propertySetCopyFrom, QtnPropertyState ignoreMask) override;

private:
    void init();
    void connectSlots();
    void disconnectSlots();
    void connectDelegates();
};

#endif // PROPERTIESTREE_H
