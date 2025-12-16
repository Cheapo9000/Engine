// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/OnlineBeaconUnitTestHostObject.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconUnitTestHostObject_generated_h
#error "OnlineBeaconUnitTestHostObject.generated.h already included, missing '#pragma once' in OnlineBeaconUnitTestHostObject.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconUnitTestHostObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineBeaconUnitTestHostObject ******************************************
struct Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeaconUnitTestHostObject(); \
	friend struct ::Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineBeaconUnitTestHostObject, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_NoRegister) \
	DECLARE_SERIALIZER(AOnlineBeaconUnitTestHostObject)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeaconUnitTestHostObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconUnitTestHostObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeaconUnitTestHostObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconUnitTestHostObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineBeaconUnitTestHostObject(AOnlineBeaconUnitTestHostObject&&) = delete; \
	AOnlineBeaconUnitTestHostObject(const AOnlineBeaconUnitTestHostObject&) = delete; \
	NO_API virtual ~AOnlineBeaconUnitTestHostObject();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_9_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_12_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineBeaconUnitTestHostObject;

// ********** End Class AOnlineBeaconUnitTestHostObject ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
