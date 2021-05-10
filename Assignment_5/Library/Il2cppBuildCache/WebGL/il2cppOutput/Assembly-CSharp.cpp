#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Bow
struct Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// KeyBlade
struct KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.String
struct String_t;
// Sword
struct Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Wand
struct Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC;
// Weapon
struct Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226;
// WeaponFactory
struct WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416;
// WeaponFactoryTest
struct WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0;
// WeaponSpawner
struct WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BD5096EC5FF5E9E08920B6B0AF7630CDAA11427;
IL2CPP_EXTERN_C String_t* _stringLiteral0E92D19726F10E23A99001553ECB029656AD0AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2AEE75FD319B3EC8521E6C769467B49C1888A5D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6B427F6B849C29D6BABEF1C6A151C6BC2728E9A4;
IL2CPP_EXTERN_C String_t* _stringLiteral8B3AFD4DE285500A0EFF59668D87D30884EB0E90;
IL2CPP_EXTERN_C String_t* _stringLiteral8F6658E59FC61EA68A298BADFDB53C7A6F51A8A4;
IL2CPP_EXTERN_C String_t* _stringLiteralAE3548D5E30A86557EBB4CACBFC02067E63929A9;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC685FFDCF6836A76AC803137D68239416E4163;
IL2CPP_EXTERN_C String_t* _stringLiteralC27ECEE2FBA5DCD887377C5EF2EA6013B81E8C57;
IL2CPP_EXTERN_C String_t* _stringLiteralCBDC4C8D9423AC6CBF942E747876EFCB32444BF5;
IL2CPP_EXTERN_C String_t* _stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1F705778A325489228AC526C58287EAE07A387;
IL2CPP_EXTERN_C String_t* _stringLiteralDB97DCD924EA2974515040374A7051EAB78F7B3E;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0772B766643073441507F0802B8AF2D3986A1C;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA914462C625FD2062D3383E5D6A66F704E1EF;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Weapon
struct  Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226  : public RuntimeObject
{
public:
	// System.String Weapon::<WeaponType>k__BackingField
	String_t* ___U3CWeaponTypeU3Ek__BackingField_0;
	// System.String Weapon::<DamageType>k__BackingField
	String_t* ___U3CDamageTypeU3Ek__BackingField_1;
	// System.Int32 Weapon::<Damage>k__BackingField
	int32_t ___U3CDamageU3Ek__BackingField_2;
	// System.Int32 Weapon::<Durability>k__BackingField
	int32_t ___U3CDurabilityU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CWeaponTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___U3CWeaponTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CWeaponTypeU3Ek__BackingField_0() const { return ___U3CWeaponTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CWeaponTypeU3Ek__BackingField_0() { return &___U3CWeaponTypeU3Ek__BackingField_0; }
	inline void set_U3CWeaponTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CWeaponTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWeaponTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDamageTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___U3CDamageTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CDamageTypeU3Ek__BackingField_1() const { return ___U3CDamageTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDamageTypeU3Ek__BackingField_1() { return &___U3CDamageTypeU3Ek__BackingField_1; }
	inline void set_U3CDamageTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CDamageTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDamageTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDamageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___U3CDamageU3Ek__BackingField_2)); }
	inline int32_t get_U3CDamageU3Ek__BackingField_2() const { return ___U3CDamageU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CDamageU3Ek__BackingField_2() { return &___U3CDamageU3Ek__BackingField_2; }
	inline void set_U3CDamageU3Ek__BackingField_2(int32_t value)
	{
		___U3CDamageU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDurabilityU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___U3CDurabilityU3Ek__BackingField_3)); }
	inline int32_t get_U3CDurabilityU3Ek__BackingField_3() const { return ___U3CDurabilityU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDurabilityU3Ek__BackingField_3() { return &___U3CDurabilityU3Ek__BackingField_3; }
	inline void set_U3CDurabilityU3Ek__BackingField_3(int32_t value)
	{
		___U3CDurabilityU3Ek__BackingField_3 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Bow
struct  Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F  : public Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226
{
public:

public:
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// KeyBlade
struct  KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0  : public Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226
{
public:

public:
};


// Sword
struct  Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85  : public Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226
{
public:

public:
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Wand
struct  Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC  : public Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226
{
public:

public:
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WeaponFactory
struct  WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Weapon WeaponFactory::weapon
	Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * ___weapon_4;

public:
	inline static int32_t get_offset_of_weapon_4() { return static_cast<int32_t>(offsetof(WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416, ___weapon_4)); }
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * get_weapon_4() const { return ___weapon_4; }
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 ** get_address_of_weapon_4() { return &___weapon_4; }
	inline void set_weapon_4(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * value)
	{
		___weapon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weapon_4), (void*)value);
	}
};


// WeaponFactoryTest
struct  WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// WeaponFactory WeaponFactoryTest::factory
	WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * ___factory_4;
	// WeaponSpawner WeaponFactoryTest::spawner
	WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * ___spawner_5;
	// Weapon WeaponFactoryTest::weapon
	Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * ___weapon_6;
	// UnityEngine.UI.Text WeaponFactoryTest::tx
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___tx_7;

public:
	inline static int32_t get_offset_of_factory_4() { return static_cast<int32_t>(offsetof(WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0, ___factory_4)); }
	inline WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * get_factory_4() const { return ___factory_4; }
	inline WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 ** get_address_of_factory_4() { return &___factory_4; }
	inline void set_factory_4(WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * value)
	{
		___factory_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawner_5() { return static_cast<int32_t>(offsetof(WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0, ___spawner_5)); }
	inline WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * get_spawner_5() const { return ___spawner_5; }
	inline WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 ** get_address_of_spawner_5() { return &___spawner_5; }
	inline void set_spawner_5(WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * value)
	{
		___spawner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawner_5), (void*)value);
	}

	inline static int32_t get_offset_of_weapon_6() { return static_cast<int32_t>(offsetof(WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0, ___weapon_6)); }
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * get_weapon_6() const { return ___weapon_6; }
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 ** get_address_of_weapon_6() { return &___weapon_6; }
	inline void set_weapon_6(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * value)
	{
		___weapon_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weapon_6), (void*)value);
	}

	inline static int32_t get_offset_of_tx_7() { return static_cast<int32_t>(offsetof(WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0, ___tx_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_tx_7() const { return ___tx_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_tx_7() { return &___tx_7; }
	inline void set_tx_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___tx_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx_7), (void*)value);
	}
};


