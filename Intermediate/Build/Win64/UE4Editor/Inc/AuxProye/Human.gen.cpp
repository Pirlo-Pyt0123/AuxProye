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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHuman_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHuman>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHuman_Statics::ClassParams = {
		&AHuman::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AHuman, 1006706098);
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
