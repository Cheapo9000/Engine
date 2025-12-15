// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFolder.h"

#ifdef ENGINE_ActorFolder_generated_h
#error "ActorFolder.generated.h already included, missing '#pragma once' in ActorFolder.h"
#endif
#define ENGINE_ActorFolder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFolder *************************************************************
struct Z_Construct_UClass_UActorFolder_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorFolder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorFolder(); \
	friend struct ::Z_Construct_UClass_UActorFolder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorFolder_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorFolder_NoRegister) \
	DECLARE_SERIALIZER(UActorFolder) \
	DECLARE_WITHIN(ULevel)


#define FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFolder(UActorFolder&&) = delete; \
	UActorFolder(const UActorFolder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFolder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFolder) \
	ENGINE_API virtual ~UActorFolder();


#define FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFolder;

// ********** End Class UActorFolder ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
