#pragma once

#include <cstdint>
#include <cstddef>
#include <array>
#include <bit>
#include <cstring>
#include <string>

inline std::string Build = "26140533";
namespace GameAssembly
{
	constexpr std::uintptr_t timestamp = 0x6ADA438D;
	constexpr std::uintptr_t il2cpp_resolve_icall = 0x88B030;
	constexpr std::uintptr_t il2cpp_array_new = 0x88B050;
	constexpr std::uintptr_t il2cpp_assembly_get_image = 0x90F0;
	constexpr std::uintptr_t il2cpp_class_from_name = 0x875240;
	constexpr std::uintptr_t il2cpp_class_get_method_from_name = 0x88B450;
	constexpr std::uintptr_t il2cpp_class_get_type = 0x764910;
	constexpr std::uintptr_t il2cpp_domain_get = 0x88BD70;
	constexpr std::uintptr_t il2cpp_domain_get_assemblies = 0x88BD90;
	constexpr std::uintptr_t il2cpp_gchandle_get_target = 0x88C4A0;
	constexpr std::uintptr_t il2cpp_gchandle_new = 0x88C450;
	constexpr std::uintptr_t il2cpp_gchandle_free = 0x88C540;
	constexpr std::uintptr_t il2cpp_method_get_name = 0xB920;
	constexpr std::uintptr_t il2cpp_object_new = 0x88CDE0;
	constexpr std::uintptr_t il2cpp_type_get_object = 0x88DF10;
}
struct il2cpp_api
{
	inline static constexpr std::uintptr_t domain_get = 0x88BD70;
	inline static constexpr std::uintptr_t domain_get_assemblies = 0x88BD90;
	inline static constexpr std::uintptr_t domain_assembly_open = 0x88BD80;
	inline static constexpr std::uintptr_t assembly_get_image = 0x90F0;
	inline static constexpr std::uintptr_t class_from_name = 0x875240;
	inline static constexpr std::uintptr_t image_get_class_count = 0xD890;
	inline static constexpr std::uintptr_t image_get_class = 0x88E1F0;
	inline static constexpr std::uintptr_t class_get_methods = 0x88B3C0;
	inline static constexpr std::uintptr_t class_get_method_from_name = 0x88B450;
	inline static constexpr std::uintptr_t class_get_fields = 0x88B170;
	inline static constexpr std::uintptr_t class_get_nested_types = 0x88B1F0;
	inline static constexpr std::uintptr_t class_get_type = 0x764910;
	inline static constexpr std::uintptr_t class_get_name = 0xAFA0;
	inline static constexpr std::uintptr_t class_get_namespace = 0xB920;
	inline static constexpr std::uintptr_t class_get_parent = 0xF6D0;
	inline static constexpr std::uintptr_t class_get_interfaces = 0x88B200;
	inline static constexpr std::uintptr_t class_get_image = 0x90F0;
	inline static constexpr std::uintptr_t class_get_flags = 0x88B4A0;
	inline static constexpr std::uintptr_t class_is_valuetype = 0x1BA200;
	inline static constexpr std::uintptr_t class_array_element_size = 0x88B4E0;
	inline static constexpr std::uintptr_t class_get_static_field_data = 0x2A30;
	inline static constexpr std::uintptr_t class_from_il2cpp_type = 0x88B150;
	inline static constexpr std::uintptr_t type_get_object = 0x88DF10;
	inline static constexpr std::uintptr_t type_get_class_or_element_class = 0x88DF30;
	inline static constexpr std::uintptr_t type_get_name = 0x88DF60;
	inline static constexpr std::uintptr_t type_get_attrs = 0x88E180;
	inline static constexpr std::uintptr_t method_get_param_count = 0x88CA10;
	inline static constexpr std::uintptr_t method_get_name = 0xB920;
	inline static constexpr std::uintptr_t method_get_param = 0x88CA20;
	inline static constexpr std::uintptr_t method_get_return_type = 0x18110;
	inline static constexpr std::uintptr_t method_get_class = 0xD8A0;
	inline static constexpr std::uintptr_t method_get_flags = 0x88CAD0;
	inline static constexpr std::uintptr_t field_get_offset = 0x81AE80;
	inline static constexpr std::uintptr_t field_get_type = 0x476000;
	inline static constexpr std::uintptr_t field_get_parent = 0xAFA0;
	inline static constexpr std::uintptr_t field_get_name = 0x90F0;
	inline static constexpr std::uintptr_t field_get_flags = 0x88C010;
	inline static constexpr std::uintptr_t field_static_get_value = 0x88C170;
	inline static constexpr std::uintptr_t object_get_class = 0x90F0;
	inline static constexpr std::uintptr_t object_new = 0x88CDE0;
	inline static constexpr std::uintptr_t resolve_icall = 0x88B030;
	inline static constexpr std::uintptr_t gchandle_get_target = 0x88C4A0;
	inline static constexpr std::uintptr_t gchandle_new = 0x88C450;
	inline static constexpr std::uintptr_t gchandle_free = 0x88C540;
	inline static constexpr std::uintptr_t array_new = 0x88B050;
	inline static constexpr std::uintptr_t string_new = 0x88CF00;
};
inline static constexpr std::uintptr_t il2cpphandle = 0x88C4A0;
struct gc_handles
{
	inline static constexpr std::uintptr_t get_target = 0x88C4A0;
};
struct klass_rvas
{
	inline static constexpr std::uintptr_t BaseNetworkable = 0x111F0768;
	inline static constexpr std::uintptr_t BaseEntity = 0x1129D198;
	inline static constexpr std::uintptr_t BaseCombatEntity = 0x1129D170;
	inline static constexpr std::uintptr_t BasePlayer = 0x111FFDF0;
	inline static constexpr std::uintptr_t BaseNpc = 0x111FC768;
	inline static constexpr std::uintptr_t BaseVehicle = 0x1120D288;
	inline static constexpr std::uintptr_t DroppedItemContainer = 0x111C0478;
	inline static constexpr std::uintptr_t OreResourceEntity = 0x11253298;
	inline static constexpr std::uintptr_t CollectibleEntity = 0x11253330;
	inline static constexpr std::uintptr_t BuildingBlock = 0x111A27D0;
	inline static constexpr std::uintptr_t BuildingPrivlidge = 0x111E7600;
	inline static constexpr std::uintptr_t Door = 0x111D3A40;
	inline static constexpr std::uintptr_t WorldItem = 0x111BEDB0;
	inline static constexpr std::uintptr_t Signage = 0x11183B28;
	inline static constexpr std::uintptr_t MainCamera = 0x111C43A0;
	inline static constexpr std::uintptr_t ListComponent_Projectile = 0x11204AF0;
	inline static constexpr std::uintptr_t PlayerEyes = 0x111C00E0;
	inline static constexpr std::uintptr_t PlayerModel = 0x111851B0;
	inline static constexpr std::uintptr_t TOD_Sky = 0x11235250;
	inline static constexpr std::uintptr_t Item = 0x11282E80;
	inline static constexpr std::uintptr_t ConsoleSystem_Command = 0x111AF278;
	inline static constexpr std::uintptr_t PlayerInventory_typenav = 0x111C2C80;
	inline static constexpr std::uintptr_t BaseNetworkable_TypeInfo = 0x111F0768;
	inline static constexpr std::uintptr_t BaseEntity_TypeInfo = 0x1129D198;
	inline static constexpr std::uintptr_t BasePlayer_TypeInfo = 0x111FFDF0;
	inline static constexpr std::uintptr_t PlayerEyes_TypeInfo = 0x111C00E0;
	inline static constexpr std::uintptr_t PlayerInventory_TypeInfo = 0x111C2C80;
	inline static constexpr std::uintptr_t PlayerModel_TypeInfo = 0x111851B0;
	inline static constexpr std::uintptr_t PlayerInput_TypeInfo = 0x1122D2A0;
	inline static constexpr std::uintptr_t BaseProjectile_TypeInfo = 0x11181BA8;
	inline static constexpr std::uintptr_t HeldEntity_TypeInfo = 0x112957D0;
	inline static constexpr std::uintptr_t BaseViewModel_TypeInfo = 0x111F9500;
	inline static constexpr std::uintptr_t AutoTurret_TypeInfo = 0x111E5910;
	inline static constexpr std::uintptr_t GameManager_Static_TypeInfo = 0x11181780;
};
namespace PhysX
{
	constexpr std::uintptr_t type_info = 0x11203D68;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t sdk = 0x21818E8;
}
namespace ListComponent_Projectile
{
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t InstanceList = 0x30;
	constexpr std::uintptr_t ListItems = 0x10;
	constexpr std::uintptr_t ListCount = 0x18;
	constexpr std::uintptr_t instance = 0x20;
	constexpr std::uintptr_t BufferList_ptr = 0x18;
	constexpr std::uintptr_t vals_in_hashset = 0x18;
}
namespace network
{
}
namespace game_manager
{
	constexpr std::uintptr_t game_manager = 0x11181780;
	constexpr std::uintptr_t static_fields = 0xB8;
}
namespace console_system
{
}
namespace klass_layout
{
	constexpr std::uintptr_t name_ptr = 0x10;
	constexpr std::uintptr_t static_fields = 0xB8;
}
namespace base_networkable
{
	constexpr std::uintptr_t base_networkable = 0x111F0768;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t wrapper_class_ptr = 0x28;
	constexpr std::uintptr_t parent_static_fields = 0x18;
	constexpr std::uintptr_t hv_offset = 0x18;
	constexpr std::uintptr_t entities = 0x20;
	constexpr std::uint32_t buffer_list_array = 0x10;
	constexpr std::uint32_t buffer_list_size = 0x18;
	constexpr std::uintptr_t client_entities_decryption = 0x1C3A336;
	constexpr std::uintptr_t entity_list_wrapper = 0x1C5C780;
	constexpr std::uintptr_t entity_list_decryption = 0x1C5C780;
	constexpr std::uintptr_t entity = 0x20;
	constexpr std::uintptr_t buffer = 0x20;
	constexpr std::uintptr_t prefabID = 0x54;
	constexpr std::uintptr_t prefabName = 0x28;
	constexpr std::uintptr_t prefabNameNoExt = 0x48;
	constexpr std::uintptr_t parentEntity = 0x38;
	constexpr std::uintptr_t children = 0x70;
	constexpr std::uintptr_t net = 0x80;
	constexpr std::uintptr_t globalBroadcast = 0x58;
	constexpr std::uintptr_t networkRange = 0x64;
}
namespace camera
{
	constexpr std::uintptr_t main_camera = 0x111C43A0;
	constexpr std::uintptr_t camera_static = 0xB8;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t camera_object = 0xB8;
	constexpr std::uintptr_t instance = 0xB8;
	constexpr std::uintptr_t buffer = 0xB8;
	constexpr std::uintptr_t entity = 0x10;
	constexpr std::uintptr_t position = 0x444;
	constexpr std::uintptr_t viewMatrix = 0x2FC;
	constexpr std::uintptr_t projectionMatrix = 0x18C;
	constexpr std::uint32_t projection_layout = 0x1;
	constexpr std::uintptr_t fieldOfView = 0x170;
	constexpr std::uintptr_t aspect = 0x4E0;
	constexpr std::uintptr_t nearClip = 0x430;
	constexpr std::uintptr_t farClip = 0x458;
	constexpr std::uintptr_t viewProjectionMatrix = 0x2FC;
	constexpr std::uintptr_t worldToCameraMatrix = 0x70;
	constexpr std::uintptr_t cullingMask = 0x42C;
}
namespace BasePlayer
{
	constexpr std::uintptr_t clActiveItem = 0x590;
	constexpr std::uintptr_t PlayerEyes = 0x3C8;
	constexpr std::uintptr_t PlayerInventory = 0x5E0;
	constexpr std::uintptr_t current_team = 0x198;
	constexpr std::uintptr_t movement = 0x550;
	constexpr std::uintptr_t player_model = 0x748;
	constexpr std::uintptr_t playerFlags = 0x6E0;
	constexpr std::uintptr_t userID = 0x728;
	constexpr std::uintptr_t userIDString = 0x2F0;
	constexpr std::uintptr_t display_name = 0x6F8;
	constexpr std::uintptr_t player_input = 0x440;
	constexpr std::uintptr_t mounted = 0x5E8;
	constexpr std::uintptr_t _lookingAt = 0x658;
	constexpr std::uintptr_t clothingBlocksAiming = 0x7CC;
	constexpr std::uintptr_t clothingMoveSpeedReduction = 0x7D0;
	constexpr std::uintptr_t player_rigidbody = 0x548;
	constexpr std::uintptr_t lastSentTick = 0x358;
	constexpr std::uintptr_t metabolism = 0x4C0;
	constexpr std::uintptr_t blueprints = 0x318;
}
namespace BaseMountable
{
	constexpr std::uintptr_t pitchClamp = 0x304;
	constexpr std::uintptr_t yawClamp = 0x30C;
	constexpr std::uintptr_t canWieldItems = 0x314;
}
namespace BaseCombatEntity
{
	constexpr std::uintptr_t skeletonProperties = 0x238;
	constexpr std::uintptr_t baseProtection = 0x240;
	constexpr std::uintptr_t lifestate = 0x2B0;
	constexpr std::uintptr_t markAttackerHostile = 0x2B6;
	constexpr std::uintptr_t model = 0x1C0;
}
namespace BaseEntity
{
	constexpr std::uintptr_t bounds = 0x194;
	constexpr std::uintptr_t model = 0x1C0;
	constexpr std::uintptr_t flags = 0x1C8;
}
namespace BaseEntityFlags
{
	constexpr std::uintptr_t Placeholder = 0x1;
	constexpr std::uintptr_t On = 0x2;
	constexpr std::uintptr_t OnFire = 0x4;
	constexpr std::uintptr_t Open = 0x8;
	constexpr std::uintptr_t Locked = 0x10;
	constexpr std::uintptr_t Debugging = 0x20;
	constexpr std::uintptr_t Disabled = 0x40;
	constexpr std::uintptr_t Reserved1 = 0x80;
	constexpr std::uintptr_t Reserved2 = 0x100;
	constexpr std::uintptr_t Reserved3 = 0x200;
	constexpr std::uintptr_t Reserved4 = 0x400;
	constexpr std::uintptr_t Reserved5 = 0x800;
}
namespace base_player_flags
{
	constexpr std::uintptr_t Unused1 = 0x1;
	constexpr std::uintptr_t Unused2 = 0x2;
	constexpr std::uintptr_t IsAdmin = 0x4;
	constexpr std::uintptr_t ReceivingSnapshot = 0x8;
	constexpr std::uintptr_t Sleeping = 0x10;
	constexpr std::uintptr_t Spectating = 0x20;
	constexpr std::uintptr_t Wounded = 0x40;
	constexpr std::uintptr_t IsDeveloper = 0x80;
	constexpr std::uintptr_t Connected = 0x100;
	constexpr std::uintptr_t ThirdPersonViewmode = 0x400;
}
namespace ItemContainer
{
	constexpr std::uintptr_t ItemList = 0x50;
	constexpr std::uintptr_t itemCount = 0x18;
	constexpr std::uintptr_t flags = 0x60;
}
namespace ItemDefinition
{
	constexpr std::uintptr_t itemid = 0x20;
	constexpr std::uintptr_t shortname = 0x28;
	constexpr std::uintptr_t displayName = 0x40;
	constexpr std::uintptr_t category = 0x58;
	constexpr std::uintptr_t stackable = 0x78;
	constexpr std::uintptr_t iconSprite = 0x50;
	constexpr std::uintptr_t rarity = 0x94;
	constexpr std::uintptr_t condition = 0xB8;
	constexpr std::uintptr_t ItemModWearable = 0x1C8;
}
namespace item
{
	constexpr std::uintptr_t info = 0x50;
	constexpr std::uintptr_t itemdefinition = 0x50;
	constexpr std::uintptr_t uid = 0xC0;
	constexpr std::uintptr_t amount = 0x48;
	constexpr std::uintptr_t position = 0x14;
	constexpr std::uintptr_t ammoCount = 0xE4;
	constexpr std::uintptr_t shortname = 0x28;
	constexpr std::uintptr_t category = 0x58;
	constexpr std::uintptr_t HeldEntity = 0x30;
}
namespace AttackEntity
{
	constexpr std::uintptr_t repeatDelay = 0x2F4;
}
namespace BaseProjectile
{
	constexpr std::uintptr_t ShotFired = 0x24D43C0;
	constexpr std::uintptr_t SetAmmoCount = 0x24E2960;
	constexpr std::uintptr_t aimCone = 0x420;
	constexpr std::uintptr_t hipAimCone = 0x424;
	constexpr std::uintptr_t aimSway = 0x408;
	constexpr std::uintptr_t aimSwaySpeed = 0x40C;
	constexpr std::uintptr_t recoil = 0x410;
	constexpr std::uintptr_t projectileVelocityScale = 0x39C;
	constexpr std::uintptr_t automatic = 0x3A0;
	constexpr std::uintptr_t reloadTime = 0x3E0;
	constexpr std::uintptr_t primaryMagazine = 0x3E8;
	constexpr std::uintptr_t magazine = 0x3E8;
	constexpr std::uintptr_t manualCycle = 0x43E;
	constexpr std::uintptr_t stancePenalty = 0x470;
	constexpr std::uintptr_t aimconePenalty = 0x474;
	constexpr std::uintptr_t sightAimConeScale = 0x47C;
	constexpr std::uintptr_t sight_aim_cone_scale = 0x47C;
	constexpr std::uintptr_t hipAimConeScale = 0x484;
	constexpr std::uintptr_t hip_aim_cone_scale = 0x484;
	constexpr std::uintptr_t fractionalReload = 0x3F0;
	constexpr std::uintptr_t aimconeCurve = 0x418;
	constexpr std::uintptr_t noAimingWhileCycling = 0x43D;
	constexpr std::uintptr_t cachedModHash = 0x478;
	constexpr std::uintptr_t hipAimConeOffset = 0x488;
	constexpr std::uintptr_t sightAimConeOffset = 0x480;
	constexpr std::uintptr_t aimconePenaltyPerShot = 0x428;
	constexpr std::uintptr_t aimConePenaltyMax = 0x42C;
	constexpr std::uintptr_t aimconePenaltyRecoverTime = 0x430;
	constexpr std::uintptr_t aimconePenaltyRecoverDelay = 0x434;
	constexpr std::uintptr_t stancePenaltyScale = 0x438;
	constexpr std::uintptr_t hasADS = 0x43C;
	constexpr std::uintptr_t isBurstWeapon = 0x447;
	constexpr std::uintptr_t canChangeFireModes = 0x448;
	constexpr std::uintptr_t internalBurstFireRateScale = 0x450;
	constexpr std::uintptr_t internalBurstAimConeScale = 0x454;
}
namespace CompoundBowWeapon
{
	constexpr std::uintptr_t stringHoldDurationMax = 0x4F0;
}
namespace PlayerProjectileUpdate
{
}
namespace PlayerProjectileAttack
{
}
namespace PlayerAttack
{
}
namespace projectile
{
	constexpr std::uintptr_t initialVelocity = 0x28;
	constexpr std::uintptr_t drag = 0x34;
	constexpr std::uintptr_t gravityModifier = 0x38;
	constexpr std::uintptr_t thickness = 0x3C;
	constexpr std::uintptr_t initialDistance = 0x44;
	constexpr std::uintptr_t swimSpeed = 0xFC;
	constexpr std::uintptr_t swimScale = 0xF0;
}
namespace HitTest
{
	constexpr std::uintptr_t type = 0x24;
	constexpr std::uintptr_t gameobject = 0x1B0;
	constexpr std::uintptr_t collider = 0x358;
	constexpr std::uintptr_t hittransform = 0x90;
	constexpr std::uintptr_t hitpart = 0x54;
	constexpr std::uintptr_t hitmaterial = 0x28;
	constexpr std::uintptr_t hitdistance = 0xC8;
	constexpr std::uintptr_t radius = 0x110;
	constexpr std::uintptr_t forgivness = 0x190;
	constexpr std::uintptr_t maxdistance = 0x1EC;
	constexpr std::uintptr_t hitpoint = 0x120;
	constexpr std::uintptr_t hitnormal = 0x2E8;
	constexpr std::uintptr_t ignoreentity = 0x1C8;
	constexpr std::uintptr_t hitentity = 0x328;
}
namespace BaseMelee
{
	constexpr std::uintptr_t damageProperties = 0x390;
	constexpr std::uintptr_t maxDistance = 0x3A8;
	constexpr std::uintptr_t attackRadius = 0x3AC;
	constexpr std::uintptr_t blockSprintOnAttack = 0x3B1;
	constexpr std::uintptr_t gathering = 0x3E8;
	constexpr std::uintptr_t canThrowAsProjectile = 0x388;
}
namespace ItemModProjectile
{
	constexpr std::uintptr_t projectileObject = 0x20;
	constexpr std::uintptr_t ammoType = 0x30;
	constexpr std::uintptr_t projectileSpread = 0x3C;
	constexpr std::uintptr_t projectileVelocity = 0x40;
	constexpr std::uintptr_t projectileVelocitySpread = 0x44;
	constexpr std::uintptr_t useCurve = 0x48;
	constexpr std::uintptr_t spreadScalar = 0x50;
	constexpr std::uintptr_t category = 0x68;
}
namespace ProjectileWeaponMod
{
	constexpr std::uintptr_t ConditionLossMultiplier = 0x208;
	constexpr std::uintptr_t additiveEffect = 0x210;
	constexpr std::uintptr_t defaultSilencerEffect = 0x218;
	constexpr std::uintptr_t isSilencer = 0x220;
	constexpr std::uintptr_t silencerType = 0x224;
	constexpr std::uintptr_t repeatDelay = 0x228;
	constexpr std::uintptr_t projectileVelocity = 0x234;
	constexpr std::uintptr_t projectileDamage = 0x240;
	constexpr std::uintptr_t projectileDistance = 0x24C;
	constexpr std::uintptr_t aimsway = 0x258;
	constexpr std::uintptr_t aimswaySpeed = 0x264;
	constexpr std::uintptr_t recoil = 0x270;
	constexpr std::uintptr_t sightAimCone = 0x27C;
	constexpr std::uintptr_t hipAimCone = 0x288;
	constexpr std::uintptr_t isLight = 0x294;
	constexpr std::uintptr_t isMuzzleBrake = 0x295;
	constexpr std::uintptr_t isMuzzleBoost = 0x296;
	constexpr std::uintptr_t isScope = 0x297;
	constexpr std::uintptr_t zoomAmountDisplayOnly = 0x298;
	constexpr std::uintptr_t magazineCapacity = 0x29C;
	constexpr std::uintptr_t needsOnForEffects = 0x2A8;
	constexpr std::uintptr_t burstCount = 0x2AC;
	constexpr std::uintptr_t timeBetweenBursts = 0x2B0;
	constexpr std::uintptr_t zoomLevels = 0x2B8;
	constexpr std::uintptr_t fovChangeEffect = 0x2C0;
	constexpr std::uintptr_t allowPings = 0x2C8;
}
namespace server_projectile
{
	constexpr std::uintptr_t drag = 0x34;
	constexpr std::uintptr_t gravityModifier = 0x38;
	constexpr std::uintptr_t speed = 0x3C;
	constexpr std::uintptr_t radius = 0x5C;
}
namespace RecoilProperties
{
	constexpr std::uintptr_t recoilYawMin = 0x18;
	constexpr std::uintptr_t recoilYawMax = 0x1C;
	constexpr std::uintptr_t recoilPitchMin = 0x20;
	constexpr std::uintptr_t recoilPitchMax = 0x24;
	constexpr std::uintptr_t timeToTakeMin = 0x28;
	constexpr std::uintptr_t timeToTakeMax = 0x2C;
	constexpr std::uintptr_t ADSScale = 0x30;
	constexpr std::uintptr_t movementPenalty = 0x34;
	constexpr std::uintptr_t clampPitch = 0x38;
	constexpr std::uintptr_t pitchCurve = 0x40;
	constexpr std::uintptr_t yawCurve = 0x48;
	constexpr std::uintptr_t ammoAimconeScaleMultiProjectile = 0x78;
	constexpr std::uintptr_t ammoAimconeScaleSingleProjectile = 0x7C;
	constexpr std::uintptr_t newRecoilOverride = 0x80;
	constexpr std::uintptr_t overrideAimconeWithCurve = 0x5C;
	constexpr std::uintptr_t aimconeProbabilityCurve = 0x70;
	constexpr std::uintptr_t aimconeCurveScale = 0x60;
}
namespace FlintStrikeWeapon
{
	constexpr std::uintptr_t successFraction = 0x4C8;
	constexpr std::uintptr_t strikeRecoil = 0x4D0;
	constexpr std::uintptr_t _didSparkThisFrame = 0x4D8;
}
namespace PlayerEyes
{
	constexpr std::uintptr_t viewOffset = 0x40;
	constexpr std::uintptr_t bodyRotation = 0x50;
	constexpr std::uintptr_t headAngles = 0x60;
}
namespace PlayerInput
{
	constexpr std::uintptr_t state = 0x28;
	constexpr std::uintptr_t bodyAngles = 0x44;
	constexpr std::uintptr_t yaw = 0x48;
}
namespace PlayerModel
{
	constexpr std::uintptr_t _multiMesh = 0xB8;
	constexpr std::uintptr_t collision = 0x210;
	constexpr std::uintptr_t fullMask = 0x350;
	constexpr std::uintptr_t position = 0x488;
	constexpr std::uintptr_t newVelocity = 0x4AC;
	constexpr std::uintptr_t visibleNullable = 0xC4;
}
namespace SkinnedMultiMesh
{
	constexpr std::uintptr_t RendererList = 0x58;
	constexpr std::uintptr_t Renderers = 0x58;
}
namespace chams
{
	constexpr std::uintptr_t player_model_multi_mesh = 0xB8;
	constexpr std::uintptr_t multi_mesh_renderer_list = 0x58;
}
namespace PlayerInventory
{
	constexpr std::uintptr_t loot = 0x48;
	constexpr std::uintptr_t containerBelt = 0x38;
	constexpr std::uintptr_t containerMain = 0x78;
	constexpr std::uintptr_t containerWear = 0x58;
}
namespace movement
{
	constexpr std::uintptr_t Owner = 0x30;
}
namespace PlayerWalkMovement
{
	constexpr std::uintptr_t zeroFrictionMaterial = 0x68;
	constexpr std::uintptr_t highFrictionMaterial = 0x70;
	constexpr std::uintptr_t body = 0xF8;
	constexpr std::uintptr_t capsule = 0xE0;
}
namespace WorldItem
{
	constexpr std::uintptr_t item = 0x210;
	constexpr std::uintptr_t allowPickup = 0x208;
}
namespace mapview
{
	constexpr std::uintptr_t static_fields_off = 0xB8;
	constexpr std::uintptr_t RVA_MapInterface = 0x1120D750;
	constexpr std::uintptr_t MI_Instance_off = 0x18;
	constexpr std::uintptr_t MI_View_off = 0x60;
	constexpr std::uintptr_t MV_mapImage_off = 0x20;
	constexpr std::uintptr_t MV_scrollRect_off = 0x40;
	constexpr std::uintptr_t RawImage_UVRect = 0xE8;
	constexpr std::uintptr_t SR_ContentBounds = 0x90;
	constexpr std::uintptr_t SR_ViewBounds = 0xA8;
}
namespace AutoTurret
{
	constexpr std::uintptr_t authorizedPlayers = 0x3E0;
	constexpr std::uintptr_t muzzlePos = 0x4B8;
	constexpr std::uintptr_t gun_yaw = 0x4D0;
	constexpr std::uintptr_t lastYaw = 0x448;
	constexpr std::uintptr_t lastYawRotation = 0x448;
	constexpr std::uintptr_t gun_pitch = 0x4D8;
	constexpr std::uintptr_t sightRange = 0x4E0;
}
namespace patrolhelicopter
{
	constexpr std::uintptr_t weakspots = 0x2D8;
	constexpr std::uintptr_t rotorPivot = 0x2E0;
	constexpr std::uintptr_t mainRotor = 0x2E8;
	constexpr std::uintptr_t tailRotor = 0x300;
	constexpr std::uintptr_t rocket_tube_left = 0x318;
	constexpr std::uintptr_t rocket_tube_right = 0x320;
	constexpr std::uintptr_t left_gun_yaw = 0x328;
	constexpr std::uintptr_t left_gun_pitch = 0x330;
	constexpr std::uintptr_t spotlightTarget = 0x400;
}
namespace base_vehicle
{
	constexpr std::uintptr_t mountPoints = 0x400;
	constexpr std::uintptr_t shouldShowHudHealth = 0x3BA;
	constexpr std::uintptr_t ignoreDamageFromOutside = 0x3F4;
}
namespace bradleyapc
{
	constexpr std::uintptr_t viewDistance = 0x3CC;
	constexpr std::uintptr_t searchRange = 0x3D0;
	constexpr std::uintptr_t engineSound = 0x2D8;
	constexpr std::uintptr_t chasisLurchAngleDelta = 0x320;
	constexpr std::uintptr_t chasisLurchSpeedDelta = 0x324;
}
namespace local_player_static
{
	constexpr std::uintptr_t local_player = 0x111E9EE0;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t entity = 0x10;
	constexpr std::uintptr_t hv_in_wrapper = 0x18;
	constexpr std::uint32_t is_wrapped = 0x1;
}
namespace magazine
{
	constexpr std::uintptr_t capacity = 0x18;
	constexpr std::uintptr_t contents = 0x1C;
	constexpr std::uintptr_t ammoType = 0x20;
	constexpr std::uintptr_t definition = 0x10;
}
namespace timed_explosive
{
	constexpr std::uintptr_t timerAmountMin = 0x208;
	constexpr std::uintptr_t timerAmountMax = 0x20C;
	constexpr std::uintptr_t minExplosionRadius = 0x210;
	constexpr std::uintptr_t explosionRadius = 0x214;
	constexpr std::uintptr_t explodeOnContact = 0x218;
	constexpr std::uintptr_t canStick = 0x219;
	constexpr std::uintptr_t onlyDamageParent = 0x21B;
	constexpr std::uintptr_t damageTypes = 0x280;
	constexpr std::uintptr_t explosionEffectOffset = 0x22C;
	constexpr std::uintptr_t explosionMatchesNormal = 0x238;
}
namespace flameturret
{
	constexpr std::uintptr_t upper = 0x3B0;
	constexpr std::uintptr_t arc = 0x3B8;
	constexpr std::uintptr_t triggeredDuration = 0x3BC;
	constexpr std::uintptr_t flameRange = 0x3C0;
	constexpr std::uintptr_t flameRadius = 0x3C4;
	constexpr std::uintptr_t fuelPerSec = 0x3C8;
	constexpr std::uintptr_t eyeTransform = 0x3D0;
	constexpr std::uintptr_t damagePerSec = 0x3D8;
	constexpr std::uintptr_t trigger = 0x3F8;
}
namespace guntrap
{
	constexpr std::uintptr_t gunfireeffect = 0x3B0;
	constexpr std::uintptr_t bulletEffect = 0x3B8;
	constexpr std::uintptr_t triggeredEffect = 0x3C0;
	constexpr std::uintptr_t muzzlePos = 0x3C8;
	constexpr std::uintptr_t eyeTransform = 0x3D0;
	constexpr std::uintptr_t numPellets = 0x3D8;
	constexpr std::uintptr_t aimCone = 0x3DC;
	constexpr std::uintptr_t sensorRadius = 0x3E0;
	constexpr std::uintptr_t ammoType = 0x3E8;
	constexpr std::uintptr_t trigger = 0x3F0;
}
namespace BaseLauncher
{
	constexpr std::uintptr_t initialSpeedMultiplier = 0x4C8;
}
namespace StorageContainer
{
	constexpr std::uintptr_t inventorySlots = 0x328;
	constexpr std::uintptr_t panelName = 0x338;
	constexpr std::uintptr_t panelTitle = 0x340;
	constexpr std::uintptr_t isLootable = 0x335;
	constexpr std::uintptr_t isLockable = 0x336;
	constexpr std::uintptr_t isMonitorable = 0x337;
	constexpr std::uintptr_t dropsLoot = 0x32C;
	constexpr std::uintptr_t dropLootDestroyPercent = 0x330;
	constexpr std::uintptr_t allowedContents = 0x348;
	constexpr std::uintptr_t allowedItem = 0x350;
	constexpr std::uintptr_t maxStackSize = 0x370;
	constexpr std::uintptr_t needsBuildingPrivilegeToUse = 0x374;
	constexpr std::uintptr_t onlyAcceptCategory = 0x3A0;
	constexpr std::uintptr_t onlyOneUser = 0x3A4;
	constexpr std::uintptr_t dropPosition = 0x388;
	constexpr std::uintptr_t dropVelocity = 0x394;
}
namespace LootContainer
{
	constexpr std::uintptr_t destroyOnEmpty = 0x3B0;
	constexpr std::uintptr_t lootDefinition = 0x3B8;
	constexpr std::uintptr_t maxDefinitionsToSpawn = 0x3C0;
	constexpr std::uintptr_t minSecondsBetweenRefresh = 0x3C4;
	constexpr std::uintptr_t maxSecondsBetweenRefresh = 0x3C8;
	constexpr std::uintptr_t initialLootSpawn = 0x3CC;
	constexpr std::uintptr_t xpLootedScale = 0x3D0;
	constexpr std::uintptr_t scrapAmount = 0x3DC;
	constexpr std::uintptr_t LootSpawnSlots = 0x3E8;
	constexpr std::uintptr_t SpawnType = 0x3F0;
	constexpr std::uintptr_t clanScoreEventForFirstLooter = 0x3F4;
}
namespace OreResourceEntity
{
	constexpr std::uintptr_t bonusPrefab = 0x250;
	constexpr std::uintptr_t finishEffect = 0x258;
	constexpr std::uintptr_t bonusFailEffect = 0x260;
	constexpr std::uintptr_t useHotspotMinigame = 0x268;
	constexpr std::uintptr_t bonusSound = 0x270;
	constexpr std::uintptr_t heightOffset = 0x278;
}
namespace ResourceEntity
{
	constexpr std::uintptr_t startHealth = 0x208;
	constexpr std::uintptr_t baseProtection = 0x210;
	constexpr std::uintptr_t skipDecorComponents = 0x21C;
}
namespace CollectibleEntity
{
	constexpr std::uintptr_t itemName = 0x208;
	constexpr std::uintptr_t itemList = 0x210;
	constexpr std::uintptr_t pickupEffect = 0x218;
	constexpr std::uintptr_t xpScale = 0x220;
	constexpr std::uintptr_t suppressGatherRateMultiplier = 0x224;
}
namespace GrowableEntity
{
	constexpr std::uintptr_t Properties = 0x350;
	constexpr std::uintptr_t SourceItemDef = 0x358;
}
namespace PlayerCorpse
{
	constexpr std::uintptr_t playerSteamID = 0x328;
	constexpr std::uintptr_t clientClothing = 0x360;
}
namespace LootableCorpse
{
	constexpr std::uintptr_t playerSteamID = 0x328;
}
namespace HackableLockedCrate
{
	constexpr std::uintptr_t timerText = 0x408;
}
namespace HeldEntity
{
	constexpr std::uintptr_t viewModel = 0x258;
	constexpr std::uintptr_t worldModelAnimation = 0x220;
	constexpr std::uintptr_t handBone = 0x268;
	constexpr std::uintptr_t holdInfo = 0x278;
	constexpr std::uintptr_t isBuildingTool = 0x294;
	constexpr std::uintptr_t forcedOwner = 0x298;
	constexpr std::uintptr_t hostileScore = 0x2B4;
	constexpr std::uintptr_t itemOwner = 0x248;
	constexpr std::uintptr_t ownerItemUID = 0x2E8;
	constexpr std::uint32_t viewModel_wrapper_kind = 0x4;
	constexpr std::uint32_t viewModel_inner_off = 0x28;
}
namespace ItemIcon
{
	constexpr std::uintptr_t item_icon_c = 0x11236AC0;
	constexpr std::uintptr_t type_info = 0x11236AC0;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t containerLootStartTimes = 0x30;
	constexpr std::uintptr_t TryToMove = 0x182E400;
	constexpr std::uintptr_t backgroundImage = 0xE8;
}
namespace Dictionary
{
	constexpr std::uintptr_t entries = 0x18;
	constexpr std::uintptr_t count = 0x20;
}
namespace DictionaryEntryArray
{
	constexpr std::uintptr_t length = 0x18;
	constexpr std::uintptr_t data = 0x20;
	constexpr std::uintptr_t hashCode = 0;
	constexpr std::uintptr_t key = 0x8;
	constexpr std::uintptr_t value = 0x10;
	constexpr std::uintptr_t stride = 0x18;
}
namespace ViewModel
{
	constexpr std::uintptr_t instance = 0x28;
	constexpr std::uintptr_t viewmodel_instance = 0x28;
}
namespace BaseViewModel
{
	constexpr std::uintptr_t useViewModelCamera = 0x40;
	constexpr std::uintptr_t model = 0x100;
	constexpr std::uintptr_t bob = 0xF0;
	constexpr std::uintptr_t lower = 0x98;
	constexpr std::uintptr_t sway = 0x108;
	constexpr std::uintptr_t ironSights = 0xD8;
}
namespace model
{
	constexpr std::uintptr_t rootBone = 0x28;
	constexpr std::uintptr_t headBone = 0x30;
	constexpr std::uintptr_t eyeBone = 0x38;
	constexpr std::uintptr_t boneTransforms = 0x50;
	constexpr std::uintptr_t boneNames = 0x58;
	constexpr std::uintptr_t bone_transform = 0x50;
	constexpr std::uintptr_t pelvis_bone_idx = 0;
	constexpr std::uintptr_t l_hip_bone_idx = 0x1;
	constexpr std::uintptr_t l_knee_bone_idx = 0x3;
	constexpr std::uintptr_t l_foot_bone_idx = 0x4;
	constexpr std::uintptr_t r_hip_bone_idx = 0xE;
	constexpr std::uintptr_t r_knee_bone_idx = 0x10;
	constexpr std::uintptr_t r_foot_bone_idx = 0x11;
	constexpr std::uintptr_t spine2_bone_idx = 0x15;
	constexpr std::uintptr_t spine4_bone_idx = 0x17;
	constexpr std::uintptr_t l_clavicle_bone_idx = 0x18;
	constexpr std::uintptr_t l_upperarm_bone_idx = 0x19;
	constexpr std::uintptr_t l_forearm_bone_idx = 0x1A;
	constexpr std::uintptr_t l_hand_bone_idx = 0x1D;
	constexpr std::uintptr_t r_clavicle_bone_idx = 0x3C;
	constexpr std::uintptr_t r_upperarm_bone_idx = 0x3D;
	constexpr std::uintptr_t r_forearm_bone_idx = 0x3E;
	constexpr std::uintptr_t r_hand_bone_idx = 0x41;
	constexpr std::uintptr_t neck_bone_idx = 0x34;
	constexpr std::uintptr_t head_bone_idx = 0x35;
	constexpr std::uintptr_t bone_array_count_off = 0x18;
	constexpr std::uintptr_t bone_array_data_off = 0x20;
	constexpr std::uintptr_t bone_array_elem_size = 0x8;
}
namespace singleton_typeinfos
{
	constexpr std::uintptr_t SingletonComponent_UI_LoadingScreen = 0x111AFA80;
	constexpr std::uintptr_t SingletonComponent_MixerSnapshotManager = 0x11224E80;
}
namespace TOD_Sky_Static
{
	constexpr std::uintptr_t tod_sky_c = 0x11235250;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t instances = 0x28;
	constexpr std::uintptr_t listItems = 0x10;
	constexpr std::uintptr_t listSize = 0x18;
	constexpr std::uintptr_t arrayData = 0x20;
}
namespace TOD_Sky
{
	constexpr std::uintptr_t Cycle = 0x40;
	constexpr std::uintptr_t Atmosphere = 0x50;
	constexpr std::uintptr_t Day = 0x58;
	constexpr std::uintptr_t Night = 0x60;
	constexpr std::uintptr_t Stars = 0x78;
	constexpr std::uintptr_t Clouds = 0x80;
	constexpr std::uintptr_t Ambient = 0x98;
	constexpr std::uintptr_t timeSinceAmbientUpdate = 0x23C;
	constexpr std::uintptr_t timeSinceReflectionUpdate = 0x240;
}
namespace TOD_CycleParameters
{
	constexpr std::uintptr_t Hour = 0x10;
	constexpr std::uintptr_t Day = 0x14;
	constexpr std::uintptr_t Month = 0x18;
	constexpr std::uintptr_t Year = 0x1C;
}
namespace tod_ambient_parameters
{
	constexpr std::uintptr_t Saturation = 0x14;
}
namespace tod_night_parameters
{
	constexpr std::uintptr_t AmbientMultiplier = 0x5C;
}
namespace unity_transform_native
{
	constexpr std::uintptr_t access_struct_off = 0x28;
}
namespace transform_data
{
	constexpr std::uintptr_t pos_base_off = 0x18;
	constexpr std::uintptr_t indices_b_off = 0x20;
	constexpr std::uintptr_t root_pos_off = 0x90;
	constexpr std::uintptr_t root_quat_off = 0xA0;
	constexpr std::uintptr_t matrix_stride = 0x30;
	constexpr std::uintptr_t walker_max_depth = 0x10;
	constexpr std::uintptr_t slot_pad_off = 0xC;
	constexpr std::uintptr_t slot_quat_off = 0x10;
	constexpr std::uintptr_t slot_scale_off = 0x20;
	constexpr std::uintptr_t slot_pos_quat_size = 0x20;
}
namespace Object
{
	constexpr std::uintptr_t m_CachedPtr = 0x10;
}
namespace unity_component
{
	constexpr std::uintptr_t game_object = 0x20;
}
namespace unity_game_object
{
	constexpr std::uintptr_t components = 0x20;
	constexpr std::uintptr_t component_count = 0x30;
	constexpr std::uintptr_t component_stride = 0x10;
	constexpr std::uintptr_t component_ptr_in_entry = 0x8;
	constexpr std::uintptr_t component_handle_in_native = 0x18;
}
namespace unity_transform
{
	constexpr std::uintptr_t indirect_ptr_off = 0x28;
	constexpr std::uintptr_t world_pos_off = 0x90;
}
namespace unity_string
{
	constexpr std::uintptr_t m_stringLength = 0x10;
	constexpr std::uintptr_t first_char = 0x14;
}
namespace system_list
{
	constexpr std::uintptr_t array = 0x10;
	constexpr std::uintptr_t size = 0x18;
	constexpr std::uintptr_t array_first_element = 0x20;
}
namespace entitylist
{
	constexpr std::uintptr_t array = 0x10;
	constexpr std::uintptr_t size = 0x18;
	constexpr std::uintptr_t first_elem = 0x20;
}
namespace convar_graphics
{
	constexpr std::uintptr_t convar_graphics = 0x111F03E0;
	constexpr std::uintptr_t convar_graphics_instance = 0xB8;
	constexpr std::uintptr_t _fov = 0x318;
}
namespace convar_admin
{
	constexpr std::uintptr_t convar_admin = 0x11239810;
	constexpr std::uintptr_t playerIds = 0x20;
}
namespace decryption
{
inline std::uintptr_t client_entities(std::uint64_t a1)
{
	if (!driver.read<std::uint8_t>(a1 + 0x10)) return 0;
	auto words = std::bit_cast<std::array<std::uint32_t, 2>>(driver.read<std::uint64_t>(a1 + 0x18));
	std::uint32_t eax, ecx;
	for (std::size_t i = 0; i < words.size(); ++i) {
		ecx = words[i];
		eax = words[i];
		ecx = ecx - 0x49F666DD;
		ecx = ecx ^ 0x165993A;
		eax = ecx;
		ecx = ecx << 0xC;
		eax = eax >> 0x14;
		ecx = ecx | eax;
		ecx = ecx ^ 0x6EA51C6;
		words[i] = ecx;
	}
	return il2cpp_get_handle(std::bit_cast<std::uint64_t>(words));
}

inline std::uintptr_t entity_list(std::uint64_t a1)
{
	if (!driver.read<std::uint8_t>(a1 + 0x10)) return 0;
	auto words = std::bit_cast<std::array<std::uint32_t, 2>>(driver.read<std::uint64_t>(a1 + 0x18));
	std::uint32_t eax, ecx;
	for (std::size_t i = 0; i < words.size(); ++i) {
		ecx = words[i];
		eax = words[i];
		ecx = ecx + 0x606A395C;
		eax = ecx;
		ecx = ecx << 0x11;
		eax = eax >> 0xF;
		ecx = ecx | eax;
		ecx = ecx - 0x380CDD1C;
		words[i] = ecx;
	}
	return il2cpp_get_handle(std::bit_cast<std::uint64_t>(words));
}

inline std::uintptr_t clActiveItem(std::uint64_t a1)
{
	auto words = std::bit_cast<std::array<std::uint32_t, 2>>(a1);
	std::uint32_t eax, edx;
	for (std::size_t i = 0; i < words.size(); ++i) {
		edx = words[i];
		eax = words[i];
		edx = (edx << 0x2) | (edx >> 0x1E);
		edx = edx ^ 0xEC201AFB;
		edx = edx + 0x3D62F8BA;
		edx = (edx << 0x10) | (edx >> 0x10);
		words[i] = edx;
	}
	return std::bit_cast<std::uint64_t>(words);
}

inline std::uintptr_t PlayerInventory(std::uint64_t a1)
{
	if (!driver.read<std::uint8_t>(a1 + 0x10)) return 0;
	auto words = std::bit_cast<std::array<std::uint32_t, 2>>(driver.read<std::uint64_t>(a1 + 0x18));
	std::uint32_t eax, ecx;
	for (std::size_t i = 0; i < words.size(); ++i) {
		ecx = words[i];
		eax = words[i];
		eax = ecx;
		ecx = ecx << 0x2;
		eax = eax >> 0x1E;
		ecx = ecx | eax;
		ecx = ecx + 0xA0EB8D31;
		eax = ecx;
		ecx = ecx << 0x1F;
		eax = eax >> 0x1;
		ecx = ecx | eax;
		ecx = ecx - 0x133B75FC;
		words[i] = ecx;
	}
	return il2cpp_get_handle(std::bit_cast<std::uint64_t>(words));
}

inline std::uintptr_t PlayerEyes(std::uint64_t a1)
{
	if (!driver.read<std::uint8_t>(a1 + 0x10)) return 0;
	auto words = std::bit_cast<std::array<std::uint32_t, 2>>(driver.read<std::uint64_t>(a1 + 0x18));
	std::uint32_t eax, ecx;
	for (std::size_t i = 0; i < words.size(); ++i) {
		ecx = words[i];
		eax = words[i];
		ecx = ecx ^ 0x8D1FB868;
		eax = ecx;
		ecx = ecx << 0xD;
		eax = eax >> 0x13;
		ecx = ecx | eax;
		ecx = ecx ^ 0xBD80150D;
		ecx = ecx + 0x5AA25993;
		words[i] = ecx;
	}
	return il2cpp_get_handle(std::bit_cast<std::uint64_t>(words));
}

inline std::uintptr_t local_player(std::uint64_t a1)
{
	if (!driver.read<std::uint8_t>(a1 + 0x10)) return 0;
	auto words = std::bit_cast<std::array<std::uint32_t, 2>>(driver.read<std::uint64_t>(a1 + 0x18));
	std::uint32_t eax, ecx;
	for (std::size_t i = 0; i < words.size(); ++i) {
		ecx = words[i];
		eax = words[i];
		ecx = ecx - 0x49F666DD;
		ecx = ecx ^ 0x165993A;
		eax = ecx;
		ecx = ecx << 0xC;
		eax = eax >> 0x14;
		ecx = ecx | eax;
		ecx = ecx ^ 0x6EA51C6;
		words[i] = ecx;
	}
	return il2cpp_get_handle(std::bit_cast<std::uint64_t>(words));
}

inline std::uint32_t decrypt_fov(std::uint32_t val) {
	val = (val << 0x4) | (val >> 0x1C);
	val += 0x4E30062E;
	val = (val << 0x1D) | (val >> 0x3);
	val ^= 0x74A660FA;
	return val;
}

inline std::uint32_t encrypt_fov(std::uint32_t val) {
	val ^= 0x74A660FA;
	val = (val >> 0x1D) | (val << 0x3);
	val -= 0x4E30062E;
	val = (val >> 0x4) | (val << 0x1C);
	return val;
}
}
