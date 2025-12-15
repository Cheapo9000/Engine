// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScreenshotFunctionalTestBase.h"

#ifdef FUNCTIONALTESTING_ScreenshotFunctionalTestBase_generated_h
#error "ScreenshotFunctionalTestBase.generated.h already included, missing '#pragma once' in ScreenshotFunctionalTestBase.h"
#endif
#define FUNCTIONALTESTING_ScreenshotFunctionalTestBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AScreenshotFunctionalTestBase ********************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AScreenshotFunctionalTestBase, FUNCTIONALTESTING_API)


struct Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScreenshotFunctionalTestBase(); \
	friend struct ::Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AScreenshotFunctionalTestBase, AFunctionalTest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister) \
	DECLARE_SERIALIZER(AScreenshotFunctionalTestBase) \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AScreenshotFunctionalTestBase(AScreenshotFunctionalTestBase&&) = delete; \
	AScreenshotFunctionalTestBase(const AScreenshotFunctionalTestBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AScreenshotFunctionalTestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScreenshotFunctionalTestBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScreenshotFunctionalTestBase) \
	FUNCTIONALTESTING_API virtual ~AScreenshotFunctionalTestBase();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_22_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AScreenshotFunctionalTestBase;

// ********** End Class AScreenshotFunctionalTestBase **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
