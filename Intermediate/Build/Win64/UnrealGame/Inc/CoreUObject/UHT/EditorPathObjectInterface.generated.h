// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/EditorPathObjectInterface.h"

#ifdef COREUOBJECT_EditorPathObjectInterface_generated_h
#error "EditorPathObjectInterface.generated.h already included, missing '#pragma once' in EditorPathObjectInterface.h"
#endif
#define COREUOBJECT_EditorPathObjectInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UEditorPathObjectInterface *******************************************
struct Z_Construct_UClass_UEditorPathObjectInterface_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UEditorPathObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UEditorPathObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPathObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UEditorPathObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPathObjectInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorPathObjectInterface(UEditorPathObjectInterface&&) = delete; \
	UEditorPathObjectInterface(const UEditorPathObjectInterface&) = delete; \
	virtual ~UEditorPathObjectInterface() = default;


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEditorPathObjectInterface(); \
	friend struct ::Z_Construct_UClass_UEditorPathObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UEditorPathObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorPathObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UEditorPathObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UEditorPathObjectInterface)


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IEditorPathObjectInterface() {} \
public: \
	typedef UEditorPathObjectInterface UClassType; \
	typedef IEditorPathObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorPathObjectInterface;

// ********** End Interface UEditorPathObjectInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_Misc_EditorPathObjectInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
