// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/FKControlRig.h"

#ifdef CONTROLRIG_FKControlRig_generated_h
#error "FKControlRig.generated.h already included, missing '#pragma once' in FKControlRig.h"
#endif
#define CONTROLRIG_FKControlRig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFKControlRig ************************************************************
struct Z_Construct_UClass_UFKControlRig_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UFKControlRig_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUFKControlRig(); \
	friend struct ::Z_Construct_UClass_UFKControlRig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UFKControlRig_NoRegister(); \
public: \
	DECLARE_CLASS2(UFKControlRig, UControlRig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UFKControlRig_NoRegister) \
	DECLARE_SERIALIZER(UFKControlRig)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UFKControlRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFKControlRig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UFKControlRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFKControlRig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFKControlRig(UFKControlRig&&) = delete; \
	UFKControlRig(const UFKControlRig&) = delete; \
	CONTROLRIG_API virtual ~UFKControlRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_40_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_43_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFKControlRig;

// ********** End Class UFKControlRig **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h

// ********** Begin Enum EControlRigFKRigExecuteMode ***********************************************
#define FOREACH_ENUM_ECONTROLRIGFKRIGEXECUTEMODE(op) \
	op(EControlRigFKRigExecuteMode::Replace) \
	op(EControlRigFKRigExecuteMode::Additive) \
	op(EControlRigFKRigExecuteMode::Direct) \
	op(EControlRigFKRigExecuteMode::Max) 

enum class EControlRigFKRigExecuteMode : uint8;
template<> struct TIsUEnumClass<EControlRigFKRigExecuteMode> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigFKRigExecuteMode>();
// ********** End Enum EControlRigFKRigExecuteMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
