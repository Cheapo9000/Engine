// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RichCurveKeyProxy.h"

#ifdef CURVEEDITOR_RichCurveKeyProxy_generated_h
#error "RichCurveKeyProxy.generated.h already included, missing '#pragma once' in RichCurveKeyProxy.h"
#endif
#define CURVEEDITOR_RichCurveKeyProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URichCurveKeyProxy *******************************************************
struct Z_Construct_UClass_URichCurveKeyProxy_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_URichCurveKeyProxy_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichCurveKeyProxy(); \
	friend struct ::Z_Construct_UClass_URichCurveKeyProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_URichCurveKeyProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(URichCurveKeyProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_URichCurveKeyProxy_NoRegister) \
	DECLARE_SERIALIZER(URichCurveKeyProxy) \
	virtual UObject* _getUObject() const override { return const_cast<URichCurveKeyProxy*>(this); }


#define FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichCurveKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URichCurveKeyProxy(URichCurveKeyProxy&&) = delete; \
	URichCurveKeyProxy(const URichCurveKeyProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichCurveKeyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichCurveKeyProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichCurveKeyProxy) \
	NO_API virtual ~URichCurveKeyProxy();


#define FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_15_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URichCurveKeyProxy;

// ********** End Class URichCurveKeyProxy *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
