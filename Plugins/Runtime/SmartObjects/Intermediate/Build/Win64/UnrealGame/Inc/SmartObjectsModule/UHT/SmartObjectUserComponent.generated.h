// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectUserComponent.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectUserComponent_generated_h
#error "SmartObjectUserComponent.generated.h already included, missing '#pragma once' in SmartObjectUserComponent.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectUserComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmartObjectUserComponent ************************************************
struct Z_Construct_UClass_USmartObjectUserComponent_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectUserComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectUserComponent(); \
	friend struct ::Z_Construct_UClass_USmartObjectUserComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectUserComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectUserComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectUserComponent_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectUserComponent) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectUserComponent(USmartObjectUserComponent&&) = delete; \
	USmartObjectUserComponent(const USmartObjectUserComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectUserComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectUserComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectUserComponent) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectUserComponent();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectUserComponent;

// ********** End Class USmartObjectUserComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
