// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectInstance.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectInstance_generated_h
#error "CustomizableObjectInstance.generated.h already included, missing '#pragma once' in CustomizableObjectInstance.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
class UAssetUserData;
class UClass;
class UCustomizableObject;
class UCustomizableObjectExtension;
class UCustomizableObjectInstance;
class UMaterialInterface;
class UObject;
class USkeletalMesh;
class UTexture;
enum class ECustomizableObjectProjectorType : uint8;
struct FBakingConfiguration;
struct FCustomizableObjectInstanceBakeOutput;
struct FGameplayTagContainer;
struct FInstancedStruct;
struct FLinearColor;
struct FMultilayerProjectorLayer;
struct FPreSetSkeletalMeshParams;
struct FRandomStream;
struct FUpdateContext;

// ********** Begin ScriptStruct FBakedResourceData ************************************************
struct Z_Construct_UScriptStruct_FBakedResourceData_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakedResourceData_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FBakedResourceData;
// ********** End ScriptStruct FBakedResourceData **************************************************

// ********** Begin ScriptStruct FCustomizableObjectInstanceBakeOutput *****************************
struct Z_Construct_UScriptStruct_FCustomizableObjectInstanceBakeOutput_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectInstanceBakeOutput_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectInstanceBakeOutput;
// ********** End ScriptStruct FCustomizableObjectInstanceBakeOutput *******************************

// ********** Begin Delegate FBakeOperationCompletedDelegate ***************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_102_DELEGATE \
CUSTOMIZABLEOBJECT_API void FBakeOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& BakeOperationCompletedDelegate, const FCustomizableObjectInstanceBakeOutput BakeOperationOutput);


// ********** End Delegate FBakeOperationCompletedDelegate *****************************************

// ********** Begin ScriptStruct FBakingConfiguration **********************************************
struct Z_Construct_UScriptStruct_FBakingConfiguration_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakingConfiguration_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FBakingConfiguration;
// ********** End ScriptStruct FBakingConfiguration ************************************************

// ********** Begin ScriptStruct FUpdateContext ****************************************************
struct Z_Construct_UScriptStruct_FUpdateContext_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_215_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUpdateContext_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FUpdateContext;
// ********** End ScriptStruct FUpdateContext ******************************************************

// ********** Begin Delegate FInstanceUpdateDelegate ***********************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_225_DELEGATE \
CUSTOMIZABLEOBJECT_API void FInstanceUpdateDelegate_DelegateWrapper(const FScriptDelegate& InstanceUpdateDelegate, FUpdateContext const& Result);


// ********** End Delegate FInstanceUpdateDelegate *************************************************

// ********** Begin Delegate FObjectInstanceUpdatedDelegate ****************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_238_DELEGATE \
CUSTOMIZABLEOBJECT_API void FObjectInstanceUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectInstanceUpdatedDelegate, UCustomizableObjectInstance* Instance);


// ********** End Delegate FObjectInstanceUpdatedDelegate ******************************************

// ********** Begin ScriptStruct FPreSetSkeletalMeshParams *****************************************
struct Z_Construct_UScriptStruct_FPreSetSkeletalMeshParams_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_244_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPreSetSkeletalMeshParams_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FPreSetSkeletalMeshParams;
// ********** End ScriptStruct FPreSetSkeletalMeshParams *******************************************

// ********** Begin Delegate FPreSetSkeletalMeshDelegate *******************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_253_DELEGATE \
CUSTOMIZABLEOBJECT_API void FPreSetSkeletalMeshDelegate_DelegateWrapper(const FMulticastScriptDelegate& PreSetSkeletalMeshDelegate, FPreSetSkeletalMeshParams const& Params);


// ********** End Delegate FPreSetSkeletalMeshDelegate *********************************************

// ********** Begin Delegate FEachComponentAnimInstanceClassDelegate *******************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_258_DELEGATE \
CUSTOMIZABLEOBJECT_API void FEachComponentAnimInstanceClassDelegate_DelegateWrapper(const FScriptDelegate& EachComponentAnimInstanceClassDelegate, FName SlotIndex, TSubclassOf<UAnimInstance> AnimInstClass);


