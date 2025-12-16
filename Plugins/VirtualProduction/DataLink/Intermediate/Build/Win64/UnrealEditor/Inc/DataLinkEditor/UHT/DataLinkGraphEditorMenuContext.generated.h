// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkGraphEditorMenuContext.h"

#ifdef DATALINKEDITOR_DataLinkGraphEditorMenuContext_generated_h
#error "DataLinkGraphEditorMenuContext.generated.h already included, missing '#pragma once' in DataLinkGraphEditorMenuContext.h"
#endif
#define DATALINKEDITOR_DataLinkGraphEditorMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkGraphEditorMenuContext ******************************************
struct Z_Construct_UClass_UDataLinkGraphEditorMenuContext_Statics;
DATALINKEDITOR_API UClass* Z_Construct_UClass_UDataLinkGraphEditorMenuContext_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphEditorMenuContext_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkGraphEditorMenuContext(); \
	friend struct ::Z_Construct_UClass_UDataLinkGraphEditorMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKEDITOR_API UClass* ::Z_Construct_UClass_UDataLinkGraphEditorMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkGraphEditorMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkEditor"), Z_Construct_UClass_UDataLinkGraphEditorMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkGraphEditorMenuContext) \
	virtual UObject* _getUObject() const override { return const_cast<UDataLinkGraphEditorMenuContext*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphEditorMenuContext_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLinkGraphEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkGraphEditorMenuContext(UDataLinkGraphEditorMenuContext&&) = delete; \
	UDataLinkGraphEditorMenuContext(const UDataLinkGraphEditorMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLinkGraphEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkGraphEditorMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkGraphEditorMenuContext) \
	NO_API virtual ~UDataLinkGraphEditorMenuContext();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphEditorMenuContext_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphEditorMenuContext_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphEditorMenuContext_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphEditorMenuContext_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkGraphEditorMenuContext;

// ********** End Class UDataLinkGraphEditorMenuContext ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphEditorMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
