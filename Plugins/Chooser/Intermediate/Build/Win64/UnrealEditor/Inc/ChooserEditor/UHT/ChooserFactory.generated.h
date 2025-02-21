// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSEREDITOR_ChooserFactory_generated_h
#error "ChooserFactory.generated.h already included, missing '#pragma once' in ChooserFactory.h"
#endif
#define CHOOSEREDITOR_ChooserFactory_generated_h

#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChooserTableFactory(); \
	friend struct Z_Construct_UClass_UChooserTableFactory_Statics; \
public: \
	DECLARE_CLASS(UChooserTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChooserEditor"), CHOOSEREDITOR_API) \
	DECLARE_SERIALIZER(UChooserTableFactory)


#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChooserTableFactory(UChooserTableFactory&&); \
	UChooserTableFactory(const UChooserTableFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSEREDITOR_API, UChooserTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserTableFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChooserTableFactory) \
	CHOOSEREDITOR_API virtual ~UChooserTableFactory();


#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFactory_h_11_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSEREDITOR_API UClass* StaticClass<class UChooserTableFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
