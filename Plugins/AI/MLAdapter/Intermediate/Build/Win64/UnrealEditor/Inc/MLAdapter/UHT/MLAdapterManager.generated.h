// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/MLAdapterManager.h"

#ifdef MLADAPTER_MLAdapterManager_generated_h
#error "MLAdapterManager.generated.h already included, missing '#pragma once' in MLAdapterManager.h"
#endif
#define MLADAPTER_MLAdapterManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMLAdapterManager ********************************************************
struct Z_Construct_UClass_UMLAdapterManager_Statics;
MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterManager_NoRegister();

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterManager(); \
	friend struct ::Z_Construct_UClass_UMLAdapterManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLADAPTER_API UClass* ::Z_Construct_UClass_UMLAdapterManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLAdapterManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MLAdapter"), Z_Construct_UClass_UMLAdapterManager_NoRegister) \
	DECLARE_SERIALIZER(UMLAdapterManager)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLAdapterManager(UMLAdapterManager&&) = delete; \
	UMLAdapterManager(const UMLAdapterManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterManager) \
	NO_API virtual ~UMLAdapterManager();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_40_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLAdapterManager;

// ********** End Class UMLAdapterManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h

// ********** Begin Enum EMLAdapterServerMode ******************************************************
#define FOREACH_ENUM_EMLADAPTERSERVERMODE(op) \
	op(EMLAdapterServerMode::Invalid) \
	op(EMLAdapterServerMode::Server) \
	op(EMLAdapterServerMode::Client) \
	op(EMLAdapterServerMode::Standalone) \
	op(EMLAdapterServerMode::AutoDetect) 

enum class EMLAdapterServerMode : uint8;
template<> struct TIsUEnumClass<EMLAdapterServerMode> { enum { Value = true }; };
template<> MLADAPTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMLAdapterServerMode>();
// ********** End Enum EMLAdapterServerMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
