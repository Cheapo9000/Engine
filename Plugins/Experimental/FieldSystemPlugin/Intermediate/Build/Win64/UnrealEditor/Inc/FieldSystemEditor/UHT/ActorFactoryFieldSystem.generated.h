// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Field/ActorFactoryFieldSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIELDSYSTEMEDITOR_ActorFactoryFieldSystem_generated_h
#error "ActorFactoryFieldSystem.generated.h already included, missing '#pragma once' in ActorFactoryFieldSystem.h"
#endif
#define FIELDSYSTEMEDITOR_ActorFactoryFieldSystem_generated_h

#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Private_Field_ActorFactoryFieldSystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryFieldSystem(); \
	friend struct Z_Construct_UClass_UActorFactoryFieldSystem_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryFieldSystem, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEditor"), FIELDSYSTEMEDITOR_API) \
	DECLARE_SERIALIZER(UActorFactoryFieldSystem)


#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Private_Field_ActorFactoryFieldSystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIELDSYSTEMEDITOR_API UActorFactoryFieldSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryFieldSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIELDSYSTEMEDITOR_API, UActorFactoryFieldSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryFieldSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryFieldSystem(UActorFactoryFieldSystem&&); \
	UActorFactoryFieldSystem(const UActorFactoryFieldSystem&); \
public: \
	FIELDSYSTEMEDITOR_API virtual ~UActorFactoryFieldSystem();


#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Private_Field_ActorFactoryFieldSystem_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Private_Field_ActorFactoryFieldSystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Private_Field_ActorFactoryFieldSystem_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Private_Field_ActorFactoryFieldSystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMEDITOR_API UClass* StaticClass<class UActorFactoryFieldSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Private_Field_ActorFactoryFieldSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
