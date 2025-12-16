// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorSupport/CompEditorImagePreviewInterface.h"

#ifdef COMPOSURE_CompEditorImagePreviewInterface_generated_h
#error "CompEditorImagePreviewInterface.generated.h already included, missing '#pragma once' in CompEditorImagePreviewInterface.h"
#endif
#define COMPOSURE_CompEditorImagePreviewInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCompEditorImagePreviewInterface *************************************
struct Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSURE_API UCompEditorImagePreviewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompEditorImagePreviewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UCompEditorImagePreviewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompEditorImagePreviewInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompEditorImagePreviewInterface(UCompEditorImagePreviewInterface&&) = delete; \
	UCompEditorImagePreviewInterface(const UCompEditorImagePreviewInterface&) = delete; \
	virtual ~UCompEditorImagePreviewInterface() = default;


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCompEditorImagePreviewInterface(); \
	friend struct ::Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompEditorImagePreviewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister) \
	DECLARE_SERIALIZER(UCompEditorImagePreviewInterface)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~ICompEditorImagePreviewInterface() {} \
public: \
	typedef UCompEditorImagePreviewInterface UClassType; \
	typedef ICompEditorImagePreviewInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_12_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompEditorImagePreviewInterface;

// ********** End Interface UCompEditorImagePreviewInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
