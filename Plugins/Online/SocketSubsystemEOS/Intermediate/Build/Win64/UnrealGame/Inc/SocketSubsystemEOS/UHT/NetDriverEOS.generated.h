// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetDriverEOS.h"

#ifdef SOCKETSUBSYSTEMEOS_NetDriverEOS_generated_h
#error "NetDriverEOS.generated.h already included, missing '#pragma once' in NetDriverEOS.h"
#endif
#define SOCKETSUBSYSTEMEOS_NetDriverEOS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetDriverEOS ************************************************************
struct Z_Construct_UClass_UNetDriverEOS_Statics;
SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetDriverEOS_NoRegister();

#define FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOS_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetDriverEOS(); \
	friend struct ::Z_Construct_UClass_UNetDriverEOS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCKETSUBSYSTEMEOS_API UClass* ::Z_Construct_UClass_UNetDriverEOS_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetDriverEOS, UIpNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocketSubsystemEOS"), Z_Construct_UClass_UNetDriverEOS_NoRegister) \
	DECLARE_SERIALIZER(UNetDriverEOS)


#define FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOS_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetDriverEOS(UNetDriverEOS&&) = delete; \
	UNetDriverEOS(const UNetDriverEOS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOCKETSUBSYSTEMEOS_API, UNetDriverEOS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDriverEOS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetDriverEOS) \
	SOCKETSUBSYSTEMEOS_API virtual ~UNetDriverEOS();


#define FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOS_h_13_PROLOG
#define FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOS_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOS_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOS_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetDriverEOS;

// ********** End Class UNetDriverEOS **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
