// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDProjectSettings.h"

#ifdef USDCLASSES_USDProjectSettings_generated_h
#error "USDProjectSettings.generated.h already included, missing '#pragma once' in USDProjectSettings.h"
#endif
#define USDCLASSES_USDProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdProjectSettings ******************************************************
struct Z_Construct_UClass_UUsdProjectSettings_Statics;
USDCLASSES_API UClass* Z_Construct_UClass_UUsdProjectSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdProjectSettings(); \
	friend struct ::Z_Construct_UClass_UUsdProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDCLASSES_API UClass* ::Z_Construct_UClass_UUsdProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDClasses"), Z_Construct_UClass_UUsdProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UUsdProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("USDCore");} \



#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDCLASSES_API UUsdProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdProjectSettings(UUsdProjectSettings&&) = delete; \
	UUsdProjectSettings(const UUsdProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDCLASSES_API, UUsdProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdProjectSettings) \
	USDCLASSES_API virtual ~UUsdProjectSettings();


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_39_PROLOG
#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdProjectSettings;

// ********** End Class UUsdProjectSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h

// ********** Begin Enum EUsdSaveDialogBehavior ****************************************************
#define FOREACH_ENUM_EUSDSAVEDIALOGBEHAVIOR(op) \
	op(EUsdSaveDialogBehavior::NeverSave) \
	op(EUsdSaveDialogBehavior::AlwaysSave) \
	op(EUsdSaveDialogBehavior::ShowPrompt) 

enum class EUsdSaveDialogBehavior : uint8;
template<> struct TIsUEnumClass<EUsdSaveDialogBehavior> { enum { Value = true }; };
template<> USDCLASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EUsdSaveDialogBehavior>();
// ********** End Enum EUsdSaveDialogBehavior ******************************************************

// ********** Begin Enum EUsdEditInInstanceBehavior ************************************************
#define FOREACH_ENUM_EUSDEDITININSTANCEBEHAVIOR(op) \
	op(EUsdEditInInstanceBehavior::Ignore) \
	op(EUsdEditInInstanceBehavior::RemoveInstanceable) \
	op(EUsdEditInInstanceBehavior::ShowPrompt) 

enum class EUsdEditInInstanceBehavior : uint8;
template<> struct TIsUEnumClass<EUsdEditInInstanceBehavior> { enum { Value = true }; };
template<> USDCLASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EUsdEditInInstanceBehavior>();
// ********** End Enum EUsdEditInInstanceBehavior **************************************************

// ********** Begin Enum EReferencerTypeHandling ***************************************************
#define FOREACH_ENUM_EREFERENCERTYPEHANDLING(op) \
	op(EReferencerTypeHandling::Ignore) \
	op(EReferencerTypeHandling::MatchReferencedType) \
	op(EReferencerTypeHandling::ClearReferencerType) \
	op(EReferencerTypeHandling::ShowPrompt) 

enum class EReferencerTypeHandling : uint8;
template<> struct TIsUEnumClass<EReferencerTypeHandling> { enum { Value = true }; };
template<> USDCLASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EReferencerTypeHandling>();
// ********** End Enum EReferencerTypeHandling *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
