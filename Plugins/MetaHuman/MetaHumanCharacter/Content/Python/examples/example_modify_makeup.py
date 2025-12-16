import unreal

# Load the asset
character = unreal.load_asset("/Game/Characters/MetaHumans/Jeff.Jeff")

character.preview_material_type = unreal.MetaHumanCharacterSkinPreviewMaterial.EDITABLE

blusher = unreal.MetaHumanCharacterBlushMakeupProperties()
blusher.color = unreal.LinearColor.RED
blusher.intensity = 0.2
blusher.roughness = 0.5
blusher.type = unreal.MetaHumanCharacterBlushMakeupType.HIGH_CURVE

eyes_makeup = unreal.MetaHumanCharacterEyeMakeupProperties()
eyes_makeup.type = unreal.MetaHumanCharacterEyeMakeupType.DRAMATIC_SMUDGE
eyes_makeup.metalness = 0.2
eyes_makeup.opacity = 0.1
eyes_makeup.primary_color = unreal.LinearColor.BLACK
eyes_makeup.secondary_color = unreal.LinearColor.RED

foundation = unreal.MetaHumanCharacterFoundationMakeupProperties()
foundation.apply_foundation = False
foundation.color = unreal.LinearColor.WHITE
foundation.intensity = 0.5
foundation.roughness = 0.3
foundation.concealer = 0.2

lips = unreal.MetaHumanCharacterLipsMakeupProperties()
lips.color = unreal.LinearColor.RED
lips.metalness = 0.4
lips.opacity = 0.2
lips.roughness = 0.1
lips.type = unreal.MetaHumanCharacterLipsMakeupType.HOLLYWOOD

makeup_settings = unreal.MetaHumanCharacterMakeupSettings()
makeup_settings.blush = blusher
makeup_settings.eyes = eyes_makeup
makeup_settings.foundation = foundation
makeup_settings.lips = lips

character.makeup_settings = makeup_settings