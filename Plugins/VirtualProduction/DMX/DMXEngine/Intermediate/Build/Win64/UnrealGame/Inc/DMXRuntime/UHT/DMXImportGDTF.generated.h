// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DMXImportGDTF.h"

#ifdef DMXRUNTIME_DMXImportGDTF_generated_h
#error "DMXImportGDTF.generated.h already included, missing '#pragma once' in DMXImportGDTF.h"
#endif
#define DMXRUNTIME_DMXImportGDTF_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXImportGDTFDMXModes;
struct FDMXImportGDTFChannelFunction;
struct FDMXImportGDTFDMXMode;

// ********** Begin Class UDMXImportGDTF ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDMXModes);


struct Z_Construct_UClass_UDMXImportGDTF_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTF_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTF(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTF_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTF_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTF, UDMXImport, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTF_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTF)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTF(UDMXImportGDTF&&) = delete; \
	UDMXImportGDTF(const UDMXImportGDTF&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTF); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTF); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXImportGDTF) \
	NO_API virtual ~UDMXImportGDTF();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTF;

// ********** End Class UDMXImportGDTF *************************************************************

// ********** Begin ScriptStruct FDMXImportGDTFActivationGroup *************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFActivationGroup_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFActivationGroup_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFActivationGroup;
// ********** End ScriptStruct FDMXImportGDTFActivationGroup ***************************************

// ********** Begin ScriptStruct FDMXImportGDTFFeature *********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFFeature_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_200_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFFeature_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFFeature;
// ********** End ScriptStruct FDMXImportGDTFFeature ***********************************************

// ********** Begin ScriptStruct FDMXImportGDTFFeatureGroup ****************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFFeatureGroup_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_209_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFFeatureGroup_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFFeatureGroup;
// ********** End ScriptStruct FDMXImportGDTFFeatureGroup ******************************************

// ********** Begin ScriptStruct FDMXImportGDTFAttribute *******************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFAttribute_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_226_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFAttribute;
// ********** End ScriptStruct FDMXImportGDTFAttribute *********************************************

// ********** Begin ScriptStruct FDMXImportGDTFFilter **********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFFilter_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_255_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFFilter_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFFilter;
// ********** End ScriptStruct FDMXImportGDTFFilter ************************************************

// ********** Begin ScriptStruct FDMXImportGDTFWheelSlot *******************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFWheelSlot_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_270_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFWheelSlot_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFWheelSlot;
// ********** End ScriptStruct FDMXImportGDTFWheelSlot *********************************************

// ********** Begin ScriptStruct FDMXImportGDTFWheel ***********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFWheel_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_290_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFWheel_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFWheel;
// ********** End ScriptStruct FDMXImportGDTFWheel *************************************************

// ********** Begin ScriptStruct FDMXImportGDTFMeasurementPoint ************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFMeasurementPoint_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_304_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFMeasurementPoint_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFMeasurementPoint;
// ********** End ScriptStruct FDMXImportGDTFMeasurementPoint **************************************

// ********** Begin ScriptStruct FDMXImportGDTFMeasurement *****************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFMeasurement_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_317_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFMeasurement_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFMeasurement;
// ********** End ScriptStruct FDMXImportGDTFMeasurement *******************************************

// ********** Begin ScriptStruct FDMXImportGDTFEmitter *********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFEmitter_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_340_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFEmitter_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFEmitter;
// ********** End ScriptStruct FDMXImportGDTFEmitter ***********************************************

// ********** Begin ScriptStruct FDMXImportGDTFColorSpace ******************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFColorSpace_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_365_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFColorSpace_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFColorSpace;
// ********** End ScriptStruct FDMXImportGDTFColorSpace ********************************************

// ********** Begin ScriptStruct FDMXImportGDTFDMXProfiles *****************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFDMXProfiles_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_393_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFDMXProfiles_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFDMXProfiles;
// ********** End ScriptStruct FDMXImportGDTFDMXProfiles *******************************************

// ********** Begin ScriptStruct FDMXImportGDTFCRIs ************************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFCRIs_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_399_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFCRIs_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFCRIs;
// ********** End ScriptStruct FDMXImportGDTFCRIs **************************************************

// ********** Begin ScriptStruct FDMXImportGDTFModel ***********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFModel_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_406_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFModel_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFModel;
// ********** End ScriptStruct FDMXImportGDTFModel *************************************************

// ********** Begin ScriptStruct FDMXImportGDTFGeometryBase ****************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFGeometryBase_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_429_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFGeometryBase_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFGeometryBase;
// ********** End ScriptStruct FDMXImportGDTFGeometryBase ******************************************

