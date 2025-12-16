// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGGraphParametersHelpers.h"

#ifdef PCG_PCGGraphParametersHelpers_generated_h
#error "PCGGraphParametersHelpers.generated.h already included, missing '#pragma once' in PCGGraphParametersHelpers.h"
#endif
#define PCG_PCGGraphParametersHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UEnum;
class UObject;
class UPCGGraphInterface;
struct FSoftObjectPath;

// ********** Begin Class UPCGGraphParametersHelpers ***********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetQuaternionParameter); \
	DECLARE_FUNCTION(execSetVector2DParameter); \
	DECLARE_FUNCTION(execSetVector4Parameter); \
	DECLARE_FUNCTION(execSetTransformParameter); \
	DECLARE_FUNCTION(execSetRotatorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetClassParameter); \
	DECLARE_FUNCTION(execSetObjectParameter); \
	DECLARE_FUNCTION(execSetSoftClassParameter); \
	DECLARE_FUNCTION(execSetSoftObjectParameter); \
	DECLARE_FUNCTION(execSetSoftObjectPathParameter); \
	DECLARE_FUNCTION(execSetEnumParameter); \
	DECLARE_FUNCTION(execSetStringParameter); \
	DECLARE_FUNCTION(execSetNameParameter); \
	DECLARE_FUNCTION(execSetInt64Parameter); \
	DECLARE_FUNCTION(execSetInt32Parameter); \
	DECLARE_FUNCTION(execSetByteParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execSetDoubleParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execGetQuaternionParameter); \
	DECLARE_FUNCTION(execGetVector2DParameter); \
	DECLARE_FUNCTION(execGetVector4Parameter); \
	DECLARE_FUNCTION(execGetTransformParameter); \
	DECLARE_FUNCTION(execGetRotatorParameter); \
	DECLARE_FUNCTION(execGetVectorParameter); \
	DECLARE_FUNCTION(execGetClassParameter); \
	DECLARE_FUNCTION(execGetObjectParameter); \
	DECLARE_FUNCTION(execGetSoftClassParameter); \
	DECLARE_FUNCTION(execGetSoftObjectParameter); \
	DECLARE_FUNCTION(execGetSoftObjectPathParameter); \
	DECLARE_FUNCTION(execGetEnumParameter); \
	DECLARE_FUNCTION(execGetStringParameter); \
	DECLARE_FUNCTION(execGetNameParameter); \
	DECLARE_FUNCTION(execGetInt64Parameter); \
	DECLARE_FUNCTION(execGetInt32Parameter); \
	DECLARE_FUNCTION(execGetByteParameter); \
	DECLARE_FUNCTION(execGetBoolParameter); \
	DECLARE_FUNCTION(execGetDoubleParameter); \
	DECLARE_FUNCTION(execGetFloatParameter); \
	DECLARE_FUNCTION(execIsOverridden);


struct Z_Construct_UClass_UPCGGraphParametersHelpers_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGraphParametersHelpers_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphParametersHelpers(); \
	friend struct ::Z_Construct_UClass_UPCGGraphParametersHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGraphParametersHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGraphParametersHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGraphParametersHelpers_NoRegister) \
	DECLARE_SERIALIZER(UPCGGraphParametersHelpers)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGraphParametersHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGraphParametersHelpers(UPCGGraphParametersHelpers&&) = delete; \
	UPCGGraphParametersHelpers(const UPCGGraphParametersHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGraphParametersHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphParametersHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphParametersHelpers) \
	PCG_API virtual ~UPCGGraphParametersHelpers();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_26_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGraphParametersHelpers;

// ********** End Class UPCGGraphParametersHelpers *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
