// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialEnumeration.h"

#ifdef ENGINE_MaterialEnumeration_generated_h
#error "MaterialEnumeration.generated.h already included, missing '#pragma once' in MaterialEnumeration.h"
#endif
#define ENGINE_MaterialEnumeration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMaterialEnumerationProvider *****************************************
struct Z_Construct_UClass_UMaterialEnumerationProvider_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialEnumerationProvider_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialEnumerationProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialEnumerationProvider(UMaterialEnumerationProvider&&) = delete; \
	UMaterialEnumerationProvider(const UMaterialEnumerationProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialEnumerationProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEnumerationProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEnumerationProvider) \
	virtual ~UMaterialEnumerationProvider() = default;


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMaterialEnumerationProvider(); \
	friend struct ::Z_Construct_UClass_UMaterialEnumerationProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialEnumerationProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialEnumerationProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialEnumerationProvider_NoRegister) \
	DECLARE_SERIALIZER(UMaterialEnumerationProvider)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_29_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_29_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_29_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMaterialEnumerationProvider() {} \
public: \
	typedef UMaterialEnumerationProvider UClassType; \
	typedef IMaterialEnumerationProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialEnumerationProvider;

// ********** End Interface UMaterialEnumerationProvider *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
