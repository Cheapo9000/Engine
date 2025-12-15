// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARActor.h"

#ifdef AUGMENTEDREALITY_ARActor_generated_h
#error "ARActor.generated.h already included, missing '#pragma once' in ARActor.h"
#endif
#define AUGMENTEDREALITY_ARActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARComponent;
class UClass;
struct FGuid;

// ********** Begin Class AARActor *****************************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddARComponent);


struct Z_Construct_UClass_AARActor_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARActor_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARActor(); \
	friend struct ::Z_Construct_UClass_AARActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_AARActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AARActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_AARActor_NoRegister) \
	DECLARE_SERIALIZER(AARActor)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AARActor(AARActor&&) = delete; \
	AARActor(const AARActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, AARActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARActor) \
	AUGMENTEDREALITY_API virtual ~AARActor();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_14_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AARActor;

// ********** End Class AARActor *******************************************************************

// ********** Begin ScriptStruct FTrackedGeometryGroup *********************************************
struct Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FTrackedGeometryGroup;
// ********** End ScriptStruct FTrackedGeometryGroup ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
