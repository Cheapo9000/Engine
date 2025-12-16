// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAvaInteractiveToolsModeDetailsObject.h"

#ifdef AVALANCHEINTERACTIVETOOLSRUNTIME_IAvaInteractiveToolsModeDetailsObject_generated_h
#error "IAvaInteractiveToolsModeDetailsObject.generated.h already included, missing '#pragma once' in IAvaInteractiveToolsModeDetailsObject.h"
#endif
#define AVALANCHEINTERACTIVETOOLSRUNTIME_IAvaInteractiveToolsModeDetailsObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAvaInteractiveToolsModeDetailsObject ********************************
struct Z_Construct_UClass_UAvaInteractiveToolsModeDetailsObject_Statics;
AVALANCHEINTERACTIVETOOLSRUNTIME_API UClass* Z_Construct_UClass_UAvaInteractiveToolsModeDetailsObject_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEINTERACTIVETOOLSRUNTIME_API UAvaInteractiveToolsModeDetailsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaInteractiveToolsModeDetailsObject(UAvaInteractiveToolsModeDetailsObject&&) = delete; \
	UAvaInteractiveToolsModeDetailsObject(const UAvaInteractiveToolsModeDetailsObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEINTERACTIVETOOLSRUNTIME_API, UAvaInteractiveToolsModeDetailsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaInteractiveToolsModeDetailsObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaInteractiveToolsModeDetailsObject) \
	virtual ~UAvaInteractiveToolsModeDetailsObject() = default;


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaInteractiveToolsModeDetailsObject(); \
	friend struct ::Z_Construct_UClass_UAvaInteractiveToolsModeDetailsObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEINTERACTIVETOOLSRUNTIME_API UClass* ::Z_Construct_UClass_UAvaInteractiveToolsModeDetailsObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaInteractiveToolsModeDetailsObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheInteractiveToolsRuntime"), Z_Construct_UClass_UAvaInteractiveToolsModeDetailsObject_NoRegister) \
	DECLARE_SERIALIZER(UAvaInteractiveToolsModeDetailsObject)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaInteractiveToolsModeDetailsObject() {} \
public: \
	typedef UAvaInteractiveToolsModeDetailsObject UClassType; \
	typedef IAvaInteractiveToolsModeDetailsObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaInteractiveToolsModeDetailsObject;

// ********** End Interface UAvaInteractiveToolsModeDetailsObject **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
