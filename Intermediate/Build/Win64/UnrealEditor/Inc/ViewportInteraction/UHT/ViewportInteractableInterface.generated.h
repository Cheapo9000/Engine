// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractableInterface.h"

#ifdef VIEWPORTINTERACTION_ViewportInteractableInterface_generated_h
#error "ViewportInteractableInterface.generated.h already included, missing '#pragma once' in ViewportInteractableInterface.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractableInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UViewportInteractableInterface ***************************************
struct Z_Construct_UClass_UViewportInteractableInterface_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIEWPORTINTERACTION_API UViewportInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportInteractableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UViewportInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractableInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportInteractableInterface(UViewportInteractableInterface&&) = delete; \
	UViewportInteractableInterface(const UViewportInteractableInterface&) = delete; \
	virtual ~UViewportInteractableInterface() = default;


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUViewportInteractableInterface(); \
	friend struct ::Z_Construct_UClass_UViewportInteractableInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UViewportInteractableInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UViewportInteractableInterface_NoRegister) \
	DECLARE_SERIALIZER(UViewportInteractableInterface)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_INCLASS_IINTERFACE \
protected: \
	virtual ~IViewportInteractableInterface() {} \
public: \
	typedef UViewportInteractableInterface UClassType; \
	typedef IViewportInteractableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_23_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportInteractableInterface;

// ********** End Interface UViewportInteractableInterface *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
