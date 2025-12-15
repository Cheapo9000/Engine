// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineNavModifierComponent.h"

#ifdef NAVIGATIONSYSTEM_SplineNavModifierComponent_generated_h
#error "SplineNavModifierComponent.generated.h already included, missing '#pragma once' in SplineNavModifierComponent.h"
#endif
#define NAVIGATIONSYSTEM_SplineNavModifierComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USplineNavModifierComponent **********************************************
#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateNavigationWithComponentData);


struct Z_Construct_UClass_USplineNavModifierComponent_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_USplineNavModifierComponent_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineNavModifierComponent(); \
	friend struct ::Z_Construct_UClass_USplineNavModifierComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_USplineNavModifierComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USplineNavModifierComponent, UNavModifierComponent, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_USplineNavModifierComponent_NoRegister) \
	DECLARE_SERIALIZER(USplineNavModifierComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineNavModifierComponent(USplineNavModifierComponent&&) = delete; \
	USplineNavModifierComponent(const USplineNavModifierComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, USplineNavModifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineNavModifierComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineNavModifierComponent) \
	NAVIGATIONSYSTEM_API virtual ~USplineNavModifierComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_25_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineNavModifierComponent;

// ********** End Class USplineNavModifierComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h

// ********** Begin Enum ESubdivisionLOD ***********************************************************
#define FOREACH_ENUM_ESUBDIVISIONLOD(op) \
	op(ESubdivisionLOD::Low) \
	op(ESubdivisionLOD::Medium) \
	op(ESubdivisionLOD::High) \
	op(ESubdivisionLOD::Ultra) 

enum class ESubdivisionLOD;
template<> struct TIsUEnumClass<ESubdivisionLOD> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubdivisionLOD>();
// ********** End Enum ESubdivisionLOD *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
