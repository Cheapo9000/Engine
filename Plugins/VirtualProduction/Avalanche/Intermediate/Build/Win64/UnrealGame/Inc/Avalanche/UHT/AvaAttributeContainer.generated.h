// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaAttributeContainer.h"

#ifdef AVALANCHE_AvaAttributeContainer_generated_h
#error "AvaAttributeContainer.generated.h already included, missing '#pragma once' in AvaAttributeContainer.h"
#endif
#define AVALANCHE_AvaAttributeContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaAttributeContainer ***************************************************
struct Z_Construct_UClass_UAvaAttributeContainer_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_UAvaAttributeContainer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaAttributeContainer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaAttributeContainer(); \
	friend struct ::Z_Construct_UClass_UAvaAttributeContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_UAvaAttributeContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaAttributeContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_UAvaAttributeContainer_NoRegister) \
	DECLARE_SERIALIZER(UAvaAttributeContainer)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaAttributeContainer_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaAttributeContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaAttributeContainer(UAvaAttributeContainer&&) = delete; \
	UAvaAttributeContainer(const UAvaAttributeContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaAttributeContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaAttributeContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaAttributeContainer) \
	AVALANCHE_API virtual ~UAvaAttributeContainer();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaAttributeContainer_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaAttributeContainer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaAttributeContainer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaAttributeContainer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaAttributeContainer;

// ********** End Class UAvaAttributeContainer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaAttributeContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
