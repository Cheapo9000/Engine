// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenericSmartObject.h"

#ifdef SMARTOBJECTSMODULE_GenericSmartObject_generated_h
#error "GenericSmartObject.generated.h already included, missing '#pragma once' in GenericSmartObject.h"
#endif
#define SMARTOBJECTSMODULE_GenericSmartObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGenericSmartObject ******************************************************
struct Z_Construct_UClass_AGenericSmartObject_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_AGenericSmartObject_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenericSmartObject(); \
	friend struct ::Z_Construct_UClass_AGenericSmartObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_AGenericSmartObject_NoRegister(); \
public: \
	DECLARE_CLASS2(AGenericSmartObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_AGenericSmartObject_NoRegister) \
	DECLARE_SERIALIZER(AGenericSmartObject)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGenericSmartObject(AGenericSmartObject&&) = delete; \
	AGenericSmartObject(const AGenericSmartObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, AGenericSmartObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenericSmartObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGenericSmartObject) \
	SMARTOBJECTSMODULE_API virtual ~AGenericSmartObject();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGenericSmartObject;

// ********** End Class AGenericSmartObject ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
