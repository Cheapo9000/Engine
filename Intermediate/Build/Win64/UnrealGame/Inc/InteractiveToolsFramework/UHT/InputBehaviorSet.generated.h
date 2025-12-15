// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputBehaviorSet.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InputBehaviorSet_generated_h
#error "InputBehaviorSet.generated.h already included, missing '#pragma once' in InputBehaviorSet.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputBehaviorSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBehaviorInfo *****************************************************
struct Z_Construct_UScriptStruct_FBehaviorInfo_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBehaviorInfo_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FBehaviorInfo;
// ********** End ScriptStruct FBehaviorInfo *******************************************************

// ********** Begin Class UInputBehaviorSet ********************************************************
struct Z_Construct_UClass_UInputBehaviorSet_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBehaviorSet(); \
	friend struct ::Z_Construct_UClass_UInputBehaviorSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInputBehaviorSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputBehaviorSet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInputBehaviorSet_NoRegister) \
	DECLARE_SERIALIZER(UInputBehaviorSet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputBehaviorSet(UInputBehaviorSet&&) = delete; \
	UInputBehaviorSet(const UInputBehaviorSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInputBehaviorSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehaviorSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputBehaviorSet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_57_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputBehaviorSet;

// ********** End Class UInputBehaviorSet **********************************************************

// ********** Begin Interface UInputBehaviorSource *************************************************
struct Z_Construct_UClass_UInputBehaviorSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UInputBehaviorSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputBehaviorSource(UInputBehaviorSource&&) = delete; \
	UInputBehaviorSource(const UInputBehaviorSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInputBehaviorSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehaviorSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBehaviorSource) \
	virtual ~UInputBehaviorSource() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_167_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInputBehaviorSource(); \
	friend struct ::Z_Construct_UClass_UInputBehaviorSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInputBehaviorSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputBehaviorSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInputBehaviorSource_NoRegister) \
	DECLARE_SERIALIZER(UInputBehaviorSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_167_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_167_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_167_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_167_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInputBehaviorSource() {} \
public: \
	typedef UInputBehaviorSource UClassType; \
	typedef IInputBehaviorSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_164_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_167_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputBehaviorSource;

// ********** End Interface UInputBehaviorSource ***************************************************

// ********** Begin Class ULocalInputBehaviorSource ************************************************
struct Z_Construct_UClass_ULocalInputBehaviorSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalInputBehaviorSource(); \
	friend struct ::Z_Construct_UClass_ULocalInputBehaviorSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalInputBehaviorSource, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister) \
	DECLARE_SERIALIZER(ULocalInputBehaviorSource) \
	virtual UObject* _getUObject() const override { return const_cast<ULocalInputBehaviorSource*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_196_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API ULocalInputBehaviorSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalInputBehaviorSource(ULocalInputBehaviorSource&&) = delete; \
	ULocalInputBehaviorSource(const ULocalInputBehaviorSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, ULocalInputBehaviorSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalInputBehaviorSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalInputBehaviorSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~ULocalInputBehaviorSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_193_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_196_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalInputBehaviorSource;

// ********** End Class ULocalInputBehaviorSource **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
