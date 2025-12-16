// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFolderFactory.h"

#ifdef TEDSOUTLINER_ActorFolderFactory_generated_h
#error "ActorFolderFactory.generated.h already included, missing '#pragma once' in ActorFolderFactory.h"
#endif
#define TEDSOUTLINER_ActorFolderFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTedsActorFolderFactory **************************************************
struct Z_Construct_UClass_UTedsActorFolderFactory_Statics;
TEDSOUTLINER_API UClass* Z_Construct_UClass_UTedsActorFolderFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_ActorFolderFactory_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTedsActorFolderFactory(); \
	friend struct ::Z_Construct_UClass_UTedsActorFolderFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSOUTLINER_API UClass* ::Z_Construct_UClass_UTedsActorFolderFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTedsActorFolderFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsOutliner"), Z_Construct_UClass_UTedsActorFolderFactory_NoRegister) \
	DECLARE_SERIALIZER(UTedsActorFolderFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_ActorFolderFactory_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTedsActorFolderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTedsActorFolderFactory(UTedsActorFolderFactory&&) = delete; \
	UTedsActorFolderFactory(const UTedsActorFolderFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTedsActorFolderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTedsActorFolderFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTedsActorFolderFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_ActorFolderFactory_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_ActorFolderFactory_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_ActorFolderFactory_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_ActorFolderFactory_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTedsActorFolderFactory;

// ********** End Class UTedsActorFolderFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_ActorFolderFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
