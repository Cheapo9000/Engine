// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VariantManagerTestActor.h"

#ifdef VARIANTMANAGERCONTENTEDITOR_VariantManagerTestActor_generated_h
#error "VariantManagerTestActor.generated.h already included, missing '#pragma once' in VariantManagerTestActor.h"
#endif
#define VARIANTMANAGERCONTENTEDITOR_VariantManagerTestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVariantManagerTestActor *************************************************
struct Z_Construct_UClass_AVariantManagerTestActor_Statics;
VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_AVariantManagerTestActor_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVariantManagerTestActor(); \
	friend struct ::Z_Construct_UClass_AVariantManagerTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENTEDITOR_API UClass* ::Z_Construct_UClass_AVariantManagerTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVariantManagerTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VariantManagerContentEditor"), Z_Construct_UClass_AVariantManagerTestActor_NoRegister) \
	DECLARE_SERIALIZER(AVariantManagerTestActor)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVariantManagerTestActor(AVariantManagerTestActor&&) = delete; \
	AVariantManagerTestActor(const AVariantManagerTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENTEDITOR_API, AVariantManagerTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVariantManagerTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVariantManagerTestActor) \
	VARIANTMANAGERCONTENTEDITOR_API virtual ~AVariantManagerTestActor();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_20_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVariantManagerTestActor;

// ********** End Class AVariantManagerTestActor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h

// ********** Begin Enum EVariantManagerTestEnum ***************************************************
#define FOREACH_ENUM_EVARIANTMANAGERTESTENUM(op) \
	op(EVariantManagerTestEnum::None) \
	op(EVariantManagerTestEnum::FirstOption) \
	op(EVariantManagerTestEnum::SecondOption) \
	op(EVariantManagerTestEnum::ThirdOption) 

enum class EVariantManagerTestEnum : uint8;
template<> struct TIsUEnumClass<EVariantManagerTestEnum> { enum { Value = true }; };
template<> VARIANTMANAGERCONTENTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EVariantManagerTestEnum>();
// ********** End Enum EVariantManagerTestEnum *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
