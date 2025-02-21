// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaShapePrimitiveFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAvaShapeActor;
class UAvaShapeRectangleDynamicMesh;
#ifdef AVALANCHESHAPES_AvaShapePrimitiveFunctions_generated_h
#error "AvaShapePrimitiveFunctions.generated.h already included, missing '#pragma once' in AvaShapePrimitiveFunctions.h"
#endif
#define AVALANCHESHAPES_AvaShapePrimitiveFunctions_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRectangle);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeMeshFunctions(); \
	friend struct Z_Construct_UClass_UAvaShapeMeshFunctions_Statics; \
public: \
	DECLARE_CLASS(UAvaShapeMeshFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShapeMeshFunctions)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHESHAPES_API UAvaShapeMeshFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShapeMeshFunctions(UAvaShapeMeshFunctions&&); \
	UAvaShapeMeshFunctions(const UAvaShapeMeshFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeMeshFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeMeshFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaShapeMeshFunctions) \
	AVALANCHESHAPES_API virtual ~UAvaShapeMeshFunctions();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShapeMeshFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapePrimitiveFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
