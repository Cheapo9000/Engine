// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputBehavior.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InputBehavior_generated_h
#error "InputBehavior.generated.h already included, missing '#pragma once' in InputBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputBehavior_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputBehavior ***********************************************************
struct Z_Construct_UClass_UInputBehavior_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBehavior(); \
	friend struct ::Z_Construct_UClass_UInputBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInputBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputBehavior, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInputBehavior_NoRegister) \
	DECLARE_SERIALIZER(UInputBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_250_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputBehavior(UInputBehavior&&) = delete; \
	UInputBehavior(const UInputBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputBehavior) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInputBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_247_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_250_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_250_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputBehavior;

// ********** End Class UInputBehavior *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h

// ********** Begin Enum EInputCaptureSide *********************************************************
#define FOREACH_ENUM_EINPUTCAPTURESIDE(op) \
	op(EInputCaptureSide::None) \
	op(EInputCaptureSide::Left) \
	op(EInputCaptureSide::Right) \
	op(EInputCaptureSide::Both) \
	op(EInputCaptureSide::Any) 

enum class EInputCaptureSide;
template<> struct TIsUEnumClass<EInputCaptureSide> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputCaptureSide>();
// ********** End Enum EInputCaptureSide ***********************************************************

// ********** Begin Enum EInputCaptureRequestType **************************************************
#define FOREACH_ENUM_EINPUTCAPTUREREQUESTTYPE(op) \
	op(EInputCaptureRequestType::Begin) \
	op(EInputCaptureRequestType::Ignore) 

enum class EInputCaptureRequestType;
template<> struct TIsUEnumClass<EInputCaptureRequestType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputCaptureRequestType>();
// ********** End Enum EInputCaptureRequestType ****************************************************

// ********** Begin Enum EInputCaptureState ********************************************************
#define FOREACH_ENUM_EINPUTCAPTURESTATE(op) \
	op(EInputCaptureState::Begin) \
	op(EInputCaptureState::Continue) \
	op(EInputCaptureState::End) \
	op(EInputCaptureState::Ignore) 

enum class EInputCaptureState;
template<> struct TIsUEnumClass<EInputCaptureState> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputCaptureState>();
// ********** End Enum EInputCaptureState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
