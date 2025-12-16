// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IRemapCurvesDebuggingProvider.h"

#ifdef CURVEEXPRESSIONEDITOR_IRemapCurvesDebuggingProvider_generated_h
#error "IRemapCurvesDebuggingProvider.generated.h already included, missing '#pragma once' in IRemapCurvesDebuggingProvider.h"
#endif
#define CURVEEXPRESSIONEDITOR_IRemapCurvesDebuggingProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface URemapCurvesDebuggingProvider ****************************************
struct Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics;
CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_URemapCurvesDebuggingProvider_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemapCurvesDebuggingProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemapCurvesDebuggingProvider(URemapCurvesDebuggingProvider&&) = delete; \
	URemapCurvesDebuggingProvider(const URemapCurvesDebuggingProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemapCurvesDebuggingProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemapCurvesDebuggingProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemapCurvesDebuggingProvider) \
	virtual ~URemapCurvesDebuggingProvider() = default;


#define FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURemapCurvesDebuggingProvider(); \
	friend struct ::Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEXPRESSIONEDITOR_API UClass* ::Z_Construct_UClass_URemapCurvesDebuggingProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(URemapCurvesDebuggingProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CurveExpressionEditor"), Z_Construct_UClass_URemapCurvesDebuggingProvider_NoRegister) \
	DECLARE_SERIALIZER(URemapCurvesDebuggingProvider)


#define FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRemapCurvesDebuggingProvider() {} \
public: \
	typedef URemapCurvesDebuggingProvider UClassType; \
	typedef IRemapCurvesDebuggingProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemapCurvesDebuggingProvider;

// ********** End Interface URemapCurvesDebuggingProvider ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
