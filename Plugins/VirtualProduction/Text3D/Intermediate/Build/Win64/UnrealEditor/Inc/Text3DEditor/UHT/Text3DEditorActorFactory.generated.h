// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/Text3DEditorActorFactory.h"

#ifdef TEXT3DEDITOR_Text3DEditorActorFactory_generated_h
#error "Text3DEditorActorFactory.generated.h already included, missing '#pragma once' in Text3DEditorActorFactory.h"
#endif
#define TEXT3DEDITOR_Text3DEditorActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UText3DEditorActorFactory ************************************************
struct Z_Construct_UClass_UText3DEditorActorFactory_Statics;
TEXT3DEDITOR_API UClass* Z_Construct_UClass_UText3DEditorActorFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Factories_Text3DEditorActorFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DEditorActorFactory(); \
	friend struct ::Z_Construct_UClass_UText3DEditorActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3DEDITOR_API UClass* ::Z_Construct_UClass_UText3DEditorActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DEditorActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Text3DEditor"), Z_Construct_UClass_UText3DEditorActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UText3DEditorActorFactory)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Factories_Text3DEditorActorFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DEditorActorFactory(UText3DEditorActorFactory&&) = delete; \
	UText3DEditorActorFactory(const UText3DEditorActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText3DEditorActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DEditorActorFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DEditorActorFactory) \
	NO_API virtual ~UText3DEditorActorFactory();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Factories_Text3DEditorActorFactory_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Factories_Text3DEditorActorFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Factories_Text3DEditorActorFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Factories_Text3DEditorActorFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DEditorActorFactory;

// ********** End Class UText3DEditorActorFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Factories_Text3DEditorActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
