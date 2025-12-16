// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/CompositeActorFactory.h"

#ifdef COMPOSITEEDITOR_CompositeActorFactory_generated_h
#error "CompositeActorFactory.generated.h already included, missing '#pragma once' in CompositeActorFactory.h"
#endif
#define COMPOSITEEDITOR_CompositeActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeActorFactory ***************************************************
struct Z_Construct_UClass_UCompositeActorFactory_Statics;
COMPOSITEEDITOR_API UClass* Z_Construct_UClass_UCompositeActorFactory_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_CompositeEditor_Private_ActorFactories_CompositeActorFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeActorFactory(); \
	friend struct ::Z_Construct_UClass_UCompositeActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITEEDITOR_API UClass* ::Z_Construct_UClass_UCompositeActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompositeEditor"), Z_Construct_UClass_UCompositeActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UCompositeActorFactory)


#define FID_Engine_Plugins_Compositing_Composite_Source_CompositeEditor_Private_ActorFactories_CompositeActorFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeActorFactory(UCompositeActorFactory&&) = delete; \
	UCompositeActorFactory(const UCompositeActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeActorFactory) \
	NO_API virtual ~UCompositeActorFactory();


#define FID_Engine_Plugins_Compositing_Composite_Source_CompositeEditor_Private_ActorFactories_CompositeActorFactory_h_10_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_CompositeEditor_Private_ActorFactories_CompositeActorFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_CompositeEditor_Private_ActorFactories_CompositeActorFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_CompositeEditor_Private_ActorFactories_CompositeActorFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeActorFactory;

// ********** End Class UCompositeActorFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_CompositeEditor_Private_ActorFactories_CompositeActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
