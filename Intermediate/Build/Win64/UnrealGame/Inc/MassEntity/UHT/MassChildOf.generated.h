// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Relations/MassChildOf.h"

#ifdef MASSENTITY_MassChildOf_generated_h
#error "MassChildOf.generated.h already included, missing '#pragma once' in MassChildOf.h"
#endif
#define MASSENTITY_MassChildOf_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassChildOfRelation **********************************************
struct Z_Construct_UScriptStruct_FMassChildOfRelation_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassChildOfRelation_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct(); \
	typedef FMassRelation Super;


struct FMassChildOfRelation;
// ********** End ScriptStruct FMassChildOfRelation ************************************************

// ********** Begin ScriptStruct FMassChildOfFragment **********************************************
struct Z_Construct_UScriptStruct_FMassChildOfFragment_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassChildOfFragment_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FMassChildOfFragment;
// ********** End ScriptStruct FMassChildOfFragment ************************************************

// ********** Begin Class UMassChildOfRelationEntityCreation ***************************************
struct Z_Construct_UClass_UMassChildOfRelationEntityCreation_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassChildOfRelationEntityCreation_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassChildOfRelationEntityCreation(); \
	friend struct ::Z_Construct_UClass_UMassChildOfRelationEntityCreation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassChildOfRelationEntityCreation_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassChildOfRelationEntityCreation, UMassRelationEntityCreation, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassChildOfRelationEntityCreation_NoRegister) \
	DECLARE_SERIALIZER(UMassChildOfRelationEntityCreation)


#define FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSENTITY_API UMassChildOfRelationEntityCreation(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassChildOfRelationEntityCreation(UMassChildOfRelationEntityCreation&&) = delete; \
	UMassChildOfRelationEntityCreation(const UMassChildOfRelationEntityCreation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassChildOfRelationEntityCreation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassChildOfRelationEntityCreation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassChildOfRelationEntityCreation) \
	MASSENTITY_API virtual ~UMassChildOfRelationEntityCreation();


#define FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h_33_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassChildOfRelationEntityCreation;

// ********** End Class UMassChildOfRelationEntityCreation *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_Relations_MassChildOf_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
