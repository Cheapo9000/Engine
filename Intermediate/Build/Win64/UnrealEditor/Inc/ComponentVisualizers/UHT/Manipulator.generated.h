// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manipulator.h"

#ifdef COMPONENTVISUALIZERS_Manipulator_generated_h
#error "Manipulator.generated.h already included, missing '#pragma once' in Manipulator.h"
#endif
#define COMPONENTVISUALIZERS_Manipulator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AManipulator *************************************************************
struct Z_Construct_UClass_AManipulator_Statics;
COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_AManipulator_NoRegister();

#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManipulator(); \
	friend struct ::Z_Construct_UClass_AManipulator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPONENTVISUALIZERS_API UClass* ::Z_Construct_UClass_AManipulator_NoRegister(); \
public: \
	DECLARE_CLASS2(AManipulator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComponentVisualizers"), Z_Construct_UClass_AManipulator_NoRegister) \
	DECLARE_SERIALIZER(AManipulator) \
	virtual UObject* _getUObject() const override { return const_cast<AManipulator*>(this); }


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AManipulator(AManipulator&&) = delete; \
	AManipulator(const AManipulator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPONENTVISUALIZERS_API, AManipulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManipulator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AManipulator) \
	COMPONENTVISUALIZERS_API virtual ~AManipulator();


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_26_PROLOG
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AManipulator;

// ********** End Class AManipulator ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
