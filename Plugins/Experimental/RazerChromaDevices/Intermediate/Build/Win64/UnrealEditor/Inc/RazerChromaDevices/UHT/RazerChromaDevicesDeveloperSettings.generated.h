// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RazerChromaDevicesDeveloperSettings.h"

#ifdef RAZERCHROMADEVICES_RazerChromaDevicesDeveloperSettings_generated_h
#error "RazerChromaDevicesDeveloperSettings.generated.h already included, missing '#pragma once' in RazerChromaDevicesDeveloperSettings.h"
#endif
#define RAZERCHROMADEVICES_RazerChromaDevicesDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRazerChromaAppInfo ***********************************************
struct Z_Construct_UScriptStruct_FRazerChromaAppInfo_Statics;
#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaDevicesDeveloperSettings_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRazerChromaAppInfo_Statics; \
	RAZERCHROMADEVICES_API static class UScriptStruct* StaticStruct();


struct FRazerChromaAppInfo;
// ********** End ScriptStruct FRazerChromaAppInfo *************************************************

// ********** Begin Class URazerChromaDevicesDeveloperSettings *************************************
struct Z_Construct_UClass_URazerChromaDevicesDeveloperSettings_Statics;
RAZERCHROMADEVICES_API UClass* Z_Construct_UClass_URazerChromaDevicesDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaDevicesDeveloperSettings_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURazerChromaDevicesDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_URazerChromaDevicesDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RAZERCHROMADEVICES_API UClass* ::Z_Construct_UClass_URazerChromaDevicesDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URazerChromaDevicesDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RazerChromaDevices"), Z_Construct_UClass_URazerChromaDevicesDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(URazerChromaDevicesDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaDevicesDeveloperSettings_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RAZERCHROMADEVICES_API URazerChromaDevicesDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URazerChromaDevicesDeveloperSettings(URazerChromaDevicesDeveloperSettings&&) = delete; \
	URazerChromaDevicesDeveloperSettings(const URazerChromaDevicesDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RAZERCHROMADEVICES_API, URazerChromaDevicesDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URazerChromaDevicesDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URazerChromaDevicesDeveloperSettings) \
	RAZERCHROMADEVICES_API virtual ~URazerChromaDevicesDeveloperSettings();


#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaDevicesDeveloperSettings_h_108_PROLOG
#define FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaDevicesDeveloperSettings_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaDevicesDeveloperSettings_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaDevicesDeveloperSettings_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URazerChromaDevicesDeveloperSettings;

// ********** End Class URazerChromaDevicesDeveloperSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RazerChromaDevices_Source_RazerChromaDevices_Public_RazerChromaDevicesDeveloperSettings_h

// ********** Begin Enum ERazerChromaDeviceTypes ***************************************************
#define FOREACH_ENUM_ERAZERCHROMADEVICETYPES(op) \
	op(ERazerChromaDeviceTypes::None) \
	op(ERazerChromaDeviceTypes::Keyboards) \
	op(ERazerChromaDeviceTypes::Mice) \
	op(ERazerChromaDeviceTypes::Headset) \
	op(ERazerChromaDeviceTypes::Mousepads) \
	op(ERazerChromaDeviceTypes::Keypads) \
	op(ERazerChromaDeviceTypes::ChromaLink) \
	op(ERazerChromaDeviceTypes::All) 

enum class ERazerChromaDeviceTypes : int32;
template<> struct TIsUEnumClass<ERazerChromaDeviceTypes> { enum { Value = true }; };
template<> RAZERCHROMADEVICES_NON_ATTRIBUTED_API UEnum* StaticEnum<ERazerChromaDeviceTypes>();
// ********** End Enum ERazerChromaDeviceTypes *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
