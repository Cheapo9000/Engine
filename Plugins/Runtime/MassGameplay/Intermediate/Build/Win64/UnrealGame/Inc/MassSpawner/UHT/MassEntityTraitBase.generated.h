// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntityTraitBase.h"

#ifdef MASSSPAWNER_MassEntityTraitBase_generated_h
#error "MassEntityTraitBase.generated.h already included, missing '#pragma once' in MassEntityTraitBase.h"
#endif
#define MASSSPAWNER_MassEntityTraitBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEntityTraitBase *****************************************************
struct Z_Construct_UClass_UMassEntityTraitBase_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEntityTraitBase(); \
	friend struct ::Z_Construct_UClass_UMassEntityTraitBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_UMassEntityTraitBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEntityTraitBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_UMassEntityTraitBase_NoRegister) \
	DECLARE_SERIALIZER(UMassEntityTraitBase) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSPAWNER_API UMassEntityTraitBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEntityTraitBase(UMassEntityTraitBase&&) = delete; \
	UMassEntityTraitBase(const UMassEntityTraitBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, UMassEntityTraitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntityTraitBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEntityTraitBase) \
	MASSSPAWNER_API virtual ~UMassEntityTraitBase();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEntityTraitBase;

// ********** End Class UMassEntityTraitBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
