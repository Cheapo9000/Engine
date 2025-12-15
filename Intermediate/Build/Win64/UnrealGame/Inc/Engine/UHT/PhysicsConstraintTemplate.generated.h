// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsConstraintTemplate.h"

#ifdef ENGINE_PhysicsConstraintTemplate_generated_h
#error "PhysicsConstraintTemplate.generated.h already included, missing '#pragma once' in PhysicsConstraintTemplate.h"
#endif
#define ENGINE_PhysicsConstraintTemplate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicsConstraintProfileHandle ***********************************
struct Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPhysicsConstraintProfileHandle;
// ********** End ScriptStruct FPhysicsConstraintProfileHandle *************************************

// ********** Begin Class UPhysicsConstraintTemplate ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsConstraintTemplate, ENGINE_API)


struct Z_Construct_UClass_UPhysicsConstraintTemplate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsConstraintTemplate(); \
	friend struct ::Z_Construct_UClass_UPhysicsConstraintTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsConstraintTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsConstraintTemplate) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsConstraintTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsConstraintTemplate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsConstraintTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsConstraintTemplate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsConstraintTemplate(UPhysicsConstraintTemplate&&) = delete; \
	UPhysicsConstraintTemplate(const UPhysicsConstraintTemplate&) = delete; \
	ENGINE_API virtual ~UPhysicsConstraintTemplate();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsConstraintTemplate;

// ********** End Class UPhysicsConstraintTemplate *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
