// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IDataLinkEditorMenuContext.h"

#ifdef DATALINKEDITOR_IDataLinkEditorMenuContext_generated_h
#error "IDataLinkEditorMenuContext.generated.h already included, missing '#pragma once' in IDataLinkEditorMenuContext.h"
#endif
#define DATALINKEDITOR_IDataLinkEditorMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDataLinkEditorMenuContext *******************************************
struct Z_Construct_UClass_UDataLinkEditorMenuContext_Statics;
DATALINKEDITOR_API UClass* Z_Construct_UClass_UDataLinkEditorMenuContext_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKEDITOR_API UDataLinkEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkEditorMenuContext(UDataLinkEditorMenuContext&&) = delete; \
	UDataLinkEditorMenuContext(const UDataLinkEditorMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKEDITOR_API, UDataLinkEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkEditorMenuContext); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkEditorMenuContext) \
	virtual ~UDataLinkEditorMenuContext() = default;


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataLinkEditorMenuContext(); \
	friend struct ::Z_Construct_UClass_UDataLinkEditorMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKEDITOR_API UClass* ::Z_Construct_UClass_UDataLinkEditorMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkEditorMenuContext, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataLinkEditor"), Z_Construct_UClass_UDataLinkEditorMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkEditorMenuContext)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataLinkEditorMenuContext() {} \
public: \
	typedef UDataLinkEditorMenuContext UClassType; \
	typedef IDataLinkEditorMenuContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkEditorMenuContext;

// ********** End Interface UDataLinkEditorMenuContext *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Public_IDataLinkEditorMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
