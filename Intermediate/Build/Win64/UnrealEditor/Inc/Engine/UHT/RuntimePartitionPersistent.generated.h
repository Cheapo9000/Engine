// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/RuntimeHashSet/RuntimePartitionPersistent.h"

#ifdef ENGINE_RuntimePartitionPersistent_generated_h
#error "RuntimePartitionPersistent.generated.h already included, missing '#pragma once' in RuntimePartitionPersistent.h"
#endif
#define ENGINE_RuntimePartitionPersistent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URuntimePartitionPersistent **********************************************
struct Z_Construct_UClass_URuntimePartitionPersistent_Statics;
ENGINE_API UClass* Z_Construct_UClass_URuntimePartitionPersistent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimePartitionPersistent(); \
	friend struct ::Z_Construct_UClass_URuntimePartitionPersistent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URuntimePartitionPersistent_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimePartitionPersistent, URuntimePartition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URuntimePartitionPersistent_NoRegister) \
	DECLARE_SERIALIZER(URuntimePartitionPersistent)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimePartitionPersistent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimePartitionPersistent(URuntimePartitionPersistent&&) = delete; \
	URuntimePartitionPersistent(const URuntimePartitionPersistent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimePartitionPersistent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimePartitionPersistent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimePartitionPersistent) \
	NO_API virtual ~URuntimePartitionPersistent();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimePartitionPersistent;

// ********** End Class URuntimePartitionPersistent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
