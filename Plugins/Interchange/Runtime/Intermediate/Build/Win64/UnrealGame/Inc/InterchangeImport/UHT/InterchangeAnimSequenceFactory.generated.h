// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/InterchangeAnimSequenceFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeAnimSequenceFactory_generated_h
#error "InterchangeAnimSequenceFactory.generated.h already included, missing '#pragma once' in InterchangeAnimSequenceFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeAnimSequenceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeAnimSequenceFactory ******************************************
struct Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimSequenceFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAnimSequenceFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAnimSequenceFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeAnimSequenceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAnimSequenceFactory(UInterchangeAnimSequenceFactory&&) = delete; \
	UInterchangeAnimSequenceFactory(const UInterchangeAnimSequenceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeAnimSequenceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimSequenceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAnimSequenceFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeAnimSequenceFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_19_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAnimSequenceFactory;

// ********** End Class UInterchangeAnimSequenceFactory ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
