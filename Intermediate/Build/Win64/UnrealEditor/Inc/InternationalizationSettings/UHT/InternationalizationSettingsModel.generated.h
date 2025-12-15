// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InternationalizationSettingsModel.h"

#ifdef INTERNATIONALIZATIONSETTINGS_InternationalizationSettingsModel_generated_h
#error "InternationalizationSettingsModel.generated.h already included, missing '#pragma once' in InternationalizationSettingsModel.h"
#endif
#define INTERNATIONALIZATIONSETTINGS_InternationalizationSettingsModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInternationalizationSettingsModel ***************************************
struct Z_Construct_UClass_UInternationalizationSettingsModel_Statics;
INTERNATIONALIZATIONSETTINGS_API UClass* Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister();

#define FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUInternationalizationSettingsModel(); \
	friend struct ::Z_Construct_UClass_UInternationalizationSettingsModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERNATIONALIZATIONSETTINGS_API UClass* ::Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UInternationalizationSettingsModel, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InternationalizationSettings"), Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister) \
	DECLARE_SERIALIZER(UInternationalizationSettingsModel) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERNATIONALIZATIONSETTINGS_API UInternationalizationSettingsModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInternationalizationSettingsModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERNATIONALIZATIONSETTINGS_API, UInternationalizationSettingsModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInternationalizationSettingsModel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInternationalizationSettingsModel(UInternationalizationSettingsModel&&) = delete; \
	UInternationalizationSettingsModel(const UInternationalizationSettingsModel&) = delete; \
	INTERNATIONALIZATIONSETTINGS_API virtual ~UInternationalizationSettingsModel();


#define FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_124_PROLOG
#define FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_128_INCLASS \
	FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInternationalizationSettingsModel;

// ********** End Class UInternationalizationSettingsModel *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h

