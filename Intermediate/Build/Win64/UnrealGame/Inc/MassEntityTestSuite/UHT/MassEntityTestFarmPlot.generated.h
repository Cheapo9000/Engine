// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntityTestFarmPlot.h"

#ifdef MASSENTITYTESTSUITE_MassEntityTestFarmPlot_generated_h
#error "MassEntityTestFarmPlot.generated.h already included, missing '#pragma once' in MassEntityTestFarmPlot.h"
#endif
#define MASSENTITYTESTSUITE_MassEntityTestFarmPlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFarmVisualDataRow ************************************************
struct Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FFarmVisualDataRow;
// ********** End ScriptStruct FFarmVisualDataRow **************************************************

// ********** Begin ScriptStruct FFarmJustBecameReadyToHarvestTag **********************************
struct Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FFarmJustBecameReadyToHarvestTag;
// ********** End ScriptStruct FFarmJustBecameReadyToHarvestTag ************************************

// ********** Begin ScriptStruct FFarmReadyToHarvestTag ********************************************
struct Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FFarmReadyToHarvestTag;
// ********** End ScriptStruct FFarmReadyToHarvestTag **********************************************

// ********** Begin ScriptStruct FFarmGridCellData *************************************************
struct Z_Construct_UScriptStruct_FFarmGridCellData_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFarmGridCellData_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FFarmGridCellData;
// ********** End ScriptStruct FFarmGridCellData ***************************************************

// ********** Begin ScriptStruct FFarmWaterFragment ************************************************
struct Z_Construct_UScriptStruct_FFarmWaterFragment_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFarmWaterFragment_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FFarmWaterFragment;
// ********** End ScriptStruct FFarmWaterFragment **************************************************

// ********** Begin ScriptStruct FFarmFlowerFragment ***********************************************
struct Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FFarmFlowerFragment;
// ********** End ScriptStruct FFarmFlowerFragment *************************************************

// ********** Begin ScriptStruct FFarmCropFragment *************************************************
struct Z_Construct_UScriptStruct_FFarmCropFragment_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFarmCropFragment_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FFarmCropFragment;
// ********** End ScriptStruct FFarmCropFragment ***************************************************

// ********** Begin ScriptStruct FFarmVisualFragment ***********************************************
struct Z_Construct_UScriptStruct_FFarmVisualFragment_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFarmVisualFragment_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FFarmVisualFragment;
// ********** End ScriptStruct FFarmVisualFragment *************************************************

// ********** Begin ScriptStruct FHarvestTimerFragment *********************************************
struct Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics;
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics; \
	MASSENTITYTESTSUITE_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FHarvestTimerFragment;
// ********** End ScriptStruct FHarvestTimerFragment ***********************************************

// ********** Begin Class UFarmProcessorBase *******************************************************
struct Z_Construct_UClass_UFarmProcessorBase_Statics;
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmProcessorBase_NoRegister();

#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFarmProcessorBase(); \
	friend struct ::Z_Construct_UClass_UFarmProcessorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYTESTSUITE_API UClass* ::Z_Construct_UClass_UFarmProcessorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UFarmProcessorBase, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityTestSuite"), Z_Construct_UClass_UFarmProcessorBase_NoRegister) \
	DECLARE_SERIALIZER(UFarmProcessorBase)


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_106_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFarmProcessorBase(UFarmProcessorBase&&) = delete; \
	UFarmProcessorBase(const UFarmProcessorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFarmProcessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFarmProcessorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UFarmProcessorBase) \
	NO_API virtual ~UFarmProcessorBase();


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_103_PROLOG
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFarmProcessorBase;

// ********** End Class UFarmProcessorBase *********************************************************

// ********** Begin Class UFarmWaterProcessor ******************************************************
struct Z_Construct_UClass_UFarmWaterProcessor_Statics;
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmWaterProcessor_NoRegister();

#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFarmWaterProcessor(); \
	friend struct ::Z_Construct_UClass_UFarmWaterProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYTESTSUITE_API UClass* ::Z_Construct_UClass_UFarmWaterProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UFarmWaterProcessor, UFarmProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityTestSuite"), Z_Construct_UClass_UFarmWaterProcessor_NoRegister) \
	DECLARE_SERIALIZER(UFarmWaterProcessor)


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFarmWaterProcessor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFarmWaterProcessor(UFarmWaterProcessor&&) = delete; \
	UFarmWaterProcessor(const UFarmWaterProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFarmWaterProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFarmWaterProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFarmWaterProcessor) \
	NO_API virtual ~UFarmWaterProcessor();


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_117_PROLOG
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_120_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFarmWaterProcessor;

// ********** End Class UFarmWaterProcessor ********************************************************

// ********** Begin Class UFarmHarvestTimerSystem_Flowers ******************************************
struct Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics;
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_NoRegister();

#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFarmHarvestTimerSystem_Flowers(); \
	friend struct ::Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYTESTSUITE_API UClass* ::Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_NoRegister(); \
