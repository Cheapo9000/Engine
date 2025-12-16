// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/MetaHumanCharacterEditorBodyEditingTools.h"

#ifdef METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorBodyEditingTools_generated_h
#error "MetaHumanCharacterEditorBodyEditingTools.generated.h already included, missing '#pragma once' in MetaHumanCharacterEditorBodyEditingTools.h"
#endif
#define METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorBodyEditingTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanCharacterEditorBodyToolBuilder *********************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorBodyToolBuilder_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorBodyToolBuilder_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorBodyToolBuilder(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorBodyToolBuilder, UMetaHumanCharacterEditorToolWithToolTargetsBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorBodyToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorBodyToolBuilder)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorBodyToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorBodyToolBuilder(UMetaHumanCharacterEditorBodyToolBuilder&&) = delete; \
	UMetaHumanCharacterEditorBodyToolBuilder(const UMetaHumanCharacterEditorBodyToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorBodyToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorBodyToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorBodyToolBuilder) \
	NO_API virtual ~UMetaHumanCharacterEditorBodyToolBuilder();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_22_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorBodyToolBuilder;

// ********** End Class UMetaHumanCharacterEditorBodyToolBuilder ***********************************

// ********** Begin Class UMetaHumanCharacterBodyModelSubToolBase **********************************
struct Z_Construct_UClass_UMetaHumanCharacterBodyModelSubToolBase_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterBodyModelSubToolBase_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterBodyModelSubToolBase(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterBodyModelSubToolBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterBodyModelSubToolBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterBodyModelSubToolBase, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterBodyModelSubToolBase_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterBodyModelSubToolBase)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterBodyModelSubToolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterBodyModelSubToolBase(UMetaHumanCharacterBodyModelSubToolBase&&) = delete; \
	UMetaHumanCharacterBodyModelSubToolBase(const UMetaHumanCharacterBodyModelSubToolBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterBodyModelSubToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterBodyModelSubToolBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterBodyModelSubToolBase) \
	NO_API virtual ~UMetaHumanCharacterBodyModelSubToolBase();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_56_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterBodyModelSubToolBase;

// ********** End Class UMetaHumanCharacterBodyModelSubToolBase ************************************

// ********** Begin Class UMetaHumanCharacterParametricBodyProperties ******************************
struct Z_Construct_UClass_UMetaHumanCharacterParametricBodyProperties_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterParametricBodyProperties_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterParametricBodyProperties(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterParametricBodyProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterParametricBodyProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterParametricBodyProperties, UMetaHumanCharacterBodyModelSubToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterParametricBodyProperties_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterParametricBodyProperties)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterParametricBodyProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterParametricBodyProperties(UMetaHumanCharacterParametricBodyProperties&&) = delete; \
	UMetaHumanCharacterParametricBodyProperties(const UMetaHumanCharacterParametricBodyProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterParametricBodyProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterParametricBodyProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterParametricBodyProperties) \
	NO_API virtual ~UMetaHumanCharacterParametricBodyProperties();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_85_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterParametricBodyProperties;

// ********** End Class UMetaHumanCharacterParametricBodyProperties ********************************

// ********** Begin Class UMetaHumanCharacterFixedCompatibilityBodyProperties **********************
struct Z_Construct_UClass_UMetaHumanCharacterFixedCompatibilityBodyProperties_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterFixedCompatibilityBodyProperties_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterFixedCompatibilityBodyProperties(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterFixedCompatibilityBodyProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterFixedCompatibilityBodyProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterFixedCompatibilityBodyProperties, UMetaHumanCharacterBodyModelSubToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterFixedCompatibilityBodyProperties_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterFixedCompatibilityBodyProperties)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterFixedCompatibilityBodyProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterFixedCompatibilityBodyProperties(UMetaHumanCharacterFixedCompatibilityBodyProperties&&) = delete; \
	UMetaHumanCharacterFixedCompatibilityBodyProperties(const UMetaHumanCharacterFixedCompatibilityBodyProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterFixedCompatibilityBodyProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterFixedCompatibilityBodyProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterFixedCompatibilityBodyProperties) \
	NO_API virtual ~UMetaHumanCharacterFixedCompatibilityBodyProperties();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_127_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_130_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterFixedCompatibilityBodyProperties;

// ********** End Class UMetaHumanCharacterFixedCompatibilityBodyProperties ************************

// ********** Begin Class UMetaHumanCharacterEditorBodyParameterProperties *************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorBodyParameterProperties_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorBodyParameterProperties_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorBodyParameterProperties(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyParameterProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyParameterProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorBodyParameterProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorBodyParameterProperties_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorBodyParameterProperties)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorBodyParameterProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorBodyParameterProperties(UMetaHumanCharacterEditorBodyParameterProperties&&) = delete; \
	UMetaHumanCharacterEditorBodyParameterProperties(const UMetaHumanCharacterEditorBodyParameterProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorBodyParameterProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorBodyParameterProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorBodyParameterProperties) \
	NO_API virtual ~UMetaHumanCharacterEditorBodyParameterProperties();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_147_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorBodyParameterProperties;

