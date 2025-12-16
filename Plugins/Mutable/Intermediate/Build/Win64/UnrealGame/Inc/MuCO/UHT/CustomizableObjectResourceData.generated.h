// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectResourceData.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectResourceData_generated_h
#error "CustomizableObjectResourceData.generated.h already included, missing '#pragma once' in CustomizableObjectResourceData.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectResourceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizableObjectResourceData ***********************************
struct Z_Construct_UScriptStruct_FCustomizableObjectResourceData_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectResourceData_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectResourceData_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectResourceData;
// ********** End ScriptStruct FCustomizableObjectResourceData *************************************

// ********** Begin Class UCustomizableObjectResourceDataContainer *********************************
struct Z_Construct_UClass_UCustomizableObjectResourceDataContainer_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectResourceDataContainer_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectResourceData_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectResourceDataContainer(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectResourceDataContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectResourceDataContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectResourceDataContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectResourceDataContainer_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectResourceDataContainer)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectResourceData_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECT_API UCustomizableObjectResourceDataContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectResourceDataContainer(UCustomizableObjectResourceDataContainer&&) = delete; \
	UCustomizableObjectResourceDataContainer(const UCustomizableObjectResourceDataContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObjectResourceDataContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectResourceDataContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectResourceDataContainer) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObjectResourceDataContainer();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectResourceData_h_34_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectResourceData_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectResourceData_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectResourceData_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectResourceDataContainer;

// ********** End Class UCustomizableObjectResourceDataContainer ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectResourceData_h

// ********** Begin Enum ECOResourceDataType *******************************************************
#define FOREACH_ENUM_ECORESOURCEDATATYPE(op) \
	op(ECOResourceDataType::None) \
	op(ECOResourceDataType::AssetUserData) 

enum class ECOResourceDataType : uint16;
template<> struct TIsUEnumClass<ECOResourceDataType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECOResourceDataType>();
// ********** End Enum ECOResourceDataType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
