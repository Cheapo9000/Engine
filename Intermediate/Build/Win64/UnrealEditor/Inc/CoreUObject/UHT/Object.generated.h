// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/Object.h"

#ifdef COREUOBJECT_Object_generated_h
#error "Object.generated.h already included, missing '#pragma once' in Object.h"
#endif
#define COREUOBJECT_Object_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObject ******************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h_96_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObject(); \
	friend struct ::Z_Construct_UClass_UObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UObject_NoRegister) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h_96_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObject(UObject&&) = delete; \
	UObject(const UObject&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObject) \
	COREUOBJECT_API virtual ~UObject();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h_93_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h_96_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObject;

// ********** End Class UObject ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
