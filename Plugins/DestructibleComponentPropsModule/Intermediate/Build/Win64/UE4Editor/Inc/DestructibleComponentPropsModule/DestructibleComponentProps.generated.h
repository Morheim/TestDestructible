// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DESTRUCTIBLECOMPONENTPROPSMODULE_DestructibleComponentProps_generated_h
#error "DestructibleComponentProps.generated.h already included, missing '#pragma once' in DestructibleComponentProps.h"
#endif
#define DESTRUCTIBLECOMPONENTPROPSMODULE_DestructibleComponentProps_generated_h

#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_SPARSE_DATA
#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execTrigger); \
	DECLARE_FUNCTION(execDamage);


#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execTrigger); \
	DECLARE_FUNCTION(execDamage);


#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestructibleComponentProps(); \
	friend struct Z_Construct_UClass_ADestructibleComponentProps_Statics; \
public: \
	DECLARE_CLASS(ADestructibleComponentProps, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DestructibleComponentPropsModule"), NO_API) \
	DECLARE_SERIALIZER(ADestructibleComponentProps)


#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADestructibleComponentProps(); \
	friend struct Z_Construct_UClass_ADestructibleComponentProps_Statics; \
public: \
	DECLARE_CLASS(ADestructibleComponentProps, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DestructibleComponentPropsModule"), NO_API) \
	DECLARE_SERIALIZER(ADestructibleComponentProps)


#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestructibleComponentProps(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestructibleComponentProps) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleComponentProps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleComponentProps); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestructibleComponentProps(ADestructibleComponentProps&&); \
	NO_API ADestructibleComponentProps(const ADestructibleComponentProps&); \
public:


#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestructibleComponentProps(ADestructibleComponentProps&&); \
	NO_API ADestructibleComponentProps(const ADestructibleComponentProps&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleComponentProps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleComponentProps); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestructibleComponentProps)


#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_PRIVATE_PROPERTY_OFFSET
#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_13_PROLOG
#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_PRIVATE_PROPERTY_OFFSET \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_SPARSE_DATA \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_RPC_WRAPPERS \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_INCLASS \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_PRIVATE_PROPERTY_OFFSET \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_SPARSE_DATA \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_INCLASS_NO_PURE_DECLS \
	TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESTRUCTIBLECOMPONENTPROPSMODULE_API UClass* StaticClass<class ADestructibleComponentProps>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestDestructible_Plugins_DestructibleComponentPropsModule_Source_DestructibleComponentPropsModule_Public_DestructibleComponentProps_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
