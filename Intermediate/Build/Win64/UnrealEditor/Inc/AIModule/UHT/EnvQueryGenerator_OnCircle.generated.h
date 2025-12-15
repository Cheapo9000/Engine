// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h"

#ifdef AIMODULE_EnvQueryGenerator_OnCircle_generated_h
#error "EnvQueryGenerator_OnCircle.generated.h already included, missing '#pragma once' in EnvQueryGenerator_OnCircle.h"
#endif
#define AIMODULE_EnvQueryGenerator_OnCircle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryGenerator_OnCircle **********************************************
struct Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_OnCircle(); \
	friend struct ::Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryGenerator_OnCircle, UEnvQueryGenerator_ProjectedPoints, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_OnCircle)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryGenerator_OnCircle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_OnCircle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryGenerator_OnCircle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_OnCircle); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryGenerator_OnCircle(UEnvQueryGenerator_OnCircle&&) = delete; \
	UEnvQueryGenerator_OnCircle(const UEnvQueryGenerator_OnCircle&) = delete; \
	AIMODULE_API virtual ~UEnvQueryGenerator_OnCircle();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_24_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_27_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryGenerator_OnCircle;

// ********** End Class UEnvQueryGenerator_OnCircle ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h

// ********** Begin Enum EPointOnCircleSpacingMethod ***********************************************
#define FOREACH_ENUM_EPOINTONCIRCLESPACINGMETHOD(op) \
	op(EPointOnCircleSpacingMethod::BySpaceBetween) \
	op(EPointOnCircleSpacingMethod::ByNumberOfPoints) 

enum class EPointOnCircleSpacingMethod : uint8;
template<> struct TIsUEnumClass<EPointOnCircleSpacingMethod> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPointOnCircleSpacingMethod>();
// ********** End Enum EPointOnCircleSpacingMethod *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