public: \
	DECLARE_CLASS2(UFarmHarvestTimerSystem_Flowers, UFarmProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityTestSuite"), Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_NoRegister) \
	DECLARE_SERIALIZER(UFarmHarvestTimerSystem_Flowers)


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFarmHarvestTimerSystem_Flowers(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFarmHarvestTimerSystem_Flowers(UFarmHarvestTimerSystem_Flowers&&) = delete; \
	UFarmHarvestTimerSystem_Flowers(const UFarmHarvestTimerSystem_Flowers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFarmHarvestTimerSystem_Flowers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFarmHarvestTimerSystem_Flowers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFarmHarvestTimerSystem_Flowers) \
	NO_API virtual ~UFarmHarvestTimerSystem_Flowers();


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_129_PROLOG
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFarmHarvestTimerSystem_Flowers;

// ********** End Class UFarmHarvestTimerSystem_Flowers ********************************************

// ********** Begin Class UFarmHarvestTimerSystem_Crops ********************************************
struct Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics;
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_NoRegister();

#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFarmHarvestTimerSystem_Crops(); \
	friend struct ::Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYTESTSUITE_API UClass* ::Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_NoRegister(); \
public: \
	DECLARE_CLASS2(UFarmHarvestTimerSystem_Crops, UFarmProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityTestSuite"), Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_NoRegister) \
	DECLARE_SERIALIZER(UFarmHarvestTimerSystem_Crops)


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFarmHarvestTimerSystem_Crops(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFarmHarvestTimerSystem_Crops(UFarmHarvestTimerSystem_Crops&&) = delete; \
	UFarmHarvestTimerSystem_Crops(const UFarmHarvestTimerSystem_Crops&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFarmHarvestTimerSystem_Crops); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFarmHarvestTimerSystem_Crops); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFarmHarvestTimerSystem_Crops) \
	NO_API virtual ~UFarmHarvestTimerSystem_Crops();


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_140_PROLOG
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFarmHarvestTimerSystem_Crops;

// ********** End Class UFarmHarvestTimerSystem_Crops **********************************************

// ********** Begin Class UFarmHarvestTimerExpired *************************************************
struct Z_Construct_UClass_UFarmHarvestTimerExpired_Statics;
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerExpired_NoRegister();

#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFarmHarvestTimerExpired(); \
	friend struct ::Z_Construct_UClass_UFarmHarvestTimerExpired_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYTESTSUITE_API UClass* ::Z_Construct_UClass_UFarmHarvestTimerExpired_NoRegister(); \
public: \
	DECLARE_CLASS2(UFarmHarvestTimerExpired, UFarmProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityTestSuite"), Z_Construct_UClass_UFarmHarvestTimerExpired_NoRegister) \
	DECLARE_SERIALIZER(UFarmHarvestTimerExpired)


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFarmHarvestTimerExpired(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFarmHarvestTimerExpired(UFarmHarvestTimerExpired&&) = delete; \
	UFarmHarvestTimerExpired(const UFarmHarvestTimerExpired&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFarmHarvestTimerExpired); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFarmHarvestTimerExpired); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFarmHarvestTimerExpired) \
	NO_API virtual ~UFarmHarvestTimerExpired();


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_151_PROLOG
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFarmHarvestTimerExpired;

// ********** End Class UFarmHarvestTimerExpired ***************************************************

// ********** Begin Class UFarmHarvestTimerSetIcon *************************************************
struct Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics;
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon_NoRegister();

#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFarmHarvestTimerSetIcon(); \
	friend struct ::Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYTESTSUITE_API UClass* ::Z_Construct_UClass_UFarmHarvestTimerSetIcon_NoRegister(); \
public: \
	DECLARE_CLASS2(UFarmHarvestTimerSetIcon, UFarmProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityTestSuite"), Z_Construct_UClass_UFarmHarvestTimerSetIcon_NoRegister) \
	DECLARE_SERIALIZER(UFarmHarvestTimerSetIcon)


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_165_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFarmHarvestTimerSetIcon(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFarmHarvestTimerSetIcon(UFarmHarvestTimerSetIcon&&) = delete; \
	UFarmHarvestTimerSetIcon(const UFarmHarvestTimerSetIcon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFarmHarvestTimerSetIcon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFarmHarvestTimerSetIcon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFarmHarvestTimerSetIcon) \
	NO_API virtual ~UFarmHarvestTimerSetIcon();


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_162_PROLOG
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_165_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_165_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFarmHarvestTimerSetIcon;

// ********** End Class UFarmHarvestTimerSetIcon ***************************************************

// ********** Begin Class AMassEntityTestFarmPlot **************************************************
struct Z_Construct_UClass_AMassEntityTestFarmPlot_Statics;
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_AMassEntityTestFarmPlot_NoRegister();

#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassEntityTestFarmPlot(); \
	friend struct ::Z_Construct_UClass_AMassEntityTestFarmPlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYTESTSUITE_API UClass* ::Z_Construct_UClass_AMassEntityTestFarmPlot_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassEntityTestFarmPlot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityTestSuite"), Z_Construct_UClass_AMassEntityTestFarmPlot_NoRegister) \
	DECLARE_SERIALIZER(AMassEntityTestFarmPlot) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_186_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassEntityTestFarmPlot(AMassEntityTestFarmPlot&&) = delete; \
	AMassEntityTestFarmPlot(const AMassEntityTestFarmPlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassEntityTestFarmPlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassEntityTestFarmPlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassEntityTestFarmPlot) \
	NO_API virtual ~AMassEntityTestFarmPlot();


#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_183_PROLOG
#define FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_186_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassEntityTestFarmPlot;

// ********** End Class AMassEntityTestFarmPlot ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
