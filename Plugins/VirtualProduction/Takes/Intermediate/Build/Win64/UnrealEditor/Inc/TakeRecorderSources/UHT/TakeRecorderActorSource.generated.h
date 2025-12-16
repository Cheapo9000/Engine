// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderActorSource.h"

#ifdef TAKERECORDERSOURCES_TakeRecorderActorSource_generated_h
#error "TakeRecorderActorSource.generated.h already included, missing '#pragma once' in TakeRecorderActorSource.h"
#endif
#define TAKERECORDERSOURCES_TakeRecorderActorSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTakeRecorderSource;
class UTakeRecorderSources;

// ********** Begin Class UTakeRecorderActorSource *************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSourceActor); \
	DECLARE_FUNCTION(execSetSourceActor); \
	DECLARE_FUNCTION(execRemoveActorFromSources); \
	DECLARE_FUNCTION(execAddSourceForActor);


struct Z_Construct_UClass_UTakeRecorderActorSource_Statics;
TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderActorSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderActorSource(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderActorSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDERSOURCES_API UClass* ::Z_Construct_UClass_UTakeRecorderActorSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderActorSource, UTakeRecorderSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorderSources"), Z_Construct_UClass_UTakeRecorderActorSource_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderActorSource)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderActorSource(UTakeRecorderActorSource&&) = delete; \
	UTakeRecorderActorSource(const UTakeRecorderActorSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDERSOURCES_API, UTakeRecorderActorSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderActorSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderActorSource) \
	TAKERECORDERSOURCES_API virtual ~UTakeRecorderActorSource();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h_37_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h_41_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderActorSource;

// ********** End Class UTakeRecorderActorSource ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Public_TakeRecorderActorSource_h

// ********** Begin Enum ETakeRecorderActorRecordType **********************************************
#define FOREACH_ENUM_ETAKERECORDERACTORRECORDTYPE(op) \
	op(ETakeRecorderActorRecordType::Possessable) \
	op(ETakeRecorderActorRecordType::Spawnable) \
	op(ETakeRecorderActorRecordType::ProjectDefault) 

enum class ETakeRecorderActorRecordType : uint8;
template<> struct TIsUEnumClass<ETakeRecorderActorRecordType> { enum { Value = true }; };
template<> TAKERECORDERSOURCES_NON_ATTRIBUTED_API UEnum* StaticEnum<ETakeRecorderActorRecordType>();
// ********** End Enum ETakeRecorderActorRecordType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
