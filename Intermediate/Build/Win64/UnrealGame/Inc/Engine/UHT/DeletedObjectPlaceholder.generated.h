// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeletedObjectPlaceholder.h"

#ifdef ENGINE_DeletedObjectPlaceholder_generated_h
#error "DeletedObjectPlaceholder.generated.h already included, missing '#pragma once' in DeletedObjectPlaceholder.h"
#endif
#define ENGINE_DeletedObjectPlaceholder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDeletedObjectPlaceholder ************************************************
struct Z_Construct_UClass_UDeletedObjectPlaceholder_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDeletedObjectPlaceholder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeletedObjectPlaceholder(); \
	friend struct ::Z_Construct_UClass_UDeletedObjectPlaceholder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDeletedObjectPlaceholder_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeletedObjectPlaceholder, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDeletedObjectPlaceholder_NoRegister) \
	DECLARE_SERIALIZER(UDeletedObjectPlaceholder)


#define FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDeletedObjectPlaceholder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeletedObjectPlaceholder(UDeletedObjectPlaceholder&&) = delete; \
	UDeletedObjectPlaceholder(const UDeletedObjectPlaceholder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDeletedObjectPlaceholder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeletedObjectPlaceholder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeletedObjectPlaceholder) \
	ENGINE_API virtual ~UDeletedObjectPlaceholder();


#define FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeletedObjectPlaceholder;

// ********** End Class UDeletedObjectPlaceholder **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
