// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Internationalization/StringTable.h"

#ifdef ENGINE_StringTable_generated_h
#error "StringTable.generated.h already included, missing '#pragma once' in StringTable.h"
#endif
#define ENGINE_StringTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStringTable *************************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStringTable, ENGINE_API)


struct Z_Construct_UClass_UStringTable_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStringTable_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStringTable(); \
	friend struct ::Z_Construct_UClass_UStringTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStringTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UStringTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStringTable_NoRegister) \
	DECLARE_SERIALIZER(UStringTable) \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_30_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStringTable(UStringTable&&) = delete; \
	UStringTable(const UStringTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStringTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStringTable) \
	ENGINE_API virtual ~UStringTable();


#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStringTable;

// ********** End Class UStringTable ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
