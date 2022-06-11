// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QUESTSYSTEMSMODULE_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define QUESTSYSTEMSMODULE_Quest_generated_h

#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_SPARSE_DATA
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeQuest); \
	DECLARE_FUNCTION(execUpdateLocation);


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeQuest); \
	DECLARE_FUNCTION(execUpdateLocation);


#if WITH_EDITOR
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddInteractObjective); \
	DECLARE_FUNCTION(execAddLocationObjective);


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddInteractObjective); \
	DECLARE_FUNCTION(execAddLocationObjective);


#else
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend struct Z_Construct_UClass_AQuest_Statics; \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystemsModule"), NO_API) \
	DECLARE_SERIALIZER(AQuest)


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend struct Z_Construct_UClass_AQuest_Statics; \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystemsModule"), NO_API) \
	DECLARE_SERIALIZER(AQuest)


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public:


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuest)


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_PRIVATE_PROPERTY_OFFSET
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_13_PROLOG
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_PRIVATE_PROPERTY_OFFSET \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_SPARSE_DATA \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_RPC_WRAPPERS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_INCLASS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_PRIVATE_PROPERTY_OFFSET \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_SPARSE_DATA \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_INCLASS_NO_PURE_DECLS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEMSMODULE_API UClass* StaticClass<class AQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_Quest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
