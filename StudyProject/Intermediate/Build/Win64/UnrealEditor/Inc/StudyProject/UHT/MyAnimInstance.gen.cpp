// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/MyAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	STUDYPROJECT_API UClass* Z_Construct_UClass_UMyAnimInstance();
	STUDYPROJECT_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	void UMyAnimInstance::StaticRegisterNativesUMyAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAnimInstance);
	UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister()
	{
		return UMyAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyAnimInstance.h" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams = {
		&UMyAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton, Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<UMyAnimInstance>()
	{
		return UMyAnimInstance::StaticClass();
	}
	UMyAnimInstance::UMyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimInstance);
	UMyAnimInstance::~UMyAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimInstance, UMyAnimInstance::StaticClass, TEXT("UMyAnimInstance"), &Z_Registration_Info_UClass_UMyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimInstance), 346872095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyAnimInstance_h_1874163434(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
