// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Menus/NavigationToolItemMenuContext.h"

#ifdef SEQUENCENAVIGATOR_NavigationToolItemMenuContext_generated_h
#error "NavigationToolItemMenuContext.generated.h already included, missing '#pragma once' in NavigationToolItemMenuContext.h"
#endif
#define SEQUENCENAVIGATOR_NavigationToolItemMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavigationToolItemMenuContext *******************************************
struct Z_Construct_UClass_UNavigationToolItemMenuContext_Statics;
SEQUENCENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationToolItemMenuContext_NoRegister();

#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_Menus_NavigationToolItemMenuContext_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationToolItemMenuContext(); \
	friend struct ::Z_Construct_UClass_UNavigationToolItemMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCENAVIGATOR_API UClass* ::Z_Construct_UClass_UNavigationToolItemMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationToolItemMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceNavigator"), Z_Construct_UClass_UNavigationToolItemMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UNavigationToolItemMenuContext)


#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_Menus_NavigationToolItemMenuContext_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCENAVIGATOR_API UNavigationToolItemMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationToolItemMenuContext(UNavigationToolItemMenuContext&&) = delete; \
	UNavigationToolItemMenuContext(const UNavigationToolItemMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCENAVIGATOR_API, UNavigationToolItemMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationToolItemMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationToolItemMenuContext) \
	SEQUENCENAVIGATOR_API virtual ~UNavigationToolItemMenuContext();


#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_Menus_NavigationToolItemMenuContext_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_Menus_NavigationToolItemMenuContext_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_Menus_NavigationToolItemMenuContext_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_Menus_NavigationToolItemMenuContext_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationToolItemMenuContext;

// ********** End Class UNavigationToolItemMenuContext *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_Menus_NavigationToolItemMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
