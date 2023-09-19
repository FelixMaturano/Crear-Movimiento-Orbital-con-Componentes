// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Componentes/ComponentesGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentesGameMode() {}
// Cross Module References
	COMPONENTES_API UClass* Z_Construct_UClass_AComponentesGameMode_NoRegister();
	COMPONENTES_API UClass* Z_Construct_UClass_AComponentesGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Componentes();
// End Cross Module References
	void AComponentesGameMode::StaticRegisterNativesAComponentesGameMode()
	{
	}
	UClass* Z_Construct_UClass_AComponentesGameMode_NoRegister()
	{
		return AComponentesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AComponentesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponentesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Componentes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ComponentesGameMode.h" },
		{ "ModuleRelativePath", "ComponentesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponentesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponentesGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComponentesGameMode_Statics::ClassParams = {
		&AComponentesGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AComponentesGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentesGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponentesGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComponentesGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComponentesGameMode, 3903209350);
	template<> COMPONENTES_API UClass* StaticClass<AComponentesGameMode>()
	{
		return AComponentesGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComponentesGameMode(Z_Construct_UClass_AComponentesGameMode, &AComponentesGameMode::StaticClass, TEXT("/Script/Componentes"), TEXT("AComponentesGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponentesGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
