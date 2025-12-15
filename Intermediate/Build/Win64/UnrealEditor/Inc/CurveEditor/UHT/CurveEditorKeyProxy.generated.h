// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CurveEditorKeyProxy.h"

#ifdef CURVEEDITOR_CurveEditorKeyProxy_generated_h
#error "CurveEditorKeyProxy.generated.h already included, missing '#pragma once' in CurveEditorKeyProxy.h"
#endif
#define CURVEEDITOR_CurveEditorKeyProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCurveEditorKeyProxy *************************************************
struct Z_Construct_UClass_UCurveEditorKeyProxy_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CURVEEDITOR_API UCurveEditorKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorKeyProxy(UCurveEditorKeyProxy&&) = delete; \
	UCurveEditorKeyProxy(const UCurveEditorKeyProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CURVEEDITOR_API, UCurveEditorKeyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorKeyProxy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEditorKeyProxy) \
	virtual ~UCurveEditorKeyProxy() = default;


#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCurveEditorKeyProxy(); \
	friend struct ::Z_Construct_UClass_UCurveEditorKeyProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorKeyProxy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorKeyProxy)


#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICurveEditorKeyProxy() {} \
public: \
	typedef UCurveEditorKeyProxy UClassType; \
	typedef ICurveEditorKeyProxy ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_9_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorKeyProxy;

// ********** End Interface UCurveEditorKeyProxy ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
