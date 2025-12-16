// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpecularProfile/InterchangeSpecularProfileFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeSpecularProfileFactory_generated_h
#error "InterchangeSpecularProfileFactory.generated.h already included, missing '#pragma once' in InterchangeSpecularProfileFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeSpecularProfileFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSpecularProfileFactory ***************************************
struct Z_Construct_UClass_UInterchangeSpecularProfileFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSpecularProfileFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_SpecularProfile_InterchangeSpecularProfileFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSpecularProfileFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeSpecularProfileFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeSpecularProfileFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSpecularProfileFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeSpecularProfileFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSpecularProfileFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_SpecularProfile_InterchangeSpecularProfileFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeSpecularProfileFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSpecularProfileFactory(UInterchangeSpecularProfileFactory&&) = delete; \
	UInterchangeSpecularProfileFactory(const UInterchangeSpecularProfileFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeSpecularProfileFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpecularProfileFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSpecularProfileFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeSpecularProfileFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_SpecularProfile_InterchangeSpecularProfileFactory_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_SpecularProfile_InterchangeSpecularProfileFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_SpecularProfile_InterchangeSpecularProfileFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_SpecularProfile_InterchangeSpecularProfileFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSpecularProfileFactory;

// ********** End Class UInterchangeSpecularProfileFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_SpecularProfile_InterchangeSpecularProfileFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
