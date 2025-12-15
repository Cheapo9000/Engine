// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveToolManager.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveToolManager_generated_h
#error "InteractiveToolManager.generated.h already included, missing '#pragma once' in InteractiveToolManager.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveToolManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInteractiveToolManager **************************************************
struct Z_Construct_UClass_UInteractiveToolManager_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManager_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolManager(); \
	friend struct ::Z_Construct_UClass_UInteractiveToolManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInteractiveToolManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveToolManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInteractiveToolManager_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveToolManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveToolManager*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_80_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveToolManager(UInteractiveToolManager&&) = delete; \
	UInteractiveToolManager(const UInteractiveToolManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveToolManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveToolManager) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveToolManager();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_77_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveToolManager;

// ********** End Class UInteractiveToolManager ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h

// ********** Begin Enum EToolSide *****************************************************************
#define FOREACH_ENUM_ETOOLSIDE(op) \
	op(EToolSide::Left) \
	op(EToolSide::Mouse) \
	op(EToolSide::Right) 

enum class EToolSide;
template<> struct TIsUEnumClass<EToolSide> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolSide>();
// ********** End Enum EToolSide *******************************************************************

// ********** Begin Enum EToolChangeTrackingMode ***************************************************
#define FOREACH_ENUM_ETOOLCHANGETRACKINGMODE(op) \
	op(EToolChangeTrackingMode::NoChangeTracking) \
	op(EToolChangeTrackingMode::UndoToExit) \
	op(EToolChangeTrackingMode::FullUndoRedo) 

enum class EToolChangeTrackingMode;
template<> struct TIsUEnumClass<EToolChangeTrackingMode> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolChangeTrackingMode>();
// ********** End Enum EToolChangeTrackingMode *****************************************************

// ********** Begin Enum EToolManagerToolSwitchMode ************************************************
#define FOREACH_ENUM_ETOOLMANAGERTOOLSWITCHMODE(op) \
	op(EToolManagerToolSwitchMode::AcceptIfAble) \
	op(EToolManagerToolSwitchMode::CancelIfAble) \
	op(EToolManagerToolSwitchMode::CustomizableAcceptIfAble) \
	op(EToolManagerToolSwitchMode::CustomizableCancelIfAble) 

enum class EToolManagerToolSwitchMode;
template<> struct TIsUEnumClass<EToolManagerToolSwitchMode> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolManagerToolSwitchMode>();
// ********** End Enum EToolManagerToolSwitchMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
