// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IEditorUtilityExtension.h"

#ifdef BLUTILITY_IEditorUtilityExtension_generated_h
#error "IEditorUtilityExtension.generated.h already included, missing '#pragma once' in IEditorUtilityExtension.h"
#endif
#define BLUTILITY_IEditorUtilityExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UEditorUtilityExtension **********************************************
struct Z_Construct_UClass_UEditorUtilityExtension_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityExtension_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityExtension) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityExtension); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityExtension(UEditorUtilityExtension&&) = delete; \
	UEditorUtilityExtension(const UEditorUtilityExtension&) = delete; \
	virtual ~UEditorUtilityExtension() = default;


#define FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEditorUtilityExtension(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityExtension, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityExtension_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityExtension)


#define FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IEditorUtilityExtension() {} \
public: \
	typedef UEditorUtilityExtension UClassType; \
	typedef IEditorUtilityExtension ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_11_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityExtension;

// ********** End Interface UEditorUtilityExtension ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_IEditorUtilityExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
