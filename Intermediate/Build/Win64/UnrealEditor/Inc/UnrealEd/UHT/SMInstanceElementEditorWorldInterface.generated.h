// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementEditorWorldInterface.h"

#ifdef UNREALED_SMInstanceElementEditorWorldInterface_generated_h
#error "SMInstanceElementEditorWorldInterface.generated.h already included, missing '#pragma once' in SMInstanceElementEditorWorldInterface.h"
#endif
#define UNREALED_SMInstanceElementEditorWorldInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USMInstanceElementEditorWorldInterface ***********************************
struct Z_Construct_UClass_USMInstanceElementEditorWorldInterface_Statics;
UNREALED_API UClass* Z_Construct_UClass_USMInstanceElementEditorWorldInterface_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorWorldInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementEditorWorldInterface(); \
	friend struct ::Z_Construct_UClass_USMInstanceElementEditorWorldInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USMInstanceElementEditorWorldInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceElementEditorWorldInterface, USMInstanceElementWorldInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USMInstanceElementEditorWorldInterface_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceElementEditorWorldInterface)


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorWorldInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USMInstanceElementEditorWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceElementEditorWorldInterface(USMInstanceElementEditorWorldInterface&&) = delete; \
	USMInstanceElementEditorWorldInterface(const USMInstanceElementEditorWorldInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USMInstanceElementEditorWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementEditorWorldInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceElementEditorWorldInterface) \
	UNREALED_API virtual ~USMInstanceElementEditorWorldInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorWorldInterface_h_8_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorWorldInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorWorldInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorWorldInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceElementEditorWorldInterface;

// ********** End Class USMInstanceElementEditorWorldInterface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorWorldInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
