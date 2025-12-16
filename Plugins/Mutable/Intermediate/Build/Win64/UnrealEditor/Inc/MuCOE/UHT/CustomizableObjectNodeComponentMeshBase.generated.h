// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeComponentMeshBase.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeComponentMeshBase_generated_h
#error "CustomizableObjectNodeComponentMeshBase.generated.h already included, missing '#pragma once' in CustomizableObjectNodeComponentMeshBase.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeComponentMeshBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCustomizableObjectNodeComponentMeshInterface ************************
struct Z_Construct_UClass_UCustomizableObjectNodeComponentMeshInterface_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeComponentMeshInterface_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeComponentMeshInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeComponentMeshInterface(UCustomizableObjectNodeComponentMeshInterface&&) = delete; \
	UCustomizableObjectNodeComponentMeshInterface(const UCustomizableObjectNodeComponentMeshInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeComponentMeshInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeComponentMeshInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeComponentMeshInterface) \
	virtual ~UCustomizableObjectNodeComponentMeshInterface() = default;


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeComponentMeshInterface(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeComponentMeshInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeComponentMeshInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeComponentMeshInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeComponentMeshInterface_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeComponentMeshInterface)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICustomizableObjectNodeComponentMeshInterface() {} \
public: \
	typedef UCustomizableObjectNodeComponentMeshInterface UClassType; \
	typedef ICustomizableObjectNodeComponentMeshInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_29_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeComponentMeshInterface;

// ********** End Interface UCustomizableObjectNodeComponentMeshInterface **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshBase_h

// ********** Begin Enum ECustomizableObjectAutomaticLODStrategy ***********************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTAUTOMATICLODSTRATEGY(op) \
	op(ECustomizableObjectAutomaticLODStrategy::Inherited) \
	op(ECustomizableObjectAutomaticLODStrategy::Manual) \
	op(ECustomizableObjectAutomaticLODStrategy::AutomaticFromMesh) 

enum class ECustomizableObjectAutomaticLODStrategy : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectAutomaticLODStrategy> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectAutomaticLODStrategy>();
// ********** End Enum ECustomizableObjectAutomaticLODStrategy *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
