// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceSkeletalMesh.h"

#ifdef NIAGARA_NiagaraDataInterfaceSkeletalMesh_generated_h
#error "NiagaraDataInterfaceSkeletalMesh.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceSkeletalMesh.h"
#endif
#define NIAGARA_NiagaraDataInterfaceSkeletalMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UNiagaraDataInterfaceSkeletalMesh ****************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnSourceEndPlay);


struct Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceSkeletalMesh(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceSkeletalMesh, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceSkeletalMesh)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceSkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceSkeletalMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceSkeletalMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceSkeletalMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceSkeletalMesh(UNiagaraDataInterfaceSkeletalMesh&&) = delete; \
	UNiagaraDataInterfaceSkeletalMesh(const UNiagaraDataInterfaceSkeletalMesh&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceSkeletalMesh();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_687_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceSkeletalMesh;

// ********** End Class UNiagaraDataInterfaceSkeletalMesh ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h

// ********** Begin Enum ENDISkeletalMesh_SourceMode ***********************************************
#define FOREACH_ENUM_ENDISKELETALMESH_SOURCEMODE(op) \
	op(ENDISkeletalMesh_SourceMode::Default) \
	op(ENDISkeletalMesh_SourceMode::Source) \
	op(ENDISkeletalMesh_SourceMode::AttachParent) \
	op(ENDISkeletalMesh_SourceMode::DefaultMeshOnly) 

enum class ENDISkeletalMesh_SourceMode : uint8;
template<> struct TIsUEnumClass<ENDISkeletalMesh_SourceMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDISkeletalMesh_SourceMode>();
// ********** End Enum ENDISkeletalMesh_SourceMode *************************************************

// ********** Begin Enum ENDISkeletalMesh_SkinningMode *********************************************
#define FOREACH_ENUM_ENDISKELETALMESH_SKINNINGMODE(op) \
	op(ENDISkeletalMesh_SkinningMode::Invalid) \
	op(ENDISkeletalMesh_SkinningMode::None) \
	op(ENDISkeletalMesh_SkinningMode::SkinOnTheFly) \
	op(ENDISkeletalMesh_SkinningMode::PreSkin) 

enum class ENDISkeletalMesh_SkinningMode : uint8;
template<> struct TIsUEnumClass<ENDISkeletalMesh_SkinningMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDISkeletalMesh_SkinningMode>();
// ********** End Enum ENDISkeletalMesh_SkinningMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
