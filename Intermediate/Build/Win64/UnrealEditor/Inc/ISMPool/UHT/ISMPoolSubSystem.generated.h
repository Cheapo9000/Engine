// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISMPool/ISMPoolSubSystem.h"

#ifdef ISMPOOL_ISMPoolSubSystem_generated_h
#error "ISMPoolSubSystem.generated.h already included, missing '#pragma once' in ISMPoolSubSystem.h"
#endif
#define ISMPOOL_ISMPoolSubSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UISMPoolSubSystem ********************************************************
#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorEndPlay);


struct Z_Construct_UClass_UISMPoolSubSystem_Statics;
ISMPOOL_API UClass* Z_Construct_UClass_UISMPoolSubSystem_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISMPoolSubSystem(); \
	friend struct ::Z_Construct_UClass_UISMPoolSubSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ISMPOOL_API UClass* ::Z_Construct_UClass_UISMPoolSubSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UISMPoolSubSystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISMPool"), Z_Construct_UClass_UISMPoolSubSystem_NoRegister) \
	DECLARE_SERIALIZER(UISMPoolSubSystem)


#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UISMPoolSubSystem(UISMPoolSubSystem&&) = delete; \
	UISMPoolSubSystem(const UISMPoolSubSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ISMPOOL_API, UISMPoolSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISMPoolSubSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISMPoolSubSystem) \
	ISMPOOL_API virtual ~UISMPoolSubSystem();


#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h_13_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UISMPoolSubSystem;

// ********** End Class UISMPoolSubSystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
