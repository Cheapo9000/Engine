// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassObserverRegistry.h"

#ifdef MASSENTITY_MassObserverRegistry_generated_h
#error "MassObserverRegistry.generated.h already included, missing '#pragma once' in MassObserverRegistry.h"
#endif
#define MASSENTITY_MassObserverRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassProcessorClassCollection *************************************
struct Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


struct FMassProcessorClassCollection;
// ********** End ScriptStruct FMassProcessorClassCollection ***************************************

// ********** Begin ScriptStruct FMassEntityObserverClassesMap *************************************
struct Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


struct FMassEntityObserverClassesMap;
// ********** End ScriptStruct FMassEntityObserverClassesMap ***************************************

// ********** Begin Class UMassObserverRegistry ****************************************************
struct Z_Construct_UClass_UMassObserverRegistry_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverRegistry_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassObserverRegistry(); \
	friend struct ::Z_Construct_UClass_UMassObserverRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassObserverRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassObserverRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassObserverRegistry_NoRegister) \
	DECLARE_SERIALIZER(UMassObserverRegistry)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassObserverRegistry(UMassObserverRegistry&&) = delete; \
	UMassObserverRegistry(const UMassObserverRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassObserverRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassObserverRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassObserverRegistry) \
	MASSENTITY_API virtual ~UMassObserverRegistry();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_51_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassObserverRegistry;

// ********** End Class UMassObserverRegistry ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
