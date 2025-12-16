// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineServicesEngineInterfaceImpl.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineServicesEngineInterfaceImpl_generated_h
#error "OnlineServicesEngineInterfaceImpl.generated.h already included, missing '#pragma once' in OnlineServicesEngineInterfaceImpl.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineServicesEngineInterfaceImpl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlineServicesEngineInterfaceImpl ***************************************
struct Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineServicesEngineInterfaceImpl(); \
	friend struct ::Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlineServicesEngineInterfaceImpl, UOnlineEngineInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister) \
	DECLARE_SERIALIZER(UOnlineServicesEngineInterfaceImpl)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UOnlineServicesEngineInterfaceImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineServicesEngineInterfaceImpl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UOnlineServicesEngineInterfaceImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineServicesEngineInterfaceImpl); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlineServicesEngineInterfaceImpl(UOnlineServicesEngineInterfaceImpl&&) = delete; \
	UOnlineServicesEngineInterfaceImpl(const UOnlineServicesEngineInterfaceImpl&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UOnlineServicesEngineInterfaceImpl();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_20_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_23_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlineServicesEngineInterfaceImpl;

// ********** End Class UOnlineServicesEngineInterfaceImpl *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
