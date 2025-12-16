// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaShapeFactory.h"

#ifdef AVALANCHESHAPESEDITOR_AvaShapeFactory_generated_h
#error "AvaShapeFactory.generated.h already included, missing '#pragma once' in AvaShapeFactory.h"
#endif
#define AVALANCHESHAPESEDITOR_AvaShapeFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaShapeFactory *********************************************************
struct Z_Construct_UClass_UAvaShapeFactory_Statics;
AVALANCHESHAPESEDITOR_API UClass* Z_Construct_UClass_UAvaShapeFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapesEditor_Private_AvaShapeFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeFactory(); \
	friend struct ::Z_Construct_UClass_UAvaShapeFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPESEDITOR_API UClass* ::Z_Construct_UClass_UAvaShapeFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShapeFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapesEditor"), Z_Construct_UClass_UAvaShapeFactory_NoRegister) \
	DECLARE_SERIALIZER(UAvaShapeFactory)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapesEditor_Private_AvaShapeFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShapeFactory(UAvaShapeFactory&&) = delete; \
	UAvaShapeFactory(const UAvaShapeFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaShapeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeFactory) \
	NO_API virtual ~UAvaShapeFactory();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapesEditor_Private_AvaShapeFactory_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapesEditor_Private_AvaShapeFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapesEditor_Private_AvaShapeFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapesEditor_Private_AvaShapeFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShapeFactory;

// ********** End Class UAvaShapeFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapesEditor_Private_AvaShapeFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
