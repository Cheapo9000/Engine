// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/Text3DCharacterExtensionBase.h"

#ifdef TEXT3D_Text3DCharacterExtensionBase_generated_h
#error "Text3DCharacterExtensionBase.generated.h already included, missing '#pragma once' in Text3DCharacterExtensionBase.h"
#endif
#define TEXT3D_Text3DCharacterExtensionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UText3DCharacterExtensionBase ********************************************
struct Z_Construct_UClass_UText3DCharacterExtensionBase_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DCharacterExtensionBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DCharacterExtensionBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DCharacterExtensionBase(); \
	friend struct ::Z_Construct_UClass_UText3DCharacterExtensionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DCharacterExtensionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DCharacterExtensionBase, UText3DExtensionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DCharacterExtensionBase_NoRegister) \
	DECLARE_SERIALIZER(UText3DCharacterExtensionBase)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DCharacterExtensionBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXT3D_API UText3DCharacterExtensionBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DCharacterExtensionBase(UText3DCharacterExtensionBase&&) = delete; \
	UText3DCharacterExtensionBase(const UText3DCharacterExtensionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DCharacterExtensionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DCharacterExtensionBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UText3DCharacterExtensionBase) \
	TEXT3D_API virtual ~UText3DCharacterExtensionBase();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DCharacterExtensionBase_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DCharacterExtensionBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DCharacterExtensionBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DCharacterExtensionBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DCharacterExtensionBase;

// ********** End Class UText3DCharacterExtensionBase **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DCharacterExtensionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
