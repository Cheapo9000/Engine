// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IClassVariableCreator.h"

#ifdef ANIMGRAPH_IClassVariableCreator_generated_h
#error "IClassVariableCreator.generated.h already included, missing '#pragma once' in IClassVariableCreator.h"
#endif
#define ANIMGRAPH_IClassVariableCreator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UClassVariableCreator ************************************************
struct Z_Construct_UClass_UClassVariableCreator_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UClassVariableCreator_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UClassVariableCreator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClassVariableCreator(UClassVariableCreator&&) = delete; \
	UClassVariableCreator(const UClassVariableCreator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UClassVariableCreator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassVariableCreator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassVariableCreator) \
	virtual ~UClassVariableCreator() = default;


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUClassVariableCreator(); \
	friend struct ::Z_Construct_UClass_UClassVariableCreator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UClassVariableCreator_NoRegister(); \
public: \
	DECLARE_CLASS2(UClassVariableCreator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UClassVariableCreator_NoRegister) \
	DECLARE_SERIALIZER(UClassVariableCreator)


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IClassVariableCreator() {} \
public: \
	typedef UClassVariableCreator UClassType; \
	typedef IClassVariableCreator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_25_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClassVariableCreator;

// ********** End Interface UClassVariableCreator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
