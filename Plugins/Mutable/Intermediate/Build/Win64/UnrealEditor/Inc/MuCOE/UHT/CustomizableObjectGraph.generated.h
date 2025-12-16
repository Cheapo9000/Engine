// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectGraph.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectGraph_generated_h
#error "CustomizableObjectGraph.generated.h already included, missing '#pragma once' in CustomizableObjectGraph.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectGraph *************************************************
struct Z_Construct_UClass_UCustomizableObjectGraph_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectGraph_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectGraph_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectGraph(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectGraph_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectGraph)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectGraph_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectGraph(UCustomizableObjectGraph&&) = delete; \
	UCustomizableObjectGraph(const UCustomizableObjectGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectGraph) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectGraph();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectGraph_h_13_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectGraph_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectGraph_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectGraph_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectGraph;

// ********** End Class UCustomizableObjectGraph ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
