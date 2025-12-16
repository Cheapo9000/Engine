// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTextActor.h"

#ifdef AVALANCHETEXT_AvaTextActor_generated_h
#error "AvaTextActor.generated.h already included, missing '#pragma once' in AvaTextActor.h"
#endif
#define AVALANCHETEXT_AvaTextActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAvaTextActor ************************************************************
struct Z_Construct_UClass_AAvaTextActor_Statics;
AVALANCHETEXT_API UClass* Z_Construct_UClass_AAvaTextActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaTextActor(); \
	friend struct ::Z_Construct_UClass_AAvaTextActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETEXT_API UClass* ::Z_Construct_UClass_AAvaTextActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAvaTextActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheText"), Z_Construct_UClass_AAvaTextActor_NoRegister) \
	DECLARE_SERIALIZER(AAvaTextActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAvaTextActor(AAvaTextActor&&) = delete; \
	AAvaTextActor(const AAvaTextActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETEXT_API, AAvaTextActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaTextActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaTextActor) \
	AVALANCHETEXT_API virtual ~AAvaTextActor();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextActor_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAvaTextActor;

// ********** End Class AAvaTextActor **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
