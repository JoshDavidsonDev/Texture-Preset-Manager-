#include "TexturePresetDataAssetCustomization.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "PropertyEditorModule.h"
#include "Modules/ModuleManager.h"
#include "IDetailsView.h"
#include "TexturePresetDataAsset.h"

TSharedRef<IDetailCustomization> FTexturePresetDataAssetCustomization::MakeInstance()
{
	return MakeShareable(new FTexturePresetDataAssetCustomization);
}

void FTexturePresetDataAssetCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	IDetailCategoryBuilder& Top = DetailBuilder.EditCategory("Preset Metadata");
	Top.AddProperty(GET_MEMBER_NAME_CHECKED(UTexturePresetDataAsset, PresetName));
	
}

