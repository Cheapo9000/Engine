// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMBlueprintGeneratedClass.h"

#ifdef RIGVM_RigVMBlueprintGeneratedClass_generated_h
#error "RigVMBlueprintGeneratedClass.generated.h already included, missing '#pragma once' in RigVMBlueprintGeneratedClass.h"
#endif
#define RIGVM_RigVMBlueprintGeneratedClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMBlueprintGeneratedClass ********************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMBlueprintGeneratedClass, RIGVM_API)


struct Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics;
RIGVM_API UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURigVMBlueprintGeneratedClass(); \
	friend struct ::Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMBlueprintGeneratedClass, UBlueprintGeneratedClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister) \
	DECLARE_SERIALIZER(URigVMBlueprintGeneratedClass) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_18_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<URigVMBlueprintGeneratedClass*>(this); }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVM_API URigVMBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMBlueprintGeneratedClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, URigVMBlueprintGeneratedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMBlueprintGeneratedClass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMBlueprintGeneratedClass(URigVMBlueprintGeneratedClass&&) = delete; \
	URigVMBlueprintGeneratedClass(const URigVMBlueprintGeneratedClass&) = delete; \
	RIGVM_API virtual ~URigVMBlueprintGeneratedClass();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMBlueprintGeneratedClass;

// ********** End Class URigVMBlueprintGeneratedClass **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
