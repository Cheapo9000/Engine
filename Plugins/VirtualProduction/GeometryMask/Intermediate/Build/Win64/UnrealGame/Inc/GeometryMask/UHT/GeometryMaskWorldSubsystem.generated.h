// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskWorldSubsystem.h"

#ifdef GEOMETRYMASK_GeometryMaskWorldSubsystem_generated_h
#error "GeometryMaskWorldSubsystem.generated.h already included, missing '#pragma once' in GeometryMaskWorldSubsystem.h"
#endif
#define GEOMETRYMASK_GeometryMaskWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGeometryMaskLevelState *******************************************
struct Z_Construct_UScriptStruct_FGeometryMaskLevelState_Statics;
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryMaskLevelState_Statics; \
	GEOMETRYMASK_API static class UScriptStruct* StaticStruct();


struct FGeometryMaskLevelState;
// ********** End ScriptStruct FGeometryMaskLevelState *********************************************

// ********** Begin Class UGeometryMaskWorldSubsystem **********************************************
struct Z_Construct_UClass_UGeometryMaskWorldSubsystem_Statics;
GEOMETRYMASK_API UClass* Z_Construct_UClass_UGeometryMaskWorldSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UGeometryMaskWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMASK_API UClass* ::Z_Construct_UClass_UGeometryMaskWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryMaskWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMask"), Z_Construct_UClass_UGeometryMaskWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGeometryMaskWorldSubsystem)


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryMaskWorldSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryMaskWorldSubsystem(UGeometryMaskWorldSubsystem&&) = delete; \
	UGeometryMaskWorldSubsystem(const UGeometryMaskWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeometryMaskWorldSubsystem) \
	NO_API virtual ~UGeometryMaskWorldSubsystem();


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_27_PROLOG
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryMaskWorldSubsystem;

// ********** End Class UGeometryMaskWorldSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
