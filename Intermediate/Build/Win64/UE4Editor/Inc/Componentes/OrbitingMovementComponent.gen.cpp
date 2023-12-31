// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Componentes/OrbitingMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbitingMovementComponent() {}
// Cross Module References
	COMPONENTES_API UClass* Z_Construct_UClass_UOrbitingMovementComponent_NoRegister();
	COMPONENTES_API UClass* Z_Construct_UClass_UOrbitingMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Componentes();
// End Cross Module References
	void UOrbitingMovementComponent::StaticRegisterNativesUOrbitingMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UOrbitingMovementComponent_NoRegister()
	{
		return UOrbitingMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOrbitingMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateToFaceOutwards_MetaData[];
#endif
		static void NewProp_RotateToFaceOutwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateToFaceOutwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrbitingMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Componentes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OrbitingMovementComponent.h" },
		{ "ModuleRelativePath", "OrbitingMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotateToFaceOutwards_MetaData[] = {
		{ "Comment", "//En que direccion se movera la rotacion del componente (Acercandose o alejandose del origen de la orbita)\n" },
		{ "ModuleRelativePath", "OrbitingMovementComponent.h" },
		{ "ToolTip", "En que direccion se movera la rotacion del componente (Acercandose o alejandose del origen de la orbita)" },
	};
#endif
	void Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotateToFaceOutwards_SetBit(void* Obj)
	{
		((UOrbitingMovementComponent*)Obj)->RotateToFaceOutwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotateToFaceOutwards = { "RotateToFaceOutwards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOrbitingMovementComponent), &Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotateToFaceOutwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotateToFaceOutwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotateToFaceOutwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Comment", "// Es el numero de grados que gira el componente en cada Segundo( con cada Tick)\n" },
		{ "ModuleRelativePath", "OrbitingMovementComponent.h" },
		{ "ToolTip", "Es el numero de grados que gira el componente en cada Segundo( con cada Tick)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOrbitingMovementComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance_MetaData[] = {
		{ "Comment", "//Indaca la distacia en que deben moverse del origen \n" },
		{ "ModuleRelativePath", "OrbitingMovementComponent.h" },
		{ "ToolTip", "Indaca la distacia en que deben moverse del origen" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance = { "OrbitDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOrbitingMovementComponent, OrbitDistance), METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrbitingMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotateToFaceOutwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrbitingMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrbitingMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::ClassParams = {
		&UOrbitingMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrbitingMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrbitingMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOrbitingMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOrbitingMovementComponent, 2271652803);
	template<> COMPONENTES_API UClass* StaticClass<UOrbitingMovementComponent>()
	{
		return UOrbitingMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOrbitingMovementComponent(Z_Construct_UClass_UOrbitingMovementComponent, &UOrbitingMovementComponent::StaticClass, TEXT("/Script/Componentes"), TEXT("UOrbitingMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrbitingMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
