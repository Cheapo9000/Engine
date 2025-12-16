// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeExtension.h"

#ifdef STATETREEMODULE_StateTreeExtension_generated_h
#error "StateTreeExtension.generated.h already included, missing '#pragma once' in StateTreeExtension.h"
#endif
#define STATETREEMODULE_StateTreeExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeExtension ******************************************************
struct Z_Construct_UClass_UStateTreeExtension_Statics;
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeExtension_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeExtension(); \
	friend struct ::Z_Construct_UClass_UStateTreeExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTreeExtension_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeExtension) \
	DECLARE_WITHIN(UStateTree)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEMODULE_API UStateTreeExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeExtension(UStateTreeExtension&&) = delete; \
	UStateTreeExtension(const UStateTreeExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTreeExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeExtension) \
	STATETREEMODULE_API virtual ~UStateTreeExtension();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeExtension;

// ********** End Class UStateTreeExtension ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
