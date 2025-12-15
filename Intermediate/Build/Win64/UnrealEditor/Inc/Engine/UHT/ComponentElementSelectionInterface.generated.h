// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Component/ComponentElementSelectionInterface.h"

#ifdef ENGINE_ComponentElementSelectionInterface_generated_h
#error "ComponentElementSelectionInterface.generated.h already included, missing '#pragma once' in ComponentElementSelectionInterface.h"
#endif
#define ENGINE_ComponentElementSelectionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComponentElementSelectionInterface **************************************
struct Z_Construct_UClass_UComponentElementSelectionInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UComponentElementSelectionInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentElementSelectionInterface(); \
	friend struct ::Z_Construct_UClass_UComponentElementSelectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UComponentElementSelectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentElementSelectionInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UComponentElementSelectionInterface_NoRegister) \
	DECLARE_SERIALIZER(UComponentElementSelectionInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UComponentElementSelectionInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UComponentElementSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentElementSelectionInterface(UComponentElementSelectionInterface&&) = delete; \
	UComponentElementSelectionInterface(const UComponentElementSelectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UComponentElementSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentElementSelectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentElementSelectionInterface) \
	ENGINE_API virtual ~UComponentElementSelectionInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentElementSelectionInterface;

// ********** End Class UComponentElementSelectionInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
