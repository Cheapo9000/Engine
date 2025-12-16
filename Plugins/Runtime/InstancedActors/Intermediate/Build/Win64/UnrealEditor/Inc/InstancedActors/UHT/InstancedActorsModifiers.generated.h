// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsModifiers.h"

#ifdef INSTANCEDACTORS_InstancedActorsModifiers_generated_h
#error "InstancedActorsModifiers.generated.h already included, missing '#pragma once' in InstancedActorsModifiers.h"
#endif
#define INSTANCEDACTORS_InstancedActorsModifiers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInstancedActorsModifierBase *********************************************
struct Z_Construct_UClass_UInstancedActorsModifierBase_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UInstancedActorsModifierBase_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedActorsModifierBase(); \
	friend struct ::Z_Construct_UClass_UInstancedActorsModifierBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UInstancedActorsModifierBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedActorsModifierBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UInstancedActorsModifierBase_NoRegister) \
	DECLARE_SERIALIZER(UInstancedActorsModifierBase)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INSTANCEDACTORS_API UInstancedActorsModifierBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedActorsModifierBase(UInstancedActorsModifierBase&&) = delete; \
	UInstancedActorsModifierBase(const UInstancedActorsModifierBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, UInstancedActorsModifierBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedActorsModifierBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedActorsModifierBase) \
	INSTANCEDACTORS_API virtual ~UInstancedActorsModifierBase();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedActorsModifierBase;

// ********** End Class UInstancedActorsModifierBase ***********************************************

// ********** Begin Class URemoveInstancedActorsModifier *******************************************
struct Z_Construct_UClass_URemoveInstancedActorsModifier_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_URemoveInstancedActorsModifier_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoveInstancedActorsModifier(); \
	friend struct ::Z_Construct_UClass_URemoveInstancedActorsModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_URemoveInstancedActorsModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoveInstancedActorsModifier, UInstancedActorsModifierBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_URemoveInstancedActorsModifier_NoRegister) \
	DECLARE_SERIALIZER(URemoveInstancedActorsModifier)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_146_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoveInstancedActorsModifier(URemoveInstancedActorsModifier&&) = delete; \
	URemoveInstancedActorsModifier(const URemoveInstancedActorsModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, URemoveInstancedActorsModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoveInstancedActorsModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoveInstancedActorsModifier) \
	INSTANCEDACTORS_API virtual ~URemoveInstancedActorsModifier();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_143_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoveInstancedActorsModifier;

// ********** End Class URemoveInstancedActorsModifier *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifiers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
