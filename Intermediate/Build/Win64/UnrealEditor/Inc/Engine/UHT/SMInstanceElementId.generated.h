// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementId.h"

#ifdef ENGINE_SMInstanceElementId_generated_h
#error "SMInstanceElementId.generated.h already included, missing '#pragma once' in SMInstanceElementId.h"
#endif
#define ENGINE_SMInstanceElementId_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USMInstanceElementIdMapTransactor ****************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_205_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USMInstanceElementIdMapTransactor, NO_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_205_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics;
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementIdMapTransactor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementIdMapTransactor(); \
	friend struct ::Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USMInstanceElementIdMapTransactor_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceElementIdMapTransactor, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USMInstanceElementIdMapTransactor_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceElementIdMapTransactor) \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_205_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_205_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceElementIdMapTransactor(USMInstanceElementIdMapTransactor&&) = delete; \
	USMInstanceElementIdMapTransactor(const USMInstanceElementIdMapTransactor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstanceElementIdMapTransactor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementIdMapTransactor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMInstanceElementIdMapTransactor) \
	NO_API virtual ~USMInstanceElementIdMapTransactor();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_202_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_205_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceElementIdMapTransactor;

// ********** End Class USMInstanceElementIdMapTransactor ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
