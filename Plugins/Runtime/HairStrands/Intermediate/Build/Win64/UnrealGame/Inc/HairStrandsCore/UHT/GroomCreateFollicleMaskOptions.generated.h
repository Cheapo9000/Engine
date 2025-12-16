// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomCreateFollicleMaskOptions.h"

#ifdef HAIRSTRANDSCORE_GroomCreateFollicleMaskOptions_generated_h
#error "GroomCreateFollicleMaskOptions.generated.h already included, missing '#pragma once' in GroomCreateFollicleMaskOptions.h"
#endif
#define HAIRSTRANDSCORE_GroomCreateFollicleMaskOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFollicleMaskOptions **********************************************
struct Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FFollicleMaskOptions;
// ********** End ScriptStruct FFollicleMaskOptions ************************************************

// ********** Begin Class UGroomCreateFollicleMaskOptions ******************************************
struct Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateFollicleMaskOptions_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUGroomCreateFollicleMaskOptions(); \
	friend struct ::Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomCreateFollicleMaskOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomCreateFollicleMaskOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomCreateFollicleMaskOptions_NoRegister) \
	DECLARE_SERIALIZER(UGroomCreateFollicleMaskOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomCreateFollicleMaskOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomCreateFollicleMaskOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomCreateFollicleMaskOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomCreateFollicleMaskOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomCreateFollicleMaskOptions(UGroomCreateFollicleMaskOptions&&) = delete; \
	UGroomCreateFollicleMaskOptions(const UGroomCreateFollicleMaskOptions&) = delete; \
	HAIRSTRANDSCORE_API virtual ~UGroomCreateFollicleMaskOptions();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_39_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomCreateFollicleMaskOptions;

// ********** End Class UGroomCreateFollicleMaskOptions ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h

// ********** Begin Enum EFollicleMaskChannel ******************************************************
#define FOREACH_ENUM_EFOLLICLEMASKCHANNEL(op) \
	op(EFollicleMaskChannel::R) \
	op(EFollicleMaskChannel::G) \
	op(EFollicleMaskChannel::B) \
	op(EFollicleMaskChannel::A) 

enum class EFollicleMaskChannel : uint8;
template<> struct TIsUEnumClass<EFollicleMaskChannel> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFollicleMaskChannel>();
// ********** End Enum EFollicleMaskChannel ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
