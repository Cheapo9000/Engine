// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAYSEQUENCE_DaySequenceProjectSettings_generated_h
#error "DaySequenceProjectSettings.generated.h already included, missing '#pragma once' in DaySequenceProjectSettings.h"
#endif
#define DAYSEQUENCE_DaySequenceProjectSettings_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceProjectSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceProjectSettings(); \
	friend struct Z_Construct_UClass_UDaySequenceProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(UDaySequenceProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceProjectSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceProjectSettings(UDaySequenceProjectSettings&&); \
	UDaySequenceProjectSettings(const UDaySequenceProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDaySequenceProjectSettings) \
	NO_API virtual ~UDaySequenceProjectSettings();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceProjectSettings_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceProjectSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceProjectSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceProjectSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequenceProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequenceProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
