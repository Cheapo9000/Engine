// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObject.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObject_generated_h
#error "CustomizableObject.generated.h already included, missing '#pragma once' in CustomizableObject.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObjectInstance;
class UDataTable;
class UMaterialInterface;
class USkeletalMesh;
class UTexture;
enum class ECustomizableObjectGroupType : uint8;
enum class EMutableParameterType : uint8;
struct FCompileCallbackParams;
struct FCompileParams;
struct FCustomizableObjectProjector;
struct FLinearColor;
struct FMutableParamUIMetadata;
struct FMutableStateUIMetadata;

// ********** Begin ScriptStruct FFParameterOptionsTags ********************************************
struct Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FFParameterOptionsTags;
// ********** End ScriptStruct FFParameterOptionsTags **********************************************

// ********** Begin ScriptStruct FParameterTags ****************************************************
struct Z_Construct_UScriptStruct_FParameterTags_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParameterTags_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FParameterTags;
// ********** End ScriptStruct FParameterTags ******************************************************

// ********** Begin ScriptStruct FProfileParameterDat **********************************************
struct Z_Construct_UScriptStruct_FProfileParameterDat_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileParameterDat_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FProfileParameterDat;
// ********** End ScriptStruct FProfileParameterDat ************************************************

// ********** Begin ScriptStruct FMutableLODSettings ***********************************************
struct Z_Construct_UScriptStruct_FMutableLODSettings_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMutableLODSettings_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FMutableLODSettings;
// ********** End ScriptStruct FMutableLODSettings *************************************************

// ********** Begin ScriptStruct FCompileCallbackParams ********************************************
struct Z_Construct_UScriptStruct_FCompileCallbackParams_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompileCallbackParams_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FCompileCallbackParams;
// ********** End ScriptStruct FCompileCallbackParams **********************************************

// ********** Begin Delegate FCompileDelegate ******************************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_171_DELEGATE \
CUSTOMIZABLEOBJECT_API void FCompileDelegate_DelegateWrapper(const FScriptDelegate& CompileDelegate, FCompileCallbackParams const& Params);


// ********** End Delegate FCompileDelegate ********************************************************

// ********** Begin ScriptStruct FCompileParams ****************************************************
struct Z_Construct_UScriptStruct_FCompileParams_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompileParams_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FCompileParams;
// ********** End ScriptStruct FCompileParams ******************************************************

// ********** Begin Class UCustomizableObject ******************************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execIsCompiled); \
	DECLARE_FUNCTION(execCreateInstance); \
	DECLARE_FUNCTION(execGetStateUIMetadata); \
	DECLARE_FUNCTION(execGetEnumParameterGroupType); \
	DECLARE_FUNCTION(execGetEnumParameterValueUIMetadata); \
	DECLARE_FUNCTION(execGetParameterUIMetadata); \
	DECLARE_FUNCTION(execGetStateParameterName); \
	DECLARE_FUNCTION(execGetStateParameterCount); \
	DECLARE_FUNCTION(execGetStateName); \
	DECLARE_FUNCTION(execGetStateCount); \
	DECLARE_FUNCTION(execCompile); \
	DECLARE_FUNCTION(execIsParameterMultidimensional); \
	DECLARE_FUNCTION(execGetMaterialParameterDefaultValue); \
	DECLARE_FUNCTION(execGetSkeletalMeshParameterDefaultValue); \
	DECLARE_FUNCTION(execGetTextureParameterDefaultValue); \
	DECLARE_FUNCTION(execGetProjectorParameterDefaultValue); \
	DECLARE_FUNCTION(execGetTransformParameterDefaultValue); \
	DECLARE_FUNCTION(execGetColorParameterDefaultValue); \
	DECLARE_FUNCTION(execGetBoolParameterDefaultValue); \
	DECLARE_FUNCTION(execGetEnumParameterDefaultValue); \
	DECLARE_FUNCTION(execGetFloatParameterDefaultValue); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentReferenceSkeletalMesh); \
	DECLARE_FUNCTION(execGetComponentMeshReferenceSkeletalMesh); \
	DECLARE_FUNCTION(execContainsEnumParameterValue); \
	DECLARE_FUNCTION(execGetEnumParameterValue); \
	DECLARE_FUNCTION(execGetEnumParameterNumValues); \
	DECLARE_FUNCTION(execGetParameterName); \
	DECLARE_FUNCTION(execGetParameterTypeByName); \
	DECLARE_FUNCTION(execContainsParameter); \
	DECLARE_FUNCTION(execGetParameterCount); \
	DECLARE_FUNCTION(execGetComponentName); \
	DECLARE_FUNCTION(execGetComponentCount);


#if WITH_EDITOR
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execIsChildObject); \
	DECLARE_FUNCTION(execGetEnumParameterValueDataTable);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObject, CUSTOMIZABLEOBJECT_API)


struct Z_Construct_UClass_UCustomizableObject_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObject(); \
	friend struct ::Z_Construct_UClass_UCustomizableObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObject_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObject) \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObject(UCustomizableObject&&) = delete; \
	UCustomizableObject(const UCustomizableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObject) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObject();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_216_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h_222_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObject;

// ********** End Class UCustomizableObject ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
