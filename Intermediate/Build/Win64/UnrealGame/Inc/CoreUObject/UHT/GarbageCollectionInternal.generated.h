// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/GarbageCollectionInternal.h"

#ifdef COREUOBJECT_GarbageCollectionInternal_generated_h
#error "GarbageCollectionInternal.generated.h already included, missing '#pragma once' in GarbageCollectionInternal.h"
#endif
#define COREUOBJECT_GarbageCollectionInternal_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGCBarrier ***************************************************************
struct Z_Construct_UClass_UGCBarrier_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UGCBarrier_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGCBarrier(); \
	friend struct ::Z_Construct_UClass_UGCBarrier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UGCBarrier_NoRegister(); \
public: \
	DECLARE_CLASS2(UGCBarrier, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UGCBarrier_NoRegister) \
	DECLARE_SERIALIZER(UGCBarrier)


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGCBarrier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGCBarrier(UGCBarrier&&) = delete; \
	UGCBarrier(const UGCBarrier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGCBarrier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGCBarrier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGCBarrier) \
	NO_API virtual ~UGCBarrier();


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h_26_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGCBarrier;

// ********** End Class UGCBarrier *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
