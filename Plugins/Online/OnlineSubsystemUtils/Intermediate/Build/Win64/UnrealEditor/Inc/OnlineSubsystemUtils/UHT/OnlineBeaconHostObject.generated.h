// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineBeaconHostObject.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconHostObject_generated_h
#error "OnlineBeaconHostObject.generated.h already included, missing '#pragma once' in OnlineBeaconHostObject.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconHostObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineBeaconHostObject **************************************************
struct Z_Construct_UClass_AOnlineBeaconHostObject_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeaconHostObject(); \
	friend struct ::Z_Construct_UClass_AOnlineBeaconHostObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineBeaconHostObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister) \
	DECLARE_SERIALIZER(AOnlineBeaconHostObject)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API AOnlineBeaconHostObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconHostObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, AOnlineBeaconHostObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconHostObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineBeaconHostObject(AOnlineBeaconHostObject&&) = delete; \
	AOnlineBeaconHostObject(const AOnlineBeaconHostObject&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~AOnlineBeaconHostObject();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_19_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_22_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineBeaconHostObject;

// ********** End Class AOnlineBeaconHostObject ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
