#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AttackState
struct AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// DefendState
struct DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// IdleState
struct IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// MiningState
struct MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MoveState
struct MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04;
// PlayerAI
struct PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942;
// PlayerState
struct PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.String
struct String_t;
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
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral066B1BB44784429FFF7FC814763018F6606B6D32;
IL2CPP_EXTERN_C String_t* _stringLiteral0E35F36D56C491DE72F74E4CEAB3DA9BEABADACD;
IL2CPP_EXTERN_C String_t* _stringLiteral3BAE1D40C133D8768068175EA8B6A1CEC1A4BE3E;
IL2CPP_EXTERN_C String_t* _stringLiteral3BAF0F0786F3AC94CD740BFAE13512F2C1074EDE;
IL2CPP_EXTERN_C String_t* _stringLiteral538646291EE923867D325B1511D462919A4D6B7C;
IL2CPP_EXTERN_C String_t* _stringLiteral554E4CDCB0735655875C06FA5EA5C3831F175204;
IL2CPP_EXTERN_C String_t* _stringLiteral6DCCE03DCD793E78E5EE9404459BB38C62A600D3;
IL2CPP_EXTERN_C String_t* _stringLiteral8975DB4F556B11239D00E3E2718ADB5FAC388228;
IL2CPP_EXTERN_C String_t* _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E;
IL2CPP_EXTERN_C String_t* _stringLiteral987DB5D18B9250C111F48AE6A7D6ADF76436C9F0;
IL2CPP_EXTERN_C String_t* _stringLiteralB07775065B668E15C3E3191364BD43010B0EFA4B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
IL2CPP_EXTERN_C String_t* _stringLiteralE777F45E0D3E9BF8656681EDBFC15F4BCE0B82B8;
IL2CPP_EXTERN_C String_t* _stringLiteralF6DA5EDA5A85517C65BD3AFE54A03D8C9746FD41;
IL2CPP_EXTERN_C String_t* _stringLiteralFDE9543AD40CA27AACFC016275639062B3076375;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;


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


// AttackState
struct  AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459  : public RuntimeObject
{
public:
	// PlayerAI AttackState::playerAI
	PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI_0;

public:
	inline static int32_t get_offset_of_playerAI_0() { return static_cast<int32_t>(offsetof(AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459, ___playerAI_0)); }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * get_playerAI_0() const { return ___playerAI_0; }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 ** get_address_of_playerAI_0() { return &___playerAI_0; }
	inline void set_playerAI_0(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * value)
	{
		___playerAI_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerAI_0), (void*)value);
	}
};


// DefendState
struct  DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724  : public RuntimeObject
{
public:
	// PlayerAI DefendState::playerAI
	PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI_0;

public:
	inline static int32_t get_offset_of_playerAI_0() { return static_cast<int32_t>(offsetof(DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724, ___playerAI_0)); }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * get_playerAI_0() const { return ___playerAI_0; }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 ** get_address_of_playerAI_0() { return &___playerAI_0; }
	inline void set_playerAI_0(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * value)
	{
		___playerAI_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerAI_0), (void*)value);
	}
};


// IdleState
struct  IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3  : public RuntimeObject
{
public:
	// PlayerAI IdleState::playerAI
	PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI_0;

public:
	inline static int32_t get_offset_of_playerAI_0() { return static_cast<int32_t>(offsetof(IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3, ___playerAI_0)); }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * get_playerAI_0() const { return ___playerAI_0; }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 ** get_address_of_playerAI_0() { return &___playerAI_0; }
	inline void set_playerAI_0(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * value)
	{
		___playerAI_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerAI_0), (void*)value);
	}
};


// MiningState
struct  MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336  : public RuntimeObject
{
public:
	// PlayerAI MiningState::playerAI
	PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI_0;

public:
	inline static int32_t get_offset_of_playerAI_0() { return static_cast<int32_t>(offsetof(MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336, ___playerAI_0)); }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * get_playerAI_0() const { return ___playerAI_0; }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 ** get_address_of_playerAI_0() { return &___playerAI_0; }
	inline void set_playerAI_0(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * value)
	{
		___playerAI_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerAI_0), (void*)value);
	}
};


