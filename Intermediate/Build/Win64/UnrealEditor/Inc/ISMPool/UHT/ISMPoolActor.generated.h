// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISMPool/ISMPoolActor.h"

#ifdef ISMPOOL_ISMPoolActor_generated_h
#error "ISMPoolActor.generated.h already included, missing '#pragma once' in ISMPoolActor.h"
#endif
#define ISMPOOL_ISMPoolActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AISMPoolActor ************************************************************
struct Z_Construct_UClass_AISMPoolActor_Statics;
ISMPOOL_API UClass* Z_Construct_UClass_AISMPoolActor_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAISMPoolActor(); \
	friend struct ::Z_Construct_UClass_AISMPoolActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ISMPOOL_API UClass* ::Z_Construct_UClass_AISMPoolActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AISMPoolActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ISMPool"), Z_Construct_UClass_AISMPoolActor_NoRegister) \
	DECLARE_SERIALIZER(AISMPoolActor)


#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ISMPOOL_API AISMPoolActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AISMPoolActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ISMPOOL_API, AISMPoolActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISMPoolActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AISMPoolActor(AISMPoolActor&&) = delete; \
	AISMPoolActor(const AISMPoolActor&) = delete; \
	ISMPOOL_API virtual ~AISMPoolActor();


#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h_10_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h_13_INCLASS \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AISMPoolActor;

// ********** End Class AISMPoolActor **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
