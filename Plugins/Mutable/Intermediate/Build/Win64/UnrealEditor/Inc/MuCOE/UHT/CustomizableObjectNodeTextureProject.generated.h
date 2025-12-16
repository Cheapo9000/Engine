// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeTextureProject.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeTextureProject_generated_h
#error "CustomizableObjectNodeTextureProject.generated.h already included, missing '#pragma once' in CustomizableObjectNodeTextureProject.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeTextureProject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectNodeTextureProject ************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeTextureProject, CUSTOMIZABLEOBJECTEDITOR_API)


struct Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeTextureProject(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeTextureProject_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeTextureProject, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeTextureProject) \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeTextureProject(UCustomizableObjectNodeTextureProject&&) = delete; \
	UCustomizableObjectNodeTextureProject(const UCustomizableObjectNodeTextureProject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeTextureProject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeTextureProject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodeTextureProject) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeTextureProject();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_35_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_39_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeTextureProject;

// ********** End Class UCustomizableObjectNodeTextureProject **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h

// ********** Begin Enum ETextureProjectSamplingMethod *********************************************
#define FOREACH_ENUM_ETEXTUREPROJECTSAMPLINGMETHOD(op) \
	op(ETextureProjectSamplingMethod::Point) \
	op(ETextureProjectSamplingMethod::BiLinear) 

enum class ETextureProjectSamplingMethod;
template<> struct TIsUEnumClass<ETextureProjectSamplingMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureProjectSamplingMethod>();
// ********** End Enum ETextureProjectSamplingMethod ***********************************************

// ********** Begin Enum ETextureProjectMinFilterMethod ********************************************
#define FOREACH_ENUM_ETEXTUREPROJECTMINFILTERMETHOD(op) \
	op(ETextureProjectMinFilterMethod::None) \
	op(ETextureProjectMinFilterMethod::TotalAreaHeuristic) 

enum class ETextureProjectMinFilterMethod;
template<> struct TIsUEnumClass<ETextureProjectMinFilterMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureProjectMinFilterMethod>();
// ********** End Enum ETextureProjectMinFilterMethod **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