// MoveState
struct  MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04  : public RuntimeObject
{
public:
	// PlayerAI MoveState::playerAI
	PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI_0;

public:
	inline static int32_t get_offset_of_playerAI_0() { return static_cast<int32_t>(offsetof(MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04, ___playerAI_0)); }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * get_playerAI_0() const { return ___playerAI_0; }
	inline PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 ** get_address_of_playerAI_0() { return &___playerAI_0; }
	inline void set_playerAI_0(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * value)
	{
		___playerAI_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerAI_0), (void*)value);
	}
};


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


// PlayerAI
struct  PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerState PlayerAI::<idleState>k__BackingField
	RuntimeObject* ___U3CidleStateU3Ek__BackingField_4;
	// PlayerState PlayerAI::<moveState>k__BackingField
	RuntimeObject* ___U3CmoveStateU3Ek__BackingField_5;
	// PlayerState PlayerAI::<miningState>k__BackingField
	RuntimeObject* ___U3CminingStateU3Ek__BackingField_6;
	// PlayerState PlayerAI::<attackState>k__BackingField
	RuntimeObject* ___U3CattackStateU3Ek__BackingField_7;
	// PlayerState PlayerAI::<defendState>k__BackingField
	RuntimeObject* ___U3CdefendStateU3Ek__BackingField_8;
	// PlayerState PlayerAI::<state>k__BackingField
	RuntimeObject* ___U3CstateU3Ek__BackingField_9;
	// UnityEngine.UI.Text PlayerAI::tx1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___tx1_10;
	// UnityEngine.UI.Text PlayerAI::tx2
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___tx2_11;

