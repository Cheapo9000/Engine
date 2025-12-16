// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/IPCGBaseSubsystem.h"

#ifdef PCG_IPCGBaseSubsystem_generated_h
#error "IPCGBaseSubsystem.generated.h already included, missing '#pragma once' in IPCGBaseSubsystem.h"
#endif
#define PCG_IPCGBaseSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPCGBaseSubsystem ****************************************************
struct Z_Construct_UClass_UPCGBaseSubsystem_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBaseSubsystem_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBaseSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBaseSubsystem(UPCGBaseSubsystem&&) = delete; \
	UPCGBaseSubsystem(const UPCGBaseSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBaseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBaseSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBaseSubsystem) \
	virtual ~UPCGBaseSubsystem() = default;


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_39_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPCGBaseSubsystem(); \
	friend struct ::Z_Construct_UClass_UPCGBaseSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBaseSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBaseSubsystem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBaseSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPCGBaseSubsystem)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_39_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_39_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_39_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPCGBaseSubsystem() {} \
public: \
	typedef UPCGBaseSubsystem UClassType; \
	typedef IPCGBaseSubsystem ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_36_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h_39_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBaseSubsystem;

// ********** End Interface UPCGBaseSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
