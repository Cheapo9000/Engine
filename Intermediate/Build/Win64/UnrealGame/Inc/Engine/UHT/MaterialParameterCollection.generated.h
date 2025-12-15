// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialParameterCollection.h"

#ifdef ENGINE_MaterialParameterCollection_generated_h
#error "MaterialParameterCollection.generated.h already included, missing '#pragma once' in MaterialParameterCollection.h"
#endif
#define ENGINE_MaterialParameterCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialParameterCollection;
struct FLinearColor;

// ********** Begin ScriptStruct FCollectionParameterBase ******************************************
struct Z_Construct_UScriptStruct_FCollectionParameterBase_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollectionParameterBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCollectionParameterBase;
// ********** End ScriptStruct FCollectionParameterBase ********************************************

// ********** Begin ScriptStruct FCollectionScalarParameter ****************************************
struct Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCollectionParameterBase Super;


struct FCollectionScalarParameter;
// ********** End ScriptStruct FCollectionScalarParameter ******************************************

// ********** Begin ScriptStruct FCollectionVectorParameter ****************************************
struct Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCollectionParameterBase Super;


struct FCollectionVectorParameter;
// ********** End ScriptStruct FCollectionVectorParameter ******************************************

// ********** Begin Class UMaterialParameterCollection *********************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_80_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBaseParameterCollection); \
	DECLARE_FUNCTION(execGetVectorParameterDefaultValue); \
	DECLARE_FUNCTION(execGetScalarParameterDefaultValue); \
	DECLARE_FUNCTION(execGetVectorParameterNames); \
	DECLARE_FUNCTION(execGetScalarParameterNames);


struct Z_Construct_UClass_UMaterialParameterCollection_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollection(); \
	friend struct ::Z_Construct_UClass_UMaterialParameterCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialParameterCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialParameterCollection_NoRegister) \
	DECLARE_SERIALIZER(UMaterialParameterCollection)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialParameterCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialParameterCollection(UMaterialParameterCollection&&) = delete; \
	UMaterialParameterCollection(const UMaterialParameterCollection&) = delete; \
	ENGINE_API virtual ~UMaterialParameterCollection();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_77_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_80_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_80_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialParameterCollection;

// ********** End Class UMaterialParameterCollection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
