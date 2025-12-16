// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSmartObjectBehaviorDefinition.h"

#ifdef MASSSMARTOBJECTS_MassSmartObjectBehaviorDefinition_generated_h
#error "MassSmartObjectBehaviorDefinition.generated.h already included, missing '#pragma once' in MassSmartObjectBehaviorDefinition.h"
#endif
#define MASSSMARTOBJECTS_MassSmartObjectBehaviorDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmartObjectMassBehaviorDefinition ***************************************
struct Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_USmartObjectMassBehaviorDefinition_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectMassBehaviorDefinition(); \
	friend struct ::Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_USmartObjectMassBehaviorDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectMassBehaviorDefinition, USmartObjectBehaviorDefinition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_USmartObjectMassBehaviorDefinition_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectMassBehaviorDefinition)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSMARTOBJECTS_API USmartObjectMassBehaviorDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectMassBehaviorDefinition(USmartObjectMassBehaviorDefinition&&) = delete; \
	USmartObjectMassBehaviorDefinition(const USmartObjectMassBehaviorDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSMARTOBJECTS_API, USmartObjectMassBehaviorDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectMassBehaviorDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectMassBehaviorDefinition) \
	MASSSMARTOBJECTS_API virtual ~USmartObjectMassBehaviorDefinition();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_39_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectMassBehaviorDefinition;

// ********** End Class USmartObjectMassBehaviorDefinition *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
