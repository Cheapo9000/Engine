// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavGraph/NavigationGraphNode.h"

#ifdef NAVIGATIONSYSTEM_NavigationGraphNode_generated_h
#error "NavigationGraphNode.generated.h already included, missing '#pragma once' in NavigationGraphNode.h"
#endif
#define NAVIGATIONSYSTEM_NavigationGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANavigationGraphNode *****************************************************
struct Z_Construct_UClass_ANavigationGraphNode_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANavigationGraphNode(); \
	friend struct ::Z_Construct_UClass_ANavigationGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_ANavigationGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavigationGraphNode, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_ANavigationGraphNode_NoRegister) \
	DECLARE_SERIALIZER(ANavigationGraphNode)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavigationGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavigationGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavigationGraphNode(ANavigationGraphNode&&) = delete; \
	ANavigationGraphNode(const ANavigationGraphNode&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~ANavigationGraphNode();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_13_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavigationGraphNode;

// ********** End Class ANavigationGraphNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
