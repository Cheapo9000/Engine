// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/IO/PCGGetAssetList.h"

#ifdef PCG_PCGGetAssetList_generated_h
#error "PCGGetAssetList.generated.h already included, missing '#pragma once' in PCGGetAssetList.h"
#endif
#define PCG_PCGGetAssetList_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetAssetListSettings *************************************************
struct Z_Construct_UClass_UPCGGetAssetListSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetAssetListSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGGetAssetList_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetAssetListSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGetAssetListSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetAssetListSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetAssetListSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetAssetListSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetAssetListSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGGetAssetList_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGetAssetListSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetAssetListSettings(UPCGGetAssetListSettings&&) = delete; \
	UPCGGetAssetListSettings(const UPCGGetAssetListSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetAssetListSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetAssetListSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGetAssetListSettings) \
	PCG_API virtual ~UPCGGetAssetListSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGGetAssetList_h_27_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGGetAssetList_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGGetAssetList_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGGetAssetList_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetAssetListSettings;

// ********** End Class UPCGGetAssetListSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGGetAssetList_h

// ********** Begin Enum EPCGAssetListSource *******************************************************
#define FOREACH_ENUM_EPCGASSETLISTSOURCE(op) \
	op(EPCGAssetListSource::Folder) \
	op(EPCGAssetListSource::Collection) 

enum class EPCGAssetListSource : uint8;
template<> struct TIsUEnumClass<EPCGAssetListSource> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAssetListSource>();
// ********** End Enum EPCGAssetListSource *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
