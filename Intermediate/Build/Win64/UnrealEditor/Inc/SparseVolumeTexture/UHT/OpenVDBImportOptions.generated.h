// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenVDBImportOptions.h"

#ifdef SPARSEVOLUMETEXTURE_OpenVDBImportOptions_generated_h
#error "OpenVDBImportOptions.generated.h already included, missing '#pragma once' in OpenVDBImportOptions.h"
#endif
#define SPARSEVOLUMETEXTURE_OpenVDBImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOpenVDBImportOptionsObject **********************************************
struct Z_Construct_UClass_UOpenVDBImportOptionsObject_Statics;
SPARSEVOLUMETEXTURE_API UClass* Z_Construct_UClass_UOpenVDBImportOptionsObject_NoRegister();

#define FID_Engine_Source_Editor_SparseVolumeTexture_Public_OpenVDBImportOptions_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenVDBImportOptionsObject(); \
	friend struct ::Z_Construct_UClass_UOpenVDBImportOptionsObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPARSEVOLUMETEXTURE_API UClass* ::Z_Construct_UClass_UOpenVDBImportOptionsObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenVDBImportOptionsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SparseVolumeTexture"), Z_Construct_UClass_UOpenVDBImportOptionsObject_NoRegister) \
	DECLARE_SERIALIZER(UOpenVDBImportOptionsObject)


#define FID_Engine_Source_Editor_SparseVolumeTexture_Public_OpenVDBImportOptions_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPARSEVOLUMETEXTURE_API UOpenVDBImportOptionsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenVDBImportOptionsObject(UOpenVDBImportOptionsObject&&) = delete; \
	UOpenVDBImportOptionsObject(const UOpenVDBImportOptionsObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPARSEVOLUMETEXTURE_API, UOpenVDBImportOptionsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenVDBImportOptionsObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenVDBImportOptionsObject) \
	SPARSEVOLUMETEXTURE_API virtual ~UOpenVDBImportOptionsObject();


#define FID_Engine_Source_Editor_SparseVolumeTexture_Public_OpenVDBImportOptions_h_84_PROLOG
#define FID_Engine_Source_Editor_SparseVolumeTexture_Public_OpenVDBImportOptions_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SparseVolumeTexture_Public_OpenVDBImportOptions_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SparseVolumeTexture_Public_OpenVDBImportOptions_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenVDBImportOptionsObject;

// ********** End Class UOpenVDBImportOptionsObject ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SparseVolumeTexture_Public_OpenVDBImportOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
