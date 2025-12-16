// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstanceDataPackers/PCGInstanceDataPackerByAttribute.h"

#ifdef PCG_PCGInstanceDataPackerByAttribute_generated_h
#error "PCGInstanceDataPackerByAttribute.generated.h already included, missing '#pragma once' in PCGInstanceDataPackerByAttribute.h"
#endif
#define PCG_PCGInstanceDataPackerByAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGInstanceDataPackerByAttribute ****************************************
struct Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInstanceDataPackerByAttribute(); \
	friend struct ::Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGInstanceDataPackerByAttribute, UPCGInstanceDataPackerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_NoRegister) \
	DECLARE_SERIALIZER(UPCGInstanceDataPackerByAttribute)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGInstanceDataPackerByAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGInstanceDataPackerByAttribute(UPCGInstanceDataPackerByAttribute&&) = delete; \
	UPCGInstanceDataPackerByAttribute(const UPCGInstanceDataPackerByAttribute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGInstanceDataPackerByAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstanceDataPackerByAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstanceDataPackerByAttribute) \
	PCG_API virtual ~UPCGInstanceDataPackerByAttribute();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGInstanceDataPackerByAttribute;

// ********** End Class UPCGInstanceDataPackerByAttribute ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
