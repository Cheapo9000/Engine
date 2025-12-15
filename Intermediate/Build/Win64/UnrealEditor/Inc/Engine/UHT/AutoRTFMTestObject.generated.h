// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/AutoRTFM/AutoRTFMTestObject.h"

#ifdef ENGINE_AutoRTFMTestObject_generated_h
#error "AutoRTFMTestObject.generated.h already included, missing '#pragma once' in AutoRTFMTestObject.h"
#endif
#define ENGINE_AutoRTFMTestObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class EComponentPhysicsStateChange : uint8;

// ********** Begin Class UAutoRTFMTestObject ******************************************************
#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentPhysicsStateChanged);


struct Z_Construct_UClass_UAutoRTFMTestObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoRTFMTestObject(); \
	friend struct ::Z_Construct_UClass_UAutoRTFMTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAutoRTFMTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutoRTFMTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAutoRTFMTestObject_NoRegister) \
	DECLARE_SERIALIZER(UAutoRTFMTestObject)


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutoRTFMTestObject(UAutoRTFMTestObject&&) = delete; \
	UAutoRTFMTestObject(const UAutoRTFMTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoRTFMTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoRTFMTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoRTFMTestObject) \
	NO_API virtual ~UAutoRTFMTestObject();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_7_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutoRTFMTestObject;

// ********** End Class UAutoRTFMTestObject ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
