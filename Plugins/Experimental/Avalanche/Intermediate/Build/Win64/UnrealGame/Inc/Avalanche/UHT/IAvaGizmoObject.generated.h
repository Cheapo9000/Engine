// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Viewport/Interaction/IAvaGizmoObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAvaGizmoComponent;
#ifdef AVALANCHE_IAvaGizmoObject_generated_h
#error "IAvaGizmoObject.generated.h already included, missing '#pragma once' in IAvaGizmoObject.h"
#endif
#define AVALANCHE_IAvaGizmoObject_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ToggleGizmo_Implementation(const UAvaGizmoComponent* InGizmoComponent, bool bShowAsGizmo) {}; \
	DECLARE_FUNCTION(execToggleGizmo);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaGizmoObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaGizmoObjectInterface(UAvaGizmoObjectInterface&&); \
	UAvaGizmoObjectInterface(const UAvaGizmoObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaGizmoObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaGizmoObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaGizmoObjectInterface) \
	NO_API virtual ~UAvaGizmoObjectInterface();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaGizmoObjectInterface(); \
	friend struct Z_Construct_UClass_UAvaGizmoObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UAvaGizmoObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Avalanche"), NO_API) \
	DECLARE_SERIALIZER(UAvaGizmoObjectInterface)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaGizmoObjectInterface() {} \
public: \
	typedef UAvaGizmoObjectInterface UClassType; \
	typedef IAvaGizmoObjectInterface ThisClass; \
	static void Execute_ToggleGizmo(UObject* O, const UAvaGizmoComponent* InGizmoComponent, bool bShowAsGizmo); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class UAvaGizmoObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaGizmoObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
