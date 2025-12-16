// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/GraphElement.h"

#ifdef GAMEPLAYGRAPH_GraphElement_generated_h
#error "GraphElement.generated.h already included, missing '#pragma once' in GraphElement.h"
#endif
#define GAMEPLAYGRAPH_GraphElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGraphElement ************************************************************
struct Z_Construct_UClass_UGraphElement_Statics;
GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphElement_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphElement(); \
	friend struct ::Z_Construct_UClass_UGraphElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYGRAPH_API UClass* ::Z_Construct_UClass_UGraphElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UGraphElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayGraph"), Z_Construct_UClass_UGraphElement_NoRegister) \
	DECLARE_SERIALIZER(UGraphElement)


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGraphElement(UGraphElement&&) = delete; \
	UGraphElement(const UGraphElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYGRAPH_API, UGraphElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphElement); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGraphElement) \
	GAMEPLAYGRAPH_API virtual ~UGraphElement();


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGraphElement;

// ********** End Class UGraphElement **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h

// ********** Begin Enum EGraphElementType *********************************************************
#define FOREACH_ENUM_EGRAPHELEMENTTYPE(op) \
	op(EGraphElementType::Node) \
	op(EGraphElementType::Edge) \
	op(EGraphElementType::Island) \
	op(EGraphElementType::Unknown) 

enum class EGraphElementType;
template<> struct TIsUEnumClass<EGraphElementType> { enum { Value = true }; };
template<> GAMEPLAYGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphElementType>();
// ********** End Enum EGraphElementType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
