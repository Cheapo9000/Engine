// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Groom/InterchangeGroomFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeGroomFactory_generated_h
#error "InterchangeGroomFactory.generated.h already included, missing '#pragma once' in InterchangeGroomFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeGroomFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGroomFactory *************************************************
struct Z_Construct_UClass_UInterchangeGroomFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGroomFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGroomFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeGroomFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeGroomFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGroomFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeGroomFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGroomFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeGroomFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGroomFactory(UInterchangeGroomFactory&&) = delete; \
	UInterchangeGroomFactory(const UInterchangeGroomFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeGroomFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGroomFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGroomFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeGroomFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomFactory_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGroomFactory;

// ********** End Class UInterchangeGroomFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
