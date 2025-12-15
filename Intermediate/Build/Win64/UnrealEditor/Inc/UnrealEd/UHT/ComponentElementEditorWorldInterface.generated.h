// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Component/ComponentElementEditorWorldInterface.h"

#ifdef UNREALED_ComponentElementEditorWorldInterface_generated_h
#error "ComponentElementEditorWorldInterface.generated.h already included, missing '#pragma once' in ComponentElementEditorWorldInterface.h"
#endif
#define UNREALED_ComponentElementEditorWorldInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComponentElementEditorWorldInterface ************************************
struct Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics;
UNREALED_API UClass* Z_Construct_UClass_UComponentElementEditorWorldInterface_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentElementEditorWorldInterface(); \
	friend struct ::Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UComponentElementEditorWorldInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentElementEditorWorldInterface, UComponentElementWorldInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UComponentElementEditorWorldInterface_NoRegister) \
	DECLARE_SERIALIZER(UComponentElementEditorWorldInterface)


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UComponentElementEditorWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentElementEditorWorldInterface(UComponentElementEditorWorldInterface&&) = delete; \
	UComponentElementEditorWorldInterface(const UComponentElementEditorWorldInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UComponentElementEditorWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentElementEditorWorldInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentElementEditorWorldInterface) \
	UNREALED_API virtual ~UComponentElementEditorWorldInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_8_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentElementEditorWorldInterface;

// ********** End Class UComponentElementEditorWorldInterface **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
