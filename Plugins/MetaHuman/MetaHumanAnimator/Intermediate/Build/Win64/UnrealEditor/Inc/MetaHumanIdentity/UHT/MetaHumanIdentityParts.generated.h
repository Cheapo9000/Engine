// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanIdentityParts.h"

#ifdef METAHUMANIDENTITY_MetaHumanIdentityParts_generated_h
#error "MetaHumanIdentityParts.generated.h already included, missing '#pragma once' in MetaHumanIdentityParts.h"
#endif
#define METAHUMANIDENTITY_MetaHumanIdentityParts_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaHumanIdentityPose;
enum class EConformType : int32;
enum class EIdentityErrorCode : uint8;
enum class EIdentityPoseType : uint8;

// ********** Begin Class UMetaHumanIdentityPart ***************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDiagnosticsIndicatesProcessingIssue); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UMetaHumanIdentityPart_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityPart_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityPart(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityPart_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityPart_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityPart, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityPart_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityPart)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANIDENTITY_API UMetaHumanIdentityPart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityPart(UMetaHumanIdentityPart&&) = delete; \
	UMetaHumanIdentityPart(const UMetaHumanIdentityPart&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityPart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityPart); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanIdentityPart) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityPart();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_54_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityPart;

// ********** End Class UMetaHumanIdentityPart *****************************************************

// ********** Begin Class UMetaHumanIdentityFace ***************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasPredictiveSolvers); \
	DECLARE_FUNCTION(execHasDNABuffer); \
	DECLARE_FUNCTION(execGetPoses); \
	DECLARE_FUNCTION(execRemovePose); \
	DECLARE_FUNCTION(execAddPoseOfType); \
	DECLARE_FUNCTION(execFindPoseByType); \
	DECLARE_FUNCTION(execExportTemplateMesh); \
	DECLARE_FUNCTION(execIsConformalRigValid); \
	DECLARE_FUNCTION(execConform);


#if WITH_EDITOR
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRunPredictiveSolverTraining);
#else // WITH_EDITOR
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaHumanIdentityFace, METAHUMANIDENTITY_API)


struct Z_Construct_UClass_UMetaHumanIdentityFace_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityFace_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityFace(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityFace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityFace_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityFace, UMetaHumanIdentityPart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityFace_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityFace) \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_ARCHIVESERIALIZER


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityFace(UMetaHumanIdentityFace&&) = delete; \
	UMetaHumanIdentityFace(const UMetaHumanIdentityFace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityFace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityFace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentityFace) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityFace();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_104_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityFace;

// ********** End Class UMetaHumanIdentityFace *****************************************************

// ********** Begin Class UMetaHumanIdentityBody ***************************************************
struct Z_Construct_UClass_UMetaHumanIdentityBody_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityBody_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_548_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityBody(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityBody_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityBody_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityBody, UMetaHumanIdentityPart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityBody_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityBody)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_548_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityBody(UMetaHumanIdentityBody&&) = delete; \
	UMetaHumanIdentityBody(const UMetaHumanIdentityBody&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentityBody) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityBody();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_544_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_548_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_548_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_548_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityBody;

// ********** End Class UMetaHumanIdentityBody *****************************************************

// ********** Begin Class UMetaHumanIdentityHands **************************************************
struct Z_Construct_UClass_UMetaHumanIdentityHands_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityHands_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_583_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityHands(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityHands_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityHands_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityHands, UMetaHumanIdentityPart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityHands_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityHands)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_583_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityHands(UMetaHumanIdentityHands&&) = delete; \
	UMetaHumanIdentityHands(const UMetaHumanIdentityHands&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityHands); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityHands); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentityHands) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityHands();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_579_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_583_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_583_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_583_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityHands;

// ********** End Class UMetaHumanIdentityHands ****************************************************

// ********** Begin Class UMetaHumanIdentityOutfit *************************************************
struct Z_Construct_UClass_UMetaHumanIdentityOutfit_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityOutfit_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_605_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityOutfit(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityOutfit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityOutfit_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityOutfit, UMetaHumanIdentityPart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityOutfit_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityOutfit)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_605_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityOutfit(UMetaHumanIdentityOutfit&&) = delete; \
	UMetaHumanIdentityOutfit(const UMetaHumanIdentityOutfit&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityOutfit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityOutfit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentityOutfit) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityOutfit();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_601_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_605_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_605_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_605_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityOutfit;

// ********** End Class UMetaHumanIdentityOutfit ***************************************************

// ********** Begin Class UMetaHumanIdentityProp ***************************************************
struct Z_Construct_UClass_UMetaHumanIdentityProp_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityProp_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_626_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityProp(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityProp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityProp_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityProp, UMetaHumanIdentityPart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityProp_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityProp)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_626_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityProp(UMetaHumanIdentityProp&&) = delete; \
	UMetaHumanIdentityProp(const UMetaHumanIdentityProp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityProp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentityProp) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityProp();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_622_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_626_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_626_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_626_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityProp;

// ********** End Class UMetaHumanIdentityProp *****************************************************

// ********** Begin Class UMetaHumanTemplateMesh ***************************************************
struct Z_Construct_UClass_UMetaHumanTemplateMesh_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanTemplateMesh_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_647_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanTemplateMesh(); \
	friend struct ::Z_Construct_UClass_UMetaHumanTemplateMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanTemplateMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanTemplateMesh, UDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanTemplateMesh_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanTemplateMesh)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_647_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANIDENTITY_API UMetaHumanTemplateMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanTemplateMesh(UMetaHumanTemplateMesh&&) = delete; \
	UMetaHumanTemplateMesh(const UMetaHumanTemplateMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanTemplateMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanTemplateMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanTemplateMesh) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanTemplateMesh();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_643_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_647_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_647_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h_647_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanTemplateMesh;

// ********** End Class UMetaHumanTemplateMesh *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityParts_h

// ********** Begin Enum ETargetTemplateCompatibility **********************************************
#define FOREACH_ENUM_ETARGETTEMPLATECOMPATIBILITY(op) \
	op(ETargetTemplateCompatibility::Valid) \
	op(ETargetTemplateCompatibility::InvalidInputMesh) \
	op(ETargetTemplateCompatibility::MissingImportModel) \
	op(ETargetTemplateCompatibility::MissingLOD) \
	op(ETargetTemplateCompatibility::MissingMeshInfo) \
	op(ETargetTemplateCompatibility::MismatchNumVertices) \
	op(ETargetTemplateCompatibility::MismatchStartImportedVertex) \
	op(ETargetTemplateCompatibility::InvalidArchetype) \
	op(ETargetTemplateCompatibility::Count) 

enum class ETargetTemplateCompatibility : uint8;
template<> struct TIsUEnumClass<ETargetTemplateCompatibility> { enum { Value = true }; };
template<> METAHUMANIDENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<ETargetTemplateCompatibility>();
// ********** End Enum ETargetTemplateCompatibility ************************************************

// ********** Begin Enum EConformType **************************************************************
#define FOREACH_ENUM_ECONFORMTYPE(op) \
	op(EConformType::Solve) \
	op(EConformType::Copy) 

enum class EConformType;
template<> struct TIsUEnumClass<EConformType> { enum { Value = true }; };
template<> METAHUMANIDENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EConformType>();
// ********** End Enum EConformType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
