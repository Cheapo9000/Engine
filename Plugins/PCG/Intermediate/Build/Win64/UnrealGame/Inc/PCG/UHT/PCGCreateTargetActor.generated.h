// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCreateTargetActor.h"

#ifdef PCG_PCGCreateTargetActor_generated_h
#error "PCGCreateTargetActor.generated.h already included, missing '#pragma once' in PCGCreateTargetActor.h"
#endif
#define PCG_PCGCreateTargetActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreateTargetActor ****************************************************
struct Z_Construct_UClass_UPCGCreateTargetActor_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreateTargetActor_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreateTargetActor(); \
	friend struct ::Z_Construct_UClass_UPCGCreateTargetActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreateTargetActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreateTargetActor, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreateTargetActor_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreateTargetActor)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreateTargetActor(UPCGCreateTargetActor&&) = delete; \
	UPCGCreateTargetActor(const UPCGCreateTargetActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCreateTargetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreateTargetActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCreateTargetActor) \
	PCG_API virtual ~UPCGCreateTargetActor();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreateTargetActor;

// ********** End Class UPCGCreateTargetActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
