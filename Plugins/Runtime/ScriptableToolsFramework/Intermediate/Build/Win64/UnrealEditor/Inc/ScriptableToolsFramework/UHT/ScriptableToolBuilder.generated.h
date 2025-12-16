// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptableToolBuilder.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolBuilder_generated_h
#error "ScriptableToolBuilder.generated.h already included, missing '#pragma once' in ScriptableToolBuilder.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UClass;
class UObject;
class UScriptableInteractiveTool;
class UScriptableToolTargetRequirements;

// ********** Begin Class UBaseScriptableToolBuilder ***********************************************
struct Z_Construct_UClass_UBaseScriptableToolBuilder_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseScriptableToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseScriptableToolBuilder(); \
	friend struct ::Z_Construct_UClass_UBaseScriptableToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UBaseScriptableToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseScriptableToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UBaseScriptableToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UBaseScriptableToolBuilder)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UBaseScriptableToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseScriptableToolBuilder(UBaseScriptableToolBuilder&&) = delete; \
	UBaseScriptableToolBuilder(const UBaseScriptableToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UBaseScriptableToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseScriptableToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseScriptableToolBuilder) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UBaseScriptableToolBuilder();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseScriptableToolBuilder;

// ********** End Class UBaseScriptableToolBuilder *************************************************

// ********** Begin Interface UCustomScriptableToolBuilderBaseInterface ****************************
struct Z_Construct_UClass_UCustomScriptableToolBuilderBaseInterface_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCustomScriptableToolBuilderBaseInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UCustomScriptableToolBuilderBaseInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomScriptableToolBuilderBaseInterface(UCustomScriptableToolBuilderBaseInterface&&) = delete; \
	UCustomScriptableToolBuilderBaseInterface(const UCustomScriptableToolBuilderBaseInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UCustomScriptableToolBuilderBaseInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomScriptableToolBuilderBaseInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomScriptableToolBuilderBaseInterface) \
	virtual ~UCustomScriptableToolBuilderBaseInterface() = default;


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCustomScriptableToolBuilderBaseInterface(); \
	friend struct ::Z_Construct_UClass_UCustomScriptableToolBuilderBaseInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UCustomScriptableToolBuilderBaseInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomScriptableToolBuilderBaseInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UCustomScriptableToolBuilderBaseInterface_NoRegister) \
	DECLARE_SERIALIZER(UCustomScriptableToolBuilderBaseInterface)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_37_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICustomScriptableToolBuilderBaseInterface() {} \
public: \
	typedef UCustomScriptableToolBuilderBaseInterface UClassType; \
	typedef ICustomScriptableToolBuilderBaseInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomScriptableToolBuilderBaseInterface;

// ********** End Interface UCustomScriptableToolBuilderBaseInterface ******************************

// ********** Begin Class UCustomScriptableToolBuilderComponentBase ********************************
struct Z_Construct_UClass_UCustomScriptableToolBuilderComponentBase_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCustomScriptableToolBuilderComponentBase_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomScriptableToolBuilderComponentBase(); \
	friend struct ::Z_Construct_UClass_UCustomScriptableToolBuilderComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UCustomScriptableToolBuilderComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomScriptableToolBuilderComponentBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UCustomScriptableToolBuilderComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UCustomScriptableToolBuilderComponentBase)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UCustomScriptableToolBuilderComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomScriptableToolBuilderComponentBase(UCustomScriptableToolBuilderComponentBase&&) = delete; \
	UCustomScriptableToolBuilderComponentBase(const UCustomScriptableToolBuilderComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UCustomScriptableToolBuilderComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomScriptableToolBuilderComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomScriptableToolBuilderComponentBase) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UCustomScriptableToolBuilderComponentBase();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomScriptableToolBuilderComponentBase;

// ********** End Class UCustomScriptableToolBuilderComponentBase **********************************

