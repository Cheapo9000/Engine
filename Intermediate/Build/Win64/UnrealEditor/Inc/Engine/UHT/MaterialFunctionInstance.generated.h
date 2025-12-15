// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialFunctionInstance.h"

#ifdef ENGINE_MaterialFunctionInstance_generated_h
#error "MaterialFunctionInstance.generated.h already included, missing '#pragma once' in MaterialFunctionInstance.h"
#endif
#define ENGINE_MaterialFunctionInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialFunctionInstance ************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunctionInstance, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_18_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UMaterialFunctionInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFunctionInstance(); \
	friend struct ::Z_Construct_UClass_UMaterialFunctionInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialFunctionInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialFunctionInstance, UMaterialFunctionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialFunctionInstance_NoRegister) \
	DECLARE_SERIALIZER(UMaterialFunctionInstance) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunctionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunctionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialFunctionInstance(UMaterialFunctionInstance&&) = delete; \
	UMaterialFunctionInstance(const UMaterialFunctionInstance&) = delete; \
	ENGINE_API virtual ~UMaterialFunctionInstance();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialFunctionInstance;

// ********** End Class UMaterialFunctionInstance **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
