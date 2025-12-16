// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEQSTypes.h"

#ifdef MASSEQS_MassEQSTypes_generated_h
#error "MassEQSTypes.generated.h already included, missing '#pragma once' in MassEQSTypes.h"
#endif
#define MASSEQS_MassEQSTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassEnvQueryEntityInfo *******************************************
struct Z_Construct_UScriptStruct_FMassEnvQueryEntityInfo_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassEnvQueryEntityInfo_Statics; \
	MASSEQS_API static class UScriptStruct* StaticStruct();


struct FMassEnvQueryEntityInfo;
// ********** End ScriptStruct FMassEnvQueryEntityInfo *********************************************

// ********** Begin ScriptStruct FMassEQSRequestHandle *********************************************
struct Z_Construct_UScriptStruct_FMassEQSRequestHandle_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassEQSRequestHandle_Statics; \
	MASSEQS_API static class UScriptStruct* StaticStruct(); \
	typedef FIndexedHandleBase Super;


struct FMassEQSRequestHandle;
// ********** End ScriptStruct FMassEQSRequestHandle ***********************************************

// ********** Begin Interface UMassEQSRequestInterface *********************************************
struct Z_Construct_UClass_UMassEQSRequestInterface_Statics;
MASSEQS_API UClass* Z_Construct_UClass_UMassEQSRequestInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassEQSRequestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEQSRequestInterface(UMassEQSRequestInterface&&) = delete; \
	UMassEQSRequestInterface(const UMassEQSRequestInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassEQSRequestInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEQSRequestInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEQSRequestInterface) \
	virtual ~UMassEQSRequestInterface() = default;


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_72_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMassEQSRequestInterface(); \
	friend struct ::Z_Construct_UClass_UMassEQSRequestInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSEQS_API UClass* ::Z_Construct_UClass_UMassEQSRequestInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEQSRequestInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MassEQS"), Z_Construct_UClass_UMassEQSRequestInterface_NoRegister) \
	DECLARE_SERIALIZER(UMassEQSRequestInterface)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_72_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_72_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_72_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMassEQSRequestInterface() {} \
public: \
	typedef UMassEQSRequestInterface UClassType; \
	typedef IMassEQSRequestInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_69_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEQSRequestInterface;

// ********** End Interface UMassEQSRequestInterface ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
