// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementHierarchyInterface.h"

#ifdef ENGINE_SMInstanceElementHierarchyInterface_generated_h
#error "SMInstanceElementHierarchyInterface.generated.h already included, missing '#pragma once' in SMInstanceElementHierarchyInterface.h"
#endif
#define ENGINE_SMInstanceElementHierarchyInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USMInstanceElementHierarchyInterface *************************************
struct Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementHierarchyInterface(); \
	friend struct ::Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USMInstanceElementHierarchyInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceElementHierarchyInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USMInstanceElementHierarchyInterface_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceElementHierarchyInterface) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstanceElementHierarchyInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USMInstanceElementHierarchyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceElementHierarchyInterface(USMInstanceElementHierarchyInterface&&) = delete; \
	USMInstanceElementHierarchyInterface(const USMInstanceElementHierarchyInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USMInstanceElementHierarchyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementHierarchyInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceElementHierarchyInterface) \
	ENGINE_API virtual ~USMInstanceElementHierarchyInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceElementHierarchyInterface;

// ********** End Class USMInstanceElementHierarchyInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
