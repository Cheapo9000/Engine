// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metasound.h"

#ifdef METASOUNDENGINE_Metasound_generated_h
#error "Metasound.generated.h already included, missing '#pragma once' in Metasound.h"
#endif
#define METASOUNDENGINE_Metasound_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetasoundEditorGraphBase ************************************************
struct Z_Construct_UClass_UMetasoundEditorGraphBase_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphBase(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphBase, UEdGraph, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphBase)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetasoundEditorGraphBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphBase(UMetasoundEditorGraphBase&&) = delete; \
	UMetasoundEditorGraphBase(const UMetasoundEditorGraphBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetasoundEditorGraphBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphBase) \
	METASOUNDENGINE_API virtual ~UMetasoundEditorGraphBase();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphBase;

// ********** End Class UMetasoundEditorGraphBase **************************************************

// ********** Begin Class UMetaSoundPatch **********************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_75_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaSoundPatch, METASOUNDENGINE_API)


struct Z_Construct_UClass_UMetaSoundPatch_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatch_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundPatch(); \
	friend struct ::Z_Construct_UClass_UMetaSoundPatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundPatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundPatch, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundPatch_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundPatch) \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_75_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMetaSoundPatch*>(this); }


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundPatch(UMetaSoundPatch&&) = delete; \
	UMetaSoundPatch(const UMetaSoundPatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundPatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundPatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundPatch) \
	METASOUNDENGINE_API virtual ~UMetaSoundPatch();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_72_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundPatch;

// ********** End Class UMetaSoundPatch ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