// WeaponSpawner
struct  WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// WeaponFactory WeaponSpawner::weaponFactory
	WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * ___weaponFactory_4;
	// Weapon WeaponSpawner::weapon
	Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * ___weapon_5;

public:
	inline static int32_t get_offset_of_weaponFactory_4() { return static_cast<int32_t>(offsetof(WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7, ___weaponFactory_4)); }
	inline WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * get_weaponFactory_4() const { return ___weaponFactory_4; }
	inline WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 ** get_address_of_weaponFactory_4() { return &___weaponFactory_4; }
	inline void set_weaponFactory_4(WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * value)
	{
		___weaponFactory_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponFactory_4), (void*)value);
	}

	inline static int32_t get_offset_of_weapon_5() { return static_cast<int32_t>(offsetof(WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7, ___weapon_5)); }
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * get_weapon_5() const { return ___weapon_5; }
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 ** get_address_of_weapon_5() { return &___weapon_5; }
	inline void set_weapon_5(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * value)
	{
		___weapon_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weapon_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// System.Void Weapon::set_WeaponType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weapon_set_WeaponType_mE388BE5BC16C0775B5F4D2951A1952D0CC2FBC3D_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Weapon::set_DamageType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weapon_set_DamageType_m320B2352A0FA0A6D4BA0C0C0D54747EDE1C62865_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Weapon::set_Durability(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weapon_set_Durability_m8B2D67893B3A891DEB8BE32CC50532132ABBACE4_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Weapon::set_Damage(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weapon_set_Damage_mA0555DE5D26E71BC4A157A347FA653C6191AB42A_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Weapon::get_Durability()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weapon_get_Durability_mE09C13E58FD21798E4CB866A18E6C893F7F9410D_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// System.String Weapon::get_WeaponType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Weapon_get_WeaponType_mACF6EAED93CED7C6190D8D2A7C0371A59C2B0F0E_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// System.Int32 Weapon::get_Damage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weapon_get_Damage_m785E298E572E863CC444384FA199F8C9E75C73D6_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String Weapon::get_DamageType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Weapon_get_DamageType_m990CA13D2E5EED74FBA971E124D0303FA5A7E97E_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Bow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bow__ctor_mE8C0890A848BAB83E6F7D171D6C2BEB31F2A2FD5 (Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F * __this, const RuntimeMethod* method);
// System.Void Sword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword__ctor_m70C5B9B73B118D6081BE7B8A993F452E0BB8E2F3 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, const RuntimeMethod* method);
// System.Void KeyBlade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyBlade__ctor_m82C63E998C9EEE929DAFDD89BAC2536E3212E6D6 (KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0 * __this, const RuntimeMethod* method);
// System.Void Wand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand__ctor_mB37B957045D92A547CD539CB831C9C07903B1E81 (Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void WeaponFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFactory__ctor_mEA98440F7C0FC3B14FAD58DB547D07A133E1318F (WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * __this, const RuntimeMethod* method);
// System.Void WeaponSpawner::.ctor(WeaponFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSpawner__ctor_m1606E348553E3D33C3260C091234EBEDFB0A0F54 (WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * __this, WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * ___weaponFactory0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// Weapon WeaponSpawner::SpawnWeapon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * WeaponSpawner_SpawnWeapon_m08D6101B1CCC20A2036B4844A17BC1722F3AA9C1 (WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * __this, String_t* ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void WeaponFactoryTest::MakeWeapon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFactoryTest_MakeWeapon_mE375ECC6075F6E47E57BED165B970C7D1168230B (WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String Weapon::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Weapon_Attack_mCB2D6E71A183171678738AA53C9BB9F6A395C274 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// Weapon WeaponFactory::CreateWeapon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * WeaponFactory_CreateWeapon_m94ECE0C69FE07D9B3AE525889071C865CF007982 (WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * __this, String_t* ___type0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bow__ctor_mE8C0890A848BAB83E6F7D171D6C2BEB31F2A2FD5 (Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AEE75FD319B3EC8521E6C769467B49C1888A5D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA914462C625FD2062D3383E5D6A66F704E1EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Bow()
		Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97(__this, /*hidden argument*/NULL);
		// this.WeaponType = "Bow";
		Weapon_set_WeaponType_mE388BE5BC16C0775B5F4D2951A1952D0CC2FBC3D_inline(__this, _stringLiteral2AEE75FD319B3EC8521E6C769467B49C1888A5D6, /*hidden argument*/NULL);
		// this.DamageType = "Ranged";
		Weapon_set_DamageType_m320B2352A0FA0A6D4BA0C0C0D54747EDE1C62865_inline(__this, _stringLiteralFABA914462C625FD2062D3383E5D6A66F704E1EF, /*hidden argument*/NULL);
		// this.Durability = 10;
		Weapon_set_Durability_m8B2D67893B3A891DEB8BE32CC50532132ABBACE4_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// this.Damage = 50;
		Weapon_set_Damage_mA0555DE5D26E71BC4A157A347FA653C6191AB42A_inline(__this, ((int32_t)50), /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KeyBlade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyBlade__ctor_m82C63E998C9EEE929DAFDD89BAC2536E3212E6D6 (KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B427F6B849C29D6BABEF1C6A151C6BC2728E9A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public KeyBlade()
		Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97(__this, /*hidden argument*/NULL);
		// this.WeaponType = "Keyblade";
		Weapon_set_WeaponType_mE388BE5BC16C0775B5F4D2951A1952D0CC2FBC3D_inline(__this, _stringLiteral6B427F6B849C29D6BABEF1C6A151C6BC2728E9A4, /*hidden argument*/NULL);
		// this.DamageType = "Melee";
		Weapon_set_DamageType_m320B2352A0FA0A6D4BA0C0C0D54747EDE1C62865_inline(__this, _stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4, /*hidden argument*/NULL);
		// this.Damage = 100;
		Weapon_set_Damage_mA0555DE5D26E71BC4A157A347FA653C6191AB42A_inline(__this, ((int32_t)100), /*hidden argument*/NULL);
		// this.Durability = 50;
		Weapon_set_Durability_m8B2D67893B3A891DEB8BE32CC50532132ABBACE4_inline(__this, ((int32_t)50), /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword__ctor_m70C5B9B73B118D6081BE7B8A993F452E0BB8E2F3 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F705778A325489228AC526C58287EAE07A387);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Sword()
		Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97(__this, /*hidden argument*/NULL);
		// this.WeaponType = "Sword";
		Weapon_set_WeaponType_mE388BE5BC16C0775B5F4D2951A1952D0CC2FBC3D_inline(__this, _stringLiteralDA1F705778A325489228AC526C58287EAE07A387, /*hidden argument*/NULL);
		// this.DamageType = "Melee";
		Weapon_set_DamageType_m320B2352A0FA0A6D4BA0C0C0D54747EDE1C62865_inline(__this, _stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4, /*hidden argument*/NULL);
		// this.Damage = 25;
		Weapon_set_Damage_mA0555DE5D26E71BC4A157A347FA653C6191AB42A_inline(__this, ((int32_t)25), /*hidden argument*/NULL);
		// this.Durability = 25;
		Weapon_set_Durability_m8B2D67893B3A891DEB8BE32CC50532132ABBACE4_inline(__this, ((int32_t)25), /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand__ctor_mB37B957045D92A547CD539CB831C9C07903B1E81 (Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE3548D5E30A86557EBB4CACBFC02067E63929A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA914462C625FD2062D3383E5D6A66F704E1EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Wand()
		Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97(__this, /*hidden argument*/NULL);
		// this.WeaponType = "Wand";
		Weapon_set_WeaponType_mE388BE5BC16C0775B5F4D2951A1952D0CC2FBC3D_inline(__this, _stringLiteralAE3548D5E30A86557EBB4CACBFC02067E63929A9, /*hidden argument*/NULL);
		// this.DamageType = "Ranged";
		Weapon_set_DamageType_m320B2352A0FA0A6D4BA0C0C0D54747EDE1C62865_inline(__this, _stringLiteralFABA914462C625FD2062D3383E5D6A66F704E1EF, /*hidden argument*/NULL);
		// this.Damage = 75;
		Weapon_set_Damage_mA0555DE5D26E71BC4A157A347FA653C6191AB42A_inline(__this, ((int32_t)75), /*hidden argument*/NULL);
		// this.Durability = 5;
		Weapon_set_Durability_m8B2D67893B3A891DEB8BE32CC50532132ABBACE4_inline(__this, 5, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Weapon::get_WeaponType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Weapon_get_WeaponType_mACF6EAED93CED7C6190D8D2A7C0371A59C2B0F0E (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// protected string WeaponType { get; set; }
		String_t* L_0 = __this->get_U3CWeaponTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Weapon::set_WeaponType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_set_WeaponType_mE388BE5BC16C0775B5F4D2951A1952D0CC2FBC3D (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// protected string WeaponType { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CWeaponTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Weapon::get_DamageType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Weapon_get_DamageType_m990CA13D2E5EED74FBA971E124D0303FA5A7E97E (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// protected string DamageType { get; set; }
		String_t* L_0 = __this->get_U3CDamageTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Weapon::set_DamageType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_set_DamageType_m320B2352A0FA0A6D4BA0C0C0D54747EDE1C62865 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// protected string DamageType { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDamageTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Weapon::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_get_Damage_m785E298E572E863CC444384FA199F8C9E75C73D6 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// protected int Damage { get; set; }
		int32_t L_0 = __this->get_U3CDamageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Weapon::set_Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_set_Damage_mA0555DE5D26E71BC4A157A347FA653C6191AB42A (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected int Damage { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDamageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 Weapon::get_Durability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_get_Durability_mE09C13E58FD21798E4CB866A18E6C893F7F9410D (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// protected int Durability { get; set; }
		int32_t L_0 = __this->get_U3CDurabilityU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Weapon::set_Durability(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_set_Durability_m8B2D67893B3A891DEB8BE32CC50532132ABBACE4 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected int Durability { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDurabilityU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Weapon::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Weapon_Attack_mCB2D6E71A183171678738AA53C9BB9F6A395C274 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC27ECEE2FBA5DCD887377C5EF2EA6013B81E8C57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB97DCD924EA2974515040374A7051EAB78F7B3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0772B766643073441507F0802B8AF2D3986A1C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Durability--;
		int32_t L_0;
		L_0 = Weapon_get_Durability_mE09C13E58FD21798E4CB866A18E6C893F7F9410D_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Weapon_set_Durability_m8B2D67893B3A891DEB8BE32CC50532132ABBACE4_inline(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// return WeaponType + " does "+ Damage + " " + DamageType + "damage. Weapon has " + Durability + " left";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		String_t* L_4;
		L_4 = Weapon_get_WeaponType_mACF6EAED93CED7C6190D8D2A7C0371A59C2B0F0E_inline(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_3;
		ArrayElementTypeCheck (L_5, _stringLiteralEB0772B766643073441507F0802B8AF2D3986A1C);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralEB0772B766643073441507F0802B8AF2D3986A1C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		int32_t L_7;
		L_7 = Weapon_get_Damage_m785E298E572E863CC444384FA199F8C9E75C73D6_inline(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11;
		L_11 = Weapon_get_DamageType_m990CA13D2E5EED74FBA971E124D0303FA5A7E97E_inline(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		ArrayElementTypeCheck (L_12, _stringLiteralDB97DCD924EA2974515040374A7051EAB78F7B3E);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDB97DCD924EA2974515040374A7051EAB78F7B3E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		int32_t L_14;
		L_14 = Weapon_get_Durability_mE09C13E58FD21798E4CB866A18E6C893F7F9410D_inline(__this, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_13;
		ArrayElementTypeCheck (L_16, _stringLiteralC27ECEE2FBA5DCD887377C5EF2EA6013B81E8C57);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC27ECEE2FBA5DCD887377C5EF2EA6013B81E8C57);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String Weapon::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Weapon_ToString_m5DC2D3EEB10E02BBE392F0035CDCF5EFC2DD6F31 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD5096EC5FF5E9E08920B6B0AF7630CDAA11427);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E92D19726F10E23A99001553ECB029656AD0AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B3AFD4DE285500A0EFF59668D87D30884EB0E90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F6658E59FC61EA68A298BADFDB53C7A6F51A8A4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return "WeaponType: " + WeaponType +"\n"
		//     + "DamageType: " + DamageType + "\n"
		//     + "Damage: " + Damage + "\n"
		//     + "Durability: " + Durability;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral8B3AFD4DE285500A0EFF59668D87D30884EB0E90);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8B3AFD4DE285500A0EFF59668D87D30884EB0E90);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3;
		L_3 = Weapon_get_WeaponType_mACF6EAED93CED7C6190D8D2A7C0371A59C2B0F0E_inline(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		ArrayElementTypeCheck (L_4, _stringLiteral0BD5096EC5FF5E9E08920B6B0AF7630CDAA11427);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0BD5096EC5FF5E9E08920B6B0AF7630CDAA11427);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6;
		L_6 = Weapon_get_DamageType_m990CA13D2E5EED74FBA971E124D0303FA5A7E97E_inline(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		ArrayElementTypeCheck (L_7, _stringLiteral0E92D19726F10E23A99001553ECB029656AD0AC3);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0E92D19726F10E23A99001553ECB029656AD0AC3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		int32_t L_9;
		L_9 = Weapon_get_Damage_m785E298E572E863CC444384FA199F8C9E75C73D6_inline(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_8;
		ArrayElementTypeCheck (L_11, _stringLiteral8F6658E59FC61EA68A298BADFDB53C7A6F51A8A4);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8F6658E59FC61EA68A298BADFDB53C7A6F51A8A4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		int32_t L_13;
		L_13 = Weapon_get_Durability_mE09C13E58FD21798E4CB866A18E6C893F7F9410D_inline(__this, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_14);
		String_t* L_15;
		L_15 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_12, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Weapon WeaponFactory::CreateWeapon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * WeaponFactory_CreateWeapon_m94ECE0C69FE07D9B3AE525889071C865CF007982 (WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * __this, String_t* ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AEE75FD319B3EC8521E6C769467B49C1888A5D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B427F6B849C29D6BABEF1C6A151C6BC2728E9A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE3548D5E30A86557EBB4CACBFC02067E63929A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F705778A325489228AC526C58287EAE07A387);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type.Equals("Bow"))
		String_t* L_0 = ___type0;
		bool L_1;
		L_1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, _stringLiteral2AEE75FD319B3EC8521E6C769467B49C1888A5D6, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// weapon = new Bow();
		Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F * L_2 = (Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F *)il2cpp_codegen_object_new(Bow_t9C6A7D1B7A8BA9BCEC919AE62E5C066BB756D03F_il2cpp_TypeInfo_var);
		Bow__ctor_mE8C0890A848BAB83E6F7D171D6C2BEB31F2A2FD5(L_2, /*hidden argument*/NULL);
		__this->set_weapon_4(L_2);
		// }
		goto IL_0066;
	}

IL_001a:
	{
		// else if (type.Equals("Sword"))
		String_t* L_3 = ___type0;
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, _stringLiteralDA1F705778A325489228AC526C58287EAE07A387, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// weapon = new Sword();
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_5 = (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 *)il2cpp_codegen_object_new(Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_il2cpp_TypeInfo_var);
		Sword__ctor_m70C5B9B73B118D6081BE7B8A993F452E0BB8E2F3(L_5, /*hidden argument*/NULL);
		__this->set_weapon_4(L_5);
		// }
		goto IL_0066;
	}

IL_0034:
	{
		// else if (type.Equals("Keyblade"))
		String_t* L_6 = ___type0;
		bool L_7;
		L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_6, _stringLiteral6B427F6B849C29D6BABEF1C6A151C6BC2728E9A4, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// weapon = new KeyBlade();
		KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0 * L_8 = (KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0 *)il2cpp_codegen_object_new(KeyBlade_tD5C57265CB8F66C94DA11474802386EA811277D0_il2cpp_TypeInfo_var);
		KeyBlade__ctor_m82C63E998C9EEE929DAFDD89BAC2536E3212E6D6(L_8, /*hidden argument*/NULL);
		__this->set_weapon_4(L_8);
		// }
		goto IL_0066;
	}

IL_004e:
	{
		// else if (type.Equals("Wand"))
		String_t* L_9 = ___type0;
		bool L_10;
		L_10 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_9, _stringLiteralAE3548D5E30A86557EBB4CACBFC02067E63929A9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// weapon = new Wand();
		Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC * L_11 = (Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC *)il2cpp_codegen_object_new(Wand_t2E10EA8B4B4A83851B32792F7D32680D262909DC_il2cpp_TypeInfo_var);
		Wand__ctor_mB37B957045D92A547CD539CB831C9C07903B1E81(L_11, /*hidden argument*/NULL);
		__this->set_weapon_4(L_11);
	}

IL_0066:
	{
		// return weapon;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_12 = __this->get_weapon_4();
		return L_12;
	}
}
// System.Void WeaponFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFactory__ctor_mEA98440F7C0FC3B14FAD58DB547D07A133E1318F (WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeaponFactoryTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFactoryTest_Start_mB700DFD9CEF183A424F7467720C7200B82FBBDC1 (WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBDC4C8D9423AC6CBF942E747876EFCB32444BF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// factory = new WeaponFactory();
		WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * L_0 = (WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 *)il2cpp_codegen_object_new(WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416_il2cpp_TypeInfo_var);
		WeaponFactory__ctor_mEA98440F7C0FC3B14FAD58DB547D07A133E1318F(L_0, /*hidden argument*/NULL);
		__this->set_factory_4(L_0);
		// spawner = new WeaponSpawner(factory);
		WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * L_1 = __this->get_factory_4();
		WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * L_2 = (WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 *)il2cpp_codegen_object_new(WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7_il2cpp_TypeInfo_var);
		WeaponSpawner__ctor_m1606E348553E3D33C3260C091234EBEDFB0A0F54(L_2, L_1, /*hidden argument*/NULL);
		__this->set_spawner_5(L_2);
		// tx = GameObject.FindGameObjectWithTag("WeaponText").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCBDC4C8D9423AC6CBF942E747876EFCB32444BF5, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_3, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_tx_7(L_4);
		// }
		return;
	}
}
// System.Void WeaponFactoryTest::MakeWeapon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFactoryTest_MakeWeapon_mE375ECC6075F6E47E57BED165B970C7D1168230B (WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC685FFDCF6836A76AC803137D68239416E4163);
		s_Il2CppMethodInitialized = true;
	}
	{
		// weapon = spawner.SpawnWeapon(str);
		WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * L_0 = __this->get_spawner_5();
		String_t* L_1 = ___str0;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_2;
		L_2 = WeaponSpawner_SpawnWeapon_m08D6101B1CCC20A2036B4844A17BC1722F3AA9C1(L_0, L_1, /*hidden argument*/NULL);
		__this->set_weapon_6(L_2);
		// Debug.Log("MakeWeapon check");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBBC685FFDCF6836A76AC803137D68239416E4163, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WeaponFactoryTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFactoryTest_Update_m3876355C30772AA65033EE6C1639E480E7D769A8 (WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AEE75FD319B3EC8521E6C769467B49C1888A5D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B427F6B849C29D6BABEF1C6A151C6BC2728E9A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE3548D5E30A86557EBB4CACBFC02067E63929A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F705778A325489228AC526C58287EAE07A387);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// MakeWeapon("Sword");
		WeaponFactoryTest_MakeWeapon_mE375ECC6075F6E47E57BED165B970C7D1168230B(__this, _stringLiteralDA1F705778A325489228AC526C58287EAE07A387, /*hidden argument*/NULL);
		// tx.text = weapon.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_tx_7();
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_2 = __this->get_weapon_6();
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
	}

IL_002a:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_4;
		L_4 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// MakeWeapon("Keyblade");
		WeaponFactoryTest_MakeWeapon_mE375ECC6075F6E47E57BED165B970C7D1168230B(__this, _stringLiteral6B427F6B849C29D6BABEF1C6A151C6BC2728E9A4, /*hidden argument*/NULL);
		// tx.text = weapon.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_tx_7();
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_6 = __this->get_weapon_6();
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
	}

IL_0054:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_8;
		L_8 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)51), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		// MakeWeapon("Bow");
		WeaponFactoryTest_MakeWeapon_mE375ECC6075F6E47E57BED165B970C7D1168230B(__this, _stringLiteral2AEE75FD319B3EC8521E6C769467B49C1888A5D6, /*hidden argument*/NULL);
		// tx.text = weapon.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_tx_7();
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_10 = __this->get_weapon_6();
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
	}

IL_007e:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4))
		bool L_12;
		L_12 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)52), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a8;
		}
	}
	{
		// MakeWeapon("Wand");
		WeaponFactoryTest_MakeWeapon_mE375ECC6075F6E47E57BED165B970C7D1168230B(__this, _stringLiteralAE3548D5E30A86557EBB4CACBFC02067E63929A9, /*hidden argument*/NULL);
		// tx.text = weapon.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_tx_7();
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_14 = __this->get_weapon_6();
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
	}

IL_00a8:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha0))
		bool L_16;
		L_16 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)48), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00c7;
		}
	}
	{
		// tx.text = weapon.Attack();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_tx_7();
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_18 = __this->get_weapon_6();
		String_t* L_19;
		L_19 = Weapon_Attack_mCB2D6E71A183171678738AA53C9BB9F6A395C274(L_18, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void WeaponFactoryTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFactoryTest__ctor_mFF3CFF6B16A6E94E65CAFC9456D2B885ADCD968D (WeaponFactoryTest_t3F09D07D3AC94D785B994AA55E7574C4B14B22D0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeaponSpawner::.ctor(WeaponFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSpawner__ctor_m1606E348553E3D33C3260C091234EBEDFB0A0F54 (WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * __this, WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * ___weaponFactory0, const RuntimeMethod* method)
{
	{
		// public WeaponSpawner(WeaponFactory weaponFactory)
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.weaponFactory = weaponFactory;
		WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * L_0 = ___weaponFactory0;
		__this->set_weaponFactory_4(L_0);
		// }
		return;
	}
}
// Weapon WeaponSpawner::SpawnWeapon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * WeaponSpawner_SpawnWeapon_m08D6101B1CCC20A2036B4844A17BC1722F3AA9C1 (WeaponSpawner_t109A91A592BA22B9B5168C676885FF7E88960FC7 * __this, String_t* ___type0, const RuntimeMethod* method)
{
	{
		// weapon = weaponFactory.CreateWeapon(type);
		WeaponFactory_tBD0DB2B0814B7B5C43C3738CF5738ACEB7122416 * L_0 = __this->get_weaponFactory_4();
		String_t* L_1 = ___type0;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_2;
		L_2 = WeaponFactory_CreateWeapon_m94ECE0C69FE07D9B3AE525889071C865CF007982(L_0, L_1, /*hidden argument*/NULL);
		__this->set_weapon_5(L_2);
		// return weapon;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_3 = __this->get_weapon_5();
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weapon_set_WeaponType_mE388BE5BC16C0775B5F4D2951A1952D0CC2FBC3D_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// protected string WeaponType { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CWeaponTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weapon_set_DamageType_m320B2352A0FA0A6D4BA0C0C0D54747EDE1C62865_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// protected string DamageType { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDamageTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weapon_set_Durability_m8B2D67893B3A891DEB8BE32CC50532132ABBACE4_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected int Durability { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDurabilityU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weapon_set_Damage_mA0555DE5D26E71BC4A157A347FA653C6191AB42A_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected int Damage { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDamageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weapon_get_Durability_mE09C13E58FD21798E4CB866A18E6C893F7F9410D_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// protected int Durability { get; set; }
		int32_t L_0 = __this->get_U3CDurabilityU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Weapon_get_WeaponType_mACF6EAED93CED7C6190D8D2A7C0371A59C2B0F0E_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// protected string WeaponType { get; set; }
		String_t* L_0 = __this->get_U3CWeaponTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weapon_get_Damage_m785E298E572E863CC444384FA199F8C9E75C73D6_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// protected int Damage { get; set; }
		int32_t L_0 = __this->get_U3CDamageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Weapon_get_DamageType_m990CA13D2E5EED74FBA971E124D0303FA5A7E97E_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// protected string DamageType { get; set; }
		String_t* L_0 = __this->get_U3CDamageTypeU3Ek__BackingField_1();
		return L_0;
	}
}
