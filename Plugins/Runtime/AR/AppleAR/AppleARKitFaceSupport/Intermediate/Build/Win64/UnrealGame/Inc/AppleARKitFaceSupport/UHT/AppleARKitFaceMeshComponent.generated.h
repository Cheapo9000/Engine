// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppleARKitFaceMeshComponent.h"

#ifdef APPLEARKITFACESUPPORT_AppleARKitFaceMeshComponent_generated_h
#error "AppleARKitFaceMeshComponent.generated.h already included, missing '#pragma once' in AppleARKitFaceMeshComponent.h"
#endif
#define APPLEARKITFACESUPPORT_AppleARKitFaceMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EARFaceBlendShape : uint8;
struct FNetQuantizeFaceCurve;

// ********** Begin ScriptStruct FNetQuantizeFaceCurve *********************************************
struct Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics;
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics; \
	APPLEARKITFACESUPPORT_API static class UScriptStruct* StaticStruct();


struct FNetQuantizeFaceCurve;
// ********** End ScriptStruct FNetQuantizeFaceCurve ***********************************************

// ********** Begin Class UAppleARKitFaceMeshComponent *********************************************
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_RPC_WRAPPERS \
	virtual bool ServerUpdateFaceCurves_Validate(TArray<FNetQuantizeFaceCurve> const& ); \
	virtual void ServerUpdateFaceCurves_Implementation(TArray<FNetQuantizeFaceCurve> const& ClientCurves); \
	DECLARE_FUNCTION(execServerUpdateFaceCurves); \
	DECLARE_FUNCTION(execOnRep_RemoteCurves); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execPublishViaLiveLink); \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp); \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber); \
	DECLARE_FUNCTION(execSetAutoBind); \
	DECLARE_FUNCTION(execUpdateMesh); \
	DECLARE_FUNCTION(execUpdateMeshFromBlendShapes); \
	DECLARE_FUNCTION(execGetFaceBlendShapeAmount); \
	DECLARE_FUNCTION(execSetBlendShapeAmount); \
	DECLARE_FUNCTION(execSetBlendShapes); \
	DECLARE_FUNCTION(execCreateMesh);


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics;
APPLEARKITFACESUPPORT_API UClass* Z_Construct_UClass_UAppleARKitFaceMeshComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUAppleARKitFaceMeshComponent(); \
	friend struct ::Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APPLEARKITFACESUPPORT_API UClass* ::Z_Construct_UClass_UAppleARKitFaceMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAppleARKitFaceMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleARKitFaceSupport"), Z_Construct_UClass_UAppleARKitFaceMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UAppleARKitFaceMeshComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemoteCurves=NETFIELD_REP_START, \
		NETFIELD_REP_END=RemoteCurves	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitFaceMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitFaceMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitFaceMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitFaceMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAppleARKitFaceMeshComponent(UAppleARKitFaceMeshComponent&&) = delete; \
	UAppleARKitFaceMeshComponent(const UAppleARKitFaceMeshComponent&) = delete; \
	NO_API virtual ~UAppleARKitFaceMeshComponent();


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_109_PROLOG
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_INCLASS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAppleARKitFaceMeshComponent;

// ********** End Class UAppleARKitFaceMeshComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h

// ********** Begin Enum EARFaceComponentTransformMixing *******************************************
#define FOREACH_ENUM_EARFACECOMPONENTTRANSFORMMIXING(op) \
	op(EARFaceComponentTransformMixing::ComponentOnly) \
	op(EARFaceComponentTransformMixing::ComponentLocationTrackedRotation) \
	op(EARFaceComponentTransformMixing::ComponentWithTracked) \
	op(EARFaceComponentTransformMixing::TrackingOnly) 

enum class EARFaceComponentTransformMixing : uint8;
template<> struct TIsUEnumClass<EARFaceComponentTransformMixing> { enum { Value = true }; };
template<> APPLEARKITFACESUPPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EARFaceComponentTransformMixing>();
// ********** End Enum EARFaceComponentTransformMixing *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
