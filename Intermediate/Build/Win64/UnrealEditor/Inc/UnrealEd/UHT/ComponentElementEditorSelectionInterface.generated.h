// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Component/ComponentElementEditorSelectionInterface.h"

#ifdef UNREALED_ComponentElementEditorSelectionInterface_generated_h
#error "ComponentElementEditorSelectionInterface.generated.h already included, missing '#pragma once' in ComponentElementEditorSelectionInterface.h"
#endif
#define UNREALED_ComponentElementEditorSelectionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComponentElementEditorSelectionInterface ********************************
struct Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics;
UNREALED_API UClass* Z_Construct_UClass_UComponentElementEditorSelectionInterface_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentElementEditorSelectionInterface(); \
	friend struct ::Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UComponentElementEditorSelectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentElementEditorSelectionInterface, UComponentElementSelectionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UComponentElementEditorSelectionInterface_NoRegister) \
	DECLARE_SERIALIZER(UComponentElementEditorSelectionInterface)


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UComponentElementEditorSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentElementEditorSelectionInterface(UComponentElementEditorSelectionInterface&&) = delete; \
	UComponentElementEditorSelectionInterface(const UComponentElementEditorSelectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UComponentElementEditorSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentElementEditorSelectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentElementEditorSelectionInterface) \
	UNREALED_API virtual ~UComponentElementEditorSelectionInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentElementEditorSelectionInterface;

// ********** End Class UComponentElementEditorSelectionInterface **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
