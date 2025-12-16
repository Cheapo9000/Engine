// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundPresetWidgetInterface.h"

#ifdef METASOUNDEDITOR_MetasoundPresetWidgetInterface_generated_h
#error "MetasoundPresetWidgetInterface.generated.h already included, missing '#pragma once' in MetasoundPresetWidgetInterface.h"
#endif
#define METASOUNDEDITOR_MetasoundPresetWidgetInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UAudioComponent;
class UMetaSoundBuilderBase;

// ********** Begin Interface UMetaSoundPresetWidgetInterface **************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAuditionStateChanged_Implementation(UAudioComponent* AudioComponent, bool bIsAuditioning) {}; \
	DECLARE_FUNCTION(execOnAuditionStateChanged);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMetaSoundPresetWidgetInterface_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundPresetWidgetInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetaSoundPresetWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundPresetWidgetInterface(UMetaSoundPresetWidgetInterface&&) = delete; \
	UMetaSoundPresetWidgetInterface(const UMetaSoundPresetWidgetInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetaSoundPresetWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundPresetWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundPresetWidgetInterface) \
	virtual ~UMetaSoundPresetWidgetInterface() = default;


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaSoundPresetWidgetInterface(); \
	friend struct ::Z_Construct_UClass_UMetaSoundPresetWidgetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetaSoundPresetWidgetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundPresetWidgetInterface, UAudioPanelWidgetInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetaSoundPresetWidgetInterface_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundPresetWidgetInterface)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaSoundPresetWidgetInterface() {} \
public: \
	typedef UMetaSoundPresetWidgetInterface UClassType; \
	typedef IMetaSoundPresetWidgetInterface ThisClass; \
	static void Execute_GetSupportedMetaSounds(const UObject* O, bool& bSupportAllPresets, TArray<TScriptInterface<IMetaSoundDocumentInterface>>& ExcludedMetaSounds, TArray<TScriptInterface<IMetaSoundDocumentInterface>>& IncludedMetaSounds); \
	static void Execute_OnAuditionStateChanged(UObject* O, UAudioComponent* AudioComponent, bool bIsAuditioning); \
	static void Execute_OnConstructed(UObject* O, UMetaSoundBuilderBase* Builder); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundPresetWidgetInterface;

// ********** End Interface UMetaSoundPresetWidgetInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundPresetWidgetInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
