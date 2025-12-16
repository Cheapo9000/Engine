// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenCVBlueprintFunctionLibrary.h"

#ifdef OPENCVHELPER_OpenCVBlueprintFunctionLibrary_generated_h
#error "OpenCVBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OpenCVBlueprintFunctionLibrary.h"
#endif
#define OPENCVHELPER_OpenCVBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
enum class EOpenCVArucoDictionary : uint8;
enum class EOpenCVArucoDictionarySize : uint8;
struct FOpenCVArucoDetectedMarker;
struct FOpenCVLensDistortionParametersBase;

// ********** Begin ScriptStruct FOpenCVArucoDetectedMarker ****************************************
struct Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics;
#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics; \
	OPENCVHELPER_API static class UScriptStruct* StaticStruct();


struct FOpenCVArucoDetectedMarker;
// ********** End ScriptStruct FOpenCVArucoDetectedMarker ******************************************

// ********** Begin Class UOpenCVBlueprintFunctionLibrary ******************************************
#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenCVArucoDetectMarkers); \
	DECLARE_FUNCTION(execOpenCVChessboardDetectCorners);


struct Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics;
OPENCVHELPER_API UClass* Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenCVBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENCVHELPER_API UClass* ::Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenCVBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenCVHelper"), Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOpenCVBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPENCVHELPER_API UOpenCVBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenCVBlueprintFunctionLibrary(UOpenCVBlueprintFunctionLibrary&&) = delete; \
	UOpenCVBlueprintFunctionLibrary(const UOpenCVBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPENCVHELPER_API, UOpenCVBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVBlueprintFunctionLibrary) \
	OPENCVHELPER_API virtual ~UOpenCVBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_57_PROLOG
#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenCVBlueprintFunctionLibrary;

// ********** End Class UOpenCVBlueprintFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h

// ********** Begin Enum EOpenCVArucoDictionary ****************************************************
#define FOREACH_ENUM_EOPENCVARUCODICTIONARY(op) \
	op(EOpenCVArucoDictionary::Dict4x4) \
	op(EOpenCVArucoDictionary::Dict5x5) \
	op(EOpenCVArucoDictionary::Dict6x6) \
	op(EOpenCVArucoDictionary::Dict7x7) \
	op(EOpenCVArucoDictionary::DictOriginal) 

enum class EOpenCVArucoDictionary : uint8;
template<> struct TIsUEnumClass<EOpenCVArucoDictionary> { enum { Value = true }; };
template<> OPENCVHELPER_NON_ATTRIBUTED_API UEnum* StaticEnum<EOpenCVArucoDictionary>();
// ********** End Enum EOpenCVArucoDictionary ******************************************************

// ********** Begin Enum EOpenCVArucoDictionarySize ************************************************
#define FOREACH_ENUM_EOPENCVARUCODICTIONARYSIZE(op) \
	op(EOpenCVArucoDictionarySize::DictSize50) \
	op(EOpenCVArucoDictionarySize::DictSize100) \
	op(EOpenCVArucoDictionarySize::DictSize250) \
	op(EOpenCVArucoDictionarySize::DictSize1000) 

enum class EOpenCVArucoDictionarySize : uint8;
template<> struct TIsUEnumClass<EOpenCVArucoDictionarySize> { enum { Value = true }; };
template<> OPENCVHELPER_NON_ATTRIBUTED_API UEnum* StaticEnum<EOpenCVArucoDictionarySize>();
// ********** End Enum EOpenCVArucoDictionarySize **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
