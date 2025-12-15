// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementEditorWorldInterface.h"

#ifdef UNREALED_ActorElementEditorWorldInterface_generated_h
#error "ActorElementEditorWorldInterface.generated.h already included, missing '#pragma once' in ActorElementEditorWorldInterface.h"
#endif
#define UNREALED_ActorElementEditorWorldInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorElementEditorWorldInterface ****************************************
struct Z_Construct_UClass_UActorElementEditorWorldInterface_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorElementEditorWorldInterface_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementEditorWorldInterface(); \
	friend struct ::Z_Construct_UClass_UActorElementEditorWorldInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorElementEditorWorldInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorElementEditorWorldInterface, UActorElementWorldInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorElementEditorWorldInterface_NoRegister) \
	DECLARE_SERIALIZER(UActorElementEditorWorldInterface)


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorElementEditorWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorElementEditorWorldInterface(UActorElementEditorWorldInterface&&) = delete; \
	UActorElementEditorWorldInterface(const UActorElementEditorWorldInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorElementEditorWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementEditorWorldInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementEditorWorldInterface) \
	UNREALED_API virtual ~UActorElementEditorWorldInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_8_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorElementEditorWorldInterface;

// ********** End Class UActorElementEditorWorldInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
