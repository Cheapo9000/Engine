// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomDetailsViewMenuContext.h"

#ifdef CUSTOMDETAILSVIEW_CustomDetailsViewMenuContext_generated_h
#error "CustomDetailsViewMenuContext.generated.h already included, missing '#pragma once' in CustomDetailsViewMenuContext.h"
#endif
#define CUSTOMDETAILSVIEW_CustomDetailsViewMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomDetailsViewMenuContext ********************************************
struct Z_Construct_UClass_UCustomDetailsViewMenuContext_Statics;
CUSTOMDETAILSVIEW_API UClass* Z_Construct_UClass_UCustomDetailsViewMenuContext_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CustomDetailsView_Source_CustomDetailsView_Public_CustomDetailsViewMenuContext_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomDetailsViewMenuContext(); \
	friend struct ::Z_Construct_UClass_UCustomDetailsViewMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMDETAILSVIEW_API UClass* ::Z_Construct_UClass_UCustomDetailsViewMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomDetailsViewMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomDetailsView"), Z_Construct_UClass_UCustomDetailsViewMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UCustomDetailsViewMenuContext)


#define FID_Engine_Plugins_VirtualProduction_CustomDetailsView_Source_CustomDetailsView_Public_CustomDetailsViewMenuContext_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMDETAILSVIEW_API UCustomDetailsViewMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomDetailsViewMenuContext(UCustomDetailsViewMenuContext&&) = delete; \
	UCustomDetailsViewMenuContext(const UCustomDetailsViewMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMDETAILSVIEW_API, UCustomDetailsViewMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomDetailsViewMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomDetailsViewMenuContext) \
	CUSTOMDETAILSVIEW_API virtual ~UCustomDetailsViewMenuContext();


#define FID_Engine_Plugins_VirtualProduction_CustomDetailsView_Source_CustomDetailsView_Public_CustomDetailsViewMenuContext_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CustomDetailsView_Source_CustomDetailsView_Public_CustomDetailsViewMenuContext_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CustomDetailsView_Source_CustomDetailsView_Public_CustomDetailsViewMenuContext_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CustomDetailsView_Source_CustomDetailsView_Public_CustomDetailsViewMenuContext_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomDetailsViewMenuContext;

// ********** End Class UCustomDetailsViewMenuContext **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CustomDetailsView_Source_CustomDetailsView_Public_CustomDetailsViewMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
