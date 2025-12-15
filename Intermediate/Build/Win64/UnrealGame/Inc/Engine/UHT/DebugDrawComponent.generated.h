// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debug/DebugDrawComponent.h"

#ifdef ENGINE_DebugDrawComponent_generated_h
#error "DebugDrawComponent.generated.h already included, missing '#pragma once' in DebugDrawComponent.h"
#endif
#define ENGINE_DebugDrawComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDebugDrawComponent ******************************************************
struct Z_Construct_UClass_UDebugDrawComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDebugDrawComponent(); \
	friend struct ::Z_Construct_UClass_UDebugDrawComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDebugDrawComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDebugDrawComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDebugDrawComponent_NoRegister) \
	DECLARE_SERIALIZER(UDebugDrawComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDebugDrawComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDebugDrawComponent(UDebugDrawComponent&&) = delete; \
	UDebugDrawComponent(const UDebugDrawComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDebugDrawComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugDrawComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugDrawComponent) \
	ENGINE_API virtual ~UDebugDrawComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_48_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDebugDrawComponent;

// ********** End Class UDebugDrawComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
