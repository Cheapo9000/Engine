// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementAssetDataInterface.h"

#ifdef ENGINE_SMInstanceElementAssetDataInterface_generated_h
#error "SMInstanceElementAssetDataInterface.generated.h already included, missing '#pragma once' in SMInstanceElementAssetDataInterface.h"
#endif
#define ENGINE_SMInstanceElementAssetDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USMInstanceElementAssetDataInterface *************************************
struct Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementAssetDataInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementAssetDataInterface(); \
	friend struct ::Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USMInstanceElementAssetDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceElementAssetDataInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USMInstanceElementAssetDataInterface_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceElementAssetDataInterface) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstanceElementAssetDataInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USMInstanceElementAssetDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceElementAssetDataInterface(USMInstanceElementAssetDataInterface&&) = delete; \
	USMInstanceElementAssetDataInterface(const USMInstanceElementAssetDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USMInstanceElementAssetDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementAssetDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceElementAssetDataInterface) \
	ENGINE_API virtual ~USMInstanceElementAssetDataInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceElementAssetDataInterface;

// ********** End Class USMInstanceElementAssetDataInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
