// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuV/COIBakingTestCommandlet.h"

#ifdef MUTABLEVALIDATION_COIBakingTestCommandlet_generated_h
#error "COIBakingTestCommandlet.generated.h already included, missing '#pragma once' in COIBakingTestCommandlet.h"
#endif
#define MUTABLEVALIDATION_COIBakingTestCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCOIBakingTestCommandlet *************************************************
struct Z_Construct_UClass_UCOIBakingTestCommandlet_Statics;
MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UCOIBakingTestCommandlet_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_COIBakingTestCommandlet_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCOIBakingTestCommandlet(); \
	friend struct ::Z_Construct_UClass_UCOIBakingTestCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUTABLEVALIDATION_API UClass* ::Z_Construct_UClass_UCOIBakingTestCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCOIBakingTestCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MutableValidation"), Z_Construct_UClass_UCOIBakingTestCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCOIBakingTestCommandlet)


#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_COIBakingTestCommandlet_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MUTABLEVALIDATION_API UCOIBakingTestCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCOIBakingTestCommandlet(UCOIBakingTestCommandlet&&) = delete; \
	UCOIBakingTestCommandlet(const UCOIBakingTestCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MUTABLEVALIDATION_API, UCOIBakingTestCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCOIBakingTestCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCOIBakingTestCommandlet) \
	MUTABLEVALIDATION_API virtual ~UCOIBakingTestCommandlet();


#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_COIBakingTestCommandlet_h_20_PROLOG
#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_COIBakingTestCommandlet_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_COIBakingTestCommandlet_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_COIBakingTestCommandlet_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCOIBakingTestCommandlet;

// ********** End Class UCOIBakingTestCommandlet ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_COIBakingTestCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
