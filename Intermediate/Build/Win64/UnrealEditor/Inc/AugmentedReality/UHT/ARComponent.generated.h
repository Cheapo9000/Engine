// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARComponent.h"

#ifdef AUGMENTEDREALITY_ARComponent_generated_h
#error "ARComponent.generated.h already included, missing '#pragma once' in ARComponent.h"
#endif
#define AUGMENTEDREALITY_ARComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMRMeshComponent;
enum class EARObjectClassification : uint8;
enum class EFaceComponentDebugMode : uint8;
enum class EGeoAnchorComponentDebugMode : uint8;
enum class EImageComponentDebugMode : uint8;
enum class EPlaneComponentDebugMode : uint8;
enum class EPoseComponentDebugMode : uint8;
enum class EQRCodeComponentDebugMode : uint8;
struct FAREnvironmentProbeUpdatePayload;
struct FARFaceUpdatePayload;
struct FARGeoAnchorUpdatePayload;
struct FARImageUpdatePayload;
struct FARMeshUpdatePayload;
struct FARObjectUpdatePayload;
struct FARPlaneUpdatePayload;
struct FARPointUpdatePayload;
struct FARPoseUpdatePayload;
struct FARQRCodeUpdatePayload;
struct FGuid;
struct FLinearColor;

// ********** Begin ScriptStruct FARSessionPayload *************************************************
struct Z_Construct_UScriptStruct_FARSessionPayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARSessionPayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARSessionPayload;
// ********** End ScriptStruct FARSessionPayload ***************************************************

// ********** Begin ScriptStruct FARPlaneUpdatePayload *********************************************
struct Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARPlaneUpdatePayload;
// ********** End ScriptStruct FARPlaneUpdatePayload ***********************************************

// ********** Begin ScriptStruct FARPointUpdatePayload *********************************************
struct Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARPointUpdatePayload;
// ********** End ScriptStruct FARPointUpdatePayload ***********************************************

// ********** Begin ScriptStruct FARFaceUpdatePayload **********************************************
struct Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARFaceUpdatePayload;
// ********** End ScriptStruct FARFaceUpdatePayload ************************************************

// ********** Begin ScriptStruct FARImageUpdatePayload *********************************************
struct Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARImageUpdatePayload;
// ********** End ScriptStruct FARImageUpdatePayload ***********************************************

// ********** Begin ScriptStruct FARQRCodeUpdatePayload ********************************************
struct Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARQRCodeUpdatePayload;
// ********** End ScriptStruct FARQRCodeUpdatePayload **********************************************

// ********** Begin ScriptStruct FARPoseUpdatePayload **********************************************
struct Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARPoseUpdatePayload;
// ********** End ScriptStruct FARPoseUpdatePayload ************************************************

// ********** Begin ScriptStruct FAREnvironmentProbeUpdatePayload **********************************
struct Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_151_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FAREnvironmentProbeUpdatePayload;
// ********** End ScriptStruct FAREnvironmentProbeUpdatePayload ************************************

// ********** Begin ScriptStruct FARObjectUpdatePayload ********************************************
struct Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARObjectUpdatePayload;
// ********** End ScriptStruct FARObjectUpdatePayload **********************************************

// ********** Begin ScriptStruct FARMeshUpdatePayload **********************************************
struct Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_170_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARMeshUpdatePayload;
// ********** End ScriptStruct FARMeshUpdatePayload ************************************************

// ********** Begin ScriptStruct FARGeoAnchorUpdatePayload *****************************************
struct Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_186_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARGeoAnchorUpdatePayload;
// ********** End ScriptStruct FARGeoAnchorUpdatePayload *******************************************

