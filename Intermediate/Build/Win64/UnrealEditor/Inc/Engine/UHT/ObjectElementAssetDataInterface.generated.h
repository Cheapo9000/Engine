// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Object/ObjectElementAssetDataInterface.h"

#ifdef ENGINE_ObjectElementAssetDataInterface_generated_h
#error "ObjectElementAssetDataInterface.generated.h already included, missing '#pragma once' in ObjectElementAssetDataInterface.h"
#endif
#define ENGINE_ObjectElementAssetDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectElementAssetDataInterface *****************************************
struct Z_Construct_UClass_UObjectElementAssetDataInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UObjectElementAssetDataInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectElementAssetDataInterface(); \
	friend struct ::Z_Construct_UClass_UObjectElementAssetDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UObjectElementAssetDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectElementAssetDataInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UObjectElementAssetDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UObjectElementAssetDataInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UObjectElementAssetDataInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UObjectElementAssetDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectElementAssetDataInterface(UObjectElementAssetDataInterface&&) = delete; \
	UObjectElementAssetDataInterface(const UObjectElementAssetDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UObjectElementAssetDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectElementAssetDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectElementAssetDataInterface) \
	ENGINE_API virtual ~UObjectElementAssetDataInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectElementAssetDataInterface;

// ********** End Class UObjectElementAssetDataInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
