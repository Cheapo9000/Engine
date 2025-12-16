// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MetaSoundLiteralInterface.h"

#ifdef TECHAUDIOTOOLSMETASOUND_MetaSoundLiteralInterface_generated_h
#error "MetaSoundLiteralInterface.generated.h already included, missing '#pragma once' in MetaSoundLiteralInterface.h"
#endif
#define TECHAUDIOTOOLSMETASOUND_MetaSoundLiteralInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaSoundInputViewModel;

// ********** Begin Interface UMetaSoundLiteralWidgetInterface *************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInputViewModels); \
	DECLARE_FUNCTION(execGetInputViewModelNames);


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMetaSoundLiteralWidgetInterface_Statics;
TECHAUDIOTOOLSMETASOUND_API UClass* Z_Construct_UClass_UMetaSoundLiteralWidgetInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLSMETASOUND_API UMetaSoundLiteralWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundLiteralWidgetInterface(UMetaSoundLiteralWidgetInterface&&) = delete; \
	UMetaSoundLiteralWidgetInterface(const UMetaSoundLiteralWidgetInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLSMETASOUND_API, UMetaSoundLiteralWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundLiteralWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundLiteralWidgetInterface) \
	virtual ~UMetaSoundLiteralWidgetInterface() = default;


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaSoundLiteralWidgetInterface(); \
	friend struct ::Z_Construct_UClass_UMetaSoundLiteralWidgetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLSMETASOUND_API UClass* ::Z_Construct_UClass_UMetaSoundLiteralWidgetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundLiteralWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TechAudioToolsMetaSound"), Z_Construct_UClass_UMetaSoundLiteralWidgetInterface_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundLiteralWidgetInterface)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaSoundLiteralWidgetInterface() {} \
public: \
	typedef UMetaSoundLiteralWidgetInterface UClassType; \
	typedef IMetaSoundLiteralWidgetInterface ThisClass; \
	TECHAUDIOTOOLSMETASOUND_API static TArray<FName> Execute_GetInputViewModelNames(const UObject* O); \
	TECHAUDIOTOOLSMETASOUND_API static void Execute_SetInputViewModels(UObject* O, TMap<FName,UMetaSoundInputViewModel*> const& InputViewModels); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundLiteralWidgetInterface;

// ********** End Interface UMetaSoundLiteralWidgetInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_Interfaces_MetaSoundLiteralInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
