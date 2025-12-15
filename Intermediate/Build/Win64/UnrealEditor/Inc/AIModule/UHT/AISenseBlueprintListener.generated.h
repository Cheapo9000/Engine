// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseBlueprintListener.h"

#ifdef AIMODULE_AISenseBlueprintListener_generated_h
#error "AISenseBlueprintListener.generated.h already included, missing '#pragma once' in AISenseBlueprintListener.h"
#endif
#define AIMODULE_AISenseBlueprintListener_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseBlueprintListener ************************************************
struct Z_Construct_UClass_UAISenseBlueprintListener_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseBlueprintListener_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseBlueprintListener(); \
	friend struct ::Z_Construct_UClass_UAISenseBlueprintListener_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseBlueprintListener_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseBlueprintListener, UUserDefinedStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseBlueprintListener_NoRegister) \
	DECLARE_SERIALIZER(UAISenseBlueprintListener)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseBlueprintListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseBlueprintListener(UAISenseBlueprintListener&&) = delete; \
	UAISenseBlueprintListener(const UAISenseBlueprintListener&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseBlueprintListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseBlueprintListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseBlueprintListener) \
	AIMODULE_API virtual ~UAISenseBlueprintListener();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_8_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseBlueprintListener;

// ********** End Class UAISenseBlueprintListener **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