// ********** End Delegate FEachComponentAnimInstanceClassDelegate *********************************

// ********** Begin Class UCustomizableObjectInstance **********************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumComponents); \
	DECLARE_FUNCTION(execSetReplacePhysicsAssets); \
	DECLARE_FUNCTION(execGetExtensionInstanceData); \
	DECLARE_FUNCTION(execForEachAnimInstance); \
	DECLARE_FUNCTION(execForEachComponentAnimInstance); \
	DECLARE_FUNCTION(execGetAnimationGameplayTags); \
	DECLARE_FUNCTION(execGetAnimBP); \
	DECLARE_FUNCTION(execGetComponentNames); \
	DECLARE_FUNCTION(execMultilayerProjectorUpdateLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorGetLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorRemoveLayerAt); \
	DECLARE_FUNCTION(execMultilayerProjectorCreateLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorNumLayers); \
	DECLARE_FUNCTION(execRemoveValueFromProjectorRange); \
	DECLARE_FUNCTION(execRemoveValueFromFloatRange); \
	DECLARE_FUNCTION(execRemoveValueFromIntRange); \
	DECLARE_FUNCTION(execAddValueToProjectorRange); \
	DECLARE_FUNCTION(execAddValueToFloatRange); \
	DECLARE_FUNCTION(execAddValueToIntRange); \
	DECLARE_FUNCTION(execContainsTransformParameter); \
	DECLARE_FUNCTION(execContainsProjectorParameter); \
	DECLARE_FUNCTION(execContainsVectorParameter); \
	DECLARE_FUNCTION(execContainsBoolParameter); \
	DECLARE_FUNCTION(execContainsMaterialParameter); \
	DECLARE_FUNCTION(execContainsSkeletalMeshParameter); \
	DECLARE_FUNCTION(execContainsTextureParameter); \
	DECLARE_FUNCTION(execContainsFloatParameter); \
	DECLARE_FUNCTION(execContainsEnumParameter); \
	DECLARE_FUNCTION(execContainsIntParameter); \
	DECLARE_FUNCTION(execGetProjectorParameterType); \
	DECLARE_FUNCTION(execGetProjectorAngle); \
	DECLARE_FUNCTION(execGetProjectorScale); \
	DECLARE_FUNCTION(execGetProjectorUp); \
	DECLARE_FUNCTION(execGetProjectorDirection); \
	DECLARE_FUNCTION(execGetProjectorPosition); \
	DECLARE_FUNCTION(execGetProjectorValue); \
	DECLARE_FUNCTION(execSetProjectorAngle); \
	DECLARE_FUNCTION(execSetProjectorScale); \
	DECLARE_FUNCTION(execSetProjectorUp); \
	DECLARE_FUNCTION(execSetProjectorDirection); \
	DECLARE_FUNCTION(execSetProjectorPosition); \
	DECLARE_FUNCTION(execSetProjectorValue); \
	DECLARE_FUNCTION(execSetTransformParameterSelectedOption); \
	DECLARE_FUNCTION(execGetTransformParameterSelectedOption); \
	DECLARE_FUNCTION(execSetVectorParameterSelectedOption); \
	DECLARE_FUNCTION(execSetBoolParameterSelectedOption); \
	DECLARE_FUNCTION(execGetBoolParameterSelectedOption); \
	DECLARE_FUNCTION(execSetColorParameterSelectedOption); \
	DECLARE_FUNCTION(execGetColorParameterSelectedOption); \
	DECLARE_FUNCTION(execSetMaterialParameterSelectedOption); \
	DECLARE_FUNCTION(execGetMaterialParameterSelectedOption); \
	DECLARE_FUNCTION(execSetSkeletalMeshParameterSelectedOption); \
	DECLARE_FUNCTION(execGetSkeletalMeshParameterSelectedOption); \
	DECLARE_FUNCTION(execSetTextureParameterSelectedOption); \
	DECLARE_FUNCTION(execGetTextureParameterSelectedOption); \
	DECLARE_FUNCTION(execSetFloatParameterSelectedOption); \
	DECLARE_FUNCTION(execGetFloatParameterSelectedOption); \
	DECLARE_FUNCTION(execSetEnumParameterSelectedOption); \
	DECLARE_FUNCTION(execSetIntParameterSelectedOption); \
	DECLARE_FUNCTION(execGetEnumParameterSelectedOption); \
	DECLARE_FUNCTION(execGetIntParameterSelectedOption); \
	DECLARE_FUNCTION(execGetTextureValueRange); \
	DECLARE_FUNCTION(execGetFloatValueRange); \
	DECLARE_FUNCTION(execGetIntValueRange); \
	DECLARE_FUNCTION(execGetProjectorValueRange); \
	DECLARE_FUNCTION(execIsParameterDirty); \
	DECLARE_FUNCTION(execIsParameterRelevant); \
	DECLARE_FUNCTION(execCloneStatic); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execUpdateSkeletalMeshAsyncResult); \
	DECLARE_FUNCTION(execUpdateSkeletalMeshAsync); \
	DECLARE_FUNCTION(execGetMergedAssetUserData); \
	DECLARE_FUNCTION(execSetDefaultValues); \
	DECLARE_FUNCTION(execSetDefaultValue); \
	DECLARE_FUNCTION(execSetRandomValuesFromStream); \
	DECLARE_FUNCTION(execSetRandomValues); \
	DECLARE_FUNCTION(execHasAnyParameters); \
	DECLARE_FUNCTION(execHasAnySkeletalMesh); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentOverrideMaterials); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentSkeletalMesh); \
	DECLARE_FUNCTION(execGetComponentMeshSkeletalMesh); \
	DECLARE_FUNCTION(execGetSkeletalMesh); \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execSetBuildParameterRelevancy); \
	DECLARE_FUNCTION(execGetBuildParameterRelevancy); \
	DECLARE_FUNCTION(execGetCustomizableObject); \
	DECLARE_FUNCTION(execSetObject);


