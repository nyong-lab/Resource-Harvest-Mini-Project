// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/Tool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STUDYPROJECT_API UClass* Z_Construct_UClass_ATool();
	STUDYPROJECT_API UClass* Z_Construct_UClass_ATool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	void ATool::StaticRegisterNativesATool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATool);
	UClass* Z_Construct_UClass_ATool_NoRegister()
	{
		return ATool::StaticClass();
	}
	struct Z_Construct_UClass_ATool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Collider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tool.h" },
		{ "ModuleRelativePath", "Tool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATool_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATool_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATool, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATool_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ATool_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATool_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATool_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATool, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATool_Statics::NewProp_Collider_MetaData), Z_Construct_UClass_ATool_Statics::NewProp_Collider_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATool_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATool_Statics::NewProp_Collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATool_Statics::ClassParams = {
		&ATool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATool_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATool_Statics::Class_MetaDataParams), Z_Construct_UClass_ATool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATool()
	{
		if (!Z_Registration_Info_UClass_ATool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATool.OuterSingleton, Z_Construct_UClass_ATool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATool.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<ATool>()
	{
		return ATool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATool);
	ATool::~ATool() {}
	struct Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_Tool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_Tool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATool, ATool::StaticClass, TEXT("ATool"), &Z_Registration_Info_UClass_ATool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATool), 638329599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_Tool_h_1185170293(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_Tool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_o_o___u_u_Documents_Unreal_Projects_Resource_Harvest_Mini_Project_StudyProject_Source_StudyProject_Tool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
