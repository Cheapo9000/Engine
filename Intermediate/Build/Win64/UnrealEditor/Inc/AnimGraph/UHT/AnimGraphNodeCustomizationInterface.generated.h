// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNodeCustomizationInterface.h"

#ifdef ANIMGRAPH_AnimGraphNodeCustomizationInterface_generated_h
#error "AnimGraphNodeCustomizationInterface.generated.h already included, missing '#pragma once' in AnimGraphNodeCustomizationInterface.h"
#endif
#define ANIMGRAPH_AnimGraphNodeCustomizationInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Interface UAnimGraphNodeCustomizationInterface *********************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTitleColor);


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNodeCustomizationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNodeCustomizationInterface(UAnimGraphNodeCustomizationInterface&&) = delete; \
	UAnimGraphNodeCustomizationInterface(const UAnimGraphNodeCustomizationInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNodeCustomizationInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNodeCustomizationInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNodeCustomizationInterface) \
	virtual ~UAnimGraphNodeCustomizationInterface() = default;


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimGraphNodeCustomizationInterface(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNodeCustomizationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNodeCustomizationInterface)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimGraphNodeCustomizationInterface() {} \
public: \
	typedef UAnimGraphNodeCustomizationInterface UClassType; \
	typedef IAnimGraphNodeCustomizationInterface ThisClass; \
	static FLinearColor Execute_GetTitleColor(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_9_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNodeCustomizationInterface;

// ********** End Interface UAnimGraphNodeCustomizationInterface ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
