// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/OnlineEngineInterface.h"

#ifdef ENGINE_OnlineEngineInterface_generated_h
#error "OnlineEngineInterface.generated.h already included, missing '#pragma once' in OnlineEngineInterface.h"
#endif
#define ENGINE_OnlineEngineInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlineEngineInterface ***************************************************
struct Z_Construct_UClass_UOnlineEngineInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineEngineInterface(); \
	friend struct ::Z_Construct_UClass_UOnlineEngineInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UOnlineEngineInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlineEngineInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UOnlineEngineInterface_NoRegister) \
	DECLARE_SERIALIZER(UOnlineEngineInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UOnlineEngineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineEngineInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UOnlineEngineInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineEngineInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlineEngineInterface(UOnlineEngineInterface&&) = delete; \
	UOnlineEngineInterface(const UOnlineEngineInterface&) = delete; \
	ENGINE_API virtual ~UOnlineEngineInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlineEngineInterface;

// ********** End Class UOnlineEngineInterface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
