// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/MetaHumanCharacterEditorHeadModelTool.h"

#ifdef METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorHeadModelTool_generated_h
#error "MetaHumanCharacterEditorHeadModelTool.generated.h already included, missing '#pragma once' in MetaHumanCharacterEditorHeadModelTool.h"
#endif
#define METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorHeadModelTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanCharacterEditorHeadModelToolBuilder ****************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelToolBuilder_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelToolBuilder_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorHeadModelToolBuilder(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorHeadModelToolBuilder, UMetaHumanCharacterEditorToolWithToolTargetsBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorHeadModelToolBuilder)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorHeadModelToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorHeadModelToolBuilder(UMetaHumanCharacterEditorHeadModelToolBuilder&&) = delete; \
	UMetaHumanCharacterEditorHeadModelToolBuilder(const UMetaHumanCharacterEditorHeadModelToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorHeadModelToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorHeadModelToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorHeadModelToolBuilder) \
	NO_API virtual ~UMetaHumanCharacterEditorHeadModelToolBuilder();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_19_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorHeadModelToolBuilder;

// ********** End Class UMetaHumanCharacterEditorHeadModelToolBuilder ******************************

// ********** Begin Class UMetaHumanCharacterHeadModelSubToolBase **********************************
struct Z_Construct_UClass_UMetaHumanCharacterHeadModelSubToolBase_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterHeadModelSubToolBase_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterHeadModelSubToolBase(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterHeadModelSubToolBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterHeadModelSubToolBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterHeadModelSubToolBase, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterHeadModelSubToolBase_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterHeadModelSubToolBase)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterHeadModelSubToolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterHeadModelSubToolBase(UMetaHumanCharacterHeadModelSubToolBase&&) = delete; \
	UMetaHumanCharacterHeadModelSubToolBase(const UMetaHumanCharacterHeadModelSubToolBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterHeadModelSubToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterHeadModelSubToolBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterHeadModelSubToolBase) \
	NO_API virtual ~UMetaHumanCharacterHeadModelSubToolBase();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_40_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterHeadModelSubToolBase;

// ********** End Class UMetaHumanCharacterHeadModelSubToolBase ************************************

// ********** Begin Class UMetaHumanCharacterHeadModelEyelashesProperties **************************
struct Z_Construct_UClass_UMetaHumanCharacterHeadModelEyelashesProperties_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterHeadModelEyelashesProperties_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterHeadModelEyelashesProperties(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterHeadModelEyelashesProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterHeadModelEyelashesProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterHeadModelEyelashesProperties, UMetaHumanCharacterHeadModelSubToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterHeadModelEyelashesProperties_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterHeadModelEyelashesProperties)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterHeadModelEyelashesProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterHeadModelEyelashesProperties(UMetaHumanCharacterHeadModelEyelashesProperties&&) = delete; \
	UMetaHumanCharacterHeadModelEyelashesProperties(const UMetaHumanCharacterHeadModelEyelashesProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterHeadModelEyelashesProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterHeadModelEyelashesProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterHeadModelEyelashesProperties) \
	NO_API virtual ~UMetaHumanCharacterHeadModelEyelashesProperties();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_54_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterHeadModelEyelashesProperties;

// ********** End Class UMetaHumanCharacterHeadModelEyelashesProperties ****************************

// ********** Begin Class UMetaHumanCharacterHeadModelTeethProperties ******************************
struct Z_Construct_UClass_UMetaHumanCharacterHeadModelTeethProperties_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterHeadModelTeethProperties_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterHeadModelTeethProperties(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterHeadModelTeethProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterHeadModelTeethProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterHeadModelTeethProperties, UMetaHumanCharacterHeadModelSubToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterHeadModelTeethProperties_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterHeadModelTeethProperties)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterHeadModelTeethProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterHeadModelTeethProperties(UMetaHumanCharacterHeadModelTeethProperties&&) = delete; \
	UMetaHumanCharacterHeadModelTeethProperties(const UMetaHumanCharacterHeadModelTeethProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterHeadModelTeethProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterHeadModelTeethProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterHeadModelTeethProperties) \
	NO_API virtual ~UMetaHumanCharacterHeadModelTeethProperties();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_96_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterHeadModelTeethProperties;

// ********** End Class UMetaHumanCharacterHeadModelTeethProperties ********************************

// ********** Begin Class UMetaHumanCharacterEditorHeadModelTool ***********************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelTool_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelTool_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorHeadModelTool(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorHeadModelTool, UMetaHumanCharacterEditorToolWithSubTools, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorHeadModelTool_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorHeadModelTool)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorHeadModelTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorHeadModelTool(UMetaHumanCharacterEditorHeadModelTool&&) = delete; \
	UMetaHumanCharacterEditorHeadModelTool(const UMetaHumanCharacterEditorHeadModelTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorHeadModelTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorHeadModelTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorHeadModelTool) \
	NO_API virtual ~UMetaHumanCharacterEditorHeadModelTool();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_129_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorHeadModelTool;

// ********** End Class UMetaHumanCharacterEditorHeadModelTool *************************************

// ********** Begin Class UMetaHumanCharacterEditorHeadMaterialsTool *******************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorHeadMaterialsTool_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorHeadMaterialsTool_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorHeadMaterialsTool(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorHeadMaterialsTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorHeadMaterialsTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorHeadMaterialsTool, UMetaHumanCharacterEditorHeadModelTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorHeadMaterialsTool_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorHeadMaterialsTool)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_180_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorHeadMaterialsTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorHeadMaterialsTool(UMetaHumanCharacterEditorHeadMaterialsTool&&) = delete; \
	UMetaHumanCharacterEditorHeadMaterialsTool(const UMetaHumanCharacterEditorHeadMaterialsTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorHeadMaterialsTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorHeadMaterialsTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorHeadMaterialsTool) \
	NO_API virtual ~UMetaHumanCharacterEditorHeadMaterialsTool();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_177_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorHeadMaterialsTool;

// ********** End Class UMetaHumanCharacterEditorHeadMaterialsTool *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorHeadModelTool_h

// ********** Begin Enum EMetaHumanCharacterHeadModelTool ******************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERHEADMODELTOOL(op) \
	op(EMetaHumanCharacterHeadModelTool::Model) \
	op(EMetaHumanCharacterHeadModelTool::Materials) \
	op(EMetaHumanCharacterHeadModelTool::Grooms) 

enum class EMetaHumanCharacterHeadModelTool : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterHeadModelTool> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterHeadModelTool>();
// ********** End Enum EMetaHumanCharacterHeadModelTool ********************************************

// ********** Begin Enum EMetaHumanCharacterTeethPropertyType **************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERTEETHPROPERTYTYPE(op) \
	op(EMetaHumanCharacterTeethPropertyType::ToothLength) \
	op(EMetaHumanCharacterTeethPropertyType::ToothSpacing) \
	op(EMetaHumanCharacterTeethPropertyType::UpperShift) \
	op(EMetaHumanCharacterTeethPropertyType::LowerShift) \
	op(EMetaHumanCharacterTeethPropertyType::Overbite) \
	op(EMetaHumanCharacterTeethPropertyType::Overjet) \
	op(EMetaHumanCharacterTeethPropertyType::WornDown) \
	op(EMetaHumanCharacterTeethPropertyType::Polycanine) \
	op(EMetaHumanCharacterTeethPropertyType::RecedingGums) \
	op(EMetaHumanCharacterTeethPropertyType::Narrowness) 

enum class EMetaHumanCharacterTeethPropertyType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterTeethPropertyType> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterTeethPropertyType>();
// ********** End Enum EMetaHumanCharacterTeethPropertyType ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
