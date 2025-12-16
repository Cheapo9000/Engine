// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/RollbackBlackboard.h"

#ifdef MOVER_RollbackBlackboard_generated_h
#error "RollbackBlackboard.generated.h already included, missing '#pragma once' in RollbackBlackboard.h"
#endif
#define MOVER_RollbackBlackboard_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URollbackBlackboard ******************************************************
struct Z_Construct_UClass_URollbackBlackboard_Statics;
MOVER_API UClass* Z_Construct_UClass_URollbackBlackboard_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURollbackBlackboard(); \
	friend struct ::Z_Construct_UClass_URollbackBlackboard_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* ::Z_Construct_UClass_URollbackBlackboard_NoRegister(); \
public: \
	DECLARE_CLASS2(URollbackBlackboard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_URollbackBlackboard_NoRegister) \
	DECLARE_SERIALIZER(URollbackBlackboard)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API URollbackBlackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URollbackBlackboard(URollbackBlackboard&&) = delete; \
	URollbackBlackboard(const URollbackBlackboard&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, URollbackBlackboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URollbackBlackboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URollbackBlackboard) \
	MOVER_API virtual ~URollbackBlackboard();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_103_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URollbackBlackboard;

// ********** End Class URollbackBlackboard ********************************************************

// ********** Begin Class URollbackBlackboard_InternalWrapper **************************************
struct Z_Construct_UClass_URollbackBlackboard_InternalWrapper_Statics;
MOVER_API UClass* Z_Construct_UClass_URollbackBlackboard_InternalWrapper_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_423_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURollbackBlackboard_InternalWrapper(); \
	friend struct ::Z_Construct_UClass_URollbackBlackboard_InternalWrapper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* ::Z_Construct_UClass_URollbackBlackboard_InternalWrapper_NoRegister(); \
public: \
	DECLARE_CLASS2(URollbackBlackboard_InternalWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_URollbackBlackboard_InternalWrapper_NoRegister) \
	DECLARE_SERIALIZER(URollbackBlackboard_InternalWrapper)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_423_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API URollbackBlackboard_InternalWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URollbackBlackboard_InternalWrapper(URollbackBlackboard_InternalWrapper&&) = delete; \
	URollbackBlackboard_InternalWrapper(const URollbackBlackboard_InternalWrapper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, URollbackBlackboard_InternalWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URollbackBlackboard_InternalWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URollbackBlackboard_InternalWrapper) \
	MOVER_API virtual ~URollbackBlackboard_InternalWrapper();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_420_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_423_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_423_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h_423_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URollbackBlackboard_InternalWrapper;

// ********** End Class URollbackBlackboard_InternalWrapper ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_RollbackBlackboard_h

// ********** Begin Enum EBlackboardSizingPolicy ***************************************************
#define FOREACH_ENUM_EBLACKBOARDSIZINGPOLICY(op) \
	op(EBlackboardSizingPolicy::FixedDeclaredSize) \
	op(EBlackboardSizingPolicy::FixedBackendBufferSize) \
	op(EBlackboardSizingPolicy::SingleEntry) 

enum class EBlackboardSizingPolicy : uint8;
template<> struct TIsUEnumClass<EBlackboardSizingPolicy> { enum { Value = true }; };
template<> MOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackboardSizingPolicy>();
// ********** End Enum EBlackboardSizingPolicy *****************************************************

// ********** Begin Enum EBlackboardPersistencePolicy **********************************************
#define FOREACH_ENUM_EBLACKBOARDPERSISTENCEPOLICY(op) \
	op(EBlackboardPersistencePolicy::Forever) \
	op(EBlackboardPersistencePolicy::NextFrameOnly) \
	op(EBlackboardPersistencePolicy::LimitedTime) 

enum class EBlackboardPersistencePolicy : uint8;
template<> struct TIsUEnumClass<EBlackboardPersistencePolicy> { enum { Value = true }; };
template<> MOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackboardPersistencePolicy>();
// ********** End Enum EBlackboardPersistencePolicy ************************************************

// ********** Begin Enum EBlackboardRollbackPolicy *************************************************
#define FOREACH_ENUM_EBLACKBOARDROLLBACKPOLICY(op) \
	op(EBlackboardRollbackPolicy::InvalidatedOnRollback) \
	op(EBlackboardRollbackPolicy::WritableDuringResimulation) \
	op(EBlackboardRollbackPolicy::LockedDuringResimulation) 

enum class EBlackboardRollbackPolicy : uint8;
template<> struct TIsUEnumClass<EBlackboardRollbackPolicy> { enum { Value = true }; };
template<> MOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackboardRollbackPolicy>();
// ********** End Enum EBlackboardRollbackPolicy ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
