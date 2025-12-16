// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/IPCGNodeSourceTextProvider.h"

#ifdef PCG_IPCGNodeSourceTextProvider_generated_h
#error "IPCGNodeSourceTextProvider.generated.h already included, missing '#pragma once' in IPCGNodeSourceTextProvider.h"
#endif
#define PCG_IPCGNodeSourceTextProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPCGNodeSourceTextProvider *******************************************
struct Z_Construct_UClass_UPCGNodeSourceTextProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGNodeSourceTextProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGNodeSourceTextProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGNodeSourceTextProvider(UPCGNodeSourceTextProvider&&) = delete; \
	UPCGNodeSourceTextProvider(const UPCGNodeSourceTextProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGNodeSourceTextProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGNodeSourceTextProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGNodeSourceTextProvider) \
	virtual ~UPCGNodeSourceTextProvider() = default;


#define FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPCGNodeSourceTextProvider(); \
	friend struct ::Z_Construct_UClass_UPCGNodeSourceTextProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGNodeSourceTextProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGNodeSourceTextProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGNodeSourceTextProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGNodeSourceTextProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPCGNodeSourceTextProvider() {} \
public: \
	typedef UPCGNodeSourceTextProvider UClassType; \
	typedef IPCGNodeSourceTextProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_8_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGNodeSourceTextProvider;

// ********** End Interface UPCGNodeSourceTextProvider *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Internal_Compute_IPCGNodeSourceTextProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