// ********** End Class UMetaHumanCharacterEditorBodyParameterProperties ***************************

// ********** Begin Class UMetaHumanCharacterEditorBodyModelTool ***********************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorBodyModelTool_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorBodyModelTool_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorBodyModelTool(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyModelTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyModelTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorBodyModelTool, UMetaHumanCharacterEditorToolWithSubTools, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorBodyModelTool_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorBodyModelTool)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorBodyModelTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorBodyModelTool(UMetaHumanCharacterEditorBodyModelTool&&) = delete; \
	UMetaHumanCharacterEditorBodyModelTool(const UMetaHumanCharacterEditorBodyModelTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorBodyModelTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorBodyModelTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorBodyModelTool) \
	NO_API virtual ~UMetaHumanCharacterEditorBodyModelTool();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_171_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_174_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorBodyModelTool;

// ********** End Class UMetaHumanCharacterEditorBodyModelTool *************************************

// ********** Begin Class UBodyStateChangeTransactor ***********************************************
struct Z_Construct_UClass_UBodyStateChangeTransactor_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UBodyStateChangeTransactor_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_202_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateChangeTransactor(); \
	friend struct ::Z_Construct_UClass_UBodyStateChangeTransactor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UBodyStateChangeTransactor_NoRegister(); \
public: \
	DECLARE_CLASS2(UBodyStateChangeTransactor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UBodyStateChangeTransactor_NoRegister) \
	DECLARE_SERIALIZER(UBodyStateChangeTransactor) \
	virtual UObject* _getUObject() const override { return const_cast<UBodyStateChangeTransactor*>(this); }


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_202_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateChangeTransactor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBodyStateChangeTransactor(UBodyStateChangeTransactor&&) = delete; \
	UBodyStateChangeTransactor(const UBodyStateChangeTransactor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateChangeTransactor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateChangeTransactor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateChangeTransactor) \
	NO_API virtual ~UBodyStateChangeTransactor();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_199_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_202_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_202_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_202_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBodyStateChangeTransactor;

// ********** End Class UBodyStateChangeTransactor *************************************************

// ********** Begin Class UMetaHumanCharacterEditorBodyBlendToolProperties *************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendToolProperties_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendToolProperties_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_223_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorBodyBlendToolProperties(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorBodyBlendToolProperties, UMetaHumanCharacterEditorMeshBlendToolProperties, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorBodyBlendToolProperties)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_223_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorBodyBlendToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorBodyBlendToolProperties(UMetaHumanCharacterEditorBodyBlendToolProperties&&) = delete; \
	UMetaHumanCharacterEditorBodyBlendToolProperties(const UMetaHumanCharacterEditorBodyBlendToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorBodyBlendToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorBodyBlendToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorBodyBlendToolProperties) \
	NO_API virtual ~UMetaHumanCharacterEditorBodyBlendToolProperties();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_220_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_223_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_223_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_223_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorBodyBlendToolProperties;

// ********** End Class UMetaHumanCharacterEditorBodyBlendToolProperties ***************************

// ********** Begin Class UMetaHumanCharacterEditorBodyBlendTool ***********************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendTool_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendTool_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorBodyBlendTool(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorBodyBlendTool, UMetaHumanCharacterEditorMeshBlendTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorBodyBlendTool_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorBodyBlendTool)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_238_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorBodyBlendTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorBodyBlendTool(UMetaHumanCharacterEditorBodyBlendTool&&) = delete; \
	UMetaHumanCharacterEditorBodyBlendTool(const UMetaHumanCharacterEditorBodyBlendTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorBodyBlendTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorBodyBlendTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorBodyBlendTool) \
	NO_API virtual ~UMetaHumanCharacterEditorBodyBlendTool();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_235_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_238_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorBodyBlendTool;

// ********** End Class UMetaHumanCharacterEditorBodyBlendTool *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorBodyEditingTools_h

// ********** Begin Enum EMetaHumanCharacterBodyEditingTool ****************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERBODYEDITINGTOOL(op) \
	op(EMetaHumanCharacterBodyEditingTool::Model) \
	op(EMetaHumanCharacterBodyEditingTool::Blend) 

enum class EMetaHumanCharacterBodyEditingTool : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterBodyEditingTool> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterBodyEditingTool>();
// ********** End Enum EMetaHumanCharacterBodyEditingTool ******************************************

// ********** Begin Enum EMetaHumanCharacterFixedBodyToolHeight ************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERFIXEDBODYTOOLHEIGHT(op) \
	op(EMetaHumanCharacterFixedBodyToolHeight::Short) \
	op(EMetaHumanCharacterFixedBodyToolHeight::Average) \
	op(EMetaHumanCharacterFixedBodyToolHeight::Tall) 

enum class EMetaHumanCharacterFixedBodyToolHeight : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterFixedBodyToolHeight> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterFixedBodyToolHeight>();
// ********** End Enum EMetaHumanCharacterFixedBodyToolHeight **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
