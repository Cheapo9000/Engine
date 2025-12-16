// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncMessageBindingComponent.h"

#ifdef ASYNCMESSAGESYSTEM_AsyncMessageBindingComponent_generated_h
#error "AsyncMessageBindingComponent.generated.h already included, missing '#pragma once' in AsyncMessageBindingComponent.h"
#endif
#define ASYNCMESSAGESYSTEM_AsyncMessageBindingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAsyncMessageBindingEndpointInterface ********************************
struct Z_Construct_UClass_UAsyncMessageBindingEndpointInterface_Statics;
ASYNCMESSAGESYSTEM_API UClass* Z_Construct_UClass_UAsyncMessageBindingEndpointInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASYNCMESSAGESYSTEM_API UAsyncMessageBindingEndpointInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncMessageBindingEndpointInterface(UAsyncMessageBindingEndpointInterface&&) = delete; \
	UAsyncMessageBindingEndpointInterface(const UAsyncMessageBindingEndpointInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASYNCMESSAGESYSTEM_API, UAsyncMessageBindingEndpointInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncMessageBindingEndpointInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncMessageBindingEndpointInterface) \
	virtual ~UAsyncMessageBindingEndpointInterface() = default;


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAsyncMessageBindingEndpointInterface(); \
	friend struct ::Z_Construct_UClass_UAsyncMessageBindingEndpointInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCMESSAGESYSTEM_API UClass* ::Z_Construct_UClass_UAsyncMessageBindingEndpointInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncMessageBindingEndpointInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AsyncMessageSystem"), Z_Construct_UClass_UAsyncMessageBindingEndpointInterface_NoRegister) \
	DECLARE_SERIALIZER(UAsyncMessageBindingEndpointInterface)


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAsyncMessageBindingEndpointInterface() {} \
public: \
	typedef UAsyncMessageBindingEndpointInterface UClassType; \
	typedef IAsyncMessageBindingEndpointInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncMessageBindingEndpointInterface;

// ********** End Interface UAsyncMessageBindingEndpointInterface **********************************

// ********** Begin Class UAsyncMessageBindingComponent ********************************************
struct Z_Construct_UClass_UAsyncMessageBindingComponent_Statics;
ASYNCMESSAGESYSTEM_API UClass* Z_Construct_UClass_UAsyncMessageBindingComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncMessageBindingComponent(); \
	friend struct ::Z_Construct_UClass_UAsyncMessageBindingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCMESSAGESYSTEM_API UClass* ::Z_Construct_UClass_UAsyncMessageBindingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncMessageBindingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsyncMessageSystem"), Z_Construct_UClass_UAsyncMessageBindingComponent_NoRegister) \
	DECLARE_SERIALIZER(UAsyncMessageBindingComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAsyncMessageBindingComponent*>(this); }


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASYNCMESSAGESYSTEM_API UAsyncMessageBindingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncMessageBindingComponent(UAsyncMessageBindingComponent&&) = delete; \
	UAsyncMessageBindingComponent(const UAsyncMessageBindingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASYNCMESSAGESYSTEM_API, UAsyncMessageBindingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncMessageBindingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncMessageBindingComponent) \
	ASYNCMESSAGESYSTEM_API virtual ~UAsyncMessageBindingComponent();


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncMessageBindingComponent;

// ********** End Class UAsyncMessageBindingComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Public_AsyncMessageBindingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
