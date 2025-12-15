// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Component/ComponentElementHierarchyInterface.h"

#ifdef ENGINE_ComponentElementHierarchyInterface_generated_h
#error "ComponentElementHierarchyInterface.generated.h already included, missing '#pragma once' in ComponentElementHierarchyInterface.h"
#endif
#define ENGINE_ComponentElementHierarchyInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComponentElementHierarchyInterface **************************************
struct Z_Construct_UClass_UComponentElementHierarchyInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UComponentElementHierarchyInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentElementHierarchyInterface(); \
	friend struct ::Z_Construct_UClass_UComponentElementHierarchyInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UComponentElementHierarchyInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentElementHierarchyInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UComponentElementHierarchyInterface_NoRegister) \
	DECLARE_SERIALIZER(UComponentElementHierarchyInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UComponentElementHierarchyInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UComponentElementHierarchyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentElementHierarchyInterface(UComponentElementHierarchyInterface&&) = delete; \
	UComponentElementHierarchyInterface(const UComponentElementHierarchyInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UComponentElementHierarchyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentElementHierarchyInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentElementHierarchyInterface) \
	ENGINE_API virtual ~UComponentElementHierarchyInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentElementHierarchyInterface;

// ********** End Class UComponentElementHierarchyInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
