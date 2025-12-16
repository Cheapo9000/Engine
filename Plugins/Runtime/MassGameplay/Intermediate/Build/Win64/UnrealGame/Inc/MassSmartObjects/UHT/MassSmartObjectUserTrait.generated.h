// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSmartObjectUserTrait.h"

#ifdef MASSSMARTOBJECTS_MassSmartObjectUserTrait_generated_h
#error "MassSmartObjectUserTrait.generated.h already included, missing '#pragma once' in MassSmartObjectUserTrait.h"
#endif
#define MASSSMARTOBJECTS_MassSmartObjectUserTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSmartObjectUserTrait ************************************************
struct Z_Construct_UClass_UMassSmartObjectUserTrait_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectUserTrait_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSmartObjectUserTrait(); \
	friend struct ::Z_Construct_UClass_UMassSmartObjectUserTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassSmartObjectUserTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSmartObjectUserTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassSmartObjectUserTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassSmartObjectUserTrait)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSMARTOBJECTS_API UMassSmartObjectUserTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSmartObjectUserTrait(UMassSmartObjectUserTrait&&) = delete; \
	UMassSmartObjectUserTrait(const UMassSmartObjectUserTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSMARTOBJECTS_API, UMassSmartObjectUserTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSmartObjectUserTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSmartObjectUserTrait) \
	MASSSMARTOBJECTS_API virtual ~UMassSmartObjectUserTrait();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSmartObjectUserTrait;

// ********** End Class UMassSmartObjectUserTrait **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
