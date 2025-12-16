// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGFilterDataBase.h"

#ifdef PCG_PCGFilterDataBase_generated_h
#error "PCGFilterDataBase.generated.h already included, missing '#pragma once' in PCGFilterDataBase.h"
#endif
#define PCG_PCGFilterDataBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGFilterDataBaseSettings ***********************************************
struct Z_Construct_UClass_UPCGFilterDataBaseSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGFilterDataBaseSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterDataBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGFilterDataBaseSettings(); \
	friend struct ::Z_Construct_UClass_UPCGFilterDataBaseSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGFilterDataBaseSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGFilterDataBaseSettings, UPCGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGFilterDataBaseSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGFilterDataBaseSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterDataBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGFilterDataBaseSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGFilterDataBaseSettings(UPCGFilterDataBaseSettings&&) = delete; \
	UPCGFilterDataBaseSettings(const UPCGFilterDataBaseSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGFilterDataBaseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGFilterDataBaseSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGFilterDataBaseSettings) \
	PCG_API virtual ~UPCGFilterDataBaseSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterDataBase_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterDataBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterDataBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterDataBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGFilterDataBaseSettings;

// ********** End Class UPCGFilterDataBaseSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterDataBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
