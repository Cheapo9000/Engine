// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DemoNetConnection.h"

#ifdef ENGINE_DemoNetConnection_generated_h
#error "DemoNetConnection.generated.h already included, missing '#pragma once' in DemoNetConnection.h"
#endif
#define ENGINE_DemoNetConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDemoNetConnection *******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetConnection, ENGINE_API)


struct Z_Construct_UClass_UDemoNetConnection_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDemoNetConnection_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemoNetConnection(); \
	friend struct ::Z_Construct_UClass_UDemoNetConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDemoNetConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UDemoNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDemoNetConnection_NoRegister) \
	DECLARE_SERIALIZER(UDemoNetConnection) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDemoNetConnection(UDemoNetConnection&&) = delete; \
	UDemoNetConnection(const UDemoNetConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDemoNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoNetConnection) \
	ENGINE_API virtual ~UDemoNetConnection();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDemoNetConnection;

// ********** End Class UDemoNetConnection *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
