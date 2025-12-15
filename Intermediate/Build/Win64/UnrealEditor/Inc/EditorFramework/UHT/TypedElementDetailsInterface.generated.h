// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementDetailsInterface.h"

#ifdef EDITORFRAMEWORK_TypedElementDetailsInterface_generated_h
#error "TypedElementDetailsInterface.generated.h already included, missing '#pragma once' in TypedElementDetailsInterface.h"
#endif
#define EDITORFRAMEWORK_TypedElementDetailsInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UTypedElementDetailsInterface ****************************************
struct Z_Construct_UClass_UTypedElementDetailsInterface_Statics;
EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister();

#define FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORFRAMEWORK_API UTypedElementDetailsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTypedElementDetailsInterface(UTypedElementDetailsInterface&&) = delete; \
	UTypedElementDetailsInterface(const UTypedElementDetailsInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORFRAMEWORK_API, UTypedElementDetailsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementDetailsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementDetailsInterface) \
	virtual ~UTypedElementDetailsInterface() = default;


#define FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_34_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementDetailsInterface(); \
	friend struct ::Z_Construct_UClass_UTypedElementDetailsInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORFRAMEWORK_API UClass* ::Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTypedElementDetailsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EditorFramework"), Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister) \
	DECLARE_SERIALIZER(UTypedElementDetailsInterface)


#define FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_34_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_34_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_34_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementDetailsInterface() {} \
public: \
	typedef UTypedElementDetailsInterface UClassType; \
	typedef ITypedElementDetailsInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_31_PROLOG
#define FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTypedElementDetailsInterface;

// ********** End Interface UTypedElementDetailsInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
