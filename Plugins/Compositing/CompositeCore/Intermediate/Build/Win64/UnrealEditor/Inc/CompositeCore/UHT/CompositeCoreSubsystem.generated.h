// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositeCoreSubsystem.h"

#ifdef COMPOSITECORE_CompositeCoreSubsystem_generated_h
#error "CompositeCoreSubsystem.generated.h already included, missing '#pragma once' in CompositeCoreSubsystem.h"
#endif
#define COMPOSITECORE_CompositeCoreSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;

// ********** Begin Class UCompositeCoreSubsystem **************************************************
#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterPrimitive); \
	DECLARE_FUNCTION(execRegisterPrimitive);


struct Z_Construct_UClass_UCompositeCoreSubsystem_Statics;
COMPOSITECORE_API UClass* Z_Construct_UClass_UCompositeCoreSubsystem_NoRegister();

#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeCoreSubsystem(); \
	friend struct ::Z_Construct_UClass_UCompositeCoreSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITECORE_API UClass* ::Z_Construct_UClass_UCompositeCoreSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeCoreSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CompositeCore"), Z_Construct_UClass_UCompositeCoreSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCompositeCoreSubsystem)


#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeCoreSubsystem(UCompositeCoreSubsystem&&) = delete; \
	UCompositeCoreSubsystem(const UCompositeCoreSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITECORE_API, UCompositeCoreSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCoreSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositeCoreSubsystem) \
	COMPOSITECORE_API virtual ~UCompositeCoreSubsystem();


#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h_26_PROLOG
#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeCoreSubsystem;

// ********** End Class UCompositeCoreSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
