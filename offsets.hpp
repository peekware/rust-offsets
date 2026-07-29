// peekware dump generated on: 2026-07-24 07:28:09 PM UTC+3 

#include <cstdint>
#include <cstring>
#include <string>

inline std::string Build = "24253723";
namespace GameAssembly
{
	constexpr std::uintptr_t timestamp = 0x6A59C034;
	constexpr std::uintptr_t type_info_definition_table = 0x1017CBE0;
	constexpr std::uintptr_t il2cpp_resolve_icall = 0x835170;
	constexpr std::uintptr_t il2cpp_array_new = 0x835190;
	constexpr std::uintptr_t il2cpp_assembly_get_image = 0x3D40;
	constexpr std::uintptr_t il2cpp_class_from_name = 0x81F380;
	constexpr std::uintptr_t il2cpp_class_get_method_from_name = 0x835590;
	constexpr std::uintptr_t il2cpp_class_get_type = 0x71D630;
	constexpr std::uintptr_t il2cpp_domain_get = 0x835EB0;
	constexpr std::uintptr_t il2cpp_domain_get_assemblies = 0x835ED0;
	constexpr std::uintptr_t il2cpp_gchandle_get_target = 0x8365E0;
	constexpr std::uintptr_t il2cpp_gchandle_new = 0x836590;
	constexpr std::uintptr_t il2cpp_gchandle_free = 0x836680;
	constexpr std::uintptr_t il2cpp_method_get_name = 0xC3C0;
	constexpr std::uintptr_t il2cpp_object_new = 0x836F20;
	constexpr std::uintptr_t il2cpp_type_get_object = 0x838000;
}
struct il2cpp_api
{
	inline static constexpr uintptr_t domain_get = 0x835EB0;
	inline static constexpr uintptr_t domain_get_assemblies = 0x835ED0;
	inline static constexpr uintptr_t domain_assembly_open = 0x835EC0;
	inline static constexpr uintptr_t assembly_get_image = 0x3D40;
	inline static constexpr uintptr_t class_from_name = 0x81F380;
	inline static constexpr uintptr_t image_get_class_count = 0x26D0;
	inline static constexpr uintptr_t image_get_class = 0x8382E0;
	inline static constexpr uintptr_t class_get_methods = 0x835500;
	inline static constexpr uintptr_t class_get_method_from_name = 0x835590;
	inline static constexpr uintptr_t class_get_fields = 0x8352B0;
	inline static constexpr uintptr_t class_get_nested_types = 0x835330;
	inline static constexpr uintptr_t class_get_type = 0x71D630;
	inline static constexpr uintptr_t class_get_name = 0xC330;
	inline static constexpr uintptr_t class_get_namespace = 0xC3C0;
	inline static constexpr uintptr_t class_get_parent = 0x15920;
	inline static constexpr uintptr_t class_get_image = 0x3D40;
	inline static constexpr uintptr_t class_get_flags = 0x8355E0;
	inline static constexpr uintptr_t class_get_static_field_data = 0x2960;
	inline static constexpr uintptr_t class_from_il2cpp_type = 0x835290;
	inline static constexpr uintptr_t type_get_object = 0x838000;
	inline static constexpr uintptr_t type_get_class_or_element_class = 0x838020;
	inline static constexpr uintptr_t type_get_name = 0x838050;
	inline static constexpr uintptr_t type_get_attrs = 0x838270;
	inline static constexpr uintptr_t method_get_param_count = 0x836B50;
	inline static constexpr uintptr_t method_get_name = 0xC3C0;
	inline static constexpr uintptr_t method_get_param = 0x836B60;
	inline static constexpr uintptr_t method_get_return_type = 0x11220;
	inline static constexpr uintptr_t method_get_class = 0xD710;
	inline static constexpr uintptr_t method_get_flags = 0x836C10;
	inline static constexpr uintptr_t field_get_offset = 0x7C5110;
	inline static constexpr uintptr_t field_get_type = 0x4433B0;
	inline static constexpr uintptr_t field_get_parent = 0xC330;
	inline static constexpr uintptr_t field_get_name = 0x3D40;
	inline static constexpr uintptr_t field_get_flags = 0x836150;
	inline static constexpr uintptr_t field_static_get_value = 0x8362B0;
	inline static constexpr uintptr_t object_get_class = 0x3D40;
	inline static constexpr uintptr_t object_new = 0x836F20;
	inline static constexpr uintptr_t resolve_icall = 0x835170;
	inline static constexpr uintptr_t gchandle_get_target = 0x8365E0;
	inline static constexpr uintptr_t gchandle_new = 0x836590;
	inline static constexpr uintptr_t gchandle_free = 0x836680;
	inline static constexpr uintptr_t array_new = 0x835190;
	inline static constexpr uintptr_t string_new = 0x837040;
};
inline static constexpr uintptr_t il2cpphandle = 0x8365E0;
struct gc_handles
{
	inline static constexpr uintptr_t get_target = 0x8365E0;
};
struct klass_rvas
{
	inline static constexpr uintptr_t BaseNetworkable = 0xFCD2240;
	inline static constexpr uintptr_t BaseEntity = 0xFD2C2B8;
	inline static constexpr uintptr_t BaseCombatEntity = 0xFD4F2F0;
	inline static constexpr uintptr_t BasePlayer = 0xFCCA7D0;
	inline static constexpr uintptr_t BaseNpc = 0xFCFF870;
	inline static constexpr uintptr_t BaseVehicle = 0xFD2D900;
	inline static constexpr uintptr_t DroppedItemContainer = 0xFD2F190;
	inline static constexpr uintptr_t OreResourceEntity = 0xFD2F1D0;
	inline static constexpr uintptr_t CollectibleEntity = 0xFD2E970;
	inline static constexpr uintptr_t BuildingBlock = 0xFC55100;
	inline static constexpr uintptr_t BuildingPrivlidge = 0xFC57208;
	inline static constexpr uintptr_t Door = 0xFD12EB8;
	inline static constexpr uintptr_t WorldItem = 0xFD2E910;
	inline static constexpr uintptr_t Signage = 0xFD0C9C0;
	inline static constexpr uintptr_t MainCamera = 0xFCB7488;
	inline static constexpr uintptr_t PlayerEyes = 0xFE2ED18;
	inline static constexpr uintptr_t PlayerModel = 0xFCEA178;
	inline static constexpr uintptr_t TOD_Sky = 0xFD2F9E8;
	inline static constexpr uintptr_t Item = 0xFCA95A0;
	inline static constexpr uintptr_t ItemId = 0xFC821B0;
	inline static constexpr uintptr_t ConsoleSystem_Command = 0xFCFC270;
	inline static constexpr uintptr_t PlayerInventory_typenav = 0xFE2ED38;
	inline static constexpr uintptr_t BaseNetworkable_TypeInfo = 0xFCD2240;
	inline static constexpr uintptr_t BaseEntity_TypeInfo = 0xFD2C2B8;
	inline static constexpr uintptr_t BasePlayer_TypeInfo = 0xFCCA7D0;
	inline static constexpr uintptr_t BaseNetworkable_TypeDefinitionIndex = 0x3023;
	inline static constexpr uintptr_t BaseEntity_TypeDefinitionIndex = 0x2D9E;
	inline static constexpr uintptr_t BaseCombatEntity_TypeDefinitionIndex = 0x4664;
	inline static constexpr uintptr_t BasePlayer_TypeDefinitionIndex = 0x2A91;
	inline static constexpr uintptr_t BaseNetworkable_TypeInfoSlotIndex = 0xC67;
	inline static constexpr uintptr_t BaseEntity_TypeInfoSlotIndex = 0x9E2;
	inline static constexpr uintptr_t BaseCombatEntity_TypeInfoSlotIndex = 0x22A8;
	inline static constexpr uintptr_t BasePlayer_TypeInfoSlotIndex = 0x6D5;
	inline static constexpr uintptr_t PlayerEyes_TypeInfo = 0xFE2ED18;
	inline static constexpr uintptr_t PlayerInventory_TypeInfo = 0xFE2ED38;
	inline static constexpr uintptr_t PlayerModel_TypeInfo = 0xFCEA178;
	inline static constexpr uintptr_t ModelState_TypeInfo = 0xFCE9AC0;
	inline static constexpr uintptr_t PlayerInput_TypeInfo = 0xFCF9140;
	inline static constexpr uintptr_t BaseProjectile_TypeInfo = 0xFCB78A8;
	inline static constexpr uintptr_t Projectile_TypeInfo = 0x10180A28;
	inline static constexpr uintptr_t HitTest_TypeInfo = 0xFC6F420;
	inline static constexpr uintptr_t HeldEntity_TypeInfo = 0xFD426E0;
	inline static constexpr uintptr_t BaseViewModel_TypeInfo = 0xFD2F718;
	inline static constexpr uintptr_t AutoTurret_TypeInfo = 0xFD628E0;
	inline static constexpr uintptr_t PlayerCorpse_TypeInfo = 0x1018AED0;
	inline static constexpr uintptr_t LootableCorpse_TypeInfo = 0x10188338;
	inline static constexpr uintptr_t GameManager_TypeInfo = 0x1018C888;
	inline static constexpr uintptr_t GameManager_Static_TypeInfo = 0xFCB78E0;
};
namespace PhysX
{
	constexpr std::uintptr_t type_info = 0xFCB7F98;
	constexpr std::uintptr_t static_fields = 0xB8;
}
namespace network
{
	constexpr std::uintptr_t CLIENT_CONNECTION = 0xC8;
	constexpr std::uintptr_t CLIENT_CONNECTION_WRAPPER = 0x108;
	constexpr std::uintptr_t RAKNET_HANDLE_IN_WRAPPER = 0x10;
	constexpr std::uintptr_t CONNECTION_SERVER_GUID = 0x10;
	constexpr std::uintptr_t CLIENT_GET_LAST_PING_RVA = 0x76B8930;
}
namespace game_manager
{
	constexpr std::uintptr_t game_manager = 0xFCB78E0;
	constexpr std::uintptr_t static_fields = 0xB8;
}
namespace console_system
{
	constexpr std::uintptr_t find = 0x72596A0;
	constexpr std::uintptr_t get_override = 0x20;
	constexpr std::uintptr_t set_override = 0x10;
	constexpr std::uintptr_t call = 0x58;
}
namespace klass_layout
{
	constexpr std::uintptr_t name_ptr = 0x10;
	constexpr std::uintptr_t static_fields = 0xB8;
}
namespace base_networkable
{
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t wrapper_class_ptr = 0x8;
	constexpr std::uintptr_t parent_static_fields = 0x10;
	constexpr std::uintptr_t hv_offset = 0x18;
	constexpr std::uintptr_t entities = 0x18;
	constexpr std::uint32_t buffer_list_array = 0x10;
	constexpr std::uint32_t buffer_list_size = 0x18;
	constexpr std::uintptr_t client_entities_decryption = 0x103E210;
	constexpr std::uintptr_t entity_list_wrapper = 0x29AB770;
	constexpr std::uintptr_t entity_list_decryption = 0x29BFEA0;
	constexpr std::uintptr_t entity = 0x18;
	constexpr std::uintptr_t buffer = 0x18;
	constexpr std::uintptr_t prefabID = 0x54;
	constexpr std::uintptr_t parentEntity = 0x38;
	constexpr std::uintptr_t children = 0x88;
	constexpr std::uintptr_t net = 0x80;
	constexpr std::uintptr_t globalBroadcast = 0x58;
	constexpr std::uintptr_t networkRange = 0x64;
}
namespace camera
{
	constexpr std::uintptr_t camera_static = 0xB8;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t camera_object = 0x8;
	constexpr std::uintptr_t instance = 0x8;
	constexpr std::uintptr_t buffer = 0x8;
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
	constexpr std::uintptr_t clActiveItem = 0x568;
	constexpr std::uintptr_t PlayerEyes = 0x5F8;
	constexpr std::uintptr_t PlayerInventory = 0x4D0;
	constexpr std::uintptr_t current_team = 0x538;
	constexpr std::uintptr_t movement = 0x4E0;
	constexpr std::uintptr_t player_model = 0x6F0;
	constexpr std::uintptr_t playerFlags = 0x6B8;
	constexpr std::uintptr_t userID = 0x700;
	constexpr std::uintptr_t userIDString = 0x528;
	constexpr std::uintptr_t display_name = 0x2D8;
	constexpr std::uintptr_t player_input = 0x3A8;
	constexpr std::uintptr_t modelState = 0x480;
	constexpr std::uintptr_t mounted = 0x5C0;
	constexpr std::uintptr_t Belt = 0x478;
	constexpr std::uintptr_t _lookingAt = 0x4F0;
	constexpr std::uintptr_t weaponMoveSpeedScale = 0x798;
	constexpr std::uintptr_t clothingBlocksAiming = 0x79C;
	constexpr std::uintptr_t clothingMoveSpeedReduction = 0x7A0;
	constexpr std::uintptr_t player_rigidbody = 0x340;
	constexpr std::uintptr_t frozen = 0x388;
	constexpr std::uintptr_t currentGesture = 0x390;
	constexpr std::uintptr_t lastSentTick = 0x3A0;
}
namespace BaseCombatEntity
{
	constexpr std::uintptr_t skeletonProperties = 0x220;
	constexpr std::uintptr_t baseProtection = 0x228;
	constexpr std::uintptr_t lifestate = 0x298;
	constexpr std::uintptr_t markAttackerHostile = 0x29E;
	constexpr std::uintptr_t model = 0x1A8;
	constexpr std::uintptr_t _health = 0x2A4;
	constexpr std::uintptr_t _maxHealth = 0x2A8;
}
namespace BaseEntity
{
	constexpr std::uintptr_t bounds = 0x17C;
	constexpr std::uintptr_t model = 0x1A8;
	constexpr std::uintptr_t flags = 0x1B0;
	constexpr std::uintptr_t triggers = 0x98;
	constexpr std::uintptr_t positionLerp = 0x108;
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
namespace ModelState
{
	constexpr std::uintptr_t flags = 0x34;
	constexpr std::uintptr_t waterLevel = 0x14;
	constexpr std::uintptr_t lookDir = 0x54;
	constexpr std::uintptr_t Flying = 0x40;
	constexpr std::uintptr_t Sleeping = 0x8;
	constexpr std::uintptr_t Mounted = 0x200;
	constexpr std::uintptr_t OnGround = 0x4;
}
namespace ItemContainer
{
	constexpr std::uintptr_t ItemList = 0x58;
	constexpr std::uintptr_t flags = 0x48;
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
	constexpr std::uintptr_t ItemModWearable = 0x168;
}
namespace item
{
	constexpr std::uintptr_t info = 0x70;
	constexpr std::uintptr_t itemdefinition = 0x70;
	constexpr std::uintptr_t uid = 0x40;
	constexpr std::uintptr_t amount = 0xF8;
	constexpr std::uintptr_t ammoCount = 0x4C;
	constexpr std::uintptr_t shortname = 0x28;
	constexpr std::uintptr_t category = 0x58;
	constexpr std::uintptr_t HeldEntity = 0x80;
}
namespace AttackEntity
{
	constexpr std::uintptr_t repeatDelay = 0x2DC;
	constexpr std::uintptr_t nextAttackTime = 0x330;
}
namespace BaseProjectile
{
	constexpr std::uintptr_t ShotFired = 0x4166A30;
	constexpr std::uintptr_t DidAttackClientside = 0x0;
	constexpr std::uintptr_t SetAmmoCount = 0x41225E0;
	constexpr std::uintptr_t BeginCycle = 0x4143360;
	constexpr std::uintptr_t DoAttack_vtableoff = 0x0;
	constexpr std::uintptr_t aimCone = 0x400;
	constexpr std::uintptr_t hipAimCone = 0x404;
	constexpr std::uintptr_t aimSway = 0x3E8;
	constexpr std::uintptr_t aimSwaySpeed = 0x3EC;
	constexpr std::uintptr_t recoil = 0x3F0;
	constexpr std::uintptr_t projectileVelocityScale = 0x37C;
	constexpr std::uintptr_t automatic = 0x380;
	constexpr std::uintptr_t reloadTime = 0x3C0;
	constexpr std::uintptr_t primaryMagazine = 0x3C8;
	constexpr std::uintptr_t magazine = 0x3C8;
	constexpr std::uintptr_t manualCycle = 0x41E;
	constexpr std::uintptr_t needsCycle = 0x424;
	constexpr std::uintptr_t isReloading = 0x46C;
	constexpr std::uintptr_t stancePenalty = 0x440;
	constexpr std::uintptr_t aimconePenalty = 0x448;
	constexpr std::uintptr_t sightAimConeScale = 0x45C;
	constexpr std::uintptr_t sight_aim_cone_scale = 0x45C;
	constexpr std::uintptr_t hipAimConeScale = 0x464;
	constexpr std::uintptr_t hip_aim_cone_scale = 0x464;
	constexpr std::uintptr_t fractionalReload = 0x3D0;
	constexpr std::uintptr_t aimconeCurve = 0x3F8;
	constexpr std::uintptr_t noAimingWhileCycling = 0x41D;
	constexpr std::uintptr_t cachedModHash = 0x458;
	constexpr std::uintptr_t hipAimConeOffset = 0x468;
	constexpr std::uintptr_t sightAimConeOffset = 0x460;
	constexpr std::uintptr_t aimconePenaltyPerShot = 0x408;
	constexpr std::uintptr_t aimConePenaltyMax = 0x40C;
	constexpr std::uintptr_t aimconePenaltyRecoverTime = 0x410;
	constexpr std::uintptr_t aimconePenaltyRecoverDelay = 0x414;
	constexpr std::uintptr_t stancePenaltyScale = 0x418;
	constexpr std::uintptr_t hasADS = 0x41C;
	constexpr std::uintptr_t isBurstWeapon = 0x427;
	constexpr std::uintptr_t canChangeFireModes = 0x428;
	constexpr std::uintptr_t internalBurstFireRateScale = 0x430;
	constexpr std::uintptr_t internalBurstAimConeScale = 0x434;
}
namespace CompoundBowWeapon
{
	constexpr std::uintptr_t stringHoldDurationMax = 0x4C0;
}
namespace PlayerProjectileUpdate
{
	constexpr std::uintptr_t Dispose = 0xAC66260;
	constexpr std::uintptr_t _disposed = 0x18;
	constexpr std::uintptr_t ShouldPool = 0x19;
}
namespace PlayerProjectileAttack
{
	constexpr std::uintptr_t hitDistance = 0x1C;
	constexpr std::uintptr_t hitVelocity = 0x24;
	constexpr std::uintptr_t travelTime = 0x18;
}
namespace PlayerAttack
{
	constexpr std::uintptr_t projectileID = 0x10;
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
	constexpr std::uintptr_t owner = 0x108;
	constexpr std::uintptr_t sourceProjectilePrefab = 0x110;
	constexpr std::uintptr_t mod = 0x118;
	constexpr std::uintptr_t hitTest = 0x128;
	constexpr std::uintptr_t launchTime = 0x158;
	constexpr std::uintptr_t currentVelocity = 0x168;
	constexpr std::uintptr_t currentPosition = 0x15C;
	constexpr std::uintptr_t projectileID = 0x20;
	constexpr std::uintptr_t maxDistance = 0x140;
	constexpr std::uintptr_t traveledDistance = 0x174;
	constexpr std::uintptr_t traveledTime = 0x178;
	constexpr std::uintptr_t previousTraveledTime = 0x17C;
	constexpr std::uintptr_t sentPosition = 0x180;
	constexpr std::uintptr_t previousPosition = 0x18C;
	constexpr std::uintptr_t previousVelocity = 0x198;
	constexpr std::uintptr_t integrity = 0x13C;
}
namespace HitTest
{
	constexpr std::uintptr_t type = 0x24;
	constexpr std::uintptr_t attackray = 0x44;
	constexpr std::uintptr_t rayhit = 0x70;
	constexpr std::uintptr_t damageproperties = 0xE8;
	constexpr std::uintptr_t gameobject = 0xB8;
	constexpr std::uintptr_t collider = 0xA0;
	constexpr std::uintptr_t ignoredtypes = 0x30;
	constexpr std::uintptr_t hittransform = 0x60;
	constexpr std::uintptr_t hitpart = 0x28;
	constexpr std::uintptr_t hitmaterial = 0x18;
	constexpr std::uintptr_t multihit = 0xC0;
	constexpr std::uintptr_t besthit = 0x10;
	constexpr std::uintptr_t hitdistance = 0x68;
	constexpr std::uintptr_t radius = 0xB0;
	constexpr std::uintptr_t forgivness = 0x6C;
	constexpr std::uintptr_t didhit = 0x20;
	constexpr std::uintptr_t maxdistance = 0xAC;
	constexpr std::uintptr_t hitpoint = 0xD8;
	constexpr std::uintptr_t hitnormal = 0x38;
	constexpr std::uintptr_t ignoreentity = 0xD0;
	constexpr std::uintptr_t hitentity = 0xC8;
}
namespace playerattack
{
	constexpr std::uintptr_t pointEnd = 0x10;
	constexpr std::uintptr_t hitPositionLocal = 0x78;
	constexpr std::uintptr_t hitPositionWorld = 0x20;
	constexpr std::uintptr_t hitNormalWorld = 0x54;
	constexpr std::uintptr_t hitNormalLocal = 0x6C;
	constexpr std::uintptr_t pointStart = 0x2C;
	constexpr std::uintptr_t hitPartID = 0x68;
	constexpr std::uintptr_t hitMaterialID = 0x50;
	constexpr std::uintptr_t hitBone = 0x40;
}
namespace BaseMelee
{
	constexpr std::uintptr_t damageProperties = 0x378;
	constexpr std::uintptr_t maxDistance = 0x390;
	constexpr std::uintptr_t attackRadius = 0x394;
	constexpr std::uintptr_t blockSprintOnAttack = 0x399;
	constexpr std::uintptr_t gathering = 0x3D0;
	constexpr std::uintptr_t canThrowAsProjectile = 0x370;
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
	constexpr std::uintptr_t ConditionLossMultiplier = 0x1F0;
	constexpr std::uintptr_t additiveEffect = 0x1F8;
	constexpr std::uintptr_t defaultSilencerEffect = 0x200;
	constexpr std::uintptr_t isSilencer = 0x208;
	constexpr std::uintptr_t silencerType = 0x20C;
	constexpr std::uintptr_t repeatDelay = 0x210;
	constexpr std::uintptr_t projectileVelocity = 0x21C;
	constexpr std::uintptr_t projectileDamage = 0x228;
	constexpr std::uintptr_t projectileDistance = 0x234;
	constexpr std::uintptr_t aimsway = 0x240;
	constexpr std::uintptr_t aimswaySpeed = 0x24C;
	constexpr std::uintptr_t recoil = 0x258;
	constexpr std::uintptr_t sightAimCone = 0x264;
	constexpr std::uintptr_t hipAimCone = 0x270;
	constexpr std::uintptr_t isLight = 0x27C;
	constexpr std::uintptr_t isMuzzleBrake = 0x27D;
	constexpr std::uintptr_t isMuzzleBoost = 0x27E;
	constexpr std::uintptr_t isScope = 0x27F;
	constexpr std::uintptr_t zoomAmountDisplayOnly = 0x280;
	constexpr std::uintptr_t magazineCapacity = 0x284;
	constexpr std::uintptr_t needsOnForEffects = 0x290;
	constexpr std::uintptr_t burstCount = 0x294;
	constexpr std::uintptr_t timeBetweenBursts = 0x298;
	constexpr std::uintptr_t zoomLevels = 0x2A0;
	constexpr std::uintptr_t fovChangeEffect = 0x2A8;
	constexpr std::uintptr_t allowPings = 0x2B0;
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
	constexpr std::uintptr_t successFraction = 0x4A8;
	constexpr std::uintptr_t strikeRecoil = 0x4B0;
	constexpr std::uintptr_t _didSparkThisFrame = 0x4B8;
}
namespace PlayerEyes
{
	constexpr std::uintptr_t viewOffset = 0x40;
	constexpr std::uintptr_t bodyRotation = 0x50;
	constexpr std::uintptr_t world_position = 0x60;
	constexpr std::uintptr_t worldPosition = 0x60;
}
namespace PlayerInput
{
	constexpr std::uintptr_t state = 0x28;
	constexpr std::uintptr_t bodyAngles = 0x44;
	constexpr std::uintptr_t yaw = 0x60;
}
namespace PlayerModel
{
	constexpr std::uintptr_t _multiMesh = 0x448;
	constexpr std::uintptr_t collision = 0xD0;
	constexpr std::uintptr_t fullMask = 0x208;
	constexpr std::uintptr_t newVelocity = 0x31C;
	constexpr std::uintptr_t isNpc = 0x490;
	constexpr std::uintptr_t visibleNullable = 0x0;
	constexpr std::uintptr_t position = 0x2F8;
}
namespace SkinnedMultiMesh
{
	constexpr std::uintptr_t RendererList = 0x58;
	constexpr std::uintptr_t Renderers = 0x58;
}
namespace chams
{
	constexpr std::uintptr_t player_model_multi_mesh = 0x448;
	constexpr std::uintptr_t multi_mesh_renderer_list = 0x58;
}
namespace PlayerInventory
{
	constexpr std::uintptr_t loot = 0x48;
	constexpr std::uintptr_t containerBelt = 0x58;
	constexpr std::uintptr_t containerMain = 0x38;
	constexpr std::uintptr_t containerWear = 0x30;
}
namespace movement
{
	constexpr std::uintptr_t adminCheat = 0x20;
	constexpr std::uintptr_t Owner = 0x28;
}
namespace PlayerWalkMovement
{
	constexpr std::uintptr_t zeroFrictionMaterial = 0x60;
	constexpr std::uintptr_t highFrictionMaterial = 0x68;
	constexpr std::uintptr_t capsuleHeight = 0x70;
	constexpr std::uintptr_t capsuleCenter = 0x78;
	constexpr std::uintptr_t capsuleHeightDucked = 0x80;
	constexpr std::uintptr_t capsuleCenterDucked = 0x88;
	constexpr std::uintptr_t capsuleRadius = 0x90;
	constexpr std::uintptr_t gravityTestRadius = 0x98;
	constexpr std::uintptr_t gravityMultiplier = 0xA8;
	constexpr std::uintptr_t gravityMultiplierSwimming = 0xB0;
	constexpr std::uintptr_t maxAngleWalking = 0xB8;
	constexpr std::uintptr_t maxAngleClimbing = 0xC0;
	constexpr std::uintptr_t maxAngleSliding = 0xC8;
	constexpr std::uintptr_t ladder = 0xD8;
	constexpr std::uintptr_t collisionDetectionMode = 0xE0;
	constexpr std::uintptr_t body = 0xE8;
	constexpr std::uintptr_t capsule = 0xF0;
	constexpr std::uintptr_t maxVelocity = 0xF8;
	constexpr std::uintptr_t groundAngle = 0x100;
	constexpr std::uintptr_t groundAngleNew = 0x108;
	constexpr std::uintptr_t groundTime = 0x110;
	constexpr std::uintptr_t jumpTime = 0x118;
	constexpr std::uintptr_t landTime = 0x120;
	constexpr std::uintptr_t velocity = 0x128;
	constexpr std::uintptr_t groundNormal = 0x138;
	constexpr std::uintptr_t groundNormalNew = 0x148;
	constexpr std::uintptr_t nextSprintTime = 0x198;
	constexpr std::uintptr_t lastSprintTime = 0x1A0;
	constexpr std::uintptr_t sprintForced = 0x1A8;
	constexpr std::uintptr_t modify = 0x1B8;
	constexpr std::uintptr_t grounded = 0x1BC;
	constexpr std::uintptr_t wasGrounded = 0x1C4;
	constexpr std::uintptr_t climbing = 0x1CC;
	constexpr std::uintptr_t wasClimbing = 0x1D4;
	constexpr std::uintptr_t sliding = 0x1DC;
	constexpr std::uintptr_t wasSliding = 0x1E4;
	constexpr std::uintptr_t swimming = 0x1EC;
	constexpr std::uintptr_t wasSwimming = 0x1F4;
	constexpr std::uintptr_t jumping = 0x1FC;
	constexpr std::uintptr_t flying = 0x204;
	constexpr std::uintptr_t falling = 0x20C;
}
namespace WorldItem
{
	constexpr std::uintptr_t item = 0x1F8;
	constexpr std::uintptr_t allowPickup = 0x1F0;
}
namespace mapview
{
	constexpr std::uintptr_t static_fields_off = 0xB8;
	constexpr std::uintptr_t RVA_RustWorld = 0xFCCA1E8;
	constexpr std::uintptr_t World_Size_off = 0x40;
	constexpr std::uintptr_t World_Seed_off = 0x20;
	constexpr std::uintptr_t World_Name_off = 0xC0;
	constexpr std::uintptr_t RVA_MapInterface = 0xFC602E8;
	constexpr std::uintptr_t MI_Instance_off = 0x8;
	constexpr std::uintptr_t MI_View_off = 0x60;
	constexpr std::uintptr_t MV_mapImage_off = 0x20;
	constexpr std::uintptr_t MV_scrollRect_off = 0x40;
	constexpr std::uintptr_t RawImage_UVRect = 0xE8;
	constexpr std::uintptr_t SR_ContentBounds = 0x90;
	constexpr std::uintptr_t SR_ViewBounds = 0xA8;
}
namespace AutoTurret
{
	constexpr std::uintptr_t authorizedPlayers = 0x3C8;
	constexpr std::uintptr_t muzzlePos = 0x4A0;
	constexpr std::uintptr_t gun_yaw = 0x4B8;
	constexpr std::uintptr_t lastYaw = 0x0;
	constexpr std::uintptr_t gun_pitch = 0x4C0;
	constexpr std::uintptr_t sightRange = 0x4C8;
}
namespace PatrolHelicopter
{
	constexpr std::uintptr_t weakspots = 0x2C0;
	constexpr std::uintptr_t mainRotor = 0x2D0;
}
namespace PlayerCorpse
{
	constexpr std::uintptr_t clientClothing = 0x340;
}
namespace LootableCorpse
{
	constexpr std::uintptr_t playerSteamID = 0x308;
	constexpr std::uintptr_t _playerName = 0x318;
}
namespace HackableLockedCrate
{
	constexpr std::uint32_t hackSeconds = 0x400;
	constexpr std::uintptr_t timerText = 0x3F0;
}
namespace HeldEntity
{
	constexpr std::uintptr_t ownerItemUID = 0x2D0;
	constexpr std::uintptr_t viewModel = 0x1F0;
	constexpr std::uint32_t viewModel_wrapper_kind = 0x4;
	constexpr std::uint32_t viewModel_inner_off = 0x28;
	constexpr std::uintptr_t _punches = 0x240;
}
namespace ItemIcon
{
	constexpr std::uintptr_t item_icon_c = 0xFD533B8;
	constexpr std::uintptr_t type_info = 0xFD533B8;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t containerLootStartTimes = 0x0;
	constexpr std::uintptr_t TryToMove = 0x4D49790;
	constexpr std::uintptr_t RunTimedAction = 0x4D52190;
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
	constexpr std::uintptr_t hashCode = 0x0;
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
	constexpr std::uintptr_t model = 0x88;
	constexpr std::uintptr_t bob = 0xC8;
	constexpr std::uintptr_t lower = 0xC0;
	constexpr std::uintptr_t sway = 0xB8;
	constexpr std::uintptr_t ironSights = 0xB0;
}
namespace model
{
	constexpr std::uintptr_t rootBone = 0x28;
	constexpr std::uintptr_t headBone = 0x30;
	constexpr std::uintptr_t eyeBone = 0x38;
	constexpr std::uintptr_t boneTransforms = 0x50;
	constexpr std::uintptr_t boneNames = 0x58;
	constexpr std::uintptr_t bone_transform = 0x50;
	constexpr std::uintptr_t pelvis_bone_idx = 0x0;
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
namespace EffectNetwork
{
	constexpr std::uintptr_t type_info = 0xFD6FDA8;
	constexpr std::uintptr_t static_type_info = 0xFCB17E0;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t instance = 0x8;
	constexpr std::uintptr_t hitPosition = 0xB0;
}
namespace singleton_typeinfos
{
	constexpr std::uintptr_t SingletonComponent_UI_LoadingScreen = 0xFC64060;
	constexpr std::uintptr_t SingletonComponent_MixerSnapshotManager = 0xFD2F058;
}
namespace TOD_Sky_Static
{
	constexpr std::uintptr_t tod_sky_c = 0xFD2F9E8;
	constexpr std::uintptr_t static_fields = 0xB8;
	constexpr std::uintptr_t instances = 0x28;
	constexpr std::uintptr_t instancesView = 0x28;
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
namespace convar_graphics
{
	constexpr std::uintptr_t convar_graphics = 0xFCDA610;
	constexpr std::uintptr_t convar_graphics_instance = 0xB8;
	constexpr std::uintptr_t fov = 0xA0;
}
namespace convar_admin
{
	constexpr std::uintptr_t convar_admin = 0xFD49F48;
	constexpr std::uintptr_t playerIds = 0x20;
}

uintptr_t decryption::client_entities(uint64_t a1)
{
	std::uintptr_t rax = driver.read<std::uintptr_t>(a1 + 0x18);
	std::uint32_t* rdx = (std::uint32_t*)&rax;
	std::uint32_t r8d = 0x2;
	std::uint32_t eax, ecx;
	do {
		ecx = *(std::uint32_t*)(rdx);
		eax = *(std::uint32_t*)(rdx);
		rdx = (std::uint32_t*)((std::uint8_t*)rdx + 0x4);
		ecx = ecx + 0xB97F1AE1;
		eax = ecx;
		ecx = ecx << 0x1D;
		eax = eax >> 0x3;
		ecx = ecx | eax;
		ecx = ecx + 0x32BEE2A5;
		ecx = ecx ^ 0xE58A30D8;
		*((std::uint32_t*)rdx - 1) = ecx;
		--r8d;
	} while (r8d);
	return il2cpp_get_handle(rax);
}

uintptr_t decryption::entity_list(uint64_t a1)
{
	std::uintptr_t rax = driver.read<std::uintptr_t>(a1 + 0x18);
	std::uint32_t* rdx = (std::uint32_t*)&rax;
	std::uint32_t r8d = 0x2;
	std::uint32_t eax, ecx;
	do {
		ecx = *(std::uint32_t*)(rdx);
		eax = *(std::uint32_t*)(rdx);
		rdx = (std::uint32_t*)((std::uint8_t*)rdx + 0x4);
		eax = ecx;
		ecx = ecx << 0xA;
		eax = eax >> 0x16;
		ecx = ecx | eax;
		ecx = ecx ^ 0xF6BF245D;
		eax = ecx;
		ecx = ecx << 0xF;
		eax = eax >> 0x11;
		ecx = ecx | eax;
		ecx = ecx ^ 0x9BBD4311;
		*((std::uint32_t*)rdx - 1) = ecx;
		--r8d;
	} while (r8d);
	return il2cpp_get_handle(rax);
}

uintptr_t decryption::clActiveItem(uint64_t a1)
{
	std::uint32_t* rdx = (std::uint32_t*)&a1;
	std::uint32_t r9d = 0x1;
	std::uint32_t eax, edx;
	do {
		edx = *(std::uint32_t*)(rdx);
		eax = *(std::uint32_t*)(rdx);
		rdx = (std::uint32_t*)((std::uint8_t*)rdx + 0x4);
		edx = (edx << 0x1E) | (edx >> 0x2);
		edx = edx ^ 0x4ED09CE6;
		edx = edx - 0x2521E783;
		*((std::uint32_t*)rdx - 1) = edx;
		--r9d;
	} while (r9d);
	return a1;
}

uintptr_t decryption::PlayerInventory(uint64_t a1)
{
	std::uintptr_t rax = driver.read<std::uintptr_t>(a1 + 0x18);
	std::uint32_t* rdx = (std::uint32_t*)&rax;
	std::uint32_t r8d = 0x2;
	std::uint32_t eax, ecx;
	do {
		ecx = *(std::uint32_t*)(rdx);
		eax = *(std::uint32_t*)(rdx);
		rdx = (std::uint32_t*)((std::uint8_t*)rdx + 0x4);
		ecx = ecx + 0x343EF771;
		eax = ecx;
		ecx = ecx << 0x19;
		eax = eax >> 0x7;
		ecx = ecx | eax;
		ecx = ecx - 0x38A35400;
		*((std::uint32_t*)rdx - 1) = ecx;
		--r8d;
	} while (r8d);
	return il2cpp_get_handle(rax);
}

uintptr_t decryption::PlayerEyes(uint64_t a1)
{
	std::uintptr_t rax = driver.read<std::uintptr_t>(a1 + 0x18);
	std::uint32_t* rdx = (std::uint32_t*)&rax;
	std::uint32_t r8d = 0x2;
	std::uint32_t eax, ecx;
	do {
		ecx = *(std::uint32_t*)(rdx);
		eax = *(std::uint32_t*)(rdx);
		rdx = (std::uint32_t*)((std::uint8_t*)rdx + 0x4);
		eax = ecx;
		ecx = ecx << 0x1A;
		eax = eax >> 0x6;
		ecx = ecx | eax;
		ecx = ecx ^ 0x441ADFFD;
		ecx = ecx - 0x426353FC;
		*((std::uint32_t*)rdx - 1) = ecx;
		--r8d;
	} while (r8d);
	return il2cpp_get_handle(rax);
}

inline uint32_t decryption::decrypt_fov(uint32_t val) {
	val -= 0x7F13D9D6;
	val ^= 0xB8C0173B;
	val = (val << 0x4) | (val >> 0x1C);
	return val;
}

inline uint32_t decryption::encrypt_fov(uint32_t val) {
	val = (val >> 0x4) | (val << 0x1C);
	val ^= 0xB8C0173B;
	val += 0x7F13D9D6;
	return val;
}
