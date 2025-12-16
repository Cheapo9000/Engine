// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDeleteTags.h"

#ifdef PCG_PCGDeleteTags_generated_h
#error "PCGDeleteTags.generated.h already included, missing '#pragma once' in PCGDeleteTags.h"
#endif
#define PCG_PCGDeleteTags_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDeleteTagsSettings ***************************************************
struct Z_Construct_UClass_UPCGDeleteTagsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDeleteTagsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteTags_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDeleteTagsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDeleteTagsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDeleteTagsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDeleteTagsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDeleteTagsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDeleteTagsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteTags_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDeleteTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDeleteTagsSettings(UPCGDeleteTagsSettings&&) = delete; \
	UPCGDeleteTagsSettings(const UPCGDeleteTagsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDeleteTagsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDeleteTagsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDeleteTagsSettings) \
	PCG_API virtual ~UPCGDeleteTagsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteTags_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteTags_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteTags_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteTags_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDeleteTagsSettings;

// ********** End Class UPCGDeleteTagsSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteTags_h

// ********** Begin Enum EPCGTagFilterOperation ****************************************************
#define FOREACH_ENUM_EPCGTAGFILTEROPERATION(op) \
	op(EPCGTagFilterOperation::KeepOnlySelectedTags) \
	op(EPCGTagFilterOperation::DeleteSelectedTags) 

enum class EPCGTagFilterOperation;
template<> struct TIsUEnumClass<EPCGTagFilterOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTagFilterOperation>();
// ********** End Enum EPCGTagFilterOperation ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
