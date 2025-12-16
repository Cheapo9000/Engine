// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequenceConverterFactory.h"

#ifdef CONTROLRIGEDITOR_AnimSequenceConverterFactory_generated_h
#error "AnimSequenceConverterFactory.generated.h already included, missing '#pragma once' in AnimSequenceConverterFactory.h"
#endif
#define CONTROLRIGEDITOR_AnimSequenceConverterFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimSequenceConverterFactory ********************************************
struct Z_Construct_UClass_UAnimSequenceConverterFactory_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimSequenceConverterFactory_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequenceConverterFactory(); \
	friend struct ::Z_Construct_UClass_UAnimSequenceConverterFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAnimSequenceConverterFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequenceConverterFactory, UAnimSequenceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAnimSequenceConverterFactory_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequenceConverterFactory)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UAnimSequenceConverterFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequenceConverterFactory(UAnimSequenceConverterFactory&&) = delete; \
	UAnimSequenceConverterFactory(const UAnimSequenceConverterFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UAnimSequenceConverterFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceConverterFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceConverterFactory) \
	CONTROLRIGEDITOR_API virtual ~UAnimSequenceConverterFactory();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_10_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequenceConverterFactory;

// ********** End Class UAnimSequenceConverterFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
