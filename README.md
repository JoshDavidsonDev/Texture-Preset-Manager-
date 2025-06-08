# Unreal Texture Preset Manager Plugin

Supported Version: Unreal 5.4

Support for other Unreal Engine 5 versions is coming soon. Please use this tool at your own risk. Everything has been tested as much as possible, but the author cannot be held responsible for any lost data if a crash occurs.

The **Texture Preset Manager** is a lightweight Unreal Engine 5 plugin that lets you apply consistent texture settings across your project, either **manually via an Editor Utility Widget** or **automatically during import** based on folder rules.

Overview and instalisation guide: https://youtube.com/playlist?list=PLpjKlZ2EDiUNGOMgCuOdoSQzfM0TVFTWZ&si=cAadaj2F4aiJdpM9 

---

## Features

- ✅ Define reusable texture preset DataAssets (`UTexturePresetDataAsset`)
- ✅ Apply settings manually in batches via Editor Utility Widget
- ✅ Automatically apply presets on import by matching folder paths
- ✅ Supports wildcard and recursive matching (`Content/UI/**`, `Content/Icons/*`)
- ✅ Output log audit support
- ✅ All settings are exposed in `Project Settings > Plugins > Texture Preset Manager`

---

## Setup

1. Enable the plugin from **Edit > Plugins > Texture Preset Manager**
2. Restart the editor if needed.
3. Navigate to **Project Settings > Plugins > Texture Preset Manager**
4. Configure:
   - `Enable Auto Apply` to apply presets on import
   - `Auto Apply Mappings` to link folder paths to specific preset assets
   - `Show Output Log` to see applied logs during import

---

## 🛠️ Manual Use (Editor Utility Widget)

Use the provided Editor Utility Widget (EUW_TexturePresetManager) to manually apply texture presets:

1. Open the widget from your Content Browser (e.g. `ApplyTexturePresetTool.uasset`)
2. Select a preset from the dropdown (`DA_TexturePreset_*`)
3. Select all textures in the content browser that you want to apply the preset to
4. Click `Apply Preset` to instantly batch update all settings

---

## Auto-Apply on Import

Automatically apply presets when textures are imported:

1. Go to **Project Settings > Plugins > Texture Preset Manager**
2. Enable `Auto Apply`
3. Under `Auto Apply Mappings`, add one or more:
   - `Folder`: e.g. `/Game/UI/Icons/**`
   - `Preset`: Reference to a `DA_TexturePreset_*.uasset`
4. Import or drag images into that folder — the preset will be applied automatically

---

## Example Presets

You can create and save preset assets for common use cases:

| Preset Name     | Use Case                      |
|------------------|-------------------------------|
| `DA_TexturePreset_UI_Icons` | UI textures with no mips, nearest filtering |
| `DA_TexturePreset_Albedo`   | World albedo with SRGB, streaming, compression |
| `DA_TexturePreset_NormalMap`| Tangent space normals, no SRGB, BC5 |

---

## Extending

- You can create new presets using the `+` icon in the Content Browser → `Texture Preset Data Asset`
- All editable settings are exposed with categories and tooltips
- Presets can be edited and applied to multiple textures for a consistent setup

---

## Credits

Developed by [Josh Davidson].

