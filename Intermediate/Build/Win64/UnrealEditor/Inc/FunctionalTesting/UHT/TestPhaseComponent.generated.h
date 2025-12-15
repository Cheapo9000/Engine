// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestPhaseComponent.h"

#ifdef FUNCTIONALTESTING_TestPhaseComponent_generated_h
#error "TestPhaseComponent.generated.h already included, missing '#pragma once' in TestPhaseComponent.h"
#endif
#define FUNCTIONALTESTING_TestPhaseComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestPhaseComponent ******************************************************
struct Z_Construct_UClass_UTestPhaseComponent_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTestPhaseComponent_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestPhaseComponent(); \
	friend struct ::Z_Construct_UClass_UTestPhaseComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_UTestPhaseComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestPhaseComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_UTestPhaseComponent_NoRegister) \
	DECLARE_SERIALIZER(UTestPhaseComponent)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestPhaseComponent(UTestPhaseComponent&&) = delete; \
	UTestPhaseComponent(const UTestPhaseComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestPhaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestPhaseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestPhaseComponent) \
	NO_API virtual ~UTestPhaseComponent();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_11_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestPhaseComponent;

// ********** End Class UTestPhaseComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
