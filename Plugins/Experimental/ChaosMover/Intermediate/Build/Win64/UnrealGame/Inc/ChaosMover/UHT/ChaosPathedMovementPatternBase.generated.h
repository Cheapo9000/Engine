// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/PathedMovement/ChaosPathedMovementPatternBase.h"

#ifdef CHAOSMOVER_ChaosPathedMovementPatternBase_generated_h
#error "ChaosPathedMovementPatternBase.generated.h already included, missing '#pragma once' in ChaosPathedMovementPatternBase.h"
#endif
#define CHAOSMOVER_ChaosPathedMovementPatternBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosPathedMovementPatternBase ******************************************
struct Z_Construct_UClass_UChaosPathedMovementPatternBase_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosPathedMovementPatternBase_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementPatternBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosPathedMovementPatternBase(); \
	friend struct ::Z_Construct_UClass_UChaosPathedMovementPatternBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosPathedMovementPatternBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosPathedMovementPatternBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosPathedMovementPatternBase_NoRegister) \
	DECLARE_SERIALIZER(UChaosPathedMovementPatternBase) \
	DECLARE_WITHIN(UChaosPathedMovementMode)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementPatternBase_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosPathedMovementPatternBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosPathedMovementPatternBase(UChaosPathedMovementPatternBase&&) = delete; \
	UChaosPathedMovementPatternBase(const UChaosPathedMovementPatternBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosPathedMovementPatternBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosPathedMovementPatternBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosPathedMovementPatternBase) \
	NO_API virtual ~UChaosPathedMovementPatternBase();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementPatternBase_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementPatternBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementPatternBase_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementPatternBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosPathedMovementPatternBase;

// ********** End Class UChaosPathedMovementPatternBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementPatternBase_h

// ********** Begin Enum EChaosPatternAxisMaskFlags ************************************************
#define FOREACH_ENUM_ECHAOSPATTERNAXISMASKFLAGS(op) \
	op(EChaosPatternAxisMaskFlags::None) \
	op(EChaosPatternAxisMaskFlags::X) \
	op(EChaosPatternAxisMaskFlags::Y) \
	op(EChaosPatternAxisMaskFlags::Z) \
	op(EChaosPatternAxisMaskFlags::All) 

enum class EChaosPatternAxisMaskFlags : uint8;
template<> struct TIsUEnumClass<EChaosPatternAxisMaskFlags> { enum { Value = true }; };
template<> CHAOSMOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosPatternAxisMaskFlags>();
// ********** End Enum EChaosPatternAxisMaskFlags **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
