// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridPathAIController.h"

#ifdef AIMODULE_GridPathAIController_generated_h
#error "GridPathAIController.generated.h already included, missing '#pragma once' in GridPathAIController.h"
#endif
#define AIMODULE_GridPathAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGridPathAIController ****************************************************
struct Z_Construct_UClass_AGridPathAIController_Statics;
AIMODULE_API UClass* Z_Construct_UClass_AGridPathAIController_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridPathAIController(); \
	friend struct ::Z_Construct_UClass_AGridPathAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_AGridPathAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridPathAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_AGridPathAIController_NoRegister) \
	DECLARE_SERIALIZER(AGridPathAIController)


#define FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridPathAIController(AGridPathAIController&&) = delete; \
	AGridPathAIController(const AGridPathAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridPathAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridPathAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridPathAIController) \
	NO_API virtual ~AGridPathAIController();


#define FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_8_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridPathAIController;

// ********** End Class AGridPathAIController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
