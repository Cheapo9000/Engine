// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Services/BTService_DefaultFocus.h"

#ifdef AIMODULE_BTService_DefaultFocus_generated_h
#error "BTService_DefaultFocus.generated.h already included, missing '#pragma once' in BTService_DefaultFocus.h"
#endif
#define AIMODULE_BTService_DefaultFocus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTService_DefaultFocus **************************************************
struct Z_Construct_UClass_UBTService_DefaultFocus_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTService_DefaultFocus_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTService_DefaultFocus(); \
	friend struct ::Z_Construct_UClass_UBTService_DefaultFocus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTService_DefaultFocus_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTService_DefaultFocus, UBTService_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTService_DefaultFocus_NoRegister) \
	DECLARE_SERIALIZER(UBTService_DefaultFocus)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTService_DefaultFocus(UBTService_DefaultFocus&&) = delete; \
	UBTService_DefaultFocus(const UBTService_DefaultFocus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTService_DefaultFocus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_DefaultFocus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_DefaultFocus) \
	AIMODULE_API virtual ~UBTService_DefaultFocus();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_33_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTService_DefaultFocus;

// ********** End Class UBTService_DefaultFocus ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
