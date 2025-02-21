// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskWorldSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYMASK_GeometryMaskWorldSubsystem_generated_h
#error "GeometryMaskWorldSubsystem.generated.h already included, missing '#pragma once' in GeometryMaskWorldSubsystem.h"
#endif
#define GEOMETRYMASK_GeometryMaskWorldSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryMaskLevelState_Statics; \
	GEOMETRYMASK_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYMASK_API UScriptStruct* StaticStruct<struct FGeometryMaskLevelState>();

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskWorldSubsystem(); \
	friend struct Z_Construct_UClass_UGeometryMaskWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGeometryMaskWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMask"), NO_API) \
	DECLARE_SERIALIZER(UGeometryMaskWorldSubsystem)


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryMaskWorldSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryMaskWorldSubsystem(UGeometryMaskWorldSubsystem&&); \
	UGeometryMaskWorldSubsystem(const UGeometryMaskWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeometryMaskWorldSubsystem) \
	NO_API virtual ~UGeometryMaskWorldSubsystem();


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYMASK_API UClass* StaticClass<class UGeometryMaskWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskWorldSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
