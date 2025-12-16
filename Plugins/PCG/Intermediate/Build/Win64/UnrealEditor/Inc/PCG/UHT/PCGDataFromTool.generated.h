// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDataFromTool.h"

#ifdef PCG_PCGDataFromTool_generated_h
#error "PCGDataFromTool.generated.h already included, missing '#pragma once' in PCGDataFromTool.h"
#endif
#define PCG_PCGDataFromTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataFromTool *********************************************************
struct Z_Construct_UClass_UPCGDataFromTool_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataFromTool_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromTool_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataFromTool(); \
	friend struct ::Z_Construct_UClass_UPCGDataFromTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataFromTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataFromTool, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataFromTool_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataFromTool)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromTool_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataFromTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataFromTool(UPCGDataFromTool&&) = delete; \
	UPCGDataFromTool(const UPCGDataFromTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataFromTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataFromTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataFromTool) \
	PCG_API virtual ~UPCGDataFromTool();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromTool_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromTool_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromTool_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromTool_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataFromTool;

// ********** End Class UPCGDataFromTool ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
