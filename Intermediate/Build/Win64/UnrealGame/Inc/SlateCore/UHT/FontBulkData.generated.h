// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fonts/FontBulkData.h"

#ifdef SLATECORE_FontBulkData_generated_h
#error "FontBulkData.generated.h already included, missing '#pragma once' in FontBulkData.h"
#endif
#define SLATECORE_FontBulkData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFontBulkData ************************************************************
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFontBulkData, SLATECORE_API)


struct Z_Construct_UClass_UFontBulkData_Statics;
SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData_NoRegister();

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFontBulkData(); \
	friend struct ::Z_Construct_UClass_UFontBulkData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATECORE_API UClass* ::Z_Construct_UClass_UFontBulkData_NoRegister(); \
public: \
	DECLARE_CLASS2(UFontBulkData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateCore"), Z_Construct_UClass_UFontBulkData_NoRegister) \
	DECLARE_SERIALIZER(UFontBulkData) \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFontBulkData(UFontBulkData&&) = delete; \
	UFontBulkData(const UFontBulkData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontBulkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontBulkData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFontBulkData) \
	SLATECORE_API virtual ~UFontBulkData();


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_11_PROLOG
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFontBulkData;

// ********** End Class UFontBulkData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
