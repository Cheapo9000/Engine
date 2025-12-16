// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Groom/InterchangeGroomCacheFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeGroomCacheFactory_generated_h
#error "InterchangeGroomCacheFactory.generated.h already included, missing '#pragma once' in InterchangeGroomCacheFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeGroomCacheFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGroomCacheFactory ********************************************
struct Z_Construct_UClass_UInterchangeGroomCacheFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGroomCacheFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomCacheFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGroomCacheFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeGroomCacheFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeGroomCacheFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGroomCacheFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeGroomCacheFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGroomCacheFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomCacheFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeGroomCacheFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGroomCacheFactory(UInterchangeGroomCacheFactory&&) = delete; \
	UInterchangeGroomCacheFactory(const UInterchangeGroomCacheFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeGroomCacheFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGroomCacheFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGroomCacheFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeGroomCacheFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomCacheFactory_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomCacheFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomCacheFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomCacheFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGroomCacheFactory;

// ********** End Class UInterchangeGroomCacheFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomCacheFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
