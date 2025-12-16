// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SignificanceManager.h"

#ifdef SIGNIFICANCEMANAGER_SignificanceManager_generated_h
#error "SignificanceManager.generated.h already included, missing '#pragma once' in SignificanceManager.h"
#endif
#define SIGNIFICANCEMANAGER_SignificanceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USignificanceManager *****************************************************
struct Z_Construct_UClass_USignificanceManager_Statics;
SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager_NoRegister();

#define FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSignificanceManager(); \
	friend struct ::Z_Construct_UClass_USignificanceManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIGNIFICANCEMANAGER_API UClass* ::Z_Construct_UClass_USignificanceManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USignificanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SignificanceManager"), Z_Construct_UClass_USignificanceManager_NoRegister) \
	DECLARE_SERIALIZER(USignificanceManager)


#define FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USignificanceManager(USignificanceManager&&) = delete; \
	USignificanceManager(const USignificanceManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SIGNIFICANCEMANAGER_API, USignificanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignificanceManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USignificanceManager) \
	SIGNIFICANCEMANAGER_API virtual ~USignificanceManager();


#define FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USignificanceManager;

// ********** End Class USignificanceManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
