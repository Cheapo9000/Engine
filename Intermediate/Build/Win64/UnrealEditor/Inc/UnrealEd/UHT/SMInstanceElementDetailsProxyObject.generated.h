// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementDetailsProxyObject.h"

#ifdef UNREALED_SMInstanceElementDetailsProxyObject_generated_h
#error "SMInstanceElementDetailsProxyObject.generated.h already included, missing '#pragma once' in SMInstanceElementDetailsProxyObject.h"
#endif
#define UNREALED_SMInstanceElementDetailsProxyObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USMInstanceElementDetailsProxyObject *************************************
struct Z_Construct_UClass_USMInstanceElementDetailsProxyObject_Statics;
UNREALED_API UClass* Z_Construct_UClass_USMInstanceElementDetailsProxyObject_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Private_Elements_SMInstance_SMInstanceElementDetailsProxyObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementDetailsProxyObject(); \
	friend struct ::Z_Construct_UClass_USMInstanceElementDetailsProxyObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USMInstanceElementDetailsProxyObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceElementDetailsProxyObject, USMInstanceProxyEditingObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USMInstanceElementDetailsProxyObject_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceElementDetailsProxyObject)


#define FID_Engine_Source_Editor_UnrealEd_Private_Elements_SMInstance_SMInstanceElementDetailsProxyObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstanceElementDetailsProxyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceElementDetailsProxyObject(USMInstanceElementDetailsProxyObject&&) = delete; \
	USMInstanceElementDetailsProxyObject(const USMInstanceElementDetailsProxyObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstanceElementDetailsProxyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementDetailsProxyObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceElementDetailsProxyObject) \
	NO_API virtual ~USMInstanceElementDetailsProxyObject();


#define FID_Engine_Source_Editor_UnrealEd_Private_Elements_SMInstance_SMInstanceElementDetailsProxyObject_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Private_Elements_SMInstance_SMInstanceElementDetailsProxyObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Private_Elements_SMInstance_SMInstanceElementDetailsProxyObject_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Private_Elements_SMInstance_SMInstanceElementDetailsProxyObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceElementDetailsProxyObject;

// ********** End Class USMInstanceElementDetailsProxyObject ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_Elements_SMInstance_SMInstanceElementDetailsProxyObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