public:
	inline static int32_t get_offset_of_U3CidleStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942, ___U3CidleStateU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CidleStateU3Ek__BackingField_4() const { return ___U3CidleStateU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CidleStateU3Ek__BackingField_4() { return &___U3CidleStateU3Ek__BackingField_4; }
	inline void set_U3CidleStateU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CidleStateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidleStateU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmoveStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942, ___U3CmoveStateU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CmoveStateU3Ek__BackingField_5() const { return ___U3CmoveStateU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CmoveStateU3Ek__BackingField_5() { return &___U3CmoveStateU3Ek__BackingField_5; }
	inline void set_U3CmoveStateU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CmoveStateU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmoveStateU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CminingStateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942, ___U3CminingStateU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CminingStateU3Ek__BackingField_6() const { return ___U3CminingStateU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CminingStateU3Ek__BackingField_6() { return &___U3CminingStateU3Ek__BackingField_6; }
	inline void set_U3CminingStateU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CminingStateU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CminingStateU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CattackStateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942, ___U3CattackStateU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CattackStateU3Ek__BackingField_7() const { return ___U3CattackStateU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CattackStateU3Ek__BackingField_7() { return &___U3CattackStateU3Ek__BackingField_7; }
	inline void set_U3CattackStateU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CattackStateU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CattackStateU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefendStateU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942, ___U3CdefendStateU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CdefendStateU3Ek__BackingField_8() const { return ___U3CdefendStateU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CdefendStateU3Ek__BackingField_8() { return &___U3CdefendStateU3Ek__BackingField_8; }
	inline void set_U3CdefendStateU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CdefendStateU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefendStateU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942, ___U3CstateU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CstateU3Ek__BackingField_9() const { return ___U3CstateU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CstateU3Ek__BackingField_9() { return &___U3CstateU3Ek__BackingField_9; }
	inline void set_U3CstateU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CstateU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstateU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_tx1_10() { return static_cast<int32_t>(offsetof(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942, ___tx1_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_tx1_10() const { return ___tx1_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_tx1_10() { return &___tx1_10; }
	inline void set_tx1_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___tx1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx1_10), (void*)value);
	}

	inline static int32_t get_offset_of_tx2_11() { return static_cast<int32_t>(offsetof(PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942, ___tx2_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_tx2_11() const { return ___tx2_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_tx2_11() { return &___tx2_11; }
	inline void set_tx2_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___tx2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx2_11), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void IdleState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleState__ctor_m6EF7A0E6A16E369002B490827B725BDCF587435A (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method);
// System.Void PlayerAI::set_idleState(PlayerState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_idleState_m47B58AEFA2C91B9882B3C0E2DD9F549571C52184_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void MoveState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveState__ctor_m103D0BF6499A1C37584F160B5155D6CD1537E9EF (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method);
// System.Void PlayerAI::set_moveState(PlayerState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_moveState_mE6C95B6C3AA24C4FE80A495A6CF04DC0C12A4B9B_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void MiningState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiningState__ctor_m64EBAC0ED939349F0B7717FBE0726C875323349C (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method);
// System.Void PlayerAI::set_miningState(PlayerState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_miningState_m8AC3AF91A5F5679EB52661768D1250B808B835ED_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void AttackState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackState__ctor_m67D45151CA4858EFF87FDB1D833FA65BA9E406CC (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method);
// System.Void PlayerAI::set_attackState(PlayerState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_attackState_m38E864268A0E3D54B30715D4A354C1F9DF69D43C_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void DefendState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefendState__ctor_m950680EDAC00A0657D0F9EEF3D34F421EE0D0F73 (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method);
// System.Void PlayerAI::set_defendState(PlayerState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_defendState_m0B9CA1419AF08CE64C874E36FCC27B89997CE94F_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// PlayerState PlayerAI::get_idleState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method);
// System.Void PlayerAI::set_state(PlayerState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// PlayerState PlayerAI::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// PlayerState PlayerAI::get_attackState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_attackState_mBAFAB6605C2A9820461879DABA78167BEC5144F7_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method);
// PlayerState PlayerAI::get_defendState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_defendState_m77EF7B7AC1C440F1EAAB4D12AC86313749AB7591_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method);
// PlayerState PlayerAI::get_miningState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_miningState_m1C6759286E11BD256D5E085517D0223255F32A50_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method);
// PlayerState PlayerAI::get_moveState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_moveState_mEED061E8772E59F77DA0620CE856FF052161671D_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
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
// System.Void AttackState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackState__ctor_m67D45151CA4858EFF87FDB1D833FA65BA9E406CC (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method)
{
	{
		// public AttackState(PlayerAI playerAI)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.playerAI = playerAI;
		PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * L_0 = ___playerAI0;
		__this->set_playerAI_0(L_0);
		// }
		return;
	}
}
// System.String AttackState::Attacking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttackState_Attacking_mD89EC17191992E08010A542CB4070B3EA788EE8C (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral987DB5D18B9250C111F48AE6A7D6ADF76436C9F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "You are now attacking your specified target!";
		return _stringLiteral987DB5D18B9250C111F48AE6A7D6ADF76436C9F0;
	}
}
// System.String AttackState::Defend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttackState_Defend_mFB6118BAD3CE9AA74E1ECC645DB9EB2880F14A00 (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String AttackState::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttackState_Idle_mE6311AB8AA2CE3306C69220A5778571F58F4B876 (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String AttackState::Mining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttackState_Mining_m714747E60F4D74917AF5224A810BC6375274C612 (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String AttackState::Moving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttackState_Moving_m6A97C290C0CA5F6816E986B0766ADB34E3623842 (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String AttackState::ReturnToIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttackState_ReturnToIdle_m8F4D7D2A00035D7A31CC22D4CD32AF734C14B924 (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String AttackState::String()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttackState_String_m56246FB78E380420D0C9B5F4237CA5A00B30C2F7 (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDE9543AD40CA27AACFC016275639062B3076375);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Attack State";
		return _stringLiteralFDE9543AD40CA27AACFC016275639062B3076375;
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
// System.Void DefendState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefendState__ctor_m950680EDAC00A0657D0F9EEF3D34F421EE0D0F73 (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method)
{
	{
		// public DefendState(PlayerAI playerAI)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.playerAI = playerAI;
		PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * L_0 = ___playerAI0;
		__this->set_playerAI_0(L_0);
		// }
		return;
	}
}
// System.String DefendState::Attacking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefendState_Attacking_mF8F0809FB3F70CE23AF9B93621CE9B1330372ED4 (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String DefendState::Defend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefendState_Defend_m0904FCCC37FBA514B5893ECF6B17D1A45DBB6CA6 (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE777F45E0D3E9BF8656681EDBFC15F4BCE0B82B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "You defend!";
		return _stringLiteralE777F45E0D3E9BF8656681EDBFC15F4BCE0B82B8;
	}
}
// System.String DefendState::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefendState_Idle_m216417A9F4C93660360B2215B126C69222EE534B (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String DefendState::Mining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefendState_Mining_m0A7C404C810FA49406E40F31E1E17534E42CCF00 (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String DefendState::Moving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefendState_Moving_m602EAAAA6E9AE6F79BF364A1D3095803B7B5A5ED (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String DefendState::ReturnToIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefendState_ReturnToIdle_m6075897973A723DF22FFA1678FE6DC33E29C96D2 (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String DefendState::String()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefendState_String_mE57098D41A251E9EDF1407C63EBFAED83BA79489 (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6DA5EDA5A85517C65BD3AFE54A03D8C9746FD41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Defend State";
		return _stringLiteralF6DA5EDA5A85517C65BD3AFE54A03D8C9746FD41;
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
// System.Void IdleState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleState__ctor_m6EF7A0E6A16E369002B490827B725BDCF587435A (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method)
{
	{
		// public IdleState(PlayerAI playerAI)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.playerAI = playerAI;
		PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * L_0 = ___playerAI0;
		__this->set_playerAI_0(L_0);
		// }
		return;
	}
}
// System.String IdleState::Attacking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdleState_Attacking_m619E46F4B9D99260550024E5D8E9B8602FD69D49 (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String IdleState::Defend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdleState_Defend_mD3BFC36C2BC10687D315872DD47DA06E841FE3E1 (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String IdleState::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdleState_Idle_mC533F99E0677FEA214B2E0688CAAE7DBD7C54A73 (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral538646291EE923867D325B1511D462919A4D6B7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "You are now Idle!";
		return _stringLiteral538646291EE923867D325B1511D462919A4D6B7C;
	}
}
// System.String IdleState::Mining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdleState_Mining_m5B45D7FFCCD6C23A334CCA141E1466649F8116B5 (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String IdleState::Moving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdleState_Moving_mB412A78E8DB43CE6E6D8ED3D7421A86F6E041C9E (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String IdleState::ReturnToIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdleState_ReturnToIdle_mEED5AB64A686325BA8CC45DA8B9315D2ED373BA0 (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAF0F0786F3AC94CD740BFAE13512F2C1074EDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "The player is now stopping what they are doing!";
		return _stringLiteral3BAF0F0786F3AC94CD740BFAE13512F2C1074EDE;
	}
}
// System.String IdleState::String()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdleState_String_mF4D3E3AA7BE5B59976D9AE453D994A40CBC85635 (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral554E4CDCB0735655875C06FA5EA5C3831F175204);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Idle State";
		return _stringLiteral554E4CDCB0735655875C06FA5EA5C3831F175204;
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
// System.Void MiningState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiningState__ctor_m64EBAC0ED939349F0B7717FBE0726C875323349C (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method)
{
	{
		// public MiningState(PlayerAI playerAI)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.playerAI = playerAI;
		PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * L_0 = ___playerAI0;
		__this->set_playerAI_0(L_0);
		// }
		return;
	}
}
// System.String MiningState::Attacking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiningState_Attacking_m87731AB3990D2058574B25D113508A1186BDECFA (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MiningState::Defend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiningState_Defend_mF9294CBD97BBCB2E79B735DE12B4D9F26DE90281 (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MiningState::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiningState_Idle_m2DC8C1166EA22E721CE22E1368C4910D74E58853 (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MiningState::Mining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiningState_Mining_mE1577DF39CC36A84DA359B174F17A9ABC72D798B (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07775065B668E15C3E3191364BD43010B0EFA4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "You are now mining at your location!";
		return _stringLiteralB07775065B668E15C3E3191364BD43010B0EFA4B;
	}
}
// System.String MiningState::Moving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiningState_Moving_m913CE58CCF03C71DEBB138E4CFF5C619397B1D93 (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MiningState::ReturnToIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiningState_ReturnToIdle_m9EC7C00EAD0974E51B6CFFB3F147E25DEAF1CC4B (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MiningState::String()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiningState_String_mA7B9714A44DE3CD0C681209E0BAF5BE727B89DAB (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E35F36D56C491DE72F74E4CEAB3DA9BEABADACD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Mining State";
		return _stringLiteral0E35F36D56C491DE72F74E4CEAB3DA9BEABADACD;
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
// System.Void MoveState::.ctor(PlayerAI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveState__ctor_m103D0BF6499A1C37584F160B5155D6CD1537E9EF (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * ___playerAI0, const RuntimeMethod* method)
{
	{
		// public MoveState(PlayerAI playerAI)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.playerAI = playerAI;
		PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * L_0 = ___playerAI0;
		__this->set_playerAI_0(L_0);
		// }
		return;
	}
}
// System.String MoveState::Attacking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MoveState_Attacking_m6E76DA9554EE299A887128B97B5BF9E366EC7162 (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MoveState::Defend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MoveState_Defend_m6E666428E36315242FDAF1CC3188F6772303D4B5 (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MoveState::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MoveState_Idle_mA0BC1CF6C8ED41661A1C5AD655732C3BD06FE7F7 (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MoveState::Mining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MoveState_Mining_m6C28ABD90B90AF02F9AB97714FEF83A5BFDCC4DF (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MoveState::Moving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MoveState_Moving_m50E8DC657F8DD5C551B6D5E611A594EC9BB5704F (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8975DB4F556B11239D00E3E2718ADB5FAC388228);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "You are now moving to the specified location!";
		return _stringLiteral8975DB4F556B11239D00E3E2718ADB5FAC388228;
	}
}
// System.String MoveState::ReturnToIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MoveState_ReturnToIdle_m54BBDB77D316C30630EB351869569A5566C2C35E (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Can't do that in this state!";
		return _stringLiteralDA1F63086BBBBC093975DDB70BB778EFEE145D0F;
	}
}
// System.String MoveState::String()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MoveState_String_mB7E94F6086CFC1B145062F521B6D66915A8F3386 (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral066B1BB44784429FFF7FC814763018F6606B6D32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Move State";
		return _stringLiteral066B1BB44784429FFF7FC814763018F6606B6D32;
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
// PlayerState PlayerAI::get_idleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31 (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState idleState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CidleStateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void PlayerAI::set_idleState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI_set_idleState_m47B58AEFA2C91B9882B3C0E2DD9F549571C52184 (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState idleState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CidleStateU3Ek__BackingField_4(L_0);
		return;
	}
}
// PlayerState PlayerAI::get_moveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_moveState_mEED061E8772E59F77DA0620CE856FF052161671D (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState moveState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CmoveStateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void PlayerAI::set_moveState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI_set_moveState_mE6C95B6C3AA24C4FE80A495A6CF04DC0C12A4B9B (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState moveState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CmoveStateU3Ek__BackingField_5(L_0);
		return;
	}
}
// PlayerState PlayerAI::get_miningState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_miningState_m1C6759286E11BD256D5E085517D0223255F32A50 (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState miningState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CminingStateU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void PlayerAI::set_miningState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI_set_miningState_m8AC3AF91A5F5679EB52661768D1250B808B835ED (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState miningState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CminingStateU3Ek__BackingField_6(L_0);
		return;
	}
}
// PlayerState PlayerAI::get_attackState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_attackState_mBAFAB6605C2A9820461879DABA78167BEC5144F7 (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState attackState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CattackStateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void PlayerAI::set_attackState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI_set_attackState_m38E864268A0E3D54B30715D4A354C1F9DF69D43C (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState attackState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CattackStateU3Ek__BackingField_7(L_0);
		return;
	}
}
// PlayerState PlayerAI::get_defendState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_defendState_m77EF7B7AC1C440F1EAAB4D12AC86313749AB7591 (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState defendState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CdefendStateU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void PlayerAI::set_defendState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI_set_defendState_m0B9CA1419AF08CE64C874E36FCC27B89997CE94F (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState defendState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CdefendStateU3Ek__BackingField_8(L_0);
		return;
	}
}
// PlayerState PlayerAI::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState state { get; set; }
		RuntimeObject* L_0 = __this->get_U3CstateU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void PlayerAI::set_state(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState state { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void PlayerAI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI_Start_mF53593DB7F6027AC087DEBE91DBCE0870A288924 (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAE1D40C133D8768068175EA8B6A1CEC1A4BE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// idleState = new IdleState(this);
		IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 * L_0 = (IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3 *)il2cpp_codegen_object_new(IdleState_tF79DB60F9977216EAB67D069D4CD4929BD3F8AA3_il2cpp_TypeInfo_var);
		IdleState__ctor_m6EF7A0E6A16E369002B490827B725BDCF587435A(L_0, __this, /*hidden argument*/NULL);
		PlayerAI_set_idleState_m47B58AEFA2C91B9882B3C0E2DD9F549571C52184_inline(__this, L_0, /*hidden argument*/NULL);
		// moveState = new MoveState(this);
		MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 * L_1 = (MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04 *)il2cpp_codegen_object_new(MoveState_tA2730DC125D5173A0A5B21945B13F331E69F1A04_il2cpp_TypeInfo_var);
		MoveState__ctor_m103D0BF6499A1C37584F160B5155D6CD1537E9EF(L_1, __this, /*hidden argument*/NULL);
		PlayerAI_set_moveState_mE6C95B6C3AA24C4FE80A495A6CF04DC0C12A4B9B_inline(__this, L_1, /*hidden argument*/NULL);
		// miningState = new MiningState(this);
		MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 * L_2 = (MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336 *)il2cpp_codegen_object_new(MiningState_t417E2D4D2D908438AC37C31F72D05FE8F9FC7336_il2cpp_TypeInfo_var);
		MiningState__ctor_m64EBAC0ED939349F0B7717FBE0726C875323349C(L_2, __this, /*hidden argument*/NULL);
		PlayerAI_set_miningState_m8AC3AF91A5F5679EB52661768D1250B808B835ED_inline(__this, L_2, /*hidden argument*/NULL);
		// attackState = new AttackState(this);
		AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 * L_3 = (AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459 *)il2cpp_codegen_object_new(AttackState_t9F7C2B520791A41A0F3A77E1C75F960B30168459_il2cpp_TypeInfo_var);
		AttackState__ctor_m67D45151CA4858EFF87FDB1D833FA65BA9E406CC(L_3, __this, /*hidden argument*/NULL);
		PlayerAI_set_attackState_m38E864268A0E3D54B30715D4A354C1F9DF69D43C_inline(__this, L_3, /*hidden argument*/NULL);
		// defendState = new DefendState(this);
		DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 * L_4 = (DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724 *)il2cpp_codegen_object_new(DefendState_tD91764BE58BC5DAF12176A73B2A1D1C90D6DB724_il2cpp_TypeInfo_var);
		DefendState__ctor_m950680EDAC00A0657D0F9EEF3D34F421EE0D0F73(L_4, __this, /*hidden argument*/NULL);
		PlayerAI_set_defendState_m0B9CA1419AF08CE64C874E36FCC27B89997CE94F_inline(__this, L_4, /*hidden argument*/NULL);
		// state = idleState;
		RuntimeObject* L_5;
		L_5 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD_inline(__this, L_5, /*hidden argument*/NULL);
		// tx1 = GameObject.FindGameObjectWithTag("State").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7;
		L_7 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_6, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_tx1_10(L_7);
		// tx2 = GameObject.FindGameObjectWithTag("State2").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral3BAE1D40C133D8768068175EA8B6A1CEC1A4BE3E, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_8, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_tx2_11(L_9);
		// }
		return;
	}
}
// System.Void PlayerAI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI_Update_mCD45999AD3F291B46AC257032010FB439912996D (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DCCE03DCD793E78E5EE9404459BB38C62A600D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tx1.text = state.String();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_tx1_10();
		RuntimeObject* L_1;
		L_1 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String PlayerState::String() */, PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5_il2cpp_TypeInfo_var, L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// if (Input.GetKeyDown(KeyCode.Alpha0))
		bool L_3;
		L_3 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)48), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// this.state = idleState;
		RuntimeObject* L_4;
		L_4 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD_inline(__this, L_4, /*hidden argument*/NULL);
		// tx2.text = state.ReturnToIdle();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_tx2_11();
		RuntimeObject* L_6;
		L_6 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String PlayerState::ReturnToIdle() */, PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5_il2cpp_TypeInfo_var, L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
	}

