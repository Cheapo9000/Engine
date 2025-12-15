// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionIsFirstPerson.h"

#ifdef ENGINE_MaterialExpressionIsFirstPerson_generated_h
#error "MaterialExpressionIsFirstPerson.generated.h already included, missing '#pragma once' in MaterialExpressionIsFirstPerson.h"
#endif
#define ENGINE_MaterialExpressionIsFirstPerson_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionIsFirstPerson *****************************************
struct Z_Construct_UClass_UMaterialExpressionIsFirstPerson_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIsFirstPerson_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIsFirstPerson_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionIsFirstPerson(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionIsFirstPerson_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionIsFirstPerson_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionIsFirstPerson, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionIsFirstPerson_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionIsFirstPerson)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIsFirstPerson_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionIsFirstPerson(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionIsFirstPerson(UMaterialExpressionIsFirstPerson&&) = delete; \
	UMaterialExpressionIsFirstPerson(const UMaterialExpressionIsFirstPerson&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionIsFirstPerson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionIsFirstPerson); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionIsFirstPerson) \
	ENGINE_API virtual ~UMaterialExpressionIsFirstPerson();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIsFirstPerson_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIsFirstPerson_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIsFirstPerson_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIsFirstPerson_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionIsFirstPerson;

// ********** End Class UMaterialExpressionIsFirstPerson *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIsFirstPerson_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
