// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactoryMediaPlate.h"

#ifdef MEDIAPLATEEDITOR_ActorFactoryMediaPlate_generated_h
#error "ActorFactoryMediaPlate.generated.h already included, missing '#pragma once' in ActorFactoryMediaPlate.h"
#endif
#define MEDIAPLATEEDITOR_ActorFactoryMediaPlate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryMediaPlate **************************************************
struct Z_Construct_UClass_UActorFactoryMediaPlate_Statics;
MEDIAPLATEEDITOR_API UClass* Z_Construct_UClass_UActorFactoryMediaPlate_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryMediaPlate(); \
	friend struct ::Z_Construct_UClass_UActorFactoryMediaPlate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLATEEDITOR_API UClass* ::Z_Construct_UClass_UActorFactoryMediaPlate_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryMediaPlate, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaPlateEditor"), Z_Construct_UClass_UActorFactoryMediaPlate_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryMediaPlate)


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorFactoryMediaPlate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryMediaPlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorFactoryMediaPlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryMediaPlate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryMediaPlate(UActorFactoryMediaPlate&&) = delete; \
	UActorFactoryMediaPlate(const UActorFactoryMediaPlate&) = delete; \
	NO_API virtual ~UActorFactoryMediaPlate();


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_10_PROLOG
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_13_INCLASS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryMediaPlate;

// ********** End Class UActorFactoryMediaPlate ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
