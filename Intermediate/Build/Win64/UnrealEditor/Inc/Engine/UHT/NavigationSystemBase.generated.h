// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/NavigationSystemBase.h"

#ifdef ENGINE_NavigationSystemBase_generated_h
#error "NavigationSystemBase.generated.h already included, missing '#pragma once' in NavigationSystemBase.h"
#endif
#define ENGINE_NavigationSystemBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavigationSystemBase ****************************************************
struct Z_Construct_UClass_UNavigationSystemBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemBase(); \
	friend struct ::Z_Construct_UClass_UNavigationSystemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNavigationSystemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationSystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNavigationSystemBase_NoRegister) \
	DECLARE_SERIALIZER(UNavigationSystemBase)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavigationSystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationSystemBase(UNavigationSystemBase&&) = delete; \
	UNavigationSystemBase(const UNavigationSystemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavigationSystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemBase)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_243_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationSystemBase;

// ********** End Class UNavigationSystemBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h

// ********** Begin Enum FNavigationSystemRunMode **************************************************
#define FOREACH_ENUM_FNAVIGATIONSYSTEMRUNMODE(op) \
	op(FNavigationSystemRunMode::InvalidMode) \
	op(FNavigationSystemRunMode::GameMode) \
	op(FNavigationSystemRunMode::EditorMode) \
	op(FNavigationSystemRunMode::SimulationMode) \
	op(FNavigationSystemRunMode::PIEMode) \
	op(FNavigationSystemRunMode::InferFromWorldMode) \
	op(FNavigationSystemRunMode::EditorWorldPartitionBuildMode) 

enum class FNavigationSystemRunMode : uint8;
template<> struct TIsUEnumClass<FNavigationSystemRunMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<FNavigationSystemRunMode>();
// ********** End Enum FNavigationSystemRunMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
