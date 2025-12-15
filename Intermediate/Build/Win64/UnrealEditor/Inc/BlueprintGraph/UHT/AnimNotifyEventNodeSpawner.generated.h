// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNotifyEventNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_AnimNotifyEventNodeSpawner_generated_h
#error "AnimNotifyEventNodeSpawner.generated.h already included, missing '#pragma once' in AnimNotifyEventNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_AnimNotifyEventNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNotifyEventNodeSpawner **********************************************
struct Z_Construct_UClass_UAnimNotifyEventNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UAnimNotifyEventNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Public_AnimNotifyEventNodeSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyEventNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UAnimNotifyEventNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UAnimNotifyEventNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNotifyEventNodeSpawner, UBlueprintEventNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UAnimNotifyEventNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UAnimNotifyEventNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Public_AnimNotifyEventNodeSpawner_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UAnimNotifyEventNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNotifyEventNodeSpawner(UAnimNotifyEventNodeSpawner&&) = delete; \
	UAnimNotifyEventNodeSpawner(const UAnimNotifyEventNodeSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UAnimNotifyEventNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyEventNodeSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyEventNodeSpawner) \
	BLUEPRINTGRAPH_API virtual ~UAnimNotifyEventNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Public_AnimNotifyEventNodeSpawner_h_11_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Public_AnimNotifyEventNodeSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Public_AnimNotifyEventNodeSpawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_AnimNotifyEventNodeSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNotifyEventNodeSpawner;

// ********** End Class UAnimNotifyEventNodeSpawner ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Public_AnimNotifyEventNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
