// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PrimaryAssetLabel.h"

#ifdef ENGINE_PrimaryAssetLabel_generated_h
#error "PrimaryAssetLabel.generated.h already included, missing '#pragma once' in PrimaryAssetLabel.h"
#endif
#define ENGINE_PrimaryAssetLabel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPrimaryAssetLabel *******************************************************
struct Z_Construct_UClass_UPrimaryAssetLabel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimaryAssetLabel(); \
	friend struct ::Z_Construct_UClass_UPrimaryAssetLabel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPrimaryAssetLabel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPrimaryAssetLabel, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPrimaryAssetLabel_NoRegister) \
	DECLARE_SERIALIZER(UPrimaryAssetLabel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPrimaryAssetLabel(UPrimaryAssetLabel&&) = delete; \
	UPrimaryAssetLabel(const UPrimaryAssetLabel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryAssetLabel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryAssetLabel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPrimaryAssetLabel) \
	ENGINE_API virtual ~UPrimaryAssetLabel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPrimaryAssetLabel;

// ********** End Class UPrimaryAssetLabel *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