// ********** Begin ScriptStruct FDMXImportGDTFBeam ************************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFBeam_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_447_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFBeam_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFBeam;
// ********** End ScriptStruct FDMXImportGDTFBeam **************************************************

// ********** Begin ScriptStruct FDMXImportGDTFTypeAxis ********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFTypeAxis_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_493_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFTypeAxis_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFTypeAxis;
// ********** End ScriptStruct FDMXImportGDTFTypeAxis **********************************************

// ********** Begin ScriptStruct FDMXImportGDTFGeneralAxis *****************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFGeneralAxis_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_513_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFGeneralAxis_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFGeneralAxis;
// ********** End ScriptStruct FDMXImportGDTFGeneralAxis *******************************************

// ********** Begin ScriptStruct FDMXImportGDTFTypeGeometry ****************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFTypeGeometry_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_533_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFTypeGeometry_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFTypeGeometry;
// ********** End ScriptStruct FDMXImportGDTFTypeGeometry ******************************************

// ********** Begin ScriptStruct FDMXImportGDTFFilterBeam ******************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFFilterBeam_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_548_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFFilterBeam_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFFilterBeam;
// ********** End ScriptStruct FDMXImportGDTFFilterBeam ********************************************

// ********** Begin ScriptStruct FDMXImportGDTFFilterColor *****************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFFilterColor_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_563_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFFilterColor_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFFilterColor;
// ********** End ScriptStruct FDMXImportGDTFFilterColor *******************************************

// ********** Begin ScriptStruct FDMXImportGDTFFilterGobo ******************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFFilterGobo_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_578_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFFilterGobo_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFFilterGobo;
// ********** End ScriptStruct FDMXImportGDTFFilterGobo ********************************************

// ********** Begin ScriptStruct FDMXImportGDTFFilterShaper ****************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFFilterShaper_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_593_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFFilterShaper_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFFilterShaper;
// ********** End ScriptStruct FDMXImportGDTFFilterShaper ******************************************

// ********** Begin ScriptStruct FDMXImportGDTFBreak ***********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFBreak_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_608_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFBreak_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFBreak;
// ********** End ScriptStruct FDMXImportGDTFBreak *************************************************

// ********** Begin ScriptStruct FDMXImportGDTFGeometryReference ***********************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFGeometryReference_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_620_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFGeometryReference_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFGeometryReference;
// ********** End ScriptStruct FDMXImportGDTFGeometryReference *************************************

// ********** Begin ScriptStruct FDMXImportGDTFGeneralGeometry *************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFGeneralGeometry_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_640_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFGeneralGeometry_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFGeneralGeometry;
// ********** End ScriptStruct FDMXImportGDTFGeneralGeometry ***************************************

// ********** Begin ScriptStruct FDMXImportGDTFDMXValue ********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFDMXValue_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_678_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFDMXValue_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFDMXValue;
// ********** End ScriptStruct FDMXImportGDTFDMXValue **********************************************

// ********** Begin ScriptStruct FDMXImportGDTFChannelSet ******************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFChannelSet_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_698_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFChannelSet_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFChannelSet;
// ********** End ScriptStruct FDMXImportGDTFChannelSet ********************************************

// ********** Begin ScriptStruct FDMXImportGDTFChannelFunction *************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFChannelFunction_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_721_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFChannelFunction_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFChannelFunction;
// ********** End ScriptStruct FDMXImportGDTFChannelFunction ***************************************

// ********** Begin ScriptStruct FDMXImportGDTFLogicalChannel **************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFLogicalChannel_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_783_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFLogicalChannel_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFLogicalChannel;
// ********** End ScriptStruct FDMXImportGDTFLogicalChannel ****************************************

// ********** Begin ScriptStruct FDMXImportGDTFDMXChannel ******************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFDMXChannel_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_811_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFDMXChannel_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFDMXChannel;
// ********** End ScriptStruct FDMXImportGDTFDMXChannel ********************************************

// ********** Begin ScriptStruct FDMXImportGDTFRelation ********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFRelation_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_842_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFRelation_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFRelation;
// ********** End ScriptStruct FDMXImportGDTFRelation **********************************************

// ********** Begin ScriptStruct FDMXImportGDTFFTMacro *********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFFTMacro_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_862_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFFTMacro_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFFTMacro;
// ********** End ScriptStruct FDMXImportGDTFFTMacro ***********************************************

// ********** Begin ScriptStruct FDMXImportGDTFDMXMode *********************************************
struct Z_Construct_UScriptStruct_FDMXImportGDTFDMXMode_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_871_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXImportGDTFDMXMode_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXImportGDTFDMXMode;
// ********** End ScriptStruct FDMXImportGDTFDMXMode ***********************************************

