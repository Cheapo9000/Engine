// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGFilterByTag.h"

#ifdef PCG_PCGFilterByTag_generated_h
#error "PCGFilterByTag.generated.h already included, missing '#pragma once' in PCGFilterByTag.h"
#endif
#define PCG_PCGFilterByTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGFilterByTagSettings **************************************************
struct Z_Construct_UClass_UPCGFilterByTagSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGFilterByTagSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGFilterByTagSettings(); \
	friend struct ::Z_Construct_UClass_UPCGFilterByTagSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGFilterByTagSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGFilterByTagSettings, UPCGFilterDataBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGFilterByTagSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGFilterByTagSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGFilterByTagSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGFilterByTagSettings(UPCGFilterByTagSettings&&) = delete; \
	UPCGFilterByTagSettings(const UPCGFilterByTagSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGFilterByTagSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGFilterByTagSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGFilterByTagSettings) \
	PCG_API virtual ~UPCGFilterByTagSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGFilterByTagSettings;

// ********** End Class UPCGFilterByTagSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h

// ********** Begin Enum EPCGFilterByTagOperation **************************************************
#define FOREACH_ENUM_EPCGFILTERBYTAGOPERATION(op) \
	op(EPCGFilterByTagOperation::KeepTagged) \
	op(EPCGFilterByTagOperation::RemoveTagged) 

enum class EPCGFilterByTagOperation;
template<> struct TIsUEnumClass<EPCGFilterByTagOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGFilterByTagOperation>();
// ********** End Enum EPCGFilterByTagOperation ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
