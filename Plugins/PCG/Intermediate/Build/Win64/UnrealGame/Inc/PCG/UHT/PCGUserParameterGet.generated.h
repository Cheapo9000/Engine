// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGUserParameterGet.h"

#ifdef PCG_PCGUserParameterGet_generated_h
#error "PCGUserParameterGet.generated.h already included, missing '#pragma once' in PCGUserParameterGet.h"
#endif
#define PCG_PCGUserParameterGet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGUserParameterGetSettings *********************************************
struct Z_Construct_UClass_UPCGUserParameterGetSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGUserParameterGetSettings(); \
	friend struct ::Z_Construct_UClass_UPCGUserParameterGetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGUserParameterGetSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGUserParameterGetSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGUserParameterGetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGUserParameterGetSettings(UPCGUserParameterGetSettings&&) = delete; \
	UPCGUserParameterGetSettings(const UPCGUserParameterGetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGUserParameterGetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGUserParameterGetSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGUserParameterGetSettings) \
	PCG_API virtual ~UPCGUserParameterGetSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_24_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGUserParameterGetSettings;

// ********** End Class UPCGUserParameterGetSettings ***********************************************

// ********** Begin Class UPCGGenericUserParameterGetSettings **************************************
struct Z_Construct_UClass_UPCGGenericUserParameterGetSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGenericUserParameterGetSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGenericUserParameterGetSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGenericUserParameterGetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGenericUserParameterGetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGenericUserParameterGetSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGenericUserParameterGetSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGenericUserParameterGetSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGenericUserParameterGetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGenericUserParameterGetSettings(UPCGGenericUserParameterGetSettings&&) = delete; \
	UPCGGenericUserParameterGetSettings(const UPCGGenericUserParameterGetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGenericUserParameterGetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGenericUserParameterGetSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGenericUserParameterGetSettings) \
	PCG_API virtual ~UPCGGenericUserParameterGetSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_81_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGenericUserParameterGetSettings;

// ********** End Class UPCGGenericUserParameterGetSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h

// ********** Begin Enum EPCGUserParameterSource ***************************************************
#define FOREACH_ENUM_EPCGUSERPARAMETERSOURCE(op) \
	op(EPCGUserParameterSource::Current) \
	op(EPCGUserParameterSource::Upstream) \
	op(EPCGUserParameterSource::Root) 

enum class EPCGUserParameterSource : uint8;
template<> struct TIsUEnumClass<EPCGUserParameterSource> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGUserParameterSource>();
// ********** End Enum EPCGUserParameterSource *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
