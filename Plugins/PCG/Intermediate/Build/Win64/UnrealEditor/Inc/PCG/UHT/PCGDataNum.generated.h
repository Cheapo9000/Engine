// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDataNum.h"

#ifdef PCG_PCGDataNum_generated_h
#error "PCGDataNum.generated.h already included, missing '#pragma once' in PCGDataNum.h"
#endif
#define PCG_PCGDataNum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataNumSettings ******************************************************
struct Z_Construct_UClass_UPCGDataNumSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataNumSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataNum_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataNumSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDataNumSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataNumSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataNumSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataNumSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataNumSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataNum_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataNumSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataNumSettings(UPCGDataNumSettings&&) = delete; \
	UPCGDataNumSettings(const UPCGDataNumSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataNumSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataNumSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataNumSettings) \
	PCG_API virtual ~UPCGDataNumSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataNum_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataNum_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataNum_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataNum_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataNumSettings;

// ********** End Class UPCGDataNumSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataNum_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
