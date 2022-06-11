// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QUESTSYSTEMSMODULE_InteractableObject_generated_h
#error "InteractableObject.generated.h already included, missing '#pragma once' in InteractableObject.h"
#endif
#define QUESTSYSTEMSMODULE_InteractableObject_generated_h

#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_SPARSE_DATA
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_RPC_WRAPPERS \
	virtual void Interact_Implementation(AActor* ActorInteractedWithObject) {}; \
 \
	DECLARE_FUNCTION(execInteract_Implementation); \
	DECLARE_FUNCTION(execInteract);


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract_Implementation); \
	DECLARE_FUNCTION(execInteract);


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_EVENT_PARMS \
	struct InteractableObject_eventInteract_Parms \
	{ \
		AActor* ActorInteractedWithObject; \
	};


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_CALLBACK_WRAPPERS
#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEMSMODULE_API UInteractableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEMSMODULE_API, UInteractableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEMSMODULE_API UInteractableObject(UInteractableObject&&); \
	QUESTSYSTEMSMODULE_API UInteractableObject(const UInteractableObject&); \
public:


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEMSMODULE_API UInteractableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEMSMODULE_API UInteractableObject(UInteractableObject&&); \
	QUESTSYSTEMSMODULE_API UInteractableObject(const UInteractableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEMSMODULE_API, UInteractableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableObject)


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableObject(); \
	friend struct Z_Construct_UClass_UInteractableObject_Statics; \
public: \
	DECLARE_CLASS(UInteractableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestSystemsModule"), QUESTSYSTEMSMODULE_API) \
	DECLARE_SERIALIZER(UInteractableObject)


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_GENERATED_UINTERFACE_BODY() \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_GENERATED_UINTERFACE_BODY() \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableObject() {} \
public: \
	typedef UInteractableObject UClassType; \
	typedef IInteractableObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* ActorInteractedWithObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractableObject() {} \
public: \
	typedef UInteractableObject UClassType; \
	typedef IInteractableObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* ActorInteractedWithObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_10_PROLOG \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_EVENT_PARMS


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_SPARSE_DATA \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_RPC_WRAPPERS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_CALLBACK_WRAPPERS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_SPARSE_DATA \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_CALLBACK_WRAPPERS \
	TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEMSMODULE_API UClass* StaticClass<class UInteractableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestDestructible_Plugins_QuestSystemsModule_Source_QuestSystemsModule_Public_InteractableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