// ********** Begin Class UARComponent *************************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual void UpdateVisualization_Implementation(); \
	DECLARE_FUNCTION(execOnRep_Payload); \
	DECLARE_FUNCTION(execUpdateVisualization); \
	DECLARE_FUNCTION(execGetMRMesh); \
	DECLARE_FUNCTION(execSetNativeID);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARComponent(); \
	friend struct ::Z_Construct_UClass_UARComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARComponent_NoRegister) \
	DECLARE_SERIALIZER(UARComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NativeID=NETFIELD_REP_START, \
		NETFIELD_REP_END=NativeID	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARComponent(UARComponent&&) = delete; \
	UARComponent(const UARComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UARComponent) \
	AUGMENTEDREALITY_API virtual ~UARComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_235_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARComponent;

// ********** End Class UARComponent ***************************************************************

// ********** Begin Class UARPlaneComponent ********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARPlaneUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARPlaneUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execGetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetPlaneComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARPlaneComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPlaneComponent(); \
	friend struct ::Z_Construct_UClass_UARPlaneComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARPlaneComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARPlaneComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARPlaneComponent_NoRegister) \
	DECLARE_SERIALIZER(UARPlaneComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARPlaneComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARPlaneComponent(UARPlaneComponent&&) = delete; \
	UARPlaneComponent(const UARPlaneComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARPlaneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPlaneComponent) \
	AUGMENTEDREALITY_API virtual ~UARPlaneComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_329_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARPlaneComponent;

// ********** End Class UARPlaneComponent **********************************************************

// ********** Begin Class UARPointComponent ********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARPointUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARPointUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARPointComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPointComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPointComponent(); \
	friend struct ::Z_Construct_UClass_UARPointComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARPointComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARPointComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARPointComponent_NoRegister) \
	DECLARE_SERIALIZER(UARPointComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARPointComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARPointComponent(UARPointComponent&&) = delete; \
	UARPointComponent(const UARPointComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARPointComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPointComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPointComponent) \
	AUGMENTEDREALITY_API virtual ~UARPointComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_370_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARPointComponent;

// ********** End Class UARPointComponent **********************************************************

// ********** Begin Class UARFaceComponent *********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARFaceUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARFaceUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetFaceComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARFaceComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARFaceComponent(); \
	friend struct ::Z_Construct_UClass_UARFaceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARFaceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARFaceComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARFaceComponent_NoRegister) \
	DECLARE_SERIALIZER(UARFaceComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARFaceComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARFaceComponent(UARFaceComponent&&) = delete; \
	UARFaceComponent(const UARFaceComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARFaceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARFaceComponent) \
	AUGMENTEDREALITY_API virtual ~UARFaceComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_425_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARFaceComponent;

// ********** End Class UARFaceComponent ***********************************************************

// ********** Begin Class UARImageComponent ********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARImageUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARImageUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetImageComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARImageComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARImageComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARImageComponent(); \
	friend struct ::Z_Construct_UClass_UARImageComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARImageComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARImageComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARImageComponent_NoRegister) \
	DECLARE_SERIALIZER(UARImageComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARImageComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARImageComponent(UARImageComponent&&) = delete; \
	UARImageComponent(const UARImageComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARImageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARImageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARImageComponent) \
	AUGMENTEDREALITY_API virtual ~UARImageComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_487_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARImageComponent;

// ********** End Class UARImageComponent **********************************************************

// ********** Begin Class UARQRCodeComponent *******************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARQRCodeUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARQRCodeUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetQRCodeComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARQRCodeComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARQRCodeComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARQRCodeComponent(); \
	friend struct ::Z_Construct_UClass_UARQRCodeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARQRCodeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARQRCodeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARQRCodeComponent_NoRegister) \
	DECLARE_SERIALIZER(UARQRCodeComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARQRCodeComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARQRCodeComponent(UARQRCodeComponent&&) = delete; \
	UARQRCodeComponent(const UARQRCodeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARQRCodeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARQRCodeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARQRCodeComponent) \
	AUGMENTEDREALITY_API virtual ~UARQRCodeComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_531_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARQRCodeComponent;

// ********** End Class UARQRCodeComponent *********************************************************

// ********** Begin Class UARPoseComponent *********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARPoseUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARPoseUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetPoseComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARPoseComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPoseComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPoseComponent(); \
	friend struct ::Z_Construct_UClass_UARPoseComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARPoseComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARPoseComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARPoseComponent_NoRegister) \
	DECLARE_SERIALIZER(UARPoseComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARPoseComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARPoseComponent(UARPoseComponent&&) = delete; \
	UARPoseComponent(const UARPoseComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARPoseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPoseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPoseComponent) \
	AUGMENTEDREALITY_API virtual ~UARPoseComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_575_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARPoseComponent;

// ********** End Class UARPoseComponent ***********************************************************

// ********** Begin Class UAREnvironmentProbeComponent *********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FAREnvironmentProbeUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FAREnvironmentProbeUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAREnvironmentProbeComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAREnvironmentProbeComponent(); \
	friend struct ::Z_Construct_UClass_UAREnvironmentProbeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAREnvironmentProbeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister) \
	DECLARE_SERIALIZER(UAREnvironmentProbeComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UAREnvironmentProbeComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAREnvironmentProbeComponent(UAREnvironmentProbeComponent&&) = delete; \
	UAREnvironmentProbeComponent(const UAREnvironmentProbeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UAREnvironmentProbeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentProbeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAREnvironmentProbeComponent) \
	AUGMENTEDREALITY_API virtual ~UAREnvironmentProbeComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_609_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAREnvironmentProbeComponent;

// ********** End Class UAREnvironmentProbeComponent ***********************************************

// ********** Begin Class UARObjectComponent *******************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARObjectUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARObjectUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARObjectComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARObjectComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARObjectComponent(); \
	friend struct ::Z_Construct_UClass_UARObjectComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARObjectComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARObjectComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARObjectComponent_NoRegister) \
	DECLARE_SERIALIZER(UARObjectComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARObjectComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARObjectComponent(UARObjectComponent&&) = delete; \
	UARObjectComponent(const UARObjectComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARObjectComponent) \
	AUGMENTEDREALITY_API virtual ~UARObjectComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_636_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARObjectComponent;

// ********** End Class UARObjectComponent *********************************************************

// ********** Begin Class UARMeshComponent *********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARMeshUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARMeshUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARMeshComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARMeshComponent(); \
	friend struct ::Z_Construct_UClass_UARMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARMeshComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UARMeshComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARMeshComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARMeshComponent(UARMeshComponent&&) = delete; \
	UARMeshComponent(const UARMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARMeshComponent) \
	AUGMENTEDREALITY_API virtual ~UARMeshComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_663_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARMeshComponent;

// ********** End Class UARMeshComponent ***********************************************************

// ********** Begin Class UARGeoAnchorComponent ****************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_RPC_WRAPPERS_NO_PURE_DECLS \
	AUGMENTEDREALITY_API virtual bool ServerUpdatePayload_Validate(FARGeoAnchorUpdatePayload const& ); \
	AUGMENTEDREALITY_API virtual void ServerUpdatePayload_Implementation(FARGeoAnchorUpdatePayload const& NewPayload); \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetGeoAnchorComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UARGeoAnchorComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchorComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoAnchorComponent(); \
	friend struct ::Z_Construct_UClass_UARGeoAnchorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARGeoAnchorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARGeoAnchorComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARGeoAnchorComponent_NoRegister) \
	DECLARE_SERIALIZER(UARGeoAnchorComponent) \
	AUGMENTEDREALITY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUGMENTEDREALITY_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARGeoAnchorComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARGeoAnchorComponent(UARGeoAnchorComponent&&) = delete; \
	UARGeoAnchorComponent(const UARGeoAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARGeoAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARGeoAnchorComponent) \
	AUGMENTEDREALITY_API virtual ~UARGeoAnchorComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_701_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARGeoAnchorComponent;

