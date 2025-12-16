// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectSystem.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectSystem_generated_h
#error "CustomizableObjectSystem.generated.h already included, missing '#pragma once' in CustomizableObjectSystem.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObjectInstance;
class UCustomizableObjectSystem;
enum class EUpdateResult : uint8;

// ********** Begin ScriptStruct FPendingReleaseMaterialsInfo **************************************
struct Z_Construct_UScriptStruct_FPendingReleaseMaterialsInfo_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPendingReleaseMaterialsInfo_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FPendingReleaseMaterialsInfo;
// ********** End ScriptStruct FPendingReleaseMaterialsInfo ****************************************

// ********** Begin Class UCustomizableObjectSystem ************************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorkingMemory); \
	DECLARE_FUNCTION(execSetWorkingMemory); \
	DECLARE_FUNCTION(execIsUpdating); \
	DECLARE_FUNCTION(execGetAverageBuildTime); \
	DECLARE_FUNCTION(execGetTextureMemoryUsed); \
	DECLARE_FUNCTION(execGetTotalInstances); \
	DECLARE_FUNCTION(execGetNumPendingInstances); \
	DECLARE_FUNCTION(execGetNumInstances); \
	DECLARE_FUNCTION(execGetPluginVersion); \
	DECLARE_FUNCTION(execIsUpdateResultValid); \
	DECLARE_FUNCTION(execGetInstanceChecked); \
	DECLARE_FUNCTION(execGetInstance);


struct Z_Construct_UClass_UCustomizableObjectSystem_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectSystem_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectSystem(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectSystem_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectSystem)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_123_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectSystem(UCustomizableObjectSystem&&) = delete; \
	UCustomizableObjectSystem(const UCustomizableObjectSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObjectSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectSystem) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObjectSystem();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_116_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h_123_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectSystem;

// ********** End Class UCustomizableObjectSystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSystem_h

// ********** Begin Enum ECustomizableObjectOptimizationLevel **************************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTOPTIMIZATIONLEVEL(op) \
	op(ECustomizableObjectOptimizationLevel::None) \
	op(ECustomizableObjectOptimizationLevel::Minimal) \
	op(ECustomizableObjectOptimizationLevel::Maximum) \
	op(ECustomizableObjectOptimizationLevel::FromCustomizableObject) 

enum class ECustomizableObjectOptimizationLevel : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectOptimizationLevel> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectOptimizationLevel>();
// ********** End Enum ECustomizableObjectOptimizationLevel ****************************************

// ********** Begin Enum ECustomizableObjectTextureCompression *************************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTTEXTURECOMPRESSION(op) \
	op(ECustomizableObjectTextureCompression::None) \
	op(ECustomizableObjectTextureCompression::Fast) \
	op(ECustomizableObjectTextureCompression::HighQuality) 

enum class ECustomizableObjectTextureCompression : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectTextureCompression> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectTextureCompression>();
// ********** End Enum ECustomizableObjectTextureCompression ***************************************

// ********** Begin Enum ECustomizableObjectNumBoneInfluences **************************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTNUMBONEINFLUENCES(op) \
	op(ECustomizableObjectNumBoneInfluences::Four) \
	op(ECustomizableObjectNumBoneInfluences::Eight) \
	op(ECustomizableObjectNumBoneInfluences::Twelve) 

enum class ECustomizableObjectNumBoneInfluences : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectNumBoneInfluences> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectNumBoneInfluences>();
// ********** End Enum ECustomizableObjectNumBoneInfluences ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
