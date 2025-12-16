// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/Backends/ChaosMoverBackend.h"

#ifdef CHAOSMOVER_ChaosMoverBackend_generated_h
#error "ChaosMoverBackend.generated.h already included, missing '#pragma once' in ChaosMoverBackend.h"
#endif
#define CHAOSMOVER_ChaosMoverBackend_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APawn;
class UPrimitiveComponent;
enum class EComponentPhysicsStateChange : uint8;

// ********** Begin Class UChaosMoverBackendComponent **********************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleOwningPawnControllerChanged_Server); \
	DECLARE_FUNCTION(execHandleUpdatedComponentPhysicsStateChanged);


struct Z_Construct_UClass_UChaosMoverBackendComponent_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosMoverBackendComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosMoverBackendComponent(); \
	friend struct ::Z_Construct_UClass_UChaosMoverBackendComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosMoverBackendComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosMoverBackendComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosMoverBackendComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosMoverBackendComponent) \
	DECLARE_WITHIN(UMoverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChaosMoverBackendComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosMoverBackendComponent(UChaosMoverBackendComponent&&) = delete; \
	UChaosMoverBackendComponent(const UChaosMoverBackendComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosMoverBackendComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosMoverBackendComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosMoverBackendComponent) \
	CHAOSMOVER_API virtual ~UChaosMoverBackendComponent();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosMoverBackendComponent;

// ********** End Class UChaosMoverBackendComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Backends_ChaosMoverBackend_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
