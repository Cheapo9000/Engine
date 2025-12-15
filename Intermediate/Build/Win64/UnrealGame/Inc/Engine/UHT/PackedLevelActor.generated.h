// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PackedLevelActor/PackedLevelActor.h"

#ifdef ENGINE_PackedLevelActor_generated_h
#error "PackedLevelActor.generated.h already included, missing '#pragma once' in PackedLevelActor.h"
#endif
#define ENGINE_PackedLevelActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APackedLevelActor ********************************************************
#define FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(APackedLevelActor, ENGINE_API)


struct Z_Construct_UClass_APackedLevelActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_APackedLevelActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPackedLevelActor(); \
	friend struct ::Z_Construct_UClass_APackedLevelActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_APackedLevelActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APackedLevelActor, ALevelInstance, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_APackedLevelActor_NoRegister) \
	DECLARE_SERIALIZER(APackedLevelActor) \
	FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_27_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APackedLevelActor(APackedLevelActor&&) = delete; \
	APackedLevelActor(const APackedLevelActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APackedLevelActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APackedLevelActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APackedLevelActor) \
	ENGINE_API virtual ~APackedLevelActor();


#define FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APackedLevelActor;

// ********** End Class APackedLevelActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