IL_0041:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1) && this.state == idleState)
		bool L_8;
		L_8 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_10;
		L_10 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)L_10))))
		{
			goto IL_007c;
		}
	}
	{
		// this.state = attackState;
		RuntimeObject* L_11;
		L_11 = PlayerAI_get_attackState_mBAFAB6605C2A9820461879DABA78167BEC5144F7_inline(__this, /*hidden argument*/NULL);
		PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD_inline(__this, L_11, /*hidden argument*/NULL);
		// tx2.text = state.Attacking();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_tx2_11();
		RuntimeObject* L_13;
		L_13 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String PlayerState::Attacking() */, PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5_il2cpp_TypeInfo_var, L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
		// }
		goto IL_00a3;
	}

IL_007c:
	{
		// else if(Input.GetKeyDown(KeyCode.Alpha1) && this.state != idleState)
		bool L_15;
		L_15 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_16;
		L_16 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_17;
		L_17 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(RuntimeObject*)L_16) == ((RuntimeObject*)(RuntimeObject*)L_17)))
		{
			goto IL_00a3;
		}
	}
	{
		// tx2.text = "You must return to Idle.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_tx2_11();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteral6DCCE03DCD793E78E5EE9404459BB38C62A600D3);
	}

IL_00a3:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2) && this.state == idleState)
		bool L_19;
		L_19 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_21;
		L_21 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_20) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00de;
		}
	}
	{
		// this.state = defendState;
		RuntimeObject* L_22;
		L_22 = PlayerAI_get_defendState_m77EF7B7AC1C440F1EAAB4D12AC86313749AB7591_inline(__this, /*hidden argument*/NULL);
		PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD_inline(__this, L_22, /*hidden argument*/NULL);
		// tx2.text = state.Defend();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_tx2_11();
		RuntimeObject* L_24;
		L_24 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String PlayerState::Defend() */, PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5_il2cpp_TypeInfo_var, L_24);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_25);
		// }
		goto IL_0105;
	}

