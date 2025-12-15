// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CookGlobalShadersCommandlet.h"

#ifdef UNREALED_CookGlobalShadersCommandlet_generated_h
#error "CookGlobalShadersCommandlet.generated.h already included, missing '#pragma once' in CookGlobalShadersCommandlet.h"
#endif
#define UNREALED_CookGlobalShadersCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCookGlobalShadersCommandlet *********************************************
struct Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookGlobalShadersCommandlet(); \
	friend struct ::Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCookGlobalShadersCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookGlobalShadersCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCookGlobalShadersCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCookGlobalShadersCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookGlobalShadersCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookGlobalShadersCommandlet(UCookGlobalShadersCommandlet&&) = delete; \
	UCookGlobalShadersCommandlet(const UCookGlobalShadersCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookGlobalShadersCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookGlobalShadersCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookGlobalShadersCommandlet) \
	NO_API virtual ~UCookGlobalShadersCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookGlobalShadersCommandlet;

// ********** End Class UCookGlobalShadersCommandlet ***********************************************

// ********** Begin Class UCookGlobalShadersDeviceHelperBase ***************************************
struct Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookGlobalShadersDeviceHelperBase(); \
	friend struct ::Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookGlobalShadersDeviceHelperBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_NoRegister) \
	DECLARE_SERIALIZER(UCookGlobalShadersDeviceHelperBase)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCookGlobalShadersDeviceHelperBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookGlobalShadersDeviceHelperBase(UCookGlobalShadersDeviceHelperBase&&) = delete; \
	UCookGlobalShadersDeviceHelperBase(const UCookGlobalShadersDeviceHelperBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCookGlobalShadersDeviceHelperBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookGlobalShadersDeviceHelperBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookGlobalShadersDeviceHelperBase) \
	UNREALED_API virtual ~UCookGlobalShadersDeviceHelperBase();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_46_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookGlobalShadersDeviceHelperBase;

// ********** End Class UCookGlobalShadersDeviceHelperBase *****************************************

// ********** Begin Class UCookGlobalShadersDeviceHelperStaged *************************************
struct Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookGlobalShadersDeviceHelperStaged(); \
	friend struct ::Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookGlobalShadersDeviceHelperStaged, UCookGlobalShadersDeviceHelperBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_NoRegister) \
	DECLARE_SERIALIZER(UCookGlobalShadersDeviceHelperStaged)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookGlobalShadersDeviceHelperStaged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookGlobalShadersDeviceHelperStaged(UCookGlobalShadersDeviceHelperStaged&&) = delete; \
	UCookGlobalShadersDeviceHelperStaged(const UCookGlobalShadersDeviceHelperStaged&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookGlobalShadersDeviceHelperStaged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookGlobalShadersDeviceHelperStaged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookGlobalShadersDeviceHelperStaged) \
	NO_API virtual ~UCookGlobalShadersDeviceHelperStaged();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_54_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookGlobalShadersDeviceHelperStaged;

// ********** End Class UCookGlobalShadersDeviceHelperStaged ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
