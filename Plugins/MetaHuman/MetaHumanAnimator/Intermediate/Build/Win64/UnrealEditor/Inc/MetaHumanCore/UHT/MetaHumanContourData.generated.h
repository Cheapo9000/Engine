// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanContourData.h"

#ifdef METAHUMANCORE_MetaHumanContourData_generated_h
#error "MetaHumanContourData.generated.h already included, missing '#pragma once' in MetaHumanContourData.h"
#endif
#define METAHUMANCORE_MetaHumanContourData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlVertex ****************************************************
struct Z_Construct_UScriptStruct_FControlVertex_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlVertex_Statics; \
	METAHUMANCORE_API static class UScriptStruct* StaticStruct();


struct FControlVertex;
// ********** End ScriptStruct FControlVertex ******************************************************

// ********** Begin ScriptStruct FReducedContour ***************************************************
struct Z_Construct_UScriptStruct_FReducedContour_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReducedContour_Statics; \
	METAHUMANCORE_API static class UScriptStruct* StaticStruct();


struct FReducedContour;
// ********** End ScriptStruct FReducedContour *****************************************************

// ********** Begin Class UMetaHumanContourData ****************************************************
struct Z_Construct_UClass_UMetaHumanContourData_Statics;
METAHUMANCORE_API UClass* Z_Construct_UClass_UMetaHumanContourData_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanContourData(); \
	friend struct ::Z_Construct_UClass_UMetaHumanContourData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCORE_API UClass* ::Z_Construct_UClass_UMetaHumanContourData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanContourData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCore"), Z_Construct_UClass_UMetaHumanContourData_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanContourData)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANCORE_API UMetaHumanContourData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanContourData(UMetaHumanContourData&&) = delete; \
	UMetaHumanContourData(const UMetaHumanContourData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCORE_API, UMetaHumanContourData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanContourData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanContourData) \
	METAHUMANCORE_API virtual ~UMetaHumanContourData();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h_41_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h_46_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanContourData;

// ********** End Class UMetaHumanContourData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanContourData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
