// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiServerPeerConnection.h"

#ifdef MULTISERVERREPLICATION_MultiServerPeerConnection_generated_h
#error "MultiServerPeerConnection.generated.h already included, missing '#pragma once' in MultiServerPeerConnection.h"
#endif
#define MULTISERVERREPLICATION_MultiServerPeerConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMultiServerPeerConnection ***********************************************
struct Z_Construct_UClass_UMultiServerPeerConnection_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UMultiServerPeerConnection_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerPeerConnection_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiServerPeerConnection(); \
	friend struct ::Z_Construct_UClass_UMultiServerPeerConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UMultiServerPeerConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiServerPeerConnection, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UMultiServerPeerConnection_NoRegister) \
	DECLARE_SERIALIZER(UMultiServerPeerConnection)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerPeerConnection_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiServerPeerConnection(UMultiServerPeerConnection&&) = delete; \
	UMultiServerPeerConnection(const UMultiServerPeerConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiServerPeerConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiServerPeerConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiServerPeerConnection) \
	NO_API virtual ~UMultiServerPeerConnection();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerPeerConnection_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerPeerConnection_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerPeerConnection_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerPeerConnection_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiServerPeerConnection;

// ********** End Class UMultiServerPeerConnection *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerPeerConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
