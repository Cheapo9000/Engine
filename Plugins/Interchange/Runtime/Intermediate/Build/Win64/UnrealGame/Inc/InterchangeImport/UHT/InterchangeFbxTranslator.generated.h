// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fbx/InterchangeFbxTranslator.h"

#ifdef INTERCHANGEIMPORT_InterchangeFbxTranslator_generated_h
#error "InterchangeFbxTranslator.generated.h already included, missing '#pragma once' in InterchangeFbxTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeFbxTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeFbxTranslatorSettings ****************************************
struct Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeFbxTranslatorSettings_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFbxTranslatorSettings(); \
	friend struct ::Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeFbxTranslatorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeFbxTranslatorSettings, UInterchangeTranslatorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeFbxTranslatorSettings_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeFbxTranslatorSettings)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeFbxTranslatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeFbxTranslatorSettings(UInterchangeFbxTranslatorSettings&&) = delete; \
	UInterchangeFbxTranslatorSettings(const UInterchangeFbxTranslatorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeFbxTranslatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFbxTranslatorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFbxTranslatorSettings) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeFbxTranslatorSettings();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_33_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeFbxTranslatorSettings;

// ********** End Class UInterchangeFbxTranslatorSettings ******************************************

// ********** Begin Class UInterchangeFbxTranslator ************************************************
struct Z_Construct_UClass_UInterchangeFbxTranslator_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFbxTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeFbxTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeFbxTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeFbxTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeFbxTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeFbxTranslator(UInterchangeFbxTranslator&&) = delete; \
	UInterchangeFbxTranslator(const UInterchangeFbxTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeFbxTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFbxTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeFbxTranslator) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeFbxTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_76_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeFbxTranslator;

// ********** End Class UInterchangeFbxTranslator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h

// ********** Begin Enum EInterchangeCoordinateSystemPolicy ****************************************
#define FOREACH_ENUM_EINTERCHANGECOORDINATESYSTEMPOLICY(op) \
	op(EInterchangeCoordinateSystemPolicy::MatchUpForwardAxes) \
	op(EInterchangeCoordinateSystemPolicy::MatchUpAxis) \
	op(EInterchangeCoordinateSystemPolicy::KeepXYZAxes) 

enum class EInterchangeCoordinateSystemPolicy : uint8;
template<> struct TIsUEnumClass<EInterchangeCoordinateSystemPolicy> { enum { Value = true }; };
template<> INTERCHANGEIMPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeCoordinateSystemPolicy>();
// ********** End Enum EInterchangeCoordinateSystemPolicy ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
