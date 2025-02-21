// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SChaosVDRecordingControls.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_SChaosVDRecordingControls_generated_h
#error "SChaosVDRecordingControls.generated.h already included, missing '#pragma once' in SChaosVDRecordingControls.h"
#endif
#define CHAOSVD_SChaosVDRecordingControls_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDRecordingControls_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDRecordingToolbarMenuContext(); \
	friend struct Z_Construct_UClass_UChaosVDRecordingToolbarMenuContext_Statics; \
public: \
	DECLARE_CLASS(UChaosVDRecordingToolbarMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDRecordingToolbarMenuContext)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDRecordingControls_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDRecordingToolbarMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDRecordingToolbarMenuContext(UChaosVDRecordingToolbarMenuContext&&); \
	UChaosVDRecordingToolbarMenuContext(const UChaosVDRecordingToolbarMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDRecordingToolbarMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDRecordingToolbarMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDRecordingToolbarMenuContext) \
	NO_API virtual ~UChaosVDRecordingToolbarMenuContext();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDRecordingControls_h_22_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDRecordingControls_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDRecordingControls_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDRecordingControls_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDRecordingToolbarMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDRecordingControls_h


#define FOREACH_ENUM_ECHAOSVDRECORDINGMODE(op) \
	op(EChaosVDRecordingMode::File) \
	op(EChaosVDRecordingMode::Live) 

enum class EChaosVDRecordingMode;
template<> struct TIsUEnumClass<EChaosVDRecordingMode> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDRecordingMode>();

#define FOREACH_ENUM_ECHAOSVDLIVECONNECTIONATTEMPTRESULT(op) \
	op(EChaosVDLiveConnectionAttemptResult::Success) \
	op(EChaosVDLiveConnectionAttemptResult::Failed) 

enum class EChaosVDLiveConnectionAttemptResult;
template<> struct TIsUEnumClass<EChaosVDLiveConnectionAttemptResult> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDLiveConnectionAttemptResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
