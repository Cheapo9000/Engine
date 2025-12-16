// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMSettings.h"

#ifdef RIGVM_RigVMSettings_generated_h
#error "RigVMSettings.generated.h already included, missing '#pragma once' in RigVMSettings.h"
#endif
#define RIGVM_RigVMSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRigVMTag;

// ********** Begin Class URigVMEditorSettings *****************************************************
struct Z_Construct_UClass_URigVMEditorSettings_Statics;
RIGVM_API UClass* Z_Construct_UClass_URigVMEditorSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_23_INCLASS \
private: \
	static void StaticRegisterNativesURigVMEditorSettings(); \
	friend struct ::Z_Construct_UClass_URigVMEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_URigVMEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_URigVMEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(URigVMEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVM_API URigVMEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, URigVMEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMEditorSettings(URigVMEditorSettings&&) = delete; \
	URigVMEditorSettings(const URigVMEditorSettings&) = delete; \
	RIGVM_API virtual ~URigVMEditorSettings();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMEditorSettings;

// ********** End Class URigVMEditorSettings *******************************************************

// ********** Begin Class URigVMProjectSettings ****************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_59_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTag);


struct Z_Construct_UClass_URigVMProjectSettings_Statics;
RIGVM_API UClass* Z_Construct_UClass_URigVMProjectSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_59_INCLASS \
private: \
	static void StaticRegisterNativesURigVMProjectSettings(); \
	friend struct ::Z_Construct_UClass_URigVMProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_URigVMProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_URigVMProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(URigVMProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVM_API URigVMProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, URigVMProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMProjectSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMProjectSettings(URigVMProjectSettings&&) = delete; \
	URigVMProjectSettings(const URigVMProjectSettings&) = delete; \
	RIGVM_API virtual ~URigVMProjectSettings();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_59_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_59_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMProjectSettings;

// ********** End Class URigVMProjectSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