// ********** Begin Class UDMXImportGDTFFixtureType ************************************************
struct Z_Construct_UClass_UDMXImportGDTFFixtureType_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTFFixtureType_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_897_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTFFixtureType(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTFFixtureType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTFFixtureType_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTFFixtureType, UDMXImportFixtureType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTFFixtureType_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTFFixtureType)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_897_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXImportGDTFFixtureType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTFFixtureType(UDMXImportGDTFFixtureType&&) = delete; \
	UDMXImportGDTFFixtureType(const UDMXImportGDTFFixtureType&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTFFixtureType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTFFixtureType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXImportGDTFFixtureType) \
	NO_API virtual ~UDMXImportGDTFFixtureType();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_893_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_897_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_897_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_897_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTFFixtureType;

// ********** End Class UDMXImportGDTFFixtureType **************************************************

// ********** Begin Class UDMXImportGDTFAttributeDefinitions ***************************************
struct Z_Construct_UClass_UDMXImportGDTFAttributeDefinitions_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTFAttributeDefinitions_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_933_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTFAttributeDefinitions(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTFAttributeDefinitions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTFAttributeDefinitions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTFAttributeDefinitions, UDMXImportAttributeDefinitions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTFAttributeDefinitions_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTFAttributeDefinitions)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_933_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXImportGDTFAttributeDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTFAttributeDefinitions(UDMXImportGDTFAttributeDefinitions&&) = delete; \
	UDMXImportGDTFAttributeDefinitions(const UDMXImportGDTFAttributeDefinitions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTFAttributeDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTFAttributeDefinitions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXImportGDTFAttributeDefinitions) \
	NO_API virtual ~UDMXImportGDTFAttributeDefinitions();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_929_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_933_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_933_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_933_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTFAttributeDefinitions;

// ********** End Class UDMXImportGDTFAttributeDefinitions *****************************************

// ********** Begin Class UDMXImportGDTFWheels *****************************************************
struct Z_Construct_UClass_UDMXImportGDTFWheels_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTFWheels_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_959_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTFWheels(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTFWheels_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTFWheels_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTFWheels, UDMXImportWheels, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTFWheels_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTFWheels)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_959_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXImportGDTFWheels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTFWheels(UDMXImportGDTFWheels&&) = delete; \
	UDMXImportGDTFWheels(const UDMXImportGDTFWheels&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTFWheels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTFWheels); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXImportGDTFWheels) \
	NO_API virtual ~UDMXImportGDTFWheels();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_955_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_959_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_959_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_959_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTFWheels;

// ********** End Class UDMXImportGDTFWheels *******************************************************

// ********** Begin Class UDMXImportGDTFPhysicalDescriptions ***************************************
struct Z_Construct_UClass_UDMXImportGDTFPhysicalDescriptions_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTFPhysicalDescriptions_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_977_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTFPhysicalDescriptions(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTFPhysicalDescriptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTFPhysicalDescriptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTFPhysicalDescriptions, UDMXImportPhysicalDescriptions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTFPhysicalDescriptions_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTFPhysicalDescriptions)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_977_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXImportGDTFPhysicalDescriptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTFPhysicalDescriptions(UDMXImportGDTFPhysicalDescriptions&&) = delete; \
	UDMXImportGDTFPhysicalDescriptions(const UDMXImportGDTFPhysicalDescriptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTFPhysicalDescriptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTFPhysicalDescriptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXImportGDTFPhysicalDescriptions) \
	NO_API virtual ~UDMXImportGDTFPhysicalDescriptions();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_973_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_977_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_977_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_977_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTFPhysicalDescriptions;

// ********** End Class UDMXImportGDTFPhysicalDescriptions *****************************************

// ********** Begin Class UDMXImportGDTFModels *****************************************************
struct Z_Construct_UClass_UDMXImportGDTFModels_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTFModels_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1004_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTFModels(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTFModels_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTFModels_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTFModels, UDMXImportModels, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTFModels_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTFModels)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1004_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXImportGDTFModels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTFModels(UDMXImportGDTFModels&&) = delete; \
	UDMXImportGDTFModels(const UDMXImportGDTFModels&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTFModels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTFModels); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXImportGDTFModels) \
	NO_API virtual ~UDMXImportGDTFModels();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1000_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1004_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1004_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1004_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTFModels;

// ********** End Class UDMXImportGDTFModels *******************************************************

