// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeFactoryBase.h"

#ifdef INTERCHANGECORE_InterchangeFactoryBase_generated_h
#error "InterchangeFactoryBase.generated.h already included, missing '#pragma once' in InterchangeFactoryBase.h"
#endif
#define INTERCHANGECORE_InterchangeFactoryBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
enum class EInterchangeFactoryAssetType : uint8;

// ********** Begin Class UInterchangeFactoryBase **************************************************
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSourceFilename); \
	DECLARE_FUNCTION(execGetSourceFilenames); \
	DECLARE_FUNCTION(execGetFactoryAssetType); \
	DECLARE_FUNCTION(execGetFactoryClass);


struct Z_Construct_UClass_UInterchangeFactoryBase_Statics;
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFactoryBase(); \
	friend struct ::Z_Construct_UClass_UInterchangeFactoryBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGECORE_API UClass* ::Z_Construct_UClass_UInterchangeFactoryBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeFactoryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), Z_Construct_UClass_UInterchangeFactoryBase_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeFactoryBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeFactoryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeFactoryBase(UInterchangeFactoryBase&&) = delete; \
	UInterchangeFactoryBase(const UInterchangeFactoryBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeFactoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFactoryBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFactoryBase) \
	INTERCHANGECORE_API virtual ~UInterchangeFactoryBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_66_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeFactoryBase;

// ********** End Class UInterchangeFactoryBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h

// ********** Begin Enum EInterchangeFactoryAssetType **********************************************
#define FOREACH_ENUM_EINTERCHANGEFACTORYASSETTYPE(op) \
	op(EInterchangeFactoryAssetType::None) \
	op(EInterchangeFactoryAssetType::Textures) \
	op(EInterchangeFactoryAssetType::Materials) \
	op(EInterchangeFactoryAssetType::Meshes) \
	op(EInterchangeFactoryAssetType::Animations) \
	op(EInterchangeFactoryAssetType::Physics) \
	op(EInterchangeFactoryAssetType::Grooms) \
	op(EInterchangeFactoryAssetType::Sounds) 

enum class EInterchangeFactoryAssetType : uint8;
template<> struct TIsUEnumClass<EInterchangeFactoryAssetType> { enum { Value = true }; };
template<> INTERCHANGECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeFactoryAssetType>();
// ********** End Enum EInterchangeFactoryAssetType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
