// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IVPInteraction.h"

#ifdef VPUTILITIES_IVPInteraction_generated_h
#error "IVPInteraction.generated.h already included, missing '#pragma once' in IVPInteraction.h"
#endif
#define VPUTILITIES_IVPInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UVPInteraction *******************************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnActorDroppedFromTransform_Implementation() {}; \
	virtual void OnActorSelectedForTransform_Implementation() {}; \
	virtual void OnActorDroppedFromCarry_Implementation() {}; \
	DECLARE_FUNCTION(execOnActorDroppedFromTransform); \
	DECLARE_FUNCTION(execOnActorSelectedForTransform); \
	DECLARE_FUNCTION(execOnActorDroppedFromCarry);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UVPInteraction_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_UVPInteraction_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPInteraction(UVPInteraction&&) = delete; \
	UVPInteraction(const UVPInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPInteraction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPInteraction) \
	virtual ~UVPInteraction() = default;


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVPInteraction(); \
	friend struct ::Z_Construct_UClass_UVPInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_UVPInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPInteraction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_UVPInteraction_NoRegister) \
	DECLARE_SERIALIZER(UVPInteraction)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVPInteraction() {} \
public: \
	typedef UVPInteraction UClassType; \
	typedef IVPInteraction ThisClass; \
	static void Execute_OnActorDroppedFromCarry(UObject* O); \
	static void Execute_OnActorDroppedFromTransform(UObject* O); \
	static void Execute_OnActorSelectedForTransform(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPInteraction;

// ********** End Interface UVPInteraction *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
