// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Texture/InterchangeTextureFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeTextureFactory_generated_h
#error "InterchangeTextureFactory.generated.h already included, missing '#pragma once' in InterchangeTextureFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeTextureFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTextureFactory ***********************************************
struct Z_Construct_UClass_UInterchangeTextureFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTextureFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeTextureFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeTextureFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTextureFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeTextureFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTextureFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeTextureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTextureFactory(UInterchangeTextureFactory&&) = delete; \
	UInterchangeTextureFactory(const UInterchangeTextureFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTextureFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeTextureFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_50_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTextureFactory;

// ********** End Class UInterchangeTextureFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
