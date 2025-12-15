// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/GarbageCollectionTesting.h"

#ifdef COREUOBJECT_GarbageCollectionTesting_generated_h
#error "GarbageCollectionTesting.generated.h already included, missing '#pragma once' in GarbageCollectionTesting.h"
#endif
#define COREUOBJECT_GarbageCollectionTesting_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectReachabilityStressData ********************************************
struct Z_Construct_UClass_UObjectReachabilityStressData_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObjectReachabilityStressData_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectReachabilityStressData(); \
	friend struct ::Z_Construct_UClass_UObjectReachabilityStressData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObjectReachabilityStressData_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectReachabilityStressData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObjectReachabilityStressData_NoRegister) \
	DECLARE_SERIALIZER(UObjectReachabilityStressData)


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectReachabilityStressData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectReachabilityStressData(UObjectReachabilityStressData&&) = delete; \
	UObjectReachabilityStressData(const UObjectReachabilityStressData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectReachabilityStressData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectReachabilityStressData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectReachabilityStressData) \
	NO_API virtual ~UObjectReachabilityStressData();


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h_15_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectReachabilityStressData;

// ********** End Class UObjectReachabilityStressData **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
