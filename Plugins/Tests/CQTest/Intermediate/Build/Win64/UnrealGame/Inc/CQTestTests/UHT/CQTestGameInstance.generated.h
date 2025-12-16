// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CQTestGameInstance.h"

#ifdef CQTESTTESTS_CQTestGameInstance_generated_h
#error "CQTestGameInstance.generated.h already included, missing '#pragma once' in CQTestGameInstance.h"
#endif
#define CQTESTTESTS_CQTestGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCQGameInstanceClass *****************************************************
struct Z_Construct_UClass_UCQGameInstanceClass_Statics;
CQTESTTESTS_API UClass* Z_Construct_UClass_UCQGameInstanceClass_NoRegister();

#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameInstance_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCQGameInstanceClass(); \
	friend struct ::Z_Construct_UClass_UCQGameInstanceClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CQTESTTESTS_API UClass* ::Z_Construct_UClass_UCQGameInstanceClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UCQGameInstanceClass, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CQTestTests"), Z_Construct_UClass_UCQGameInstanceClass_NoRegister) \
	DECLARE_SERIALIZER(UCQGameInstanceClass)


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameInstance_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCQGameInstanceClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCQGameInstanceClass(UCQGameInstanceClass&&) = delete; \
	UCQGameInstanceClass(const UCQGameInstanceClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCQGameInstanceClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCQGameInstanceClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCQGameInstanceClass) \
	NO_API virtual ~UCQGameInstanceClass();


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameInstance_h_10_PROLOG
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameInstance_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameInstance_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCQGameInstanceClass;

// ********** End Class UCQGameInstanceClass *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
