// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/MyPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	STUDYPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController();
	STUDYPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerController);
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterIMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterIMC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterIMC_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterIMC = { "CharacterIMC", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, CharacterIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterIMC_MetaData), Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterIMC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterIMC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	AMyPlayerController::AMyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
	AMyPlayerController::~AMyPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerController, AMyPlayerController::StaticClass, TEXT("AMyPlayerController"), &Z_Registration_Info_UClass_AMyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerController), 581772137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyPlayerController_h_1797274590(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_MyPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
