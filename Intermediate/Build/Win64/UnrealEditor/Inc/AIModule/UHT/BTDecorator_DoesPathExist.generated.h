// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_DoesPathExist.h"

#ifdef AIMODULE_BTDecorator_DoesPathExist_generated_h
#error "BTDecorator_DoesPathExist.generated.h already included, missing '#pragma once' in BTDecorator_DoesPathExist.h"
#endif
#define AIMODULE_BTDecorator_DoesPathExist_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTDecorator_DoesPathExist ***********************************************
struct Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_DoesPathExist(); \
	friend struct ::Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTDecorator_DoesPathExist, UBTDecorator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister) \
	DECLARE_SERIALIZER(UBTDecorator_DoesPathExist)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_DoesPathExist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_DoesPathExist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_DoesPathExist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_DoesPathExist); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTDecorator_DoesPathExist(UBTDecorator_DoesPathExist&&) = delete; \
	UBTDecorator_DoesPathExist(const UBTDecorator_DoesPathExist&) = delete; \
	AIMODULE_API virtual ~UBTDecorator_DoesPathExist();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_34_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_37_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTDecorator_DoesPathExist;

// ********** End Class UBTDecorator_DoesPathExist *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h

// ********** Begin Enum EPathExistanceQueryType ***************************************************
#define FOREACH_ENUM_EPATHEXISTANCEQUERYTYPE(op) \
	op(EPathExistanceQueryType::NavmeshRaycast2D) \
	op(EPathExistanceQueryType::HierarchicalQuery) \
	op(EPathExistanceQueryType::RegularPathFinding) 

namespace EPathExistanceQueryType { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathExistanceQueryType::Type>();
// ********** End Enum EPathExistanceQueryType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
