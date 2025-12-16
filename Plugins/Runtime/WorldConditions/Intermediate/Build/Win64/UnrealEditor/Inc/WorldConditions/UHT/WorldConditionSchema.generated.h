// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldConditionSchema.h"

#ifdef WORLDCONDITIONS_WorldConditionSchema_generated_h
#error "WorldConditionSchema.generated.h already included, missing '#pragma once' in WorldConditionSchema.h"
#endif
#define WORLDCONDITIONS_WorldConditionSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldConditionSchema ****************************************************
struct Z_Construct_UClass_UWorldConditionSchema_Statics;
WORLDCONDITIONS_API UClass* Z_Construct_UClass_UWorldConditionSchema_NoRegister();

#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldConditionSchema(); \
	friend struct ::Z_Construct_UClass_UWorldConditionSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDCONDITIONS_API UClass* ::Z_Construct_UClass_UWorldConditionSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldConditionSchema, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldConditions"), Z_Construct_UClass_UWorldConditionSchema_NoRegister) \
	DECLARE_SERIALIZER(UWorldConditionSchema)


#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDCONDITIONS_API UWorldConditionSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldConditionSchema(UWorldConditionSchema&&) = delete; \
	UWorldConditionSchema(const UWorldConditionSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDCONDITIONS_API, UWorldConditionSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldConditionSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldConditionSchema) \
	WORLDCONDITIONS_API virtual ~UWorldConditionSchema();


#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_43_PROLOG
#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldConditionSchema;

// ********** End Class UWorldConditionSchema ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
