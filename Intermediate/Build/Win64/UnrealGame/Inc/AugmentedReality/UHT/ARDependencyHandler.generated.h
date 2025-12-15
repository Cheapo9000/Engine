// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARDependencyHandler.h"

#ifdef AUGMENTEDREALITY_ARDependencyHandler_generated_h
#error "ARDependencyHandler.generated.h already included, missing '#pragma once' in ARDependencyHandler.h"
#endif
#define AUGMENTEDREALITY_ARDependencyHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARDependencyHandler;
class UARSessionConfig;
class UObject;
enum class EARServiceAvailability : uint8;
enum class EARServiceInstallRequestResult : uint8;
enum class EARServicePermissionRequestResult : uint8;
struct FLatentActionInfo;

// ********** Begin Class UARDependencyHandler *****************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartARSessionLatent); \
	DECLARE_FUNCTION(execRequestARSessionPermission); \
	DECLARE_FUNCTION(execInstallARService); \
	DECLARE_FUNCTION(execCheckARServiceAvailability); \
	DECLARE_FUNCTION(execGetARDependencyHandler);


struct Z_Construct_UClass_UARDependencyHandler_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARDependencyHandler_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARDependencyHandler(); \
	friend struct ::Z_Construct_UClass_UARDependencyHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARDependencyHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UARDependencyHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARDependencyHandler_NoRegister) \
	DECLARE_SERIALIZER(UARDependencyHandler)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARDependencyHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARDependencyHandler(UARDependencyHandler&&) = delete; \
	UARDependencyHandler(const UARDependencyHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARDependencyHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARDependencyHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARDependencyHandler) \
	AUGMENTEDREALITY_API virtual ~UARDependencyHandler();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_82_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARDependencyHandler;

// ********** End Class UARDependencyHandler *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h

// ********** Begin Enum EARServiceAvailability ****************************************************
#define FOREACH_ENUM_EARSERVICEAVAILABILITY(op) \
	op(EARServiceAvailability::UnknownError) \
	op(EARServiceAvailability::UnknownChecking) \
	op(EARServiceAvailability::UnknownTimedOut) \
	op(EARServiceAvailability::UnsupportedDeviceNotCapable) \
	op(EARServiceAvailability::SupportedNotInstalled) \
	op(EARServiceAvailability::SupportedVersionTooOld) \
	op(EARServiceAvailability::SupportedInstalled) 

enum class EARServiceAvailability : uint8;
template<> struct TIsUEnumClass<EARServiceAvailability> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARServiceAvailability>();
// ********** End Enum EARServiceAvailability ******************************************************

// ********** Begin Enum EARServiceInstallRequestResult ********************************************
#define FOREACH_ENUM_EARSERVICEINSTALLREQUESTRESULT(op) \
	op(EARServiceInstallRequestResult::Installed) \
	op(EARServiceInstallRequestResult::DeviceNotCompatible) \
	op(EARServiceInstallRequestResult::UserDeclinedInstallation) \
	op(EARServiceInstallRequestResult::FatalError) 

enum class EARServiceInstallRequestResult : uint8;
template<> struct TIsUEnumClass<EARServiceInstallRequestResult> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARServiceInstallRequestResult>();
// ********** End Enum EARServiceInstallRequestResult **********************************************

// ********** Begin Enum EARServicePermissionRequestResult *****************************************
#define FOREACH_ENUM_EARSERVICEPERMISSIONREQUESTRESULT(op) \
	op(EARServicePermissionRequestResult::Granted) \
	op(EARServicePermissionRequestResult::Denied) 

enum class EARServicePermissionRequestResult : uint8;
template<> struct TIsUEnumClass<EARServicePermissionRequestResult> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARServicePermissionRequestResult>();
// ********** End Enum EARServicePermissionRequestResult *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