// ********** End Class UARGeoAnchorComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h

// ********** Begin Enum EARSessionConfigFlags *****************************************************
#define FOREACH_ENUM_EARSESSIONCONFIGFLAGS(op) \
	op(EARSessionConfigFlags::None) \
	op(EARSessionConfigFlags::GenerateMeshData) \
	op(EARSessionConfigFlags::RenderMeshDataInWireframe) \
	op(EARSessionConfigFlags::GenerateCollisionForMeshData) \
	op(EARSessionConfigFlags::GenerateNavMeshForMeshData) \
	op(EARSessionConfigFlags::UseMeshDataForOcclusion) 

enum class EARSessionConfigFlags : uint8;
template<> struct TIsUEnumClass<EARSessionConfigFlags> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARSessionConfigFlags>();
// ********** End Enum EARSessionConfigFlags *******************************************************

// ********** Begin Enum EPlaneComponentDebugMode **************************************************
#define FOREACH_ENUM_EPLANECOMPONENTDEBUGMODE(op) \
	op(EPlaneComponentDebugMode::None) \
	op(EPlaneComponentDebugMode::ShowNetworkRole) \
	op(EPlaneComponentDebugMode::ShowClassification) 

enum class EPlaneComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EPlaneComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlaneComponentDebugMode>();
// ********** End Enum EPlaneComponentDebugMode ****************************************************

