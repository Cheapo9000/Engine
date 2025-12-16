// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IVPContextMenuProvider.h"

#ifdef VPUTILITIES_IVPContextMenuProvider_generated_h
#error "IVPContextMenuProvider.generated.h already included, missing '#pragma once' in IVPContextMenuProvider.h"
#endif
#define VPUTILITIES_IVPContextMenuProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UVPContextMenuProvider ***********************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCreateContextMenu_Implementation() {}; \
	DECLARE_FUNCTION(execOnCreateContextMenu);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UVPContextMenuProvider_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_UVPContextMenuProvider_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPContextMenuProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPContextMenuProvider(UVPContextMenuProvider&&) = delete; \
	UVPContextMenuProvider(const UVPContextMenuProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPContextMenuProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPContextMenuProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPContextMenuProvider) \
	virtual ~UVPContextMenuProvider() = default;


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVPContextMenuProvider(); \
	friend struct ::Z_Construct_UClass_UVPContextMenuProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_UVPContextMenuProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPContextMenuProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_UVPContextMenuProvider_NoRegister) \
	DECLARE_SERIALIZER(UVPContextMenuProvider)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVPContextMenuProvider() {} \
public: \
	typedef UVPContextMenuProvider UClassType; \
	typedef IVPContextMenuProvider ThisClass; \
	static void Execute_OnCreateContextMenu(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPContextMenuProvider;

// ********** End Interface UVPContextMenuProvider *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
