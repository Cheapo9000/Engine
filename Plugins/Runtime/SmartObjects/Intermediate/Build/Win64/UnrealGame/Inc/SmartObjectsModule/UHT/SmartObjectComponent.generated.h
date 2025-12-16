// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectComponent.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectComponent_generated_h
#error "SmartObjectComponent.generated.h already included, missing '#pragma once' in SmartObjectComponent.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USmartObjectDefinition;
struct FGameplayTag;
struct FSmartObjectEventData;

// ********** Begin Delegate FSmartObjectComponentEventSignature ***********************************
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_19_DELEGATE \
SMARTOBJECTSMODULE_API void FSmartObjectComponentEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SmartObjectComponentEventSignature, FSmartObjectEventData const& EventData, const AActor* Interactor);


// ********** End Delegate FSmartObjectComponentEventSignature *************************************

// ********** Begin Class USmartObjectComponent ****************************************************
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsBoundToSimulation); \
	DECLARE_FUNCTION(execIsSmartObjectEnabledForReason); \
	DECLARE_FUNCTION(execIsSmartObjectEnabled); \
	DECLARE_FUNCTION(execSetSmartObjectEnabledForReason); \
	DECLARE_FUNCTION(execSetSmartObjectEnabled); \
	DECLARE_FUNCTION(execSetDefinition); \
	DECLARE_FUNCTION(execGetDefinition);


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USmartObjectComponent, SMARTOBJECTSMODULE_API)


struct Z_Construct_UClass_USmartObjectComponent_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectComponent(); \
	friend struct ::Z_Construct_UClass_USmartObjectComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectComponent_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectComponent) \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DefinitionRef=NETFIELD_REP_START, \
		RegisteredHandle, \
		NETFIELD_REP_END=RegisteredHandle	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(SMARTOBJECTSMODULE_API)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectComponent(USmartObjectComponent&&) = delete; \
	USmartObjectComponent(const USmartObjectComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectComponent) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectComponent();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_55_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectComponent;

// ********** End Class USmartObjectComponent ******************************************************

// ********** Begin ScriptStruct FSmartObjectComponentInstanceData *********************************
struct Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_291_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


struct FSmartObjectComponentInstanceData;
// ********** End ScriptStruct FSmartObjectComponentInstanceData ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
