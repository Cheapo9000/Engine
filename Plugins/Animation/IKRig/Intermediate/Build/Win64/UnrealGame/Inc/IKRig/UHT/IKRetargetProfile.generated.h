// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargetProfile.h"

#ifdef IKRIG_IKRetargetProfile_generated_h
#error "IKRetargetProfile.generated.h already included, missing '#pragma once' in IKRetargetProfile.h"
#endif
#define IKRIG_IKRetargetProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
class UIKRetargetOpControllerBase;
struct FRetargetProfile;

// ********** Begin ScriptStruct FRetargetOpProfile ************************************************
struct Z_Construct_UScriptStruct_FRetargetOpProfile_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetOpProfile_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetOpProfile;
// ********** End ScriptStruct FRetargetOpProfile **************************************************

// ********** Begin ScriptStruct FRetargetProfile **************************************************
struct Z_Construct_UScriptStruct_FRetargetProfile_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetProfile_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetProfile;
// ********** End ScriptStruct FRetargetProfile ****************************************************

// ********** Begin Class URetargetProfileLibrary **************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOpControllerFromRetargetProfile); \
	DECLARE_FUNCTION(execCopyRetargetProfileFromRetargetAsset);


struct Z_Construct_UClass_URetargetProfileLibrary_Statics;
IKRIG_API UClass* Z_Construct_UClass_URetargetProfileLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_176_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetProfileLibrary(); \
	friend struct ::Z_Construct_UClass_URetargetProfileLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_URetargetProfileLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URetargetProfileLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_URetargetProfileLibrary_NoRegister) \
	DECLARE_SERIALIZER(URetargetProfileLibrary)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_176_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URetargetProfileLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URetargetProfileLibrary(URetargetProfileLibrary&&) = delete; \
	URetargetProfileLibrary(const URetargetProfileLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetargetProfileLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetProfileLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetProfileLibrary) \
	NO_API virtual ~URetargetProfileLibrary();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_173_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_176_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_176_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_176_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URetargetProfileLibrary;

// ********** End Class URetargetProfileLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h

// ********** Begin Enum ECopyOpSettingsContext ****************************************************
#define FOREACH_ENUM_ECOPYOPSETTINGSCONTEXT(op) \
	op(ECopyOpSettingsContext::PreInitialize) \
	op(ECopyOpSettingsContext::Runtime) 

enum class ECopyOpSettingsContext : uint8;
template<> struct TIsUEnumClass<ECopyOpSettingsContext> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECopyOpSettingsContext>();
// ********** End Enum ECopyOpSettingsContext ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
