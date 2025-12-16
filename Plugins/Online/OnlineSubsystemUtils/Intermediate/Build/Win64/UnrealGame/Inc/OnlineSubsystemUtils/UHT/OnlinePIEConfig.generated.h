// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlinePIEConfig.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlinePIEConfig_generated_h
#error "OnlinePIEConfig.generated.h already included, missing '#pragma once' in OnlinePIEConfig.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlinePIEConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlinePIEConfig *********************************************************
struct Z_Construct_UClass_UOnlinePIEConfig_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIEConfig_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePIEConfig(); \
	friend struct ::Z_Construct_UClass_UOnlinePIEConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UOnlinePIEConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlinePIEConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UOnlinePIEConfig_NoRegister) \
	DECLARE_SERIALIZER(UOnlinePIEConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlinePIEConfig(UOnlinePIEConfig&&) = delete; \
	UOnlinePIEConfig(const UOnlinePIEConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePIEConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePIEConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePIEConfig) \
	NO_API virtual ~UOnlinePIEConfig();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h_9_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlinePIEConfig;

// ********** End Class UOnlinePIEConfig ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
