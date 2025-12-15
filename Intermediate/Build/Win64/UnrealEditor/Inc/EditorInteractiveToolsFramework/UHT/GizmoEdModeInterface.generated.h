// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GizmoEdModeInterface.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_GizmoEdModeInterface_generated_h
#error "GizmoEdModeInterface.generated.h already included, missing '#pragma once' in GizmoEdModeInterface.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_GizmoEdModeInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UGizmoEdModeInterface ************************************************
struct Z_Construct_UClass_UGizmoEdModeInterface_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoEdModeInterface_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UGizmoEdModeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoEdModeInterface(UGizmoEdModeInterface&&) = delete; \
	UGizmoEdModeInterface(const UGizmoEdModeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UGizmoEdModeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoEdModeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoEdModeInterface) \
	virtual ~UGizmoEdModeInterface() = default;


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoEdModeInterface(); \
	friend struct ::Z_Construct_UClass_UGizmoEdModeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoEdModeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoEdModeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UGizmoEdModeInterface_NoRegister) \
	DECLARE_SERIALIZER(UGizmoEdModeInterface)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoEdModeInterface() {} \
public: \
	typedef UGizmoEdModeInterface UClassType; \
	typedef IGizmoEdModeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_21_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoEdModeInterface;

// ********** End Interface UGizmoEdModeInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
