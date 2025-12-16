// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveToolActivity.h"

#ifdef MODELINGCOMPONENTS_InteractiveToolActivity_generated_h
#error "InteractiveToolActivity.generated.h already included, missing '#pragma once' in InteractiveToolActivity.h"
#endif
#define MODELINGCOMPONENTS_InteractiveToolActivity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInteractiveToolActivity *************************************************
struct Z_Construct_UClass_UInteractiveToolActivity_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolActivity(); \
	friend struct ::Z_Construct_UClass_UInteractiveToolActivity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UInteractiveToolActivity_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveToolActivity, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UInteractiveToolActivity_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveToolActivity)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UInteractiveToolActivity(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveToolActivity(UInteractiveToolActivity&&) = delete; \
	UInteractiveToolActivity(const UInteractiveToolActivity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UInteractiveToolActivity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolActivity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveToolActivity)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_61_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveToolActivity;

// ********** End Class UInteractiveToolActivity ***************************************************

// ********** Begin Interface UToolActivityHost ****************************************************
struct Z_Construct_UClass_UToolActivityHost_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UToolActivityHost_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UToolActivityHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolActivityHost(UToolActivityHost&&) = delete; \
	UToolActivityHost(const UToolActivityHost&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UToolActivityHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolActivityHost); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolActivityHost) \
	virtual ~UToolActivityHost() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_156_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUToolActivityHost(); \
	friend struct ::Z_Construct_UClass_UToolActivityHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UToolActivityHost_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolActivityHost, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UToolActivityHost_NoRegister) \
	DECLARE_SERIALIZER(UToolActivityHost)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_156_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_156_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_156_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_156_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IToolActivityHost() {} \
public: \
	typedef UToolActivityHost UClassType; \
	typedef IToolActivityHost ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_153_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_156_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolActivityHost;

// ********** End Interface UToolActivityHost ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
