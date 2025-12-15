// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ModelComponent.h"

#ifdef ENGINE_ModelComponent_generated_h
#error "ModelComponent.generated.h already included, missing '#pragma once' in ModelComponent.h"
#endif
#define ENGINE_ModelComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModelComponent **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UModelComponent, ENGINE_API)


struct Z_Construct_UClass_UModelComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UModelComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUModelComponent(); \
	friend struct ::Z_Construct_UClass_UModelComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UModelComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UModelComponent_NoRegister) \
	DECLARE_SERIALIZER(UModelComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UModelComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UModelComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UModelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelComponent(UModelComponent&&) = delete; \
	UModelComponent(const UModelComponent&) = delete; \
	ENGINE_API virtual ~UModelComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModelComponent;

// ********** End Class UModelComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
