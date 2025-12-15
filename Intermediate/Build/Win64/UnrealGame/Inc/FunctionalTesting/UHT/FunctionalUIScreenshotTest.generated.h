// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalUIScreenshotTest.h"

#ifdef FUNCTIONALTESTING_FunctionalUIScreenshotTest_generated_h
#error "FunctionalUIScreenshotTest.generated.h already included, missing '#pragma once' in FunctionalUIScreenshotTest.h"
#endif
#define FUNCTIONALTESTING_FunctionalUIScreenshotTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFunctionalUIScreenshotTest **********************************************
struct Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalUIScreenshotTest(); \
	friend struct ::Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister(); \
public: \
	DECLARE_CLASS2(AFunctionalUIScreenshotTest, AScreenshotFunctionalTestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister) \
	DECLARE_SERIALIZER(AFunctionalUIScreenshotTest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFunctionalUIScreenshotTest(AFunctionalUIScreenshotTest&&) = delete; \
	AFunctionalUIScreenshotTest(const AFunctionalUIScreenshotTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalUIScreenshotTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalUIScreenshotTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalUIScreenshotTest) \
	FUNCTIONALTESTING_API virtual ~AFunctionalUIScreenshotTest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_25_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFunctionalUIScreenshotTest;

// ********** End Class AFunctionalUIScreenshotTest ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h

// ********** Begin Enum EWidgetTestAppearLocation *************************************************
#define FOREACH_ENUM_EWIDGETTESTAPPEARLOCATION(op) \
	op(EWidgetTestAppearLocation::Viewport) \
	op(EWidgetTestAppearLocation::PlayerScreen) 

enum class EWidgetTestAppearLocation;
template<> struct TIsUEnumClass<EWidgetTestAppearLocation> { enum { Value = true }; };
template<> FUNCTIONALTESTING_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetTestAppearLocation>();
// ********** End Enum EWidgetTestAppearLocation ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