// ********** Begin Enum EFaceComponentDebugMode ***************************************************
#define FOREACH_ENUM_EFACECOMPONENTDEBUGMODE(op) \
	op(EFaceComponentDebugMode::None) \
	op(EFaceComponentDebugMode::ShowEyeVectors) \
	op(EFaceComponentDebugMode::ShowFaceMesh) 

enum class EFaceComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EFaceComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EFaceComponentDebugMode>();
// ********** End Enum EFaceComponentDebugMode *****************************************************

// ********** Begin Enum EARFaceTransformMixing ****************************************************
#define FOREACH_ENUM_EARFACETRANSFORMMIXING(op) \
	op(EARFaceTransformMixing::ComponentOnly) \
	op(EARFaceTransformMixing::ComponentLocationTrackedRotation) \
	op(EARFaceTransformMixing::ComponentWithTracked) \
	op(EARFaceTransformMixing::TrackingOnly) 

enum class EARFaceTransformMixing : uint8;
template<> struct TIsUEnumClass<EARFaceTransformMixing> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARFaceTransformMixing>();
// ********** End Enum EARFaceTransformMixing ******************************************************

// ********** Begin Enum EImageComponentDebugMode **************************************************
#define FOREACH_ENUM_EIMAGECOMPONENTDEBUGMODE(op) \
	op(EImageComponentDebugMode::None) \
	op(EImageComponentDebugMode::ShowDetectedImage) 

enum class EImageComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EImageComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EImageComponentDebugMode>();
// ********** End Enum EImageComponentDebugMode ****************************************************

// ********** Begin Enum EQRCodeComponentDebugMode *************************************************
#define FOREACH_ENUM_EQRCODECOMPONENTDEBUGMODE(op) \
	op(EQRCodeComponentDebugMode::None) \
	op(EQRCodeComponentDebugMode::ShowQRCode) 

enum class EQRCodeComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EQRCodeComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EQRCodeComponentDebugMode>();
// ********** End Enum EQRCodeComponentDebugMode ***************************************************

// ********** Begin Enum EPoseComponentDebugMode ***************************************************
#define FOREACH_ENUM_EPOSECOMPONENTDEBUGMODE(op) \
	op(EPoseComponentDebugMode::None) \
	op(EPoseComponentDebugMode::ShowSkeleton) 

enum class EPoseComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EPoseComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EPoseComponentDebugMode>();
// ********** End Enum EPoseComponentDebugMode *****************************************************

// ********** Begin Enum EGeoAnchorComponentDebugMode **********************************************
#define FOREACH_ENUM_EGEOANCHORCOMPONENTDEBUGMODE(op) \
	op(EGeoAnchorComponentDebugMode::None) \
	op(EGeoAnchorComponentDebugMode::ShowGeoData) 

enum class EGeoAnchorComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EGeoAnchorComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeoAnchorComponentDebugMode>();
// ********** End Enum EGeoAnchorComponentDebugMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
