// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundFrontendLiteralBlueprintAccess.h"

#ifdef METASOUNDENGINE_MetasoundFrontendLiteralBlueprintAccess_generated_h
#error "MetasoundFrontendLiteralBlueprintAccess.generated.h already included, missing '#pragma once' in MetasoundFrontendLiteralBlueprintAccess.h"
#endif
#define METASOUNDENGINE_MetasoundFrontendLiteralBlueprintAccess_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EMetaSoundBuilderResult : uint8;
enum class EMetasoundFrontendLiteralType : uint8;
struct FAudioParameter;
struct FMetasoundFrontendLiteral;

// ********** Begin Class UMetasoundFrontendLiteralBlueprintAccess *********************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsStringArray); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsString); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsObjectArray); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsObject); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsIntegerArray); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsInteger); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsFloatArray); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsFloat); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsBoolArray); \
	DECLARE_FUNCTION(execGetMetaSoundLiteralAsBool); \
	DECLARE_FUNCTION(execGetStringArrayValueFromLiteral); \
	DECLARE_FUNCTION(execGetStringValueFromLiteral); \
	DECLARE_FUNCTION(execGetObjectArrayValueFromLiteral); \
	DECLARE_FUNCTION(execGetObjectValueFromLiteral); \
	DECLARE_FUNCTION(execGetIntArrayValueFromLiteral); \
	DECLARE_FUNCTION(execGetIntValueFromLiteral); \
	DECLARE_FUNCTION(execGetFloatArrayValueFromLiteral); \
	DECLARE_FUNCTION(execGetFloatValueFromLiteral); \
	DECLARE_FUNCTION(execGetBoolArrayValueFromLiteral); \
	DECLARE_FUNCTION(execGetBoolValueFromLiteral); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromAudioParameter); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromStringArray); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromString); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromObjectArray); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromObject); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromIntegerArray); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromInteger); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromFloatArray); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromFloat); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromBooleanArray); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromBoolean); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromParam); \
	DECLARE_FUNCTION(execCreateStringArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateStringMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolMetaSoundLiteral); \
	DECLARE_FUNCTION(execEqualEqual_MetaSoundLiteral); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execConv_MetaSoundLiteralToString);


struct Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundFrontendLiteralBlueprintAccess(); \
	friend struct ::Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundFrontendLiteralBlueprintAccess, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundFrontendLiteralBlueprintAccess)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetasoundFrontendLiteralBlueprintAccess(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundFrontendLiteralBlueprintAccess(UMetasoundFrontendLiteralBlueprintAccess&&) = delete; \
	UMetasoundFrontendLiteralBlueprintAccess(const UMetasoundFrontendLiteralBlueprintAccess&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetasoundFrontendLiteralBlueprintAccess); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundFrontendLiteralBlueprintAccess); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundFrontendLiteralBlueprintAccess) \
	NO_API virtual ~UMetasoundFrontendLiteralBlueprintAccess();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundFrontendLiteralBlueprintAccess;

// ********** End Class UMetasoundFrontendLiteralBlueprintAccess ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
