// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanFaceAnimationSolver.h"

#ifdef METAHUMANFACEANIMATIONSOLVER_MetaHumanFaceAnimationSolver_generated_h
#error "MetaHumanFaceAnimationSolver.generated.h already included, missing '#pragma once' in MetaHumanFaceAnimationSolver.h"
#endif
#define METAHUMANFACEANIMATIONSOLVER_MetaHumanFaceAnimationSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanFaceAnimationSolver ********************************************
struct Z_Construct_UClass_UMetaHumanFaceAnimationSolver_Statics;
METAHUMANFACEANIMATIONSOLVER_API UClass* Z_Construct_UClass_UMetaHumanFaceAnimationSolver_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanFaceAnimationSolver_Public_MetaHumanFaceAnimationSolver_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanFaceAnimationSolver(); \
	friend struct ::Z_Construct_UClass_UMetaHumanFaceAnimationSolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANFACEANIMATIONSOLVER_API UClass* ::Z_Construct_UClass_UMetaHumanFaceAnimationSolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanFaceAnimationSolver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanFaceAnimationSolver"), Z_Construct_UClass_UMetaHumanFaceAnimationSolver_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanFaceAnimationSolver)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanFaceAnimationSolver_Public_MetaHumanFaceAnimationSolver_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANFACEANIMATIONSOLVER_API UMetaHumanFaceAnimationSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanFaceAnimationSolver(UMetaHumanFaceAnimationSolver&&) = delete; \
	UMetaHumanFaceAnimationSolver(const UMetaHumanFaceAnimationSolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANFACEANIMATIONSOLVER_API, UMetaHumanFaceAnimationSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanFaceAnimationSolver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanFaceAnimationSolver) \
	METAHUMANFACEANIMATIONSOLVER_API virtual ~UMetaHumanFaceAnimationSolver();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanFaceAnimationSolver_Public_MetaHumanFaceAnimationSolver_h_32_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanFaceAnimationSolver_Public_MetaHumanFaceAnimationSolver_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanFaceAnimationSolver_Public_MetaHumanFaceAnimationSolver_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanFaceAnimationSolver_Public_MetaHumanFaceAnimationSolver_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanFaceAnimationSolver;

// ********** End Class UMetaHumanFaceAnimationSolver **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanFaceAnimationSolver_Public_MetaHumanFaceAnimationSolver_h

// ********** Begin Enum EDepthMapInfluenceValue ***************************************************
#define FOREACH_ENUM_EDEPTHMAPINFLUENCEVALUE(op) \
	op(EDepthMapInfluenceValue::None) \
	op(EDepthMapInfluenceValue::Low) \
	op(EDepthMapInfluenceValue::High) 

enum class EDepthMapInfluenceValue : uint8;
template<> struct TIsUEnumClass<EDepthMapInfluenceValue> { enum { Value = true }; };
template<> METAHUMANFACEANIMATIONSOLVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDepthMapInfluenceValue>();
// ********** End Enum EDepthMapInfluenceValue *****************************************************

// ********** Begin Enum ETeethMode ****************************************************************
#define FOREACH_ENUM_ETEETHMODE(op) \
	op(ETeethMode::TrackingPoints) \
	op(ETeethMode::Estimated) 

enum class ETeethMode : uint8;
template<> struct TIsUEnumClass<ETeethMode> { enum { Value = true }; };
template<> METAHUMANFACEANIMATIONSOLVER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETeethMode>();
// ********** End Enum ETeethMode ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
