// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/AvaNullActor.h"

#ifdef AVALANCHE_AvaNullActor_generated_h
#error "AvaNullActor.generated.h already included, missing '#pragma once' in AvaNullActor.h"
#endif
#define AVALANCHE_AvaNullActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAvaNullActor ************************************************************
struct Z_Construct_UClass_AAvaNullActor_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_AAvaNullActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaNullActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaNullActor(); \
	friend struct ::Z_Construct_UClass_AAvaNullActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_AAvaNullActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAvaNullActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_AAvaNullActor_NoRegister) \
	DECLARE_SERIALIZER(AAvaNullActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaNullActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAvaNullActor(AAvaNullActor&&) = delete; \
	AAvaNullActor(const AAvaNullActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, AAvaNullActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaNullActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaNullActor) \
	AVALANCHE_API virtual ~AAvaNullActor();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaNullActor_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaNullActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaNullActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaNullActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAvaNullActor;

// ********** End Class AAvaNullActor **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaNullActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