IL_00de:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha2) && this.state != idleState)
		bool L_26;
		L_26 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0105;
		}
	}
	{
		RuntimeObject* L_27;
		L_27 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_28;
		L_28 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(RuntimeObject*)L_27) == ((RuntimeObject*)(RuntimeObject*)L_28)))
		{
			goto IL_0105;
		}
	}
	{
		// tx2.text = "You must return to Idle.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = __this->get_tx2_11();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteral6DCCE03DCD793E78E5EE9404459BB38C62A600D3);
	}

IL_0105:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3) && this.state == idleState)
		bool L_30;
		L_30 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)51), /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0140;
		}
	}
	{
		RuntimeObject* L_31;
		L_31 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_32;
		L_32 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_31) == ((RuntimeObject*)(RuntimeObject*)L_32))))
		{
			goto IL_0140;
		}
	}
	{
		// this.state = miningState;
		RuntimeObject* L_33;
		L_33 = PlayerAI_get_miningState_m1C6759286E11BD256D5E085517D0223255F32A50_inline(__this, /*hidden argument*/NULL);
		PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD_inline(__this, L_33, /*hidden argument*/NULL);
		// tx2.text = state.Mining();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_34 = __this->get_tx2_11();
		RuntimeObject* L_35;
		L_35 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String PlayerState::Mining() */, PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5_il2cpp_TypeInfo_var, L_35);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_36);
		// }
		goto IL_0167;
	}

