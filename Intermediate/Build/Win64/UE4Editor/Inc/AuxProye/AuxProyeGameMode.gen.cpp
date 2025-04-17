// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuxProye/AuxProyeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuxProyeGameMode() {}
// Cross Module References
	AUXPROYE_API UClass* Z_Construct_UClass_AAuxProyeGameMode_NoRegister();
	AUXPROYE_API UClass* Z_Construct_UClass_AAuxProyeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AuxProye();
// End Cross Module References
	void AAuxProyeGameMode::StaticRegisterNativesAAuxProyeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAuxProyeGameMode_NoRegister()
	{
		return AAuxProyeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAuxProyeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuxProyeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AuxProye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuxProyeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AuxProyeGameMode.h" },
		{ "ModuleRelativePath", "AuxProyeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuxProyeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuxProyeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAuxProyeGameMode_Statics::ClassParams = {
		&AAuxProyeGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAuxProyeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAuxProyeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAuxProyeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAuxProyeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAuxProyeGameMode, 1899326561);
	template<> AUXPROYE_API UClass* StaticClass<AAuxProyeGameMode>()
	{
		return AAuxProyeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAuxProyeGameMode(Z_Construct_UClass_AAuxProyeGameMode, &AAuxProyeGameMode::StaticClass, TEXT("/Script/AuxProye"), TEXT("AAuxProyeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuxProyeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
