// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/AvaTransformModifierShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaTransformModifierShared_generated_h
#error "AvaTransformModifierShared.generated.h already included, missing '#pragma once' in AvaTransformModifierShared.h"
#endif
#define AVALANCHEMODIFIERS_AvaTransformModifierShared_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaTransformSharedModifierState_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaTransformSharedModifierState>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaTransformSharedActorState_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaTransformSharedActorState>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransformModifierShared(); \
	friend struct Z_Construct_UClass_UAvaTransformModifierShared_Statics; \
public: \
	DECLARE_CLASS(UAvaTransformModifierShared, UActorModifierCoreSharedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAvaTransformModifierShared)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaTransformModifierShared(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransformModifierShared(UAvaTransformModifierShared&&); \
	UAvaTransformModifierShared(const UAvaTransformModifierShared&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaTransformModifierShared); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransformModifierShared); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransformModifierShared) \
	NO_API virtual ~UAvaTransformModifierShared();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h_116_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaTransformModifierShared>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Shared_AvaTransformModifierShared_h


#define FOREACH_ENUM_EAVATRANSFORMSHAREDMODIFIERSTATE(op) \
	op(EAvaTransformSharedModifierState::None) \
	op(EAvaTransformSharedModifierState::Location) \
	op(EAvaTransformSharedModifierState::Rotation) \
	op(EAvaTransformSharedModifierState::Scale) \
	op(EAvaTransformSharedModifierState::LocationRotation) \
	op(EAvaTransformSharedModifierState::LocationScale) \
	op(EAvaTransformSharedModifierState::RotationScale) \
	op(EAvaTransformSharedModifierState::All) 

enum class EAvaTransformSharedModifierState : uint8;
template<> struct TIsUEnumClass<EAvaTransformSharedModifierState> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaTransformSharedModifierState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
