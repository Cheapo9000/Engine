// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicWindBlueprintLibrary.h"

#ifdef DYNAMICWINDEDITOR_DynamicWindBlueprintLibrary_generated_h
#error "DynamicWindBlueprintLibrary.generated.h already included, missing '#pragma once' in DynamicWindBlueprintLibrary.h"
#endif
#define DYNAMICWINDEDITOR_DynamicWindBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class USkeleton;
class UStaticMesh;
class UTexture2D;

// ********** Begin Class UDynamicWindBlueprintLibrary *********************************************
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execImportDynamicWindSkeletalDataFromFile); \
	DECLARE_FUNCTION(execConvertPivotPainterTreeToSkeletalMesh);


struct Z_Construct_UClass_UDynamicWindBlueprintLibrary_Statics;
DYNAMICWINDEDITOR_API UClass* Z_Construct_UClass_UDynamicWindBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicWindBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UDynamicWindBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICWINDEDITOR_API UClass* ::Z_Construct_UClass_UDynamicWindBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicWindBlueprintLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicWindEditor"), Z_Construct_UClass_UDynamicWindBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDynamicWindBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicWindBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicWindBlueprintLibrary(UDynamicWindBlueprintLibrary&&) = delete; \
	UDynamicWindBlueprintLibrary(const UDynamicWindBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicWindBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicWindBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicWindBlueprintLibrary) \
	NO_API virtual ~UDynamicWindBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicWindBlueprintLibrary;

// ********** End Class UDynamicWindBlueprintLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Private_DynamicWindBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
