// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLoggerExtension.h"

#ifdef AIMODULE_VisualLoggerExtension_generated_h
#error "VisualLoggerExtension.generated.h already included, missing '#pragma once' in VisualLoggerExtension.h"
#endif
#define AIMODULE_VisualLoggerExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVisualLoggerExtension ***************************************************
struct Z_Construct_UClass_UVisualLoggerExtension_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UVisualLoggerExtension_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisualLoggerExtension(); \
	friend struct ::Z_Construct_UClass_UVisualLoggerExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UVisualLoggerExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UVisualLoggerExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UVisualLoggerExtension_NoRegister) \
	DECLARE_SERIALIZER(UVisualLoggerExtension)


#define FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UVisualLoggerExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVisualLoggerExtension(UVisualLoggerExtension&&) = delete; \
	UVisualLoggerExtension(const UVisualLoggerExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UVisualLoggerExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerExtension) \
	AIMODULE_API virtual ~UVisualLoggerExtension();


#define FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_45_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVisualLoggerExtension;

// ********** End Class UVisualLoggerExtension *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
