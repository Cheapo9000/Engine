// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/AvaVisibilityModifierShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaVisibilityModifierShared_generated_h
#error "AvaVisibilityModifierShared.generated.h already included, missing '#pragma once' in AvaVisibilityModifierShared.h"
#endif
#define AVALANCHEMODIFIERS_AvaVisibilityModifierShared_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaVisibilitySharedModifierState_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaVisibilitySharedModifierState>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaVisibilitySharedActorState_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaVisibilitySharedActorState>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaVisibilityModifierShared(); \
	friend struct Z_Construct_UClass_UAvaVisibilityModifierShared_Statics; \
public: \
	DECLARE_CLASS(UAvaVisibilityModifierShared, UActorModifierCoreSharedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAvaVisibilityModifierShared)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaVisibilityModifierShared(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaVisibilityModifierShared(UAvaVisibilityModifierShared&&); \
	UAvaVisibilityModifierShared(const UAvaVisibilityModifierShared&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaVisibilityModifierShared); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaVisibilityModifierShared); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaVisibilityModifierShared) \
	NO_API virtual ~UAvaVisibilityModifierShared();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h_115_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h_118_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaVisibilityModifierShared>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaVisibilityModifierShared_h


#define FOREACH_ENUM_EAVAVISIBILITYACTOR(op) \
	op(EAvaVisibilityActor::None) \
	op(EAvaVisibilityActor::Game) \
	op(EAvaVisibilityActor::Editor) \
	op(EAvaVisibilityActor::GameAndEditor) 

enum class EAvaVisibilityActor : uint8;
template<> struct TIsUEnumClass<EAvaVisibilityActor> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaVisibilityActor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