// ********** Begin Enum ETimezoneSetting **********************************************************
#define FOREACH_ENUM_ETIMEZONESETTING(op) \
	op(ETimezoneSetting::InternationalDateLineWest) \
	op(ETimezoneSetting::CoordinatedUniversalTimeNeg11) \
	op(ETimezoneSetting::Samoa) \
	op(ETimezoneSetting::Hawaii) \
	op(ETimezoneSetting::Alaska) \
	op(ETimezoneSetting::PacificTime_USCAN) \
	op(ETimezoneSetting::BajaCalifornia) \
	op(ETimezoneSetting::MountainTime_USCAN) \
	op(ETimezoneSetting::Chihuahua_LaPaz_Mazatlan) \
	op(ETimezoneSetting::Arizona) \
	op(ETimezoneSetting::Saskatchewan) \
	op(ETimezoneSetting::CentralAmerica) \
	op(ETimezoneSetting::CentralTime_USCAN) \
	op(ETimezoneSetting::Guadalajara_MexicoCity_Monterrey) \
	op(ETimezoneSetting::EasternTime_USCAN) \
	op(ETimezoneSetting::Bogota_Lima_Quito) \
	op(ETimezoneSetting::Indiana_US) \
	op(ETimezoneSetting::Caracas) \
	op(ETimezoneSetting::AtlanticTime_Canada) \
	op(ETimezoneSetting::Cuiaba) \
	op(ETimezoneSetting::Santiago) \
	op(ETimezoneSetting::Georgetown_LaPaz_Manaus_SanJuan) \
	op(ETimezoneSetting::Asuncion) \
	op(ETimezoneSetting::Newfoundland) \
	op(ETimezoneSetting::Brasilia) \
	op(ETimezoneSetting::Greenland) \
	op(ETimezoneSetting::Montevideo) \
	op(ETimezoneSetting::Cayenne_Fortaleza) \
	op(ETimezoneSetting::BuenosAires) \
	op(ETimezoneSetting::MidAtlantic) \
	op(ETimezoneSetting::CoordinatedUniversalTimeNeg02) \
	op(ETimezoneSetting::Azores) \
	op(ETimezoneSetting::CaboVerdeIs) \
	op(ETimezoneSetting::Dublin_Edinburgh_Lisbon_London) \
	op(ETimezoneSetting::Monrovia_Reykjavik) \
	op(ETimezoneSetting::Casablanca) \
	op(ETimezoneSetting::UTC) \
	op(ETimezoneSetting::Belgrade_Bratislava_Budapest_Ljubljana_Prague) \
	op(ETimezoneSetting::Sarajevo_Skopje_Warsaw_Zagreb) \
	op(ETimezoneSetting::Brussels_Copenhagen_Madrid_Paris) \
	op(ETimezoneSetting::WestCentralAfrica) \
	op(ETimezoneSetting::Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna) \
	op(ETimezoneSetting::Windhoek) \
	op(ETimezoneSetting::Minsk) \
	op(ETimezoneSetting::Cairo) \
	op(ETimezoneSetting::Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius) \
	op(ETimezoneSetting::Athens_Bucharest) \
	op(ETimezoneSetting::Jerusalem) \
	op(ETimezoneSetting::Amman) \
	op(ETimezoneSetting::Beirut) \
	op(ETimezoneSetting::Harare_Pretoria) \
	op(ETimezoneSetting::Damascus) \
	op(ETimezoneSetting::Istanbul) \
	op(ETimezoneSetting::Kuwait_Riyadh) \
	op(ETimezoneSetting::Baghdad) \
	op(ETimezoneSetting::Nairobi) \
	op(ETimezoneSetting::Kaliningrad) \
	op(ETimezoneSetting::Tehran) \
	op(ETimezoneSetting::Moscow_StPetersburg_Volgograd) \
	op(ETimezoneSetting::AbuDhabi_Muscat) \
	op(ETimezoneSetting::Baku) \
	op(ETimezoneSetting::Yerevan) \
	op(ETimezoneSetting::Tbilisi) \
	op(ETimezoneSetting::PortLouis) \
	op(ETimezoneSetting::Kabul) \
	op(ETimezoneSetting::Tashkent) \
	op(ETimezoneSetting::Islamabad_Karachi) \
	op(ETimezoneSetting::Chennai_Kolkata_Mumbai_NewDelhi) \
	op(ETimezoneSetting::SriJayawardenepura) \
	op(ETimezoneSetting::Kathmandu) \
	op(ETimezoneSetting::Ekaterinburg) \
	op(ETimezoneSetting::Astana) \
	op(ETimezoneSetting::Dhaka) \
	op(ETimezoneSetting::Yangon_Rangoon) \
	op(ETimezoneSetting::Bangkok_Hanoi_Jakarta) \
	op(ETimezoneSetting::Krasnoyarsk) \
	op(ETimezoneSetting::Novosibirsk) \
	op(ETimezoneSetting::Beijing_Chongqing_HongKong_Urumqi) \
	op(ETimezoneSetting::KualaLumpur_Singapore) \
	op(ETimezoneSetting::Taipei) \
	op(ETimezoneSetting::Perth) \
	op(ETimezoneSetting::Ulaanbaatar) \
	op(ETimezoneSetting::Irkutsk) \
	op(ETimezoneSetting::Seoul) \
	op(ETimezoneSetting::Osaka_Sapporo_Tokyo) \
	op(ETimezoneSetting::Darwin) \
	op(ETimezoneSetting::Adelaide) \
	op(ETimezoneSetting::Yakutsk) \
	op(ETimezoneSetting::Canberra_Melbourne_Sydney) \
	op(ETimezoneSetting::Brisbane) \
	op(ETimezoneSetting::Hobart) \
	op(ETimezoneSetting::Guam_PortMoresby) \
	op(ETimezoneSetting::Vladivostok) \
	op(ETimezoneSetting::SolomonIs_NewCaledonia) \
	op(ETimezoneSetting::Magadan) \
	op(ETimezoneSetting::Fiji) \
	op(ETimezoneSetting::Auckland_Wellington) \
	op(ETimezoneSetting::CoordinatedUniversalTime12) \
	op(ETimezoneSetting::Nukualofa) \
	op(ETimezoneSetting::LocalTime) 

enum class ETimezoneSetting : uint8;
template<> struct TIsUEnumClass<ETimezoneSetting> { enum { Value = true }; };
template<> INTERNATIONALIZATIONSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimezoneSetting>();
// ********** End Enum ETimezoneSetting ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
