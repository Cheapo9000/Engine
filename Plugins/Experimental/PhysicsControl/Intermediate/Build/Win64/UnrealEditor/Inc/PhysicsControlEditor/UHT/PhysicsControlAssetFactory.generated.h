// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlAssetFactory.h"

#ifdef PHYSICSCONTROLEDITOR_PhysicsControlAssetFactory_generated_h
#error "PhysicsControlAssetFactory.generated.h already included, missing '#pragma once' in PhysicsControlAssetFactory.h"
#endif
#define PHYSICSCONTROLEDITOR_PhysicsControlAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsControlAssetFactory **********************************************
struct Z_Construct_UClass_UPhysicsControlAssetFactory_Statics;
PHYSICSCONTROLEDITOR_API UClass* Z_Construct_UClass_UPhysicsControlAssetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsControlAssetFactory(); \
	friend struct ::Z_Construct_UClass_UPhysicsControlAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCONTROLEDITOR_API UClass* ::Z_Construct_UClass_UPhysicsControlAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsControlAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsControlEditor"), Z_Construct_UClass_UPhysicsControlAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsControlAssetFactory)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsControlAssetFactory(UPhysicsControlAssetFactory&&) = delete; \
	UPhysicsControlAssetFactory(const UPhysicsControlAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsControlAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlAssetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlAssetFactory) \
	NO_API virtual ~UPhysicsControlAssetFactory();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetFactory_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsControlAssetFactory;

// ********** End Class UPhysicsControlAssetFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
