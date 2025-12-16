// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGTextureData.h"

#ifdef PCG_PCGTextureData_generated_h
#error "PCGTextureData.generated.h already included, missing '#pragma once' in PCGTextureData.h"
#endif
#define PCG_PCGTextureData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPCGTextureDensityFunction : uint8;

// ********** Begin ScriptStruct FPCGDataTypeInfoBaseTexture2D *************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoSurface Super;


struct FPCGDataTypeInfoBaseTexture2D;
// ********** End ScriptStruct FPCGDataTypeInfoBaseTexture2D ***************************************

// ********** Begin ScriptStruct FPCGDataTypeInfoTexture2D *****************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoTexture2D_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoTexture2D_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoBaseTexture2D Super;


struct FPCGDataTypeInfoTexture2D;
// ********** End ScriptStruct FPCGDataTypeInfoTexture2D *******************************************

// ********** Begin Class UPCGBaseTextureData ******************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDensityFunctionEquivalent); \
	DECLARE_FUNCTION(execGetDensityFunctionEquivalent);


struct Z_Construct_UClass_UPCGBaseTextureData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBaseTextureData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBaseTextureData(); \
	friend struct ::Z_Construct_UClass_UPCGBaseTextureData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBaseTextureData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBaseTextureData, UPCGSurfaceData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBaseTextureData_NoRegister) \
	DECLARE_SERIALIZER(UPCGBaseTextureData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBaseTextureData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBaseTextureData(UPCGBaseTextureData&&) = delete; \
	UPCGBaseTextureData(const UPCGBaseTextureData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBaseTextureData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBaseTextureData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBaseTextureData) \
	PCG_API virtual ~UPCGBaseTextureData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_84_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBaseTextureData;

// ********** End Class UPCGBaseTextureData ********************************************************

// ********** Begin Class UPCGTextureData **********************************************************
struct Z_Construct_UClass_UPCGTextureData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGTextureData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGTextureData(); \
	friend struct ::Z_Construct_UClass_UPCGTextureData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGTextureData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGTextureData, UPCGBaseTextureData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGTextureData_NoRegister) \
	DECLARE_SERIALIZER(UPCGTextureData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_200_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGTextureData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGTextureData(UPCGTextureData&&) = delete; \
	UPCGTextureData(const UPCGTextureData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGTextureData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGTextureData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGTextureData) \
	PCG_API virtual ~UPCGTextureData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_197_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_200_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGTextureData;

// ********** End Class UPCGTextureData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h

// ********** Begin Enum EPCGTextureColorChannel ***************************************************
#define FOREACH_ENUM_EPCGTEXTURECOLORCHANNEL(op) \
	op(EPCGTextureColorChannel::Red) \
	op(EPCGTextureColorChannel::Green) \
	op(EPCGTextureColorChannel::Blue) \
	op(EPCGTextureColorChannel::Alpha) 

enum class EPCGTextureColorChannel : uint8;
template<> struct TIsUEnumClass<EPCGTextureColorChannel> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTextureColorChannel>();
// ********** End Enum EPCGTextureColorChannel *****************************************************

// ********** Begin Enum EPCGTextureDensityFunction ************************************************
#define FOREACH_ENUM_EPCGTEXTUREDENSITYFUNCTION(op) \
	op(EPCGTextureDensityFunction::Ignore) \
	op(EPCGTextureDensityFunction::Multiply) 

enum class EPCGTextureDensityFunction : uint8;
template<> struct TIsUEnumClass<EPCGTextureDensityFunction> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTextureDensityFunction>();
// ********** End Enum EPCGTextureDensityFunction **************************************************

// ********** Begin Enum EPCGTextureFilter *********************************************************
#define FOREACH_ENUM_EPCGTEXTUREFILTER(op) \
	op(EPCGTextureFilter::Point) \
	op(EPCGTextureFilter::Bilinear) 

enum class EPCGTextureFilter : uint8;
template<> struct TIsUEnumClass<EPCGTextureFilter> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTextureFilter>();
// ********** End Enum EPCGTextureFilter ***********************************************************

// ********** Begin Enum EPCGTextureAddressMode ****************************************************
#define FOREACH_ENUM_EPCGTEXTUREADDRESSMODE(op) \
	op(EPCGTextureAddressMode::Clamp) \
	op(EPCGTextureAddressMode::Wrap) 

enum class EPCGTextureAddressMode : uint8;
template<> struct TIsUEnumClass<EPCGTextureAddressMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTextureAddressMode>();
// ********** End Enum EPCGTextureAddressMode ******************************************************

// ********** Begin Enum EPCGTextureResourceType ***************************************************
#define FOREACH_ENUM_EPCGTEXTURERESOURCETYPE(op) \
	op(EPCGTextureResourceType::TextureObject) \
	op(EPCGTextureResourceType::ExportedTexture) \
	op(EPCGTextureResourceType::Invalid) 

enum class EPCGTextureResourceType : uint8;
template<> struct TIsUEnumClass<EPCGTextureResourceType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTextureResourceType>();
// ********** End Enum EPCGTextureResourceType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
