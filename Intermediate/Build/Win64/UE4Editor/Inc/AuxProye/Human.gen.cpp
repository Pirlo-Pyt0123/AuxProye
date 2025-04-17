// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuxProye/Human.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHuman() {}
// Cross Module References
	AUXPROYE_API UClass* Z_Construct_UClass_AHuman_NoRegister();
	AUXPROYE_API UClass* Z_Construct_UClass_AHuman();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AuxProye();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AHuman::StaticRegisterNativesAHuman()
	{
	}
	UClass* Z_Construct_UClass_AHuman_NoRegister()
	{
		return AHuman::StaticClass();
	}
	struct Z_Construct_UClass_AHuman_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshHu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshHu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHuman_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AuxProye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHuman_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Human.h" },
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHuman_Statics::NewProp_MeshHu_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHuman_Statics::NewProp_MeshHu = { "MeshHu", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHuman, MeshHu), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHuman_Statics::NewProp_MeshHu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::NewProp_MeshHu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHuman_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHuman_Statics::NewProp_MeshHu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHuman_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHuman>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHuman_Statics::ClassParams = {
		&AHuman::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHuman_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHuman_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHuman()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHuman_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHuman, 156406840);
	template<> AUXPROYE_API UClass* StaticClass<AHuman>()
	{
		return AHuman::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHuman(Z_Construct_UClass_AHuman, &AHuman::StaticClass, TEXT("/Script/AuxProye"), TEXT("AHuman"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHuman);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
