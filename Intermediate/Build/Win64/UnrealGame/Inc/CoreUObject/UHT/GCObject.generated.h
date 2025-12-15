// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/GCObject.h"

#ifdef COREUOBJECT_GCObject_generated_h
#error "GCObject.generated.h already included, missing '#pragma once' in GCObject.h"
#endif
#define COREUOBJECT_GCObject_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGCObjectReferencer ******************************************************
struct Z_Construct_UClass_UGCObjectReferencer_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UGCObjectReferencer_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGCObjectReferencer(); \
	friend struct ::Z_Construct_UClass_UGCObjectReferencer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UGCObjectReferencer_NoRegister(); \
public: \
	DECLARE_CLASS2(UGCObjectReferencer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UGCObjectReferencer_NoRegister) \
	DECLARE_SERIALIZER(UGCObjectReferencer)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGCObjectReferencer(UGCObjectReferencer&&) = delete; \
	UGCObjectReferencer(const UGCObjectReferencer&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGCObjectReferencer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGCObjectReferencer)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h_27_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h_39_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGCObjectReferencer;

// ********** End Class UGCObjectReferencer ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
