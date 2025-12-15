// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTranslatorBase.h"

#ifdef INTERCHANGECORE_InterchangeTranslatorBase_generated_h
#error "InterchangeTranslatorBase.generated.h already included, missing '#pragma once' in InterchangeTranslatorBase.h"
#endif
#define INTERCHANGECORE_InterchangeTranslatorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeSourceData;
class UInterchangeTranslatorSettings;
enum class EInterchangeTranslatorAssetType : uint8;
enum class EInterchangeTranslatorType : uint8;

// ********** Begin Class UInterchangeTranslatorSettings *******************************************
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execLoadSettings);


struct Z_Construct_UClass_UInterchangeTranslatorSettings_Statics;
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTranslatorSettings(); \
	friend struct ::Z_Construct_UClass_UInterchangeTranslatorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGECORE_API UClass* ::Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTranslatorSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTranslatorSettings)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeTranslatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTranslatorSettings(UInterchangeTranslatorSettings&&) = delete; \
	UInterchangeTranslatorSettings(const UInterchangeTranslatorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeTranslatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTranslatorSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTranslatorSettings) \
	INTERCHANGECORE_API virtual ~UInterchangeTranslatorSettings();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_31_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTranslatorSettings;

// ********** End Class UInterchangeTranslatorSettings *********************************************

// ********** Begin Class UInterchangeTranslatorBase ***********************************************
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execGetSourceData); \
	DECLARE_FUNCTION(execGetSupportedFormats); \
	DECLARE_FUNCTION(execGetSupportedAssetTypes); \
	DECLARE_FUNCTION(execGetTranslatorType); \
	DECLARE_FUNCTION(execCanImportSourceData);


struct Z_Construct_UClass_UInterchangeTranslatorBase_Statics;
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTranslatorBase(); \
	friend struct ::Z_Construct_UClass_UInterchangeTranslatorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGECORE_API UClass* ::Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTranslatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTranslatorBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeTranslatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTranslatorBase(UInterchangeTranslatorBase&&) = delete; \
	UInterchangeTranslatorBase(const UInterchangeTranslatorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeTranslatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTranslatorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTranslatorBase) \
	INTERCHANGECORE_API virtual ~UInterchangeTranslatorBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_66_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTranslatorBase;

// ********** End Class UInterchangeTranslatorBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h

// ********** Begin Enum EInterchangeTranslatorType ************************************************
#define FOREACH_ENUM_EINTERCHANGETRANSLATORTYPE(op) \
	op(EInterchangeTranslatorType::Invalid) \
	op(EInterchangeTranslatorType::Assets) \
	op(EInterchangeTranslatorType::Actors) \
	op(EInterchangeTranslatorType::Scenes) 

enum class EInterchangeTranslatorType : uint8;
template<> struct TIsUEnumClass<EInterchangeTranslatorType> { enum { Value = true }; };
template<> INTERCHANGECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeTranslatorType>();
// ********** End Enum EInterchangeTranslatorType **************************************************

// ********** Begin Enum EInterchangeTranslatorAssetType *******************************************
#define FOREACH_ENUM_EINTERCHANGETRANSLATORASSETTYPE(op) \
	op(EInterchangeTranslatorAssetType::None) \
	op(EInterchangeTranslatorAssetType::Textures) \
	op(EInterchangeTranslatorAssetType::Materials) \
	op(EInterchangeTranslatorAssetType::Meshes) \
	op(EInterchangeTranslatorAssetType::Animations) \
	op(EInterchangeTranslatorAssetType::Sounds) \
	op(EInterchangeTranslatorAssetType::Grooms) 

enum class EInterchangeTranslatorAssetType : uint8;
template<> struct TIsUEnumClass<EInterchangeTranslatorAssetType> { enum { Value = true }; };
template<> INTERCHANGECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeTranslatorAssetType>();
// ********** End Enum EInterchangeTranslatorAssetType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
