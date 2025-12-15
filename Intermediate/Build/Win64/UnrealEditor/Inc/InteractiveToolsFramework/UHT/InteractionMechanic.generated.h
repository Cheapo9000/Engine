// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionMechanic.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InteractionMechanic_generated_h
#error "InteractionMechanic.generated.h already included, missing '#pragma once' in InteractionMechanic.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractionMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInteractionMechanic *****************************************************
struct Z_Construct_UClass_UInteractionMechanic_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionMechanic(); \
	friend struct ::Z_Construct_UClass_UInteractionMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInteractionMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionMechanic, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInteractionMechanic_NoRegister) \
	DECLARE_SERIALIZER(UInteractionMechanic)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionMechanic(UInteractionMechanic&&) = delete; \
	UInteractionMechanic(const UInteractionMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractionMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionMechanic) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractionMechanic();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_28_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionMechanic;

// ********** End Class UInteractionMechanic *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
