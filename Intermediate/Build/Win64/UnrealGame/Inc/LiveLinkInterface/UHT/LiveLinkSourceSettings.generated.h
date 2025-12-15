// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkSourceSettings.h"

#ifdef LIVELINKINTERFACE_LiveLinkSourceSettings_generated_h
#error "LiveLinkSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkSourceSettings.h"
#endif
#define LIVELINKINTERFACE_LiveLinkSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkDefaultSourceSettings *******************************************
struct Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkDefaultSourceSettings_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDefaultSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkDefaultSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDefaultSourceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkDefaultSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDefaultSourceSettings)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDefaultSourceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDefaultSourceSettings(ULiveLinkDefaultSourceSettings&&) = delete; \
	ULiveLinkDefaultSourceSettings(const ULiveLinkDefaultSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDefaultSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDefaultSourceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkDefaultSourceSettings) \
	NO_API virtual ~ULiveLinkDefaultSourceSettings();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_23_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDefaultSourceSettings;

// ********** End Class ULiveLinkDefaultSourceSettings *********************************************

// ********** Begin ScriptStruct FLiveLinkSourceBufferManagementSettings ***************************
struct Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics;
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


struct FLiveLinkSourceBufferManagementSettings;
// ********** End ScriptStruct FLiveLinkSourceBufferManagementSettings *****************************

// ********** Begin ScriptStruct FLiveLinkSourceDebugInfo ******************************************
struct Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics;
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


struct FLiveLinkSourceDebugInfo;
// ********** End ScriptStruct FLiveLinkSourceDebugInfo ********************************************

// ********** Begin Class ULiveLinkSourceSettings **************************************************
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_164_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkSourceSettings, LIVELINKINTERFACE_API)


struct Z_Construct_UClass_ULiveLinkSourceSettings_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkSourceSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkSourceSettings) \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_164_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_164_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkSourceSettings(ULiveLinkSourceSettings&&) = delete; \
	ULiveLinkSourceSettings(const ULiveLinkSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkSourceSettings) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkSourceSettings();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_160_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_164_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_164_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkSourceSettings;

// ********** End Class ULiveLinkSourceSettings ****************************************************

// ********** Begin ScriptStruct FLiveLinkTimeSynchronizationSettings ******************************
struct Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics;
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


struct FLiveLinkTimeSynchronizationSettings;
// ********** End ScriptStruct FLiveLinkTimeSynchronizationSettings ********************************

// ********** Begin ScriptStruct FLiveLinkInterpolationSettings ************************************
struct Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics;
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_239_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


struct FLiveLinkInterpolationSettings;
// ********** End ScriptStruct FLiveLinkInterpolationSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h

// ********** Begin Enum ELiveLinkSourceMode *******************************************************
#define FOREACH_ENUM_ELIVELINKSOURCEMODE(op) \
	op(ELiveLinkSourceMode::Latest) \
	op(ELiveLinkSourceMode::EngineTime) \
	op(ELiveLinkSourceMode::Timecode) 

enum class ELiveLinkSourceMode : uint8;
template<> struct TIsUEnumClass<ELiveLinkSourceMode> { enum { Value = true }; };
template<> LIVELINKINTERFACE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkSourceMode>();
// ********** End Enum ELiveLinkSourceMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