// ********** Begin Class UCustomScriptableToolBuilderContainer ************************************
struct Z_Construct_UClass_UCustomScriptableToolBuilderContainer_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCustomScriptableToolBuilderContainer_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomScriptableToolBuilderContainer(); \
	friend struct ::Z_Construct_UClass_UCustomScriptableToolBuilderContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UCustomScriptableToolBuilderContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomScriptableToolBuilderContainer, UBaseScriptableToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UCustomScriptableToolBuilderContainer_NoRegister) \
	DECLARE_SERIALIZER(UCustomScriptableToolBuilderContainer)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UCustomScriptableToolBuilderContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomScriptableToolBuilderContainer(UCustomScriptableToolBuilderContainer&&) = delete; \
	UCustomScriptableToolBuilderContainer(const UCustomScriptableToolBuilderContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UCustomScriptableToolBuilderContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomScriptableToolBuilderContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomScriptableToolBuilderContainer) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UCustomScriptableToolBuilderContainer();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_60_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomScriptableToolBuilderContainer;

// ********** End Class UCustomScriptableToolBuilderContainer **************************************

// ********** Begin Class UCustomScriptableToolBuilder *********************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSetupTool); \
	DECLARE_FUNCTION(execOnCanBuildTool);


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCustomScriptableToolBuilder_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCustomScriptableToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomScriptableToolBuilder(); \
	friend struct ::Z_Construct_UClass_UCustomScriptableToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UCustomScriptableToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomScriptableToolBuilder, UCustomScriptableToolBuilderComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UCustomScriptableToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UCustomScriptableToolBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UCustomScriptableToolBuilder*>(this); }


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UCustomScriptableToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomScriptableToolBuilder(UCustomScriptableToolBuilder&&) = delete; \
	UCustomScriptableToolBuilder(const UCustomScriptableToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UCustomScriptableToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomScriptableToolBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomScriptableToolBuilder) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UCustomScriptableToolBuilder();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_85_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomScriptableToolBuilder;

// ********** End Class UCustomScriptableToolBuilder ***********************************************

// ********** Begin Class UScriptableToolTargetRequirements ****************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildToolTargetRequirements);


struct Z_Construct_UClass_UScriptableToolTargetRequirements_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolTargetRequirements_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolTargetRequirements(); \
	friend struct ::Z_Construct_UClass_UScriptableToolTargetRequirements_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolTargetRequirements_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolTargetRequirements, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolTargetRequirements_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolTargetRequirements)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolTargetRequirements(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolTargetRequirements(UScriptableToolTargetRequirements&&) = delete; \
	UScriptableToolTargetRequirements(const UScriptableToolTargetRequirements&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolTargetRequirements); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolTargetRequirements); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolTargetRequirements) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolTargetRequirements();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_113_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolTargetRequirements;

// ********** End Class UScriptableToolTargetRequirements ******************************************

// ********** Begin Class UToolTargetScriptableToolBuilder *****************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSetupTool); \
	DECLARE_FUNCTION(execGetToolTargetRequirements);


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UToolTargetScriptableToolBuilder_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetScriptableToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolTargetScriptableToolBuilder(); \
	friend struct ::Z_Construct_UClass_UToolTargetScriptableToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UToolTargetScriptableToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolTargetScriptableToolBuilder, UCustomScriptableToolBuilderComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UToolTargetScriptableToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UToolTargetScriptableToolBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UToolTargetScriptableToolBuilder*>(this); }


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UToolTargetScriptableToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolTargetScriptableToolBuilder(UToolTargetScriptableToolBuilder&&) = delete; \
	UToolTargetScriptableToolBuilder(const UToolTargetScriptableToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UToolTargetScriptableToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolTargetScriptableToolBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolTargetScriptableToolBuilder) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UToolTargetScriptableToolBuilder();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_137_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolTargetScriptableToolBuilder;

// ********** End Class UToolTargetScriptableToolBuilder *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