IL_0140:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha3) && this.state != idleState)
		bool L_37;
		L_37 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)51), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeObject* L_38;
		L_38 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_39;
		L_39 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(RuntimeObject*)L_38) == ((RuntimeObject*)(RuntimeObject*)L_39)))
		{
			goto IL_0167;
		}
	}
	{
		// tx2.text = "You must return to Idle.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_40 = __this->get_tx2_11();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, _stringLiteral6DCCE03DCD793E78E5EE9404459BB38C62A600D3);
	}

IL_0167:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4) && this.state == idleState)
		bool L_41;
		L_41 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)52), /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeObject* L_42;
		L_42 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_43;
		L_43 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_42) == ((RuntimeObject*)(RuntimeObject*)L_43))))
		{
			goto IL_01a1;
		}
	}
	{
		// this.state = moveState;
		RuntimeObject* L_44;
		L_44 = PlayerAI_get_moveState_mEED061E8772E59F77DA0620CE856FF052161671D_inline(__this, /*hidden argument*/NULL);
		PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD_inline(__this, L_44, /*hidden argument*/NULL);
		// tx2.text = state.Moving();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = __this->get_tx2_11();
		RuntimeObject* L_46;
		L_46 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		String_t* L_47;
		L_47 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String PlayerState::Moving() */, PlayerState_t1C0DA1BD7CF2A0A0A4FCE192CF67EB01ABF322E5_il2cpp_TypeInfo_var, L_46);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_47);
		// }
		return;
	}

