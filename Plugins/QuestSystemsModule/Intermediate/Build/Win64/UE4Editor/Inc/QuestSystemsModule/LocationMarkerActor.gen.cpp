// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystemsModule/Public/LocationMarkerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationMarkerActor() {}
// Cross Module References
	QUESTSYSTEMSMODULE_API UClass* Z_Construct_UClass_ALocationMarkerActor_NoRegister();
	QUESTSYSTEMSMODULE_API UClass* Z_Construct_UClass_ALocationMarkerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuestSystemsModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUESTSYSTEMSMODULE_API UClass* Z_Construct_UClass_ULocationMarker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALocationMarkerActor::execOnOverlapedByActor)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapedByActor(Z_Param_OverlappingActor);
		P_NATIVE_END;
	}
	void ALocationMarkerActor::StaticRegisterNativesALocationMarkerActor()
	{
		UClass* Class = ALocationMarkerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapedByActor", &ALocationMarkerActor::execOnOverlapedByActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics
	{
		struct LocationMarkerActor_eventOnOverlapedByActor_Parms
		{
			AActor* OverlappingActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::NewProp_OverlappingActor = { "OverlappingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationMarkerActor_eventOnOverlapedByActor_Parms, OverlappingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::NewProp_OverlappingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocationMarkerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocationMarkerActor, nullptr, "OnOverlapedByActor", nullptr, nullptr, sizeof(LocationMarkerActor_eventOnOverlapedByActor_Parms), Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALocationMarkerActor_NoRegister()
	{
		return ALocationMarkerActor::StaticClass();
	}
	struct Z_Construct_UClass_ALocationMarkerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALocationMarkerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystemsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALocationMarkerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALocationMarkerActor_OnOverlapedByActor, "OnOverlapedByActor" }, // 170400698
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALocationMarkerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocationMarkerActor.h" },
		{ "ModuleRelativePath", "Public/LocationMarkerActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALocationMarkerActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULocationMarker_NoRegister, (int32)VTABLE_OFFSET(ALocationMarkerActor, ILocationMarker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALocationMarkerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocationMarkerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALocationMarkerActor_Statics::ClassParams = {
		&ALocationMarkerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALocationMarkerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALocationMarkerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALocationMarkerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALocationMarkerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALocationMarkerActor, 1477186274);
	template<> QUESTSYSTEMSMODULE_API UClass* StaticClass<ALocationMarkerActor>()
	{
		return ALocationMarkerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALocationMarkerActor(Z_Construct_UClass_ALocationMarkerActor, &ALocationMarkerActor::StaticClass, TEXT("/Script/QuestSystemsModule"), TEXT("ALocationMarkerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALocationMarkerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
