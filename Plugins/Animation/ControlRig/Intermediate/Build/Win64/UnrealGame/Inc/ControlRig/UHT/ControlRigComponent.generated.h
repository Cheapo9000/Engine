// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigComponent.h"

#ifdef CONTROLRIG_ControlRigComponent_generated_h
#error "ControlRigComponent.generated.h already included, missing '#pragma once' in ControlRigComponent.h"
#endif
#define CONTROLRIG_ControlRigComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UControlRig;
class UControlRigComponent;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;
enum class EControlRigComponentMapDirection : uint8;
enum class EControlRigComponentSpace : uint8;
enum class ERigElementType : uint8;
struct FControlRigComponentMappedBone;
struct FControlRigComponentMappedComponent;
struct FControlRigComponentMappedCurve;
struct FControlRigComponentMappedElement;

// ********** Begin ScriptStruct FControlRigComponentMappedElement *********************************
struct Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigComponentMappedElement;
// ********** End ScriptStruct FControlRigComponentMappedElement ***********************************

// ********** Begin ScriptStruct FControlRigComponentMappedComponent *******************************
struct Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigComponentMappedComponent;
// ********** End ScriptStruct FControlRigComponentMappedComponent *********************************

// ********** Begin ScriptStruct FControlRigComponentMappedBone ************************************
struct Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigComponentMappedBone;
// ********** End ScriptStruct FControlRigComponentMappedBone **************************************

// ********** Begin ScriptStruct FControlRigComponentMappedCurve ***********************************
struct Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigComponentMappedCurve;
// ********** End ScriptStruct FControlRigComponentMappedCurve *************************************

// ********** Begin Delegate FControlRigComponentDelegate ******************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_171_DELEGATE \
CONTROLRIG_API void FControlRigComponentDelegate_DelegateWrapper(const FMulticastScriptDelegate& ControlRigComponentDelegate, UControlRigComponent* Component);


// ********** End Delegate FControlRigComponentDelegate ********************************************

// ********** Begin Class UControlRigComponent *****************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_RPC_WRAPPERS \
	CONTROLRIG_API virtual void OnPostForwardsSolve_Implementation(UControlRigComponent* Component); \
	CONTROLRIG_API virtual void OnPreForwardsSolve_Implementation(UControlRigComponent* Component); \
	CONTROLRIG_API virtual void OnPostConstruction_Implementation(UControlRigComponent* Component); \
	CONTROLRIG_API virtual void OnPreConstruction_Implementation(UControlRigComponent* Component); \
	CONTROLRIG_API virtual void OnPostInitialize_Implementation(UControlRigComponent* Component); \
	CONTROLRIG_API virtual void OnPreInitialize_Implementation(UControlRigComponent* Component); \
	DECLARE_FUNCTION(execSetObjectBinding); \
	DECLARE_FUNCTION(execSetControlRigClass); \
	DECLARE_FUNCTION(execSetInitialSpaceTransform); \
	DECLARE_FUNCTION(execGetInitialSpaceTransform); \
	DECLARE_FUNCTION(execGetSpaceTransform); \
	DECLARE_FUNCTION(execSetControlOffset); \
	DECLARE_FUNCTION(execGetControlOffset); \
	DECLARE_FUNCTION(execSetControlTransform); \
	DECLARE_FUNCTION(execSetControlScale); \
	DECLARE_FUNCTION(execSetControlRotator); \
	DECLARE_FUNCTION(execSetControlPosition); \
	DECLARE_FUNCTION(execSetControlVector2D); \
	DECLARE_FUNCTION(execSetControlInt); \
	DECLARE_FUNCTION(execSetControlFloat); \
	DECLARE_FUNCTION(execSetControlBool); \
	DECLARE_FUNCTION(execGetControlTransform); \
	DECLARE_FUNCTION(execGetControlScale); \
	DECLARE_FUNCTION(execGetControlRotator); \
	DECLARE_FUNCTION(execGetControlPosition); \
	DECLARE_FUNCTION(execGetControlVector2D); \
	DECLARE_FUNCTION(execGetControlInt); \
	DECLARE_FUNCTION(execGetControlFloat); \
	DECLARE_FUNCTION(execGetControlBool); \
	DECLARE_FUNCTION(execSetInitialBoneTransform); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execGetInitialBoneTransform); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execDoesElementExist); \
	DECLARE_FUNCTION(execGetElementNames); \
	DECLARE_FUNCTION(execSetBoneInitialTransformsFromSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedCompleteSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedComponents); \
	DECLARE_FUNCTION(execAddMappedElements); \
	DECLARE_FUNCTION(execSetMappedElements); \
	DECLARE_FUNCTION(execClearMappedElements); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execOnPostForwardsSolve); \
	DECLARE_FUNCTION(execOnPreForwardsSolve); \
	DECLARE_FUNCTION(execOnPostConstruction); \
	DECLARE_FUNCTION(execOnPreConstruction); \
	DECLARE_FUNCTION(execOnPostInitialize); \
	DECLARE_FUNCTION(execOnPreInitialize); \
	DECLARE_FUNCTION(execGetAbsoluteTime); \
	DECLARE_FUNCTION(execCanExecute); \
	DECLARE_FUNCTION(execGetControlRig);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigComponent, CONTROLRIG_API)


struct Z_Construct_UClass_UControlRigComponent_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigComponent_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigComponent(); \
	friend struct ::Z_Construct_UClass_UControlRigComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigComponent_NoRegister) \
	DECLARE_SERIALIZER(UControlRigComponent) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigComponent(UControlRigComponent&&) = delete; \
	UControlRigComponent(const UControlRigComponent&) = delete; \
	CONTROLRIG_API virtual ~UControlRigComponent();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_174_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_177_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigComponent;

// ********** End Class UControlRigComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h

// ********** Begin Enum EControlRigComponentSpace *************************************************
#define FOREACH_ENUM_ECONTROLRIGCOMPONENTSPACE(op) \
	op(EControlRigComponentSpace::WorldSpace) \
	op(EControlRigComponentSpace::ActorSpace) \
	op(EControlRigComponentSpace::ComponentSpace) \
	op(EControlRigComponentSpace::RigSpace) \
	op(EControlRigComponentSpace::LocalSpace) \
	op(EControlRigComponentSpace::Max) 

enum class EControlRigComponentSpace : uint8;
template<> struct TIsUEnumClass<EControlRigComponentSpace> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigComponentSpace>();
// ********** End Enum EControlRigComponentSpace ***************************************************

// ********** Begin Enum EControlRigComponentMapDirection ******************************************
#define FOREACH_ENUM_ECONTROLRIGCOMPONENTMAPDIRECTION(op) \
	op(EControlRigComponentMapDirection::Input) \
	op(EControlRigComponentMapDirection::Output) 

enum class EControlRigComponentMapDirection : uint8;
template<> struct TIsUEnumClass<EControlRigComponentMapDirection> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigComponentMapDirection>();
// ********** End Enum EControlRigComponentMapDirection ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
