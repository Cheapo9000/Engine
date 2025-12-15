// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseTools/SingleClickTool.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_SingleClickTool_generated_h
#error "SingleClickTool.generated.h already included, missing '#pragma once' in SingleClickTool.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SingleClickTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USingleClickToolBuilder **************************************************
struct Z_Construct_UClass_USingleClickToolBuilder_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickToolBuilder_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleClickToolBuilder(); \
	friend struct ::Z_Construct_UClass_USingleClickToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USingleClickToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(USingleClickToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USingleClickToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(USingleClickToolBuilder)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USingleClickToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USingleClickToolBuilder(USingleClickToolBuilder&&) = delete; \
	USingleClickToolBuilder(const USingleClickToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USingleClickToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleClickToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USingleClickToolBuilder) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USingleClickToolBuilder();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_24_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USingleClickToolBuilder;

// ********** End Class USingleClickToolBuilder ****************************************************

// ********** Begin Class USingleClickTool *********************************************************
struct Z_Construct_UClass_USingleClickTool_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleClickTool(); \
	friend struct ::Z_Construct_UClass_USingleClickTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USingleClickTool_NoRegister(); \
public: \
	DECLARE_CLASS2(USingleClickTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USingleClickTool_NoRegister) \
	DECLARE_SERIALIZER(USingleClickTool)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USingleClickTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USingleClickTool(USingleClickTool&&) = delete; \
	USingleClickTool(const USingleClickTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USingleClickTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleClickTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USingleClickTool) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USingleClickTool();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_47_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USingleClickTool;

// ********** End Class USingleClickTool ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