// ********** Begin Class UDMXImportGDTFGeometries *************************************************
struct Z_Construct_UClass_UDMXImportGDTFGeometries_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTFGeometries_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1019_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTFGeometries(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTFGeometries_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTFGeometries_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTFGeometries, UDMXImportGeometries, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTFGeometries_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTFGeometries)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1019_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXImportGDTFGeometries(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTFGeometries(UDMXImportGDTFGeometries&&) = delete; \
	UDMXImportGDTFGeometries(const UDMXImportGDTFGeometries&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTFGeometries); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTFGeometries); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXImportGDTFGeometries) \
	NO_API virtual ~UDMXImportGDTFGeometries();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1015_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1019_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1019_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1019_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTFGeometries;

// ********** End Class UDMXImportGDTFGeometries ***************************************************

// ********** Begin Class UDMXImportGDTFDMXModes ***************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1034_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDMXChannelFunctions);


struct Z_Construct_UClass_UDMXImportGDTFDMXModes_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTFDMXModes_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1034_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTFDMXModes(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTFDMXModes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTFDMXModes_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTFDMXModes, UDMXImportDMXModes, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTFDMXModes_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTFDMXModes)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1034_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXImportGDTFDMXModes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTFDMXModes(UDMXImportGDTFDMXModes&&) = delete; \
	UDMXImportGDTFDMXModes(const UDMXImportGDTFDMXModes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTFDMXModes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTFDMXModes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXImportGDTFDMXModes) \
	NO_API virtual ~UDMXImportGDTFDMXModes();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1030_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1034_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1034_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1034_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1034_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTFDMXModes;

// ********** End Class UDMXImportGDTFDMXModes *****************************************************

// ********** Begin Class UDMXImportGDTFProtocols **************************************************
struct Z_Construct_UClass_UDMXImportGDTFProtocols_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTFProtocols_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1052_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXImportGDTFProtocols(); \
	friend struct ::Z_Construct_UClass_UDMXImportGDTFProtocols_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXImportGDTFProtocols_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXImportGDTFProtocols, UDMXImportProtocols, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXImportGDTFProtocols_NoRegister) \
	DECLARE_SERIALIZER(UDMXImportGDTFProtocols)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1052_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXImportGDTFProtocols(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXImportGDTFProtocols(UDMXImportGDTFProtocols&&) = delete; \
	UDMXImportGDTFProtocols(const UDMXImportGDTFProtocols&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXImportGDTFProtocols); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXImportGDTFProtocols); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXImportGDTFProtocols) \
	NO_API virtual ~UDMXImportGDTFProtocols();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1048_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1052_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1052_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h_1052_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXImportGDTFProtocols;

// ********** End Class UDMXImportGDTFProtocols ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImportGDTF_h

// ********** Begin Enum EDMXImportGDTFType ********************************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFTYPE(op) \
	op(EDMXImportGDTFType::Multiply) \
	op(EDMXImportGDTFType::Override) 

enum class EDMXImportGDTFType : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFType> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFType>();
// ********** End Enum EDMXImportGDTFType **********************************************************

// ********** Begin Enum EDMXImportGDTFSnap ********************************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFSNAP(op) \
	op(EDMXImportGDTFSnap::Yes) \
	op(EDMXImportGDTFSnap::No) \
	op(EDMXImportGDTFSnap::On) \
	op(EDMXImportGDTFSnap::Off) 

enum class EDMXImportGDTFSnap : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFSnap> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFSnap>();
// ********** End Enum EDMXImportGDTFSnap **********************************************************

// ********** Begin Enum EDMXImportGDTFMaster ******************************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFMASTER(op) \
	op(EDMXImportGDTFMaster::None) \
	op(EDMXImportGDTFMaster::Grand) \
	op(EDMXImportGDTFMaster::Group) 

enum class EDMXImportGDTFMaster : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFMaster> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFMaster>();
// ********** End Enum EDMXImportGDTFMaster ********************************************************

// ********** Begin Enum EDMXImportGDTFDMXInvert ***************************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFDMXINVERT(op) \
	op(EDMXImportGDTFDMXInvert::Yes) \
	op(EDMXImportGDTFDMXInvert::No) 

enum class EDMXImportGDTFDMXInvert : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFDMXInvert> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFDMXInvert>();
// ********** End Enum EDMXImportGDTFDMXInvert *****************************************************

// ********** Begin Enum EDMXImportGDTFLampType ****************************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFLAMPTYPE(op) \
	op(EDMXImportGDTFLampType::Discharge) \
	op(EDMXImportGDTFLampType::Tungsten) \
	op(EDMXImportGDTFLampType::Halogen) \
	op(EDMXImportGDTFLampType::LED) 

