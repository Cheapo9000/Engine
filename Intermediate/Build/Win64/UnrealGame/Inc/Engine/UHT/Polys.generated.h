// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Polys.h"

#ifdef ENGINE_Polys_generated_h
#error "Polys.generated.h already included, missing '#pragma once' in Polys.h"
#endif
#define ENGINE_Polys_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPolys *******************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_414_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPolys, ENGINE_API)


struct Z_Construct_UClass_UPolys_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPolys_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_414_INCLASS \
private: \
	static void StaticRegisterNativesUPolys(); \
	friend struct ::Z_Construct_UClass_UPolys_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPolys_NoRegister(); \
public: \
	DECLARE_CLASS2(UPolys, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPolys_NoRegister) \
	DECLARE_SERIALIZER(UPolys) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_414_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_414_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolys) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolys); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPolys(UPolys&&) = delete; \
	UPolys(const UPolys&) = delete; \
	ENGINE_API virtual ~UPolys();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_411_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_414_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_414_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_414_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPolys;

// ********** End Class UPolys *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
