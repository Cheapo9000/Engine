// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SwitchActor.h"

#ifdef VARIANTMANAGERCONTENT_SwitchActor_generated_h
#error "SwitchActor.generated.h already included, missing '#pragma once' in SwitchActor.h"
#endif
#define VARIANTMANAGERCONTENT_SwitchActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class ASwitchActor *************************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectOption); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execGetOptions);


struct Z_Construct_UClass_ASwitchActor_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ASwitchActor_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwitchActor(); \
	friend struct ::Z_Construct_UClass_ASwitchActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_ASwitchActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASwitchActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_ASwitchActor_NoRegister) \
	DECLARE_SERIALIZER(ASwitchActor)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASwitchActor(ASwitchActor&&) = delete; \
	ASwitchActor(const ASwitchActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, ASwitchActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitchActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwitchActor) \
	VARIANTMANAGERCONTENT_API virtual ~ASwitchActor();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_20_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASwitchActor;

// ********** End Class ASwitchActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
