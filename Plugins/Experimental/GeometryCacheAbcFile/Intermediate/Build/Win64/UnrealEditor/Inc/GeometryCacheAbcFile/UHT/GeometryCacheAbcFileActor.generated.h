// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheAbcFileActor.h"

#ifdef GEOMETRYCACHEABCFILE_GeometryCacheAbcFileActor_generated_h
#error "GeometryCacheAbcFileActor.generated.h already included, missing '#pragma once' in GeometryCacheAbcFileActor.h"
#endif
#define GEOMETRYCACHEABCFILE_GeometryCacheAbcFileActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGeometryCacheAbcFileActor ***********************************************
struct Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics;
GEOMETRYCACHEABCFILE_API UClass* Z_Construct_UClass_AGeometryCacheAbcFileActor_NoRegister();

#define FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryCacheAbcFileActor(); \
	friend struct ::Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHEABCFILE_API UClass* ::Z_Construct_UClass_AGeometryCacheAbcFileActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeometryCacheAbcFileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCacheAbcFile"), Z_Construct_UClass_AGeometryCacheAbcFileActor_NoRegister) \
	DECLARE_SERIALIZER(AGeometryCacheAbcFileActor)


#define FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCacheAbcFileActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCacheAbcFileActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCacheAbcFileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCacheAbcFileActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeometryCacheAbcFileActor(AGeometryCacheAbcFileActor&&) = delete; \
	AGeometryCacheAbcFileActor(const AGeometryCacheAbcFileActor&) = delete; \
	NO_API virtual ~AGeometryCacheAbcFileActor();


#define FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeometryCacheAbcFileActor;

// ********** End Class AGeometryCacheAbcFileActor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
