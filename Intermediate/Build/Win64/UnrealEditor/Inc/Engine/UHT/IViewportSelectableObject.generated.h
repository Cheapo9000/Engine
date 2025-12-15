// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IViewportSelectableObject.h"

#ifdef ENGINE_IViewportSelectableObject_generated_h
#error "IViewportSelectableObject.generated.h already included, missing '#pragma once' in IViewportSelectableObject.h"
#endif
#define ENGINE_IViewportSelectableObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UViewportSelectableObject ********************************************
struct Z_Construct_UClass_UViewportSelectableObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_UViewportSelectableObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UViewportSelectableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportSelectableObject(UViewportSelectableObject&&) = delete; \
	UViewportSelectableObject(const UViewportSelectableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UViewportSelectableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportSelectableObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportSelectableObject) \
	virtual ~UViewportSelectableObject() = default;


#define FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUViewportSelectableObject(); \
	friend struct ::Z_Construct_UClass_UViewportSelectableObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UViewportSelectableObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportSelectableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UViewportSelectableObject_NoRegister) \
	DECLARE_SERIALIZER(UViewportSelectableObject)


#define FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IViewportSelectableObject() {} \
public: \
	typedef UViewportSelectableObject UClassType; \
	typedef IViewportSelectableObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportSelectableObject;

// ********** End Interface UViewportSelectableObject **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