#if WITH_EDITOR
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execBake);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectInstance, CUSTOMIZABLEOBJECT_API)


struct Z_Construct_UClass_UCustomizableObjectInstance_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectInstance(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectInstance) \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectInstance(UCustomizableObjectInstance&&) = delete; \
	UCustomizableObjectInstance(const UCustomizableObjectInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObjectInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectInstance) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObjectInstance();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_262_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h_265_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectInstance;

// ********** End Class UCustomizableObjectInstance ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstance_h

// ********** Begin Enum EPackageSaveResolutionType ************************************************
#define FOREACH_ENUM_EPACKAGESAVERESOLUTIONTYPE(op) \
	op(EPackageSaveResolutionType::None) \
	op(EPackageSaveResolutionType::NewFile) \
	op(EPackageSaveResolutionType::ReusedFile) \
	op(EPackageSaveResolutionType::Overriden) \
	op(EPackageSaveResolutionType::UnableToOverride) 

enum class EPackageSaveResolutionType : uint8;
template<> struct TIsUEnumClass<EPackageSaveResolutionType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPackageSaveResolutionType>();
// ********** End Enum EPackageSaveResolutionType **************************************************

// ********** Begin Enum EUpdateResult *************************************************************
#define FOREACH_ENUM_EUPDATERESULT(op) \
	op(EUpdateResult::Success) \
	op(EUpdateResult::Warning) \
	op(EUpdateResult::Error) \
	op(EUpdateResult::ErrorOptimized) \
	op(EUpdateResult::ErrorReplaced) \
	op(EUpdateResult::ErrorDiscarded) \
	op(EUpdateResult::Error16BitBoneIndex) 

enum class EUpdateResult : uint8;
template<> struct TIsUEnumClass<EUpdateResult> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EUpdateResult>();
// ********** End Enum EUpdateResult ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
