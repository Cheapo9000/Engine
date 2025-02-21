// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAvaRemoteControlInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEREMOTECONTROL_IAvaRemoteControlInterface_generated_h
#error "IAvaRemoteControlInterface.generated.h already included, missing '#pragma once' in IAvaRemoteControlInterface.h"
#endif
#define AVALANCHEREMOTECONTROL_IAvaRemoteControlInterface_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnValuesApplied);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEREMOTECONTROL_API UAvaRemoteControlInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaRemoteControlInterface(UAvaRemoteControlInterface&&); \
	UAvaRemoteControlInterface(const UAvaRemoteControlInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEREMOTECONTROL_API, UAvaRemoteControlInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaRemoteControlInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaRemoteControlInterface) \
	AVALANCHEREMOTECONTROL_API virtual ~UAvaRemoteControlInterface();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaRemoteControlInterface(); \
	friend struct Z_Construct_UClass_UAvaRemoteControlInterface_Statics; \
public: \
	DECLARE_CLASS(UAvaRemoteControlInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheRemoteControl"), AVALANCHEREMOTECONTROL_API) \
	DECLARE_SERIALIZER(UAvaRemoteControlInterface)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaRemoteControlInterface() {} \
public: \
	typedef UAvaRemoteControlInterface UClassType; \
	typedef IAvaRemoteControlInterface ThisClass; \
	AVALANCHEREMOTECONTROL_API static void Execute_OnValuesApplied(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEREMOTECONTROL_API UClass* StaticClass<class UAvaRemoteControlInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_IAvaRemoteControlInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
