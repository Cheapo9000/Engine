// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Level.h"

#ifdef ENGINE_Level_generated_h
#error "Level.generated.h already included, missing '#pragma once' in Level.h"
#endif
#define ENGINE_Level_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorContainer **********************************************************
struct Z_Construct_UClass_UActorContainer_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorContainer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorContainer(); \
	friend struct ::Z_Construct_UClass_UActorContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorContainer_NoRegister) \
	DECLARE_SERIALIZER(UActorContainer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorContainer(UActorContainer&&) = delete; \
	UActorContainer(const UActorContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorContainer) \
	ENGINE_API virtual ~UActorContainer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_73_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorContainer;

// ********** End Class UActorContainer ************************************************************

// ********** Begin ScriptStruct FActorFolderSet ***************************************************
struct Z_Construct_UScriptStruct_FActorFolderSet_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorFolderSet_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FActorFolderSet;
// ********** End ScriptStruct FActorFolderSet *****************************************************

// ********** Begin ScriptStruct FStreamableTextureInstance ****************************************
struct Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStreamableTextureInstance;
// ********** End ScriptStruct FStreamableTextureInstance ******************************************

// ********** Begin ScriptStruct FDynamicTextureInstance *******************************************
struct Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FStreamableTextureInstance Super;


struct FDynamicTextureInstance;
// ********** End ScriptStruct FDynamicTextureInstance *********************************************

// ********** Begin ScriptStruct FLevelSimplificationDetails ***************************************
struct Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_334_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FLevelSimplificationDetails;
// ********** End ScriptStruct FLevelSimplificationDetails *****************************************

// ********** Begin ScriptStruct FReplicatedStaticActorDestructionInfo *****************************
struct Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_379_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FReplicatedStaticActorDestructionInfo;
// ********** End ScriptStruct FReplicatedStaticActorDestructionInfo *******************************

// ********** Begin Class ULevel *******************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_424_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevel, ENGINE_API)


struct Z_Construct_UClass_ULevel_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_424_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevel(); \
	friend struct ::Z_Construct_UClass_ULevel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevel_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_ULevel, TEXT("/Script/Engine"), Z_Construct_UClass_ULevel_NoRegister) \
	DECLARE_SERIALIZER(ULevel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_424_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULevel*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_424_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevel(ULevel&&) = delete; \
	ULevel(const ULevel&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_421_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_424_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_424_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_424_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevel;

// ********** End Class ULevel *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h

// ********** Begin Enum EActorPackagingScheme *****************************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_EACTORPACKAGINGSCHEME(op) \
	op(EActorPackagingScheme::Original) \
	op(EActorPackagingScheme::Reduced) 

enum class EActorPackagingScheme : uint8;
template<> struct TIsUEnumClass<EActorPackagingScheme> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorPackagingScheme>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EActorPackagingScheme *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
