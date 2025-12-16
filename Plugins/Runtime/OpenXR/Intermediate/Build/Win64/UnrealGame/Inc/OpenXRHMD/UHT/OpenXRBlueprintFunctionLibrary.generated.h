// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenXRBlueprintFunctionLibrary.h"

#ifdef OPENXRHMD_OpenXRBlueprintFunctionLibrary_generated_h
#error "OpenXRBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OpenXRBlueprintFunctionLibrary.h"
#endif
#define OPENXRHMD_OpenXRBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOpenXREnvironmentBlendMode : uint8;

// ********** Begin Class UOpenXRBlueprintFunctionLibrary ******************************************
#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsCompositionLayerInvertedAlphaEnabled); \
	DECLARE_FUNCTION(execGetSupportedEnvironmentBlendModes); \
	DECLARE_FUNCTION(execGetEnvironmentBlendMode); \
	DECLARE_FUNCTION(execSetEnvironmentBlendMode);


struct Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics;
OPENXRHMD_API UClass* Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUOpenXRBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENXRHMD_API UClass* ::Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenXRBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenXRHMD"), Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOpenXRBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRBlueprintFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenXRBlueprintFunctionLibrary(UOpenXRBlueprintFunctionLibrary&&) = delete; \
	UOpenXRBlueprintFunctionLibrary(const UOpenXRBlueprintFunctionLibrary&) = delete; \
	NO_API virtual ~UOpenXRBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenXRBlueprintFunctionLibrary;

// ********** End Class UOpenXRBlueprintFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h

// ********** Begin Enum EOpenXREnvironmentBlendMode ***********************************************
#define FOREACH_ENUM_EOPENXRENVIRONMENTBLENDMODE(op) \
	op(EOpenXREnvironmentBlendMode::None) \
	op(EOpenXREnvironmentBlendMode::Opaque) \
	op(EOpenXREnvironmentBlendMode::Additive) \
	op(EOpenXREnvironmentBlendMode::AlphaBlend) 

enum class EOpenXREnvironmentBlendMode : uint8;
template<> struct TIsUEnumClass<EOpenXREnvironmentBlendMode> { enum { Value = true }; };
template<> OPENXRHMD_NON_ATTRIBUTED_API UEnum* StaticEnum<EOpenXREnvironmentBlendMode>();
// ********** End Enum EOpenXREnvironmentBlendMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