enum class EDMXImportGDTFLampType : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFLampType> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFLampType>();
// ********** End Enum EDMXImportGDTFLampType ******************************************************

// ********** Begin Enum EDMXImportGDTFBeamType ****************************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFBEAMTYPE(op) \
	op(EDMXImportGDTFBeamType::Wash) \
	op(EDMXImportGDTFBeamType::Spot) \
	op(EDMXImportGDTFBeamType::None) 

enum class EDMXImportGDTFBeamType : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFBeamType> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFBeamType>();
// ********** End Enum EDMXImportGDTFBeamType ******************************************************

// ********** Begin Enum EDMXImportGDTFPrimitiveType ***********************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFPRIMITIVETYPE(op) \
	op(EDMXImportGDTFPrimitiveType::Undefined) \
	op(EDMXImportGDTFPrimitiveType::Cube) \
	op(EDMXImportGDTFPrimitiveType::Cylinder) \
	op(EDMXImportGDTFPrimitiveType::Sphere) \
	op(EDMXImportGDTFPrimitiveType::Base) \
	op(EDMXImportGDTFPrimitiveType::Yoke) \
	op(EDMXImportGDTFPrimitiveType::Head) \
	op(EDMXImportGDTFPrimitiveType::Scanner) \
	op(EDMXImportGDTFPrimitiveType::Conventional) \
	op(EDMXImportGDTFPrimitiveType::Pigtail) 

enum class EDMXImportGDTFPrimitiveType : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFPrimitiveType> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFPrimitiveType>();
// ********** End Enum EDMXImportGDTFPrimitiveType *************************************************

// ********** Begin Enum EDMXImportGDTFPhysicalUnit ************************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFPHYSICALUNIT(op) \
	op(EDMXImportGDTFPhysicalUnit::None) \
	op(EDMXImportGDTFPhysicalUnit::Percent) \
	op(EDMXImportGDTFPhysicalUnit::Length) \
	op(EDMXImportGDTFPhysicalUnit::Mass) \
	op(EDMXImportGDTFPhysicalUnit::Time) \
	op(EDMXImportGDTFPhysicalUnit::Temperature) \
	op(EDMXImportGDTFPhysicalUnit::LuminousIntensity) \
	op(EDMXImportGDTFPhysicalUnit::Angle) \
	op(EDMXImportGDTFPhysicalUnit::Force) \
	op(EDMXImportGDTFPhysicalUnit::Frequency) \
	op(EDMXImportGDTFPhysicalUnit::Current) \
	op(EDMXImportGDTFPhysicalUnit::Voltage) \
	op(EDMXImportGDTFPhysicalUnit::Power) \
	op(EDMXImportGDTFPhysicalUnit::Energy) \
	op(EDMXImportGDTFPhysicalUnit::Area) \
	op(EDMXImportGDTFPhysicalUnit::Volume) \
	op(EDMXImportGDTFPhysicalUnit::Speed) \
	op(EDMXImportGDTFPhysicalUnit::Acceleration) \
	op(EDMXImportGDTFPhysicalUnit::AngularSpeed) \
	op(EDMXImportGDTFPhysicalUnit::AngularAccc) \
	op(EDMXImportGDTFPhysicalUnit::WaveLength) \
	op(EDMXImportGDTFPhysicalUnit::ColorComponent) 

enum class EDMXImportGDTFPhysicalUnit : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFPhysicalUnit> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFPhysicalUnit>();
// ********** End Enum EDMXImportGDTFPhysicalUnit **************************************************

// ********** Begin Enum EDMXImportGDTFMode ********************************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFMODE(op) \
	op(EDMXImportGDTFMode::Custom) \
	op(EDMXImportGDTFMode::sRGB) \
	op(EDMXImportGDTFMode::ProPhoto) \
	op(EDMXImportGDTFMode::ANSI) 

enum class EDMXImportGDTFMode : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFMode> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFMode>();
// ********** End Enum EDMXImportGDTFMode **********************************************************

// ********** Begin Enum EDMXImportGDTFInterpolationTo *********************************************
#define FOREACH_ENUM_EDMXIMPORTGDTFINTERPOLATIONTO(op) \
	op(EDMXImportGDTFInterpolationTo::Linear) \
	op(EDMXImportGDTFInterpolationTo::Step) \
	op(EDMXImportGDTFInterpolationTo::Log) 

enum class EDMXImportGDTFInterpolationTo : uint8;
template<> struct TIsUEnumClass<EDMXImportGDTFInterpolationTo> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXImportGDTFInterpolationTo>();
// ********** End Enum EDMXImportGDTFInterpolationTo ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
