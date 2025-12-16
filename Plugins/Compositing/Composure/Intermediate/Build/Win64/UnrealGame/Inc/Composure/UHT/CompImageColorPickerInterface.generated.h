// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorSupport/CompImageColorPickerInterface.h"

#ifdef COMPOSURE_CompImageColorPickerInterface_generated_h
#error "CompImageColorPickerInterface.generated.h already included, missing '#pragma once' in CompImageColorPickerInterface.h"
#endif
#define COMPOSURE_CompImageColorPickerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCompImageColorPickerInterface ***************************************
struct Z_Construct_UClass_UCompImageColorPickerInterface_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSURE_API UCompImageColorPickerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompImageColorPickerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UCompImageColorPickerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompImageColorPickerInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompImageColorPickerInterface(UCompImageColorPickerInterface&&) = delete; \
	UCompImageColorPickerInterface(const UCompImageColorPickerInterface&) = delete; \
	virtual ~UCompImageColorPickerInterface() = default;


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCompImageColorPickerInterface(); \
	friend struct ::Z_Construct_UClass_UCompImageColorPickerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompImageColorPickerInterface, UCompEditorImagePreviewInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister) \
	DECLARE_SERIALIZER(UCompImageColorPickerInterface)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~ICompImageColorPickerInterface() {} \
public: \
	typedef UCompImageColorPickerInterface UClassType; \
	typedef ICompImageColorPickerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_14_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompImageColorPickerInterface;

// ********** End Interface UCompImageColorPickerInterface *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
