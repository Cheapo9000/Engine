// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataVisualizations/PCGCollisionVisComponent.h"

#ifdef PCGEDITOR_PCGCollisionVisComponent_generated_h
#error "PCGCollisionVisComponent.generated.h already included, missing '#pragma once' in PCGCollisionVisComponent.h"
#endif
#define PCGEDITOR_PCGCollisionVisComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCollisionVisComponent ************************************************
struct Z_Construct_UClass_UPCGCollisionVisComponent_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGCollisionVisComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_DataVisualizations_PCGCollisionVisComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCollisionVisComponent(); \
	friend struct ::Z_Construct_UClass_UPCGCollisionVisComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGCollisionVisComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCollisionVisComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGCollisionVisComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGCollisionVisComponent)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_DataVisualizations_PCGCollisionVisComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEDITOR_API UPCGCollisionVisComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCollisionVisComponent(UPCGCollisionVisComponent&&) = delete; \
	UPCGCollisionVisComponent(const UPCGCollisionVisComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEDITOR_API, UPCGCollisionVisComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCollisionVisComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCollisionVisComponent) \
	PCGEDITOR_API virtual ~UPCGCollisionVisComponent();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_DataVisualizations_PCGCollisionVisComponent_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_DataVisualizations_PCGCollisionVisComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_DataVisualizations_PCGCollisionVisComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_DataVisualizations_PCGCollisionVisComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCollisionVisComponent;

// ********** End Class UPCGCollisionVisComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Public_DataVisualizations_PCGCollisionVisComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
