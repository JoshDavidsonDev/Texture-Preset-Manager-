#pragma once

#include "IDetailCustomization.h"
#include "Input/Reply.h"
#include "Templates/SharedPointer.h"

class UTexture2D;
class IDetailLayoutBuilder;

class FTexturePresetDataAssetCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	TSharedPtr<class SVerticalBox> PropertyWidgetContainer;
	TWeakObjectPtr<class UTexture2D> CachedPresetSource;
	
};
