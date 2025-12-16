// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mechanics/DragAlignmentMechanic.h"

#ifdef MODELINGCOMPONENTS_DragAlignmentMechanic_generated_h
#error "DragAlignmentMechanic.generated.h already included, missing '#pragma once' in DragAlignmentMechanic.h"
#endif
#define MODELINGCOMPONENTS_DragAlignmentMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDragAlignmentMechanic ***************************************************
struct Z_Construct_UClass_UDragAlignmentMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDragAlignmentMechanic(); \
	friend struct ::Z_Construct_UClass_UDragAlignmentMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UDragAlignmentMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UDragAlignmentMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister) \
	DECLARE_SERIALIZER(UDragAlignmentMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UDragAlignmentMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDragAlignmentMechanic(UDragAlignmentMechanic&&) = delete; \
	UDragAlignmentMechanic(const UDragAlignmentMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UDragAlignmentMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragAlignmentMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDragAlignmentMechanic) \
	MODELINGCOMPONENTS_API virtual ~UDragAlignmentMechanic();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_125_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_128_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDragAlignmentMechanic;

// ********** End Class UDragAlignmentMechanic *****************************************************

// ********** Begin Class UDragAlignmentInteraction ************************************************
struct Z_Construct_UClass_UDragAlignmentInteraction_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentInteraction_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDragAlignmentInteraction(); \
	friend struct ::Z_Construct_UClass_UDragAlignmentInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UDragAlignmentInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UDragAlignmentInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UDragAlignmentInteraction_NoRegister) \
	DECLARE_SERIALIZER(UDragAlignmentInteraction)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UDragAlignmentInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDragAlignmentInteraction(UDragAlignmentInteraction&&) = delete; \
	UDragAlignmentInteraction(const UDragAlignmentInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UDragAlignmentInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragAlignmentInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragAlignmentInteraction) \
	MODELINGCOMPONENTS_API virtual ~UDragAlignmentInteraction();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_160_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_163_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDragAlignmentInteraction;

// ********** End Class UDragAlignmentInteraction **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
