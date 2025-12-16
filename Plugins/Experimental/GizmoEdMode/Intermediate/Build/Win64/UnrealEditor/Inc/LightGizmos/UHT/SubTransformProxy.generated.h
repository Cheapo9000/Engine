// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubTransformProxy.h"

#ifdef LIGHTGIZMOS_SubTransformProxy_generated_h
#error "SubTransformProxy.generated.h already included, missing '#pragma once' in SubTransformProxy.h"
#endif
#define LIGHTGIZMOS_SubTransformProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubTransformProxy *******************************************************
struct Z_Construct_UClass_USubTransformProxy_Statics;
LIGHTGIZMOS_API UClass* Z_Construct_UClass_USubTransformProxy_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SubTransformProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubTransformProxy(); \
	friend struct ::Z_Construct_UClass_USubTransformProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTGIZMOS_API UClass* ::Z_Construct_UClass_USubTransformProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(USubTransformProxy, UTransformProxy, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LightGizmos"), Z_Construct_UClass_USubTransformProxy_NoRegister) \
	DECLARE_SERIALIZER(USubTransformProxy)


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SubTransformProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubTransformProxy(USubTransformProxy&&) = delete; \
	USubTransformProxy(const USubTransformProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubTransformProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubTransformProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubTransformProxy) \
	NO_API virtual ~USubTransformProxy();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SubTransformProxy_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SubTransformProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SubTransformProxy_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SubTransformProxy_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubTransformProxy;

// ********** End Class USubTransformProxy *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SubTransformProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
