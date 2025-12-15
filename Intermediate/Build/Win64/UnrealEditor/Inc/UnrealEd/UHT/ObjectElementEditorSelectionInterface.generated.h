// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Object/ObjectElementEditorSelectionInterface.h"

#ifdef UNREALED_ObjectElementEditorSelectionInterface_generated_h
#error "ObjectElementEditorSelectionInterface.generated.h already included, missing '#pragma once' in ObjectElementEditorSelectionInterface.h"
#endif
#define UNREALED_ObjectElementEditorSelectionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectElementEditorSelectionInterface ***********************************
struct Z_Construct_UClass_UObjectElementEditorSelectionInterface_Statics;
UNREALED_API UClass* Z_Construct_UClass_UObjectElementEditorSelectionInterface_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementEditorSelectionInterface_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectElementEditorSelectionInterface(); \
	friend struct ::Z_Construct_UClass_UObjectElementEditorSelectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UObjectElementEditorSelectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectElementEditorSelectionInterface, UObjectElementSelectionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UObjectElementEditorSelectionInterface_NoRegister) \
	DECLARE_SERIALIZER(UObjectElementEditorSelectionInterface)


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementEditorSelectionInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UObjectElementEditorSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectElementEditorSelectionInterface(UObjectElementEditorSelectionInterface&&) = delete; \
	UObjectElementEditorSelectionInterface(const UObjectElementEditorSelectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UObjectElementEditorSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectElementEditorSelectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectElementEditorSelectionInterface) \
	UNREALED_API virtual ~UObjectElementEditorSelectionInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementEditorSelectionInterface_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementEditorSelectionInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementEditorSelectionInterface_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementEditorSelectionInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectElementEditorSelectionInterface;

// ********** End Class UObjectElementEditorSelectionInterface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementEditorSelectionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
