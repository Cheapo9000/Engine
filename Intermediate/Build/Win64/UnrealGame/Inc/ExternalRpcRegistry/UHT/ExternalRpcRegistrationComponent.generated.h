// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExternalRpcRegistrationComponent.h"

#ifdef EXTERNALRPCREGISTRY_ExternalRpcRegistrationComponent_generated_h
#error "ExternalRpcRegistrationComponent.generated.h already included, missing '#pragma once' in ExternalRpcRegistrationComponent.h"
#endif
#define EXTERNALRPCREGISTRY_ExternalRpcRegistrationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExternalRpcRegistrationComponent ****************************************
struct Z_Construct_UClass_UExternalRpcRegistrationComponent_Statics;
EXTERNALRPCREGISTRY_API UClass* Z_Construct_UClass_UExternalRpcRegistrationComponent_NoRegister();

#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistrationComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExternalRpcRegistrationComponent(); \
	friend struct ::Z_Construct_UClass_UExternalRpcRegistrationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EXTERNALRPCREGISTRY_API UClass* ::Z_Construct_UClass_UExternalRpcRegistrationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UExternalRpcRegistrationComponent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExternalRpcRegistry"), Z_Construct_UClass_UExternalRpcRegistrationComponent_NoRegister) \
	DECLARE_SERIALIZER(UExternalRpcRegistrationComponent)


#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistrationComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXTERNALRPCREGISTRY_API UExternalRpcRegistrationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExternalRpcRegistrationComponent(UExternalRpcRegistrationComponent&&) = delete; \
	UExternalRpcRegistrationComponent(const UExternalRpcRegistrationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXTERNALRPCREGISTRY_API, UExternalRpcRegistrationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalRpcRegistrationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalRpcRegistrationComponent) \
	EXTERNALRPCREGISTRY_API virtual ~UExternalRpcRegistrationComponent();


#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistrationComponent_h_21_PROLOG
#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistrationComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistrationComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistrationComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExternalRpcRegistrationComponent;

// ********** End Class UExternalRpcRegistrationComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistrationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
