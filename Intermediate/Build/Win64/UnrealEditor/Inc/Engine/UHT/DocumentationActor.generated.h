// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DocumentationActor.h"

#ifdef ENGINE_DocumentationActor_generated_h
#error "DocumentationActor.generated.h already included, missing '#pragma once' in DocumentationActor.h"
#endif
#define ENGINE_DocumentationActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADocumentationActor ******************************************************
struct Z_Construct_UClass_ADocumentationActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesADocumentationActor(); \
	friend struct ::Z_Construct_UClass_ADocumentationActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ADocumentationActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADocumentationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ADocumentationActor_NoRegister) \
	DECLARE_SERIALIZER(ADocumentationActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADocumentationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADocumentationActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADocumentationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADocumentationActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADocumentationActor(ADocumentationActor&&) = delete; \
	ADocumentationActor(const ADocumentationActor&) = delete; \
	ENGINE_API virtual ~ADocumentationActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADocumentationActor;

// ********** End Class ADocumentationActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