IL_01a1:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha4) && this.state != idleState)
		bool L_48;
		L_48 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)52), /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01c8;
		}
	}
	{
		RuntimeObject* L_49;
		L_49 = PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_50;
		L_50 = PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(RuntimeObject*)L_49) == ((RuntimeObject*)(RuntimeObject*)L_50)))
		{
			goto IL_01c8;
		}
	}
	{
		// tx2.text = "You must return to Idle.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_51 = __this->get_tx2_11();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, _stringLiteral6DCCE03DCD793E78E5EE9404459BB38C62A600D3);
	}

IL_01c8:
	{
		// }
		return;
	}
}
// System.Void PlayerAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAI__ctor_m1D5DD62E550E99ACECB98F4B19B049595199388E (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_idleState_m47B58AEFA2C91B9882B3C0E2DD9F549571C52184_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState idleState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CidleStateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_moveState_mE6C95B6C3AA24C4FE80A495A6CF04DC0C12A4B9B_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState moveState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CmoveStateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_miningState_m8AC3AF91A5F5679EB52661768D1250B808B835ED_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState miningState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CminingStateU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_attackState_m38E864268A0E3D54B30715D4A354C1F9DF69D43C_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState attackState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CattackStateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_defendState_m0B9CA1419AF08CE64C874E36FCC27B89997CE94F_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState defendState { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CdefendStateU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_idleState_m1C76AA33748B4B1DF9D0B19C51F4E118C1D2EA31_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState idleState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CidleStateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerAI_set_state_m5A86BC3082E77B4988394C90F2E02CFFC65D85CD_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerState state { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_state_m4CB32BB499E9F1C0D533955A320157A69C47144F_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState state { get; set; }
		RuntimeObject* L_0 = __this->get_U3CstateU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_attackState_mBAFAB6605C2A9820461879DABA78167BEC5144F7_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState attackState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CattackStateU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_defendState_m77EF7B7AC1C440F1EAAB4D12AC86313749AB7591_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState defendState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CdefendStateU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_miningState_m1C6759286E11BD256D5E085517D0223255F32A50_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState miningState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CminingStateU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerAI_get_moveState_mEED061E8772E59F77DA0620CE856FF052161671D_inline (PlayerAI_t327B17DEB6127093F97317CDCD2367420DB8E942 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerState moveState { get; set; }
		RuntimeObject* L_0 = __this->get_U3CmoveStateU3Ek__BackingField_5();
		return L_0;
	}
}
