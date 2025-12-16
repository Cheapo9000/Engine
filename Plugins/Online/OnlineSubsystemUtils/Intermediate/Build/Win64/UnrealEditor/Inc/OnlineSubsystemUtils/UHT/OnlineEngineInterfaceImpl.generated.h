// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineEngineInterfaceImpl.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineEngineInterfaceImpl_generated_h
#error "OnlineEngineInterfaceImpl.generated.h already included, missing '#pragma once' in OnlineEngineInterfaceImpl.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineEngineInterfaceImpl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlineEngineInterfaceImpl ***********************************************
struct Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineEngineInterfaceImpl(); \
	friend struct ::Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlineEngineInterfaceImpl, UOnlineEngineInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister) \
	DECLARE_SERIALIZER(UOnlineEngineInterfaceImpl)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UOnlineEngineInterfaceImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineEngineInterfaceImpl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UOnlineEngineInterfaceImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineEngineInterfaceImpl); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlineEngineInterfaceImpl(UOnlineEngineInterfaceImpl&&) = delete; \
	UOnlineEngineInterfaceImpl(const UOnlineEngineInterfaceImpl&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UOnlineEngineInterfaceImpl();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_17_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_20_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlineEngineInterfaceImpl;

// ********** End Class UOnlineEngineInterfaceImpl *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
