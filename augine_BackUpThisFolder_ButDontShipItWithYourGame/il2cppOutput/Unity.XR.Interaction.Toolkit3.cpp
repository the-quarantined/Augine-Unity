#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>
struct Action_1_t4DA42CAE39264F940B80CA65156FFF933178DCA5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>
struct Action_1_t93A5A86147DE186489A2255DA391D65B184D2379;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>
struct Action_1_t0F72AC51DEA3BD3CF2A41228132CB4F6FF029B8F;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct Action_1_t687BD234065BC5D27C721916842A7A310049DE8B;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct Action_1_t22D323AFD7E9461DBD701F2E65C80FFF0339C86C;
// System.Action`2<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture,UnityEngine.Touch>
struct Action_2_t110B2F7AE43826C4A960E9497F11EFA31CA8904B;
// System.Action`2<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture,UnityEngine.InputSystem.EnhancedTouch.Touch>
struct Action_2_t443BE5B4BE6A1E7A96984D05C0D28960DDBE40D7;
// System.Action`2<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture,UnityEngine.Touch>
struct Action_2_t50ED30D8736A592C8559987EA3DB27FB2D66FCB5;
// System.Action`2<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture,UnityEngine.InputSystem.EnhancedTouch.Touch>
struct Action_2_t053FF44694D59C5297F3D0020CED8047B58E9543;
// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture,UnityEngine.Touch,UnityEngine.Touch>
struct Action_3_t0AF7A3EA90F9BA1D2F9BCE82AA136C8690C7C916;
// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch>
struct Action_3_t7DE677243945C9000DA7E7EB25EAC04375B6DCE8;
// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture,UnityEngine.Touch,UnityEngine.Touch>
struct Action_3_tEA94C20A1A6AD394AE2C56659AF66C3E9B60D6FC;
// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch>
struct Action_3_tAAE029FF75E3F8E712004004BA643CD2364D2708;
// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture,UnityEngine.Touch,UnityEngine.Touch>
struct Action_3_t320AF966FD0ECC7378843A17D00299DE7D3907CC;
// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch>
struct Action_3_t4FE8505C1C524888807388C2B86C3805AD858AB7;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`2<UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>
struct Func_2_t64DE160AC97602D65E4DDA5F8AF54E7125A8DBBE;
// System.Func`2<UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>
struct Func_2_t988CF706B0013E0B958DD2DEFE00C943362F09FB;
// System.Func`2<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>
struct Func_2_tE893D7128AE711DB8E48B248A89C9013A7458F70;
// System.Func`2<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>
struct Func_2_t451D845D5B29290A7F89C9FD925A70EE4CF33686;
// System.Func`3<UnityEngine.Touch,UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>
struct Func_3_tE0DFF7FB733D0E13F5888488E54A4EC431492F7C;
// System.Func`3<UnityEngine.Touch,UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct Func_3_tEC0B0052421FA5768116FF120BE9D9AE9BE3F7C0;
// System.Func`3<UnityEngine.Touch,UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct Func_3_t5E75162B7038199085F4BF1E0431B90949C5F513;
// System.Func`3<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>
struct Func_3_t33845766D28939CCB1F44F5C7B22E724D83D8CB5;
// System.Func`3<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct Func_3_tC980E918DC790F4378EA614B0836B27B3599975A;
// System.Func`3<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct Func_3_t7C57C987410695346690260FF3DE6D5457B02DD0;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>
struct GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<System.Object>
struct GestureRecognizer_1_t36E2F5A12154F0109297A031C6EC1C0F28EB8267;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>
struct GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>
struct GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B;
// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>
struct Gesture_1_tAF23C34D9280812ABC5340A624951CBFA38A39FF;
// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<System.Object>
struct Gesture_1_t766A790B49A7840C0133EB04B5E41FFF564C75C8;
// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>
struct Gesture_1_tE97BF9D3B6F1775F508D9D64131DFF031A71DECE;
// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>
struct Gesture_1_t6E2E75564944186E5EB29961A0267799016F75ED;
// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct Gesture_1_tF215270EAE1787692FAB5DFA79367E7F4B4DD4E2;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct IEnumerable_1_tC49596D07E092581F8A438FEB0B1516C8E4D7B40;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>
struct List_1_tE7FEDF03800E0B45BB0CB67BB700996DB5067AD7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>
struct List_1_tBCB80546822863235FD21633DFD9E7FD0A0EB5DD;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>
struct List_1_t90A11E78D5485A9659F922EF3D920F93C3D54A30;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct List_1_t298D68E50CC725FCE39C6CC5C5441A9D63CBE3D9;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct List_1_t16BD68F0CA8C3E4040B9440EE6FE1130136B35A1;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>
struct List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct RegistrationList_1_t4CFD9E29B57A81B6DFE2C016746F640843506138;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct RegistrationList_1_t3C57B4669121D753FC5E6447930968A297EE0630;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs>
struct UnityEvent_1_t7AA2517BCDE5327139663121EE751A51782A6065;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`2<UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable,UnityEngine.GameObject>
struct UnityEvent_2_t18D5BDFBBFB9F2709CD61DB6E53E2C47BAC42674;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable[]
struct IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable
struct ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D;
// UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor
struct ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745;
// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacedEvent
struct ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1;
// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEvent
struct ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529;
// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs
struct ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176;
// UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable
struct ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable
struct ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F;
// UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable
struct ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC;
// UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable
struct ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable
struct ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs
struct BaseRegistrationEventArgs_t9822CF35B956BAF32B523A14F3AFEF6A82987F21;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.XR.Interaction.Toolkit.AR.DragGesture
struct DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD;
// UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer
struct DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs
struct InteractableRegisteredEventArgs_t9E35262DC0C14D7FE2265D47AB2D3FC9CAAE023D;
// UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs
struct InteractableUnregisteredEventArgs_tEA628E3D57FA85080BB7D4A958AA2A0F6F82BC21;
// UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs
struct InteractorRegisteredEventArgs_t893A4314ACD8A860BFD76CDB09AF89CCC1E84775;
// UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs
struct InteractorUnregisteredEventArgs_t77999252E8CB3198B8F1D16FB9F4F6E3412ECB93;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture
struct PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD;
// UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer
struct PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.String
struct String_t;
// UnityEngine.XR.Interaction.Toolkit.AR.TapGesture
struct TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E;
// UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer
struct TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture
struct TwistGesture_t8A413739CB827FAF4260E739A66DBF40CDADFDE7;
// UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer
struct TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46;
// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer
struct TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureTouchesUtility_t21BF3E49166B77B8A88AF1653443BF68D87AE495_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06E3140DEA4B30E8FC8E750C1CE973EB40F7CA99;
IL2CPP_EXTERN_C String_t* _stringLiteral672B1955AE66B2D94961FD791AC80B2CB0CA8E48;
IL2CPP_EXTERN_C String_t* _stringLiteral79141A0BEBFDCEFBE6DB72B33554C4A10BB0AF9A;
IL2CPP_EXTERN_C String_t* _stringLiteralE0E32B1A1602E0F44822A4A8B284A2D78EE0B1CE;
IL2CPP_EXTERN_C String_t* _stringLiteralE231D324FA672581D506DFF24DC908488F4B1573;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2E938E4B4CED833B8000B21F3B75911AE8D896;
IL2CPP_EXTERN_C const RuntimeMethod* ARGestureInteractor_OnInteractableRegistered_mF7D0E8D9871CC17E3380340B70BE5B02E1D3DF23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARGestureInteractor_OnInteractableUnregistered_m207B86251E5E651D83B41622B219B325D003026F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBB52FE2839B6F0CDC8045D1593F54538A86710C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFA0CD3249649865B04C91FE04E85091C0105935E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5A723821D45562AEA6CF9D3057317CC1601A688C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_Update_m108480E4C734F872C77B4872D507D8D2BEC627A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_Update_m143998C0DE1A3C78EED82E48B892A02B615C952C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_Update_m2056D1A69113F7EE35F2FAF89915A4617DFBEC6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_Update_m8A768F07AC78676E52EB1792F321580403315A21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_Update_mE9265274FD7AA8646338B2CD7B5A58A74D462154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_arSessionOrigin_m1055A2AE03E62AC600D11EDD5B00C3D0940A3B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_arSessionOrigin_m1F60BAB968C6DD30D003F9BF6A4E12391F1F11C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_arSessionOrigin_m4CC3C8569C54D32F5C786C2A0B227223375936A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_arSessionOrigin_mB41DC518ED3DCEE707F37461385D649AFA303669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_arSessionOrigin_mBD332E3A86C46D9E8F1AAB6908231CCF74353A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_xrOrigin_m1FE5EA5C4C156B13448C4825CEB5CE63EC05D743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_xrOrigin_m614EB1E623300AFDC510AC1EE21F8F59A6632FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_xrOrigin_mD18689063AC5D443F8BD220F8A292FC4C9BE5484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_xrOrigin_mD86AC28E894C376833FED7876EB3DB2D74B102D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureRecognizer_1_set_xrOrigin_mFF43E932B0BC18F9C51CBC834DD09C2EC8D11EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m6421D600F3EE508ABA9D6A2BCEC2AFC3E447C78F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_mA4228721AEFBC71304ED14F425074B0CF0F1ED22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mCAD6094A24DD06BA4DC5F1CF1167B9C288763749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mFFF81956D91ED36D862264CB76FA46E6A4CDE5DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gesture_1_Cancel_m4D73AD32139C582A8AAD006FF0028C94DA2511A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gesture_1_get_isCanceled_m8959E8FE03351E5641D8809791FA56BE6D9FCFF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gesture_1_get_targetObject_m74E3DD10D62DB8290726983DF17E37C788FA308B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gesture_1_get_targetObject_m80A87A63F0EFC40197D7D8BE34A89A3B77526C41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gesture_1_get_targetObject_mA70175C7B2483508A5C33A52CA96255F089324A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m944DE494A680FC42C4967ECB8ABFEC095F1B549B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE88C6014E5D496A14CFE8D413102CD60E6961E48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m255A559C99BD8172BA90932E05BCE4659425E4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_m7A34081C5B7380D280DC14900880531006888A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_mAB31BBA1730F8CD94057988C74010254ADABC140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m3EF7628399D131F068AD4ABD837EFBBF1295D54B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m2D53D243A295AB2EB7020C699F8FEA08430141AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mD15BEE2F2EF8CE3D146D9DF66CD0B409BF8355B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m626A15219B6D0A85692BA596E19C64B3E97526D5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>
struct GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::onGestureStarted
	Action_1_t4DA42CAE39264F940B80CA65156FFF933178DCA5* ___onGestureStarted_0;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<xrOrigin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CxrOriginU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<gestures>k__BackingField
	List_1_tE7FEDF03800E0B45BB0CB67BB700996DB5067AD7* ___U3CgesturesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_PostponedGesturesToRemove
	List_1_tE7FEDF03800E0B45BB0CB67BB700996DB5067AD7* ___m_PostponedGesturesToRemove_3;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_DeadGesturePool
	List_1_tE7FEDF03800E0B45BB0CB67BB700996DB5067AD7* ___m_DeadGesturePool_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_IsUpdatingGestures
	bool ___m_IsUpdatingGestures_5;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<arSessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CarSessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_Gestures
	List_1_tE7FEDF03800E0B45BB0CB67BB700996DB5067AD7* ___m_Gestures_7;
};

// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<System.Object>
struct GestureRecognizer_1_t36E2F5A12154F0109297A031C6EC1C0F28EB8267  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::onGestureStarted
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___onGestureStarted_0;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<xrOrigin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CxrOriginU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<gestures>k__BackingField
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___U3CgesturesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_PostponedGesturesToRemove
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_PostponedGesturesToRemove_3;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_DeadGesturePool
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_DeadGesturePool_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_IsUpdatingGestures
	bool ___m_IsUpdatingGestures_5;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<arSessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CarSessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_Gestures
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_Gestures_7;
};

// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>
struct GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::onGestureStarted
	Action_1_t93A5A86147DE186489A2255DA391D65B184D2379* ___onGestureStarted_0;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<xrOrigin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CxrOriginU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<gestures>k__BackingField
	List_1_tBCB80546822863235FD21633DFD9E7FD0A0EB5DD* ___U3CgesturesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_PostponedGesturesToRemove
	List_1_tBCB80546822863235FD21633DFD9E7FD0A0EB5DD* ___m_PostponedGesturesToRemove_3;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_DeadGesturePool
	List_1_tBCB80546822863235FD21633DFD9E7FD0A0EB5DD* ___m_DeadGesturePool_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_IsUpdatingGestures
	bool ___m_IsUpdatingGestures_5;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<arSessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CarSessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_Gestures
	List_1_tBCB80546822863235FD21633DFD9E7FD0A0EB5DD* ___m_Gestures_7;
};

// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>
struct GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::onGestureStarted
	Action_1_t0F72AC51DEA3BD3CF2A41228132CB4F6FF029B8F* ___onGestureStarted_0;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<xrOrigin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CxrOriginU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<gestures>k__BackingField
	List_1_t90A11E78D5485A9659F922EF3D920F93C3D54A30* ___U3CgesturesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_PostponedGesturesToRemove
	List_1_t90A11E78D5485A9659F922EF3D920F93C3D54A30* ___m_PostponedGesturesToRemove_3;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_DeadGesturePool
	List_1_t90A11E78D5485A9659F922EF3D920F93C3D54A30* ___m_DeadGesturePool_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_IsUpdatingGestures
	bool ___m_IsUpdatingGestures_5;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<arSessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CarSessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_Gestures
	List_1_t90A11E78D5485A9659F922EF3D920F93C3D54A30* ___m_Gestures_7;
};

// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::onGestureStarted
	Action_1_t687BD234065BC5D27C721916842A7A310049DE8B* ___onGestureStarted_0;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<xrOrigin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CxrOriginU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<gestures>k__BackingField
	List_1_t298D68E50CC725FCE39C6CC5C5441A9D63CBE3D9* ___U3CgesturesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_PostponedGesturesToRemove
	List_1_t298D68E50CC725FCE39C6CC5C5441A9D63CBE3D9* ___m_PostponedGesturesToRemove_3;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_DeadGesturePool
	List_1_t298D68E50CC725FCE39C6CC5C5441A9D63CBE3D9* ___m_DeadGesturePool_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_IsUpdatingGestures
	bool ___m_IsUpdatingGestures_5;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<arSessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CarSessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_Gestures
	List_1_t298D68E50CC725FCE39C6CC5C5441A9D63CBE3D9* ___m_Gestures_7;
};

// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::onGestureStarted
	Action_1_t22D323AFD7E9461DBD701F2E65C80FFF0339C86C* ___onGestureStarted_0;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<xrOrigin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CxrOriginU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<gestures>k__BackingField
	List_1_t16BD68F0CA8C3E4040B9440EE6FE1130136B35A1* ___U3CgesturesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_PostponedGesturesToRemove
	List_1_t16BD68F0CA8C3E4040B9440EE6FE1130136B35A1* ___m_PostponedGesturesToRemove_3;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_DeadGesturePool
	List_1_t16BD68F0CA8C3E4040B9440EE6FE1130136B35A1* ___m_DeadGesturePool_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_IsUpdatingGestures
	bool ___m_IsUpdatingGestures_5;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::<arSessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CarSessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<T> UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1::m_Gestures
	List_1_t16BD68F0CA8C3E4040B9440EE6FE1130136B35A1* ___m_Gestures_7;
};

// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>
struct Gesture_1_tAF23C34D9280812ABC5340A624951CBFA38A39FF  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onStart
	Action_1_t4DA42CAE39264F940B80CA65156FFF933178DCA5* ___onStart_0;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onUpdated
	Action_1_t4DA42CAE39264F940B80CA65156FFF933178DCA5* ___onUpdated_1;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onFinished
	Action_1_t4DA42CAE39264F940B80CA65156FFF933178DCA5* ___onFinished_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<targetObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtargetObjectU3Ek__BackingField_4;
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<recognizer>k__BackingField
	GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B* ___U3CrecognizerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::m_HasStarted
	bool ___m_HasStarted_6;
};

// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<System.Object>
struct Gesture_1_t766A790B49A7840C0133EB04B5E41FFF564C75C8  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onStart
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___onStart_0;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onUpdated
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___onUpdated_1;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onFinished
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___onFinished_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<targetObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtargetObjectU3Ek__BackingField_4;
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<recognizer>k__BackingField
	GestureRecognizer_1_t36E2F5A12154F0109297A031C6EC1C0F28EB8267* ___U3CrecognizerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::m_HasStarted
	bool ___m_HasStarted_6;
};

// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>
struct Gesture_1_tE97BF9D3B6F1775F508D9D64131DFF031A71DECE  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onStart
	Action_1_t93A5A86147DE186489A2255DA391D65B184D2379* ___onStart_0;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onUpdated
	Action_1_t93A5A86147DE186489A2255DA391D65B184D2379* ___onUpdated_1;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onFinished
	Action_1_t93A5A86147DE186489A2255DA391D65B184D2379* ___onFinished_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<targetObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtargetObjectU3Ek__BackingField_4;
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<recognizer>k__BackingField
	GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A* ___U3CrecognizerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::m_HasStarted
	bool ___m_HasStarted_6;
};

// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>
struct Gesture_1_t6E2E75564944186E5EB29961A0267799016F75ED  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onStart
	Action_1_t0F72AC51DEA3BD3CF2A41228132CB4F6FF029B8F* ___onStart_0;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onUpdated
	Action_1_t0F72AC51DEA3BD3CF2A41228132CB4F6FF029B8F* ___onUpdated_1;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onFinished
	Action_1_t0F72AC51DEA3BD3CF2A41228132CB4F6FF029B8F* ___onFinished_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<targetObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtargetObjectU3Ek__BackingField_4;
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<recognizer>k__BackingField
	GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650* ___U3CrecognizerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::m_HasStarted
	bool ___m_HasStarted_6;
};

// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct Gesture_1_tF215270EAE1787692FAB5DFA79367E7F4B4DD4E2  : public RuntimeObject
{
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onStart
	Action_1_t687BD234065BC5D27C721916842A7A310049DE8B* ___onStart_0;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onUpdated
	Action_1_t687BD234065BC5D27C721916842A7A310049DE8B* ___onUpdated_1;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onFinished
	Action_1_t687BD234065BC5D27C721916842A7A310049DE8B* ___onFinished_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<targetObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtargetObjectU3Ek__BackingField_4;
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<recognizer>k__BackingField
	GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E* ___U3CrecognizerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::m_HasStarted
	bool ___m_HasStarted_6;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs
struct ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::<placementInteractable>k__BackingField
	ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* ___U3CplacementInteractableU3Ek__BackingField_0;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::<placementObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CplacementObjectU3Ek__BackingField_1;
};
struct Il2CppArrayBounds;

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs
struct BaseRegistrationEventArgs_t9822CF35B956BAF32B523A14F3AFEF6A82987F21  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_0;
};

// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility
struct GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996  : public RuntimeObject
{
};

struct GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::s_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___s_XROrigin_2;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::s_ARSessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___s_ARSessionOrigin_3;
	// UnityEngine.XR.ARFoundation.ARRaycastManager UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::s_ARRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___s_ARRaycastManager_4;
	// UnityEngine.XR.ARFoundation.ARPlaneManager UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::s_ARPlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___s_ARPlaneManager_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs>
struct UnityEvent_1_t7AA2517BCDE5327139663121EE751A51782A6065  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable,UnityEngine.GameObject>
struct UnityEvent_2_t18D5BDFBBFB9F2709CD61DB6E53E2C47BAC42674  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer
struct DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5  : public GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer::<slopInches>k__BackingField
	float ___U3CslopInchesU3Ek__BackingField_8;
	// System.Func`2<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.DragGesture> UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer::m_CreateEnhancedGesture
	Func_2_tE893D7128AE711DB8E48B248A89C9013A7458F70* ___m_CreateEnhancedGesture_9;
	// System.Func`2<UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.DragGesture> UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer::m_CreateGestureFunction
	Func_2_t64DE160AC97602D65E4DDA5F8AF54E7125A8DBBE* ___m_CreateGestureFunction_10;
	// System.Action`2<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture,UnityEngine.InputSystem.EnhancedTouch.Touch> UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer::m_ReinitializeEnhancedGesture
	Action_2_t443BE5B4BE6A1E7A96984D05C0D28960DDBE40D7* ___m_ReinitializeEnhancedGesture_11;
	// System.Action`2<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture,UnityEngine.Touch> UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer::m_ReinitializeGestureFunction
	Action_2_t110B2F7AE43826C4A960E9497F11EFA31CA8904B* ___m_ReinitializeGestureFunction_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs
struct InteractableRegisteredEventArgs_t9E35262DC0C14D7FE2265D47AB2D3FC9CAAE023D  : public BaseRegistrationEventArgs_t9822CF35B956BAF32B523A14F3AFEF6A82987F21
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs
struct InteractableUnregisteredEventArgs_tEA628E3D57FA85080BB7D4A958AA2A0F6F82BC21  : public BaseRegistrationEventArgs_t9822CF35B956BAF32B523A14F3AFEF6A82987F21
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs
struct InteractorRegisteredEventArgs_t893A4314ACD8A860BFD76CDB09AF89CCC1E84775  : public BaseRegistrationEventArgs_t9822CF35B956BAF32B523A14F3AFEF6A82987F21
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs
struct InteractorUnregisteredEventArgs_t77999252E8CB3198B8F1D16FB9F4F6E3412ECB93  : public BaseRegistrationEventArgs_t9822CF35B956BAF32B523A14F3AFEF6A82987F21
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer
struct PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501  : public GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer::<slopInches>k__BackingField
	float ___U3CslopInchesU3Ek__BackingField_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer::<slopMotionDirectionDegrees>k__BackingField
	float ___U3CslopMotionDirectionDegreesU3Ek__BackingField_9;
	// System.Func`3<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture> UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer::m_CreateEnhancedGesture
	Func_3_t33845766D28939CCB1F44F5C7B22E724D83D8CB5* ___m_CreateEnhancedGesture_10;
	// System.Func`3<UnityEngine.Touch,UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture> UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer::m_CreateGestureFunction
	Func_3_tE0DFF7FB733D0E13F5888488E54A4EC431492F7C* ___m_CreateGestureFunction_11;
	// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch> UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer::m_ReinitializeEnhancedGesture
	Action_3_t7DE677243945C9000DA7E7EB25EAC04375B6DCE8* ___m_ReinitializeEnhancedGesture_12;
	// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture,UnityEngine.Touch,UnityEngine.Touch> UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer::m_ReinitializeGestureFunction
	Action_3_t0AF7A3EA90F9BA1D2F9BCE82AA136C8690C7C916* ___m_ReinitializeGestureFunction_13;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer
struct TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47  : public GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer::<slopInches>k__BackingField
	float ___U3CslopInchesU3Ek__BackingField_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer::<durationSeconds>k__BackingField
	float ___U3CdurationSecondsU3Ek__BackingField_9;
	// System.Func`2<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TapGesture> UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer::m_CreateEnhancedGesture
	Func_2_t451D845D5B29290A7F89C9FD925A70EE4CF33686* ___m_CreateEnhancedGesture_10;
	// System.Func`2<UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TapGesture> UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer::m_CreateGestureFunction
	Func_2_t988CF706B0013E0B958DD2DEFE00C943362F09FB* ___m_CreateGestureFunction_11;
	// System.Action`2<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture,UnityEngine.InputSystem.EnhancedTouch.Touch> UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer::m_ReinitializeEnhancedGesture
	Action_2_t053FF44694D59C5297F3D0020CED8047B58E9543* ___m_ReinitializeEnhancedGesture_12;
	// System.Action`2<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture,UnityEngine.Touch> UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer::m_ReinitializeGestureFunction
	Action_2_t50ED30D8736A592C8559987EA3DB27FB2D66FCB5* ___m_ReinitializeGestureFunction_13;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer
struct TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46  : public GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer::<slopRotation>k__BackingField
	float ___U3CslopRotationU3Ek__BackingField_8;
	// System.Func`3<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture> UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer::m_CreateEnhancedGesture
	Func_3_tC980E918DC790F4378EA614B0836B27B3599975A* ___m_CreateEnhancedGesture_9;
	// System.Func`3<UnityEngine.Touch,UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture> UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer::m_CreateGestureFunction
	Func_3_tEC0B0052421FA5768116FF120BE9D9AE9BE3F7C0* ___m_CreateGestureFunction_10;
	// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch> UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer::m_ReinitializeEnhancedGesture
	Action_3_tAAE029FF75E3F8E712004004BA643CD2364D2708* ___m_ReinitializeEnhancedGesture_11;
	// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture,UnityEngine.Touch,UnityEngine.Touch> UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer::m_ReinitializeGestureFunction
	Action_3_tEA94C20A1A6AD394AE2C56659AF66C3E9B60D6FC* ___m_ReinitializeGestureFunction_12;
};

// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer
struct TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542  : public GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer::<slopInches>k__BackingField
	float ___U3CslopInchesU3Ek__BackingField_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer::<angleThresholdRadians>k__BackingField
	float ___U3CangleThresholdRadiansU3Ek__BackingField_9;
	// System.Func`3<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture> UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer::m_CreateEnhancedGesture
	Func_3_t7C57C987410695346690260FF3DE6D5457B02DD0* ___m_CreateEnhancedGesture_10;
	// System.Func`3<UnityEngine.Touch,UnityEngine.Touch,UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture> UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer::m_CreateGestureFunction
	Func_3_t5E75162B7038199085F4BF1E0431B90949C5F513* ___m_CreateGestureFunction_11;
	// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture,UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch> UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer::m_ReinitializeEnhancedGesture
	Action_3_t4FE8505C1C524888807388C2B86C3805AD858AB7* ___m_ReinitializeEnhancedGesture_12;
	// System.Action`3<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture,UnityEngine.Touch,UnityEngine.Touch> UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer::m_ReinitializeGestureFunction
	Action_3_t320AF966FD0ECC7378843A17D00299DE7D3907CC* ___m_ReinitializeGestureFunction_13;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t4AEA0DA5FAE2023C06F0391C711166391A700B4F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t4AEA0DA5FAE2023C06F0391C711166391A700B4F__padding[16];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0A0443F6D9922784F911CA2BEBC7571840D3CA7C  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0A0443F6D9922784F911CA2BEBC7571840D3CA7C_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::EF009A504B02E9FA1780A6FC59A5C67B0A4D7047D162261557CBB081B12EC34D
	__StaticArrayInitTypeSizeU3D16_t4AEA0DA5FAE2023C06F0391C711166391A700B4F ___EF009A504B02E9FA1780A6FC59A5C67B0A4D7047D162261557CBB081B12EC34D_0;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacedEvent
struct ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1  : public UnityEvent_2_t18D5BDFBBFB9F2709CD61DB6E53E2C47BAC42674
{
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEvent
struct ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529  : public UnityEvent_1_t7AA2517BCDE5327139663121EE751A51782A6065
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.XR.Interaction.Toolkit.AR.DragGesture
struct DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD  : public Gesture_1_tAF23C34D9280812ABC5340A624951CBFA38A39FF
{
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.DragGesture::<fingerId>k__BackingField
	int32_t ___U3CfingerIdU3Ek__BackingField_7;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.DragGesture::<startPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartPositionU3Ek__BackingField_8;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.DragGesture::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_9;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.DragGesture::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture
struct PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD  : public Gesture_1_tE97BF9D3B6F1775F508D9D64131DFF031A71DECE
{
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture::<fingerId1>k__BackingField
	int32_t ___U3CfingerId1U3Ek__BackingField_7;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture::<fingerId2>k__BackingField
	int32_t ___U3CfingerId2U3Ek__BackingField_8;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture::<startPosition1>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartPosition1U3Ek__BackingField_9;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture::<startPosition2>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartPosition2U3Ek__BackingField_10;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture::<gap>k__BackingField
	float ___U3CgapU3Ek__BackingField_11;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture::<gapDelta>k__BackingField
	float ___U3CgapDeltaU3Ek__BackingField_12;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.XR.Interaction.Toolkit.AR.TapGesture
struct TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E  : public Gesture_1_t6E2E75564944186E5EB29961A0267799016F75ED
{
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.TapGesture::<fingerId>k__BackingField
	int32_t ___U3CfingerIdU3Ek__BackingField_7;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TapGesture::<startPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartPositionU3Ek__BackingField_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TapGesture::m_ElapsedTime
	float ___m_ElapsedTime_9;
};

// UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture
struct TwistGesture_t8A413739CB827FAF4260E739A66DBF40CDADFDE7  : public Gesture_1_tF215270EAE1787692FAB5DFA79367E7F4B4DD4E2
{
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::m_PreviousPosition1
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPosition1_7;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::m_PreviousPosition2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPosition2_8;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<fingerId1>k__BackingField
	int32_t ___U3CfingerId1U3Ek__BackingField_9;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<fingerId2>k__BackingField
	int32_t ___U3CfingerId2U3Ek__BackingField_10;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<startPosition1>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartPosition1U3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<startPosition2>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartPosition2U3Ek__BackingField_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<deltaRotation>k__BackingField
	float ___U3CdeltaRotationU3Ek__BackingField_13;
};

// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement
struct Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::<hasHoveringPosition>k__BackingField
	bool ___U3ChasHoveringPositionU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::<hoveringPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ChoveringPositionU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::<hasPlacementPosition>k__BackingField
	bool ___U3ChasPlacementPositionU3Ek__BackingField_2;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::<placementPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CplacementPositionU3Ek__BackingField_3;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::<placementRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CplacementRotationU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::<hasPlane>k__BackingField
	bool ___U3ChasPlaneU3Ek__BackingField_5;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::<placementPlane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplacementPlaneU3Ek__BackingField_6;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::<updatedGroundingPlaneHeight>k__BackingField
	float ___U3CupdatedGroundingPlaneHeightU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement
struct Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshaled_pinvoke
{
	int32_t ___U3ChasHoveringPositionU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ChoveringPositionU3Ek__BackingField_1;
	int32_t ___U3ChasPlacementPositionU3Ek__BackingField_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CplacementPositionU3Ek__BackingField_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CplacementRotationU3Ek__BackingField_4;
	int32_t ___U3ChasPlaneU3Ek__BackingField_5;
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplacementPlaneU3Ek__BackingField_6;
	float ___U3CupdatedGroundingPlaneHeightU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement
struct Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshaled_com
{
	int32_t ___U3ChasHoveringPositionU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ChoveringPositionU3Ek__BackingField_1;
	int32_t ___U3ChasPlacementPositionU3Ek__BackingField_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CplacementPositionU3Ek__BackingField_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CplacementRotationU3Ek__BackingField_4;
	int32_t ___U3ChasPlaneU3Ek__BackingField_5;
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplacementPlaneU3Ek__BackingField_6;
	float ___U3CupdatedGroundingPlaneHeightU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_7;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_8;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_10;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_11;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_20;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1* ___U3CinteractorsHoveringU3Ek__BackingField_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102* ___U3CinteractorsSelectingU3Ek__BackingField_23;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_24;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_25;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_26;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_27;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_28;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_30;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_35;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_38;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_39;
};

struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_29;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_13;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_20;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_23;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_24;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_26;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_27;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_29;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_30;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_32;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_33;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_28;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorRegistered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___interactorRegistered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorUnregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___interactorUnregistered_5;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableRegistered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___interactableRegistered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableUnregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___interactableUnregistered_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToInteractableMap
	Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5* ___m_ColliderToInteractableMap_9;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactors
	RegistrationList_1_t3C57B4669121D753FC5E6447930968A297EE0630* ___m_Interactors_10;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactables
	RegistrationList_1_t4CFD9E29B57A81B6DFE2C016746F640843506138* ___m_Interactables_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___m_CurrentHovered_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___m_CurrentSelected_13;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_14;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_UnorderedValidTargets
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ___m_UnorderedValidTargets_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractors
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___m_ScratchInteractors_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ScratchInteractables_18;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectEnterEventArgs
	LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67* ___m_SelectEnterEventArgs_19;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectExitEventArgs
	LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62* ___m_SelectExitEventArgs_20;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverEnterEventArgs
	LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD* ___m_HoverEnterEventArgs_21;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverExitEventArgs
	LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F* ___m_HoverExitEventArgs_22;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorRegisteredEventArgs
	LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F* ___m_InteractorRegisteredEventArgs_23;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorUnregisteredEventArgs
	LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0* ___m_InteractorUnregisteredEventArgs_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableRegisteredEventArgs
	LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B* ___m_InteractableRegisteredEventArgs_25;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableUnregisteredEventArgs
	LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE* ___m_InteractableUnregisteredEventArgs_26;
};

struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::<activeInteractionManagers>k__BackingField
	List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B* ___U3CactiveInteractionManagersU3Ek__BackingField_8;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_PreprocessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_PreprocessInteractorsMarker_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractorsMarker_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractablesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractablesMarker_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_GetValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_GetValidTargetsMarker_30;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FilterRegisteredValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_FilterRegisteredValidTargetsMarker_31;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidSelectionsMarker_32;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidHoversMarker_33;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidSelectionsMarker_34;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidHoversMarker_35;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectEnterMarker_36;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectExitMarker_37;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverEnterMarker_38;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverExitMarker_39;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable
struct ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_40;
	// UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::<gestureInteractor>k__BackingField
	ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* ___U3CgestureInteractorU3Ek__BackingField_41;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::m_IsManipulating
	bool ___m_IsManipulating_42;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::m_ARSessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___m_ARSessionOrigin_46;
};

struct ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_StaticFields
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::s_XROriginCache
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___s_XROriginCache_43;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::s_ARSessionOriginCache
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___s_ARSessionOriginCache_44;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::s_Interactors
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___s_Interactors_45;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor
struct ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_34;
	// UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::<dragGestureRecognizer>k__BackingField
	DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* ___U3CdragGestureRecognizerU3Ek__BackingField_35;
	// UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::<pinchGestureRecognizer>k__BackingField
	PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* ___U3CpinchGestureRecognizerU3Ek__BackingField_36;
	// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::<twoFingerDragGestureRecognizer>k__BackingField
	TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* ___U3CtwoFingerDragGestureRecognizerU3Ek__BackingField_37;
	// UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::<tapGestureRecognizer>k__BackingField
	TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* ___U3CtapGestureRecognizerU3Ek__BackingField_38;
	// UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::<twistGestureRecognizer>k__BackingField
	TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* ___U3CtwistGestureRecognizerU3Ek__BackingField_39;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_40;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::m_ARSessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___m_ARSessionOrigin_44;
};

struct ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::s_XROriginCache
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___s_XROriginCache_41;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::s_ARSessionOriginCache
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___s_ARSessionOriginCache_42;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::s_Interactables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Interactables_43;
	// UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::s_Instance
	ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* ___s_Instance_45;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable
struct ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A  : public ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D
{
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::m_PlacementPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlacementPrefab_47;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::m_FallbackLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_FallbackLayerMask_48;
	// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEvent UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::m_ObjectPlaced
	ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* ___m_ObjectPlaced_49;
	// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::m_ObjectPlacementEventArgs
	ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* ___m_ObjectPlacementEventArgs_50;
	// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacedEvent UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::m_OnObjectPlaced
	ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* ___m_OnObjectPlaced_52;
};

struct ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_51;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable
struct ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F  : public ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::m_RotationRateDegreesDrag
	float ___m_RotationRateDegreesDrag_47;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::m_RotationRateDegreesTwist
	float ___m_RotationRateDegreesTwist_48;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable
struct ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC  : public ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::m_MinScale
	float ___m_MinScale_47;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::m_MaxScale
	float ___m_MaxScale_48;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::m_ElasticRatioLimit
	float ___m_ElasticRatioLimit_49;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::m_Sensitivity
	float ___m_Sensitivity_50;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::m_Elasticity
	float ___m_Elasticity_51;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::m_CurrentScaleRatio
	float ___m_CurrentScaleRatio_52;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::m_IsScaling
	bool ___m_IsScaling_53;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable
struct ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E  : public ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D
{
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::m_SelectionVisualization
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_SelectionVisualization_47;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::m_GestureSelected
	bool ___m_GestureSelected_48;
};

// UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable
struct ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4  : public ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D
{
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_ObjectGestureTranslationMode
	int32_t ___m_ObjectGestureTranslationMode_47;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_MaxTranslationDistance
	float ___m_MaxTranslationDistance_48;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_FallbackLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_FallbackLayerMask_49;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_IsActive
	bool ___m_IsActive_52;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_DesiredLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DesiredLocalPosition_53;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_GroundingPlaneHeight
	float ___m_GroundingPlaneHeight_54;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_DesiredAnchorPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DesiredAnchorPosition_55;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_DesiredRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_DesiredRotation_56;
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::m_LastPlacement
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 ___m_LastPlacement_57;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E  : public RuntimeArray
{
	ALIGN_FIELD (8) ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 m_Items[1];

	inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
	inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<System.Object>::get_targetObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Gesture_1_get_targetObject_m92F38594D383EC616FCFC8E1152EBD1BF534D25A_gshared_inline (Gesture_1_t766A790B49A7840C0133EB04B5E41FFF564C75C8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<System.Object>::get_isCanceled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Gesture_1_get_isCanceled_m1078472C721C62109767B52D374B4368793114D8_gshared_inline (Gesture_1_t766A790B49A7840C0133EB04B5E41FFF564C75C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<System.Object>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gesture_1_Cancel_m7842EEAC0DE03B7377598EA64E9DFC7B4261C417_gshared (Gesture_1_t766A790B49A7840C0133EB04B5E41FFF564C75C8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager<System.Object>(Unity.XR.CoreUtils.XROrigin,T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_TisRuntimeObject_m632A65DABD82B9FFC5384830F26FEECA423296D5_gshared (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin0, RuntimeObject** ___cachedManager1, RuntimeObject** ___manager2, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager<System.Object>(UnityEngine.XR.ARFoundation.ARSessionOrigin,T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_TisRuntimeObject_mCC197E6462421AA6B6450CC7A4440BAC1C331D4C_gshared (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin0, RuntimeObject** ___cachedManager1, RuntimeObject** ___manager2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<System.Object>::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_1_Update_m7926252F59DCB681EA5BA08619F314D7B61A2290_gshared (GestureRecognizer_1_t36E2F5A12154F0109297A031C6EC1C0F28EB8267* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<System.Object>::set_xrOrigin(Unity.XR.CoreUtils.XROrigin)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureRecognizer_1_set_xrOrigin_mBDBFAAE6F6F1A580B5DE10434D576CF536394F30_gshared_inline (GestureRecognizer_1_t36E2F5A12154F0109297A031C6EC1C0F28EB8267* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<System.Object>::set_arSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureRecognizer_1_set_arSessionOrigin_m0BDE8B137B34182C1B64B407FBEEC6E17A36FE83_gshared_inline (GestureRecognizer_1_t36E2F5A12154F0109297A031C6EC1C0F28EB8267* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs>::.ctor()
inline void UnityEvent_1__ctor_m2D53D243A295AB2EB7020C699F8FEA08430141AD (UnityEvent_1_t7AA2517BCDE5327139663121EE751A51782A6065* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7AA2517BCDE5327139663121EE751A51782A6065*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::get_xrOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::get_arSessionOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TapGesture::get_startPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TapGesture_get_startPosition_mB5CAC1D326B19835575B01A47968972AE84DDF7D_inline (TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.XR.ARSubsystems.TrackableType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_Raycast_mF399B72ACC81FE80A07517AF470450FA45C8302D (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin2, int32_t ___trackableTypes3, int32_t ___fallbackLayerMask4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.ARSubsystems.TrackableType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_Raycast_m100C3FDFB3F72340C265D88DDC7F3C72914FC845 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin2, int32_t ___trackableTypes3, int32_t ___fallbackLayerMask4, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::get_camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::get_TrackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XROrigin_get_TrackablesParent_m6F7933DF03A5376C31D328F865F77D28EEC18E9C_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs>::Invoke(T0)
inline void UnityEvent_1_Invoke_m3EF7628399D131F068AD4ABD837EFBBF1295D54B (UnityEvent_1_t7AA2517BCDE5327139663121EE751A51782A6065* __this, ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7AA2517BCDE5327139663121EE751A51782A6065*, ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::get_placementInteractable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* ARObjectPlacementEventArgs_get_placementInteractable_m8C7A1894D773619285B83DC0C2B7EFC1BC78F44E_inline (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::get_placementObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARObjectPlacementEventArgs_get_placementObject_m4694637DF487CA6E3DEBC300876969D3D85CD078_inline (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable,UnityEngine.GameObject>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_mD15BEE2F2EF8CE3D146D9DF66CD0B409BF8355B8 (UnityEvent_2_t18D5BDFBBFB9F2709CD61DB6E53E2C47BAC42674* __this, ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* ___arg00, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t18D5BDFBBFB9F2709CD61DB6E53E2C47BAC42674*, ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>::get_targetObject()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Gesture_1_get_targetObject_mA70175C7B2483508A5C33A52CA96255F089324A3_inline (Gesture_1_t6E2E75564944186E5EB29961A0267799016F75ED* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Gesture_1_t6E2E75564944186E5EB29961A0267799016F75ED*, const RuntimeMethod*))Gesture_1_get_targetObject_m92F38594D383EC616FCFC8E1152EBD1BF534D25A_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::OnEndManipulation(UnityEngine.XR.Interaction.Toolkit.AR.TapGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARBaseGestureInteractable_OnEndManipulation_m3EC5A5139E52A986996E3DA2E344A67C9E354889 (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* ___gesture0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>::get_isCanceled()
inline bool Gesture_1_get_isCanceled_m8959E8FE03351E5641D8809791FA56BE6D9FCFF5_inline (Gesture_1_t6E2E75564944186E5EB29961A0267799016F75ED* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Gesture_1_t6E2E75564944186E5EB29961A0267799016F75ED*, const RuntimeMethod*))Gesture_1_get_isCanceled_m1078472C721C62109767B52D374B4368793114D8_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::set_placementInteractable(UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARObjectPlacementEventArgs_set_placementInteractable_m1E993691A9845DC0F1923B1B0794F7068B72792F_inline (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::set_placementObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARObjectPlacementEventArgs_set_placementObject_m4669BEA08FA461E5495C94C6C951EE866B8E57A7_inline (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARObjectPlacementEvent__ctor_m6FEAABBFB18CDFDA2FDE6975DEC8DC902CD0A2DE (ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARObjectPlacementEventArgs__ctor_m993339704132DE2A4AA9F1F0E0850468A6CF743F (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARObjectPlacedEvent__ctor_mFA9B0898344B8A43C2CBE6EBB1A2D2F7B7039851 (ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARBaseGestureInteractable__ctor_m7D7701B9E98DDBEF1B8DE65810A1CB5DA566B630 (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable,UnityEngine.GameObject>::.ctor()
inline void UnityEvent_2__ctor_m626A15219B6D0A85692BA596E19C64B3E97526D5 (UnityEvent_2_t18D5BDFBBFB9F2709CD61DB6E53E2C47BAC42674* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t18D5BDFBBFB9F2709CD61DB6E53E2C47BAC42674*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>::get_targetObject()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_inline (Gesture_1_tAF23C34D9280812ABC5340A624951CBFA38A39FF* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Gesture_1_tAF23C34D9280812ABC5340A624951CBFA38A39FF*, const RuntimeMethod*))Gesture_1_get_targetObject_m92F38594D383EC616FCFC8E1152EBD1BF534D25A_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>::get_targetObject()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Gesture_1_get_targetObject_m80A87A63F0EFC40197D7D8BE34A89A3B77526C41_inline (Gesture_1_tF215270EAE1787692FAB5DFA79367E7F4B4DD4E2* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Gesture_1_tF215270EAE1787692FAB5DFA79367E7F4B4DD4E2*, const RuntimeMethod*))Gesture_1_get_targetObject_m92F38594D383EC616FCFC8E1152EBD1BF534D25A_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.DragGesture::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DragGesture_get_delta_mA9DCFB7CC40377D0ED15A0CB25B6157DB67E64F7_inline (DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::get_deltaRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TwistGesture_get_deltaRotation_m66CBD6DD13F23FB51479315D9EB022B5210DED9D_inline (TwistGesture_t8A413739CB827FAF4260E739A66DBF40CDADFDE7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_minScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_maxScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_maxScale_m167D8A03D65ABA90040D8EF2738E04CEDD589FC6_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_clampedScaleRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_clampedScaleRatio_m324538D5A1535B2266FF40ADA1BE961335574627 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::ElasticDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_ElasticDelta_mCA360696193D87145EB3E00F2CA0B2EA49C1A933 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_scaleDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_scaleDelta_m4AF22862C91E3D881108E421F63E856B093ADA67 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::set_minScale(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARScaleInteractable_set_minScale_mA0DBB1AA8F6FA1A97FFE1AED42AE1FA5A529E66F_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::set_maxScale(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARScaleInteractable_set_maxScale_mD64819F7A5FF5355F592B2A3D9F5FC6CA2118F3B_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARBaseGestureInteractable_OnEnable_m27914543513BF1A390E58E6204294749784086A1 (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, int32_t ___updatePhase0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_currentScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ARScaleInteractable_get_currentScale_m9CEC115B6079094DC3912E4D8BD7D5F80A8C4E4C (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>::get_targetObject()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Gesture_1_get_targetObject_m74E3DD10D62DB8290726983DF17E37C788FA308B_inline (Gesture_1_tE97BF9D3B6F1775F508D9D64131DFF031A71DECE* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Gesture_1_tE97BF9D3B6F1775F508D9D64131DFF031A71DECE*, const RuntimeMethod*))Gesture_1_get_targetObject_m92F38594D383EC616FCFC8E1152EBD1BF534D25A_gshared_inline)(__this, method);
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_sensitivity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_sensitivity_mCD5CC891C9BBB51493B1983FC058D8E3783B2ABE_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture::get_gapDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PinchGesture_get_gapDelta_m2D36FE8FA4082FC4B55F7DDF2454598C4350AD8D_inline (PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.GestureTouchesUtility::PixelsToInches(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureTouchesUtility_PixelsToInches_m6E76B0480CEE48CBD3D6E754A930DBE52699C95D (float ___pixels0, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_elasticRatioLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_elasticRatioLimit_m88EAFF6B41E90A9069F950C3DB920CFD43EFC7A1_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>::Cancel()
inline void Gesture_1_Cancel_m4D73AD32139C582A8AAD006FF0028C94DA2511A2 (Gesture_1_tE97BF9D3B6F1775F508D9D64131DFF031A71DECE* __this, const RuntimeMethod* method)
{
	((  void (*) (Gesture_1_tE97BF9D3B6F1775F508D9D64131DFF031A71DECE*, const RuntimeMethod*))Gesture_1_Cancel_m7842EEAC0DE03B7377598EA64E9DFC7B4261C417_gshared)(__this, method);
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_elasticity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_elasticity_m67BCB1778B85352DBD6DE51D9B4D9C3E2543CBAF_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::get_gestureInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* ARBaseGestureInteractable_get_gestureInteractor_m2B15167ABA301409F0A50C3810FEF794750C57EB_inline (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnSelectEntering(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnSelectEntering_mA92C356B0CBA88075ED772C00D6D7B53FED2AA93 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnSelectExiting(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnSelectExiting_m4F97E28A978DC4A5B7B843CA0FDAAFA9640F72F3 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_UpdatePosition_m5BDCFC5791A96867BFAD62011B52FD4DBB02510B (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.DragGesture::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DragGesture_get_position_mF154E9A1E9201CFE888D10D2BA1E7F507A15E3F4_inline (DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::get_maxTranslationDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARTranslationInteractable_get_maxTranslationDistance_m7BC61267CCA196F2484075A471C512F03F151766_inline (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::get_objectGestureTranslationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARTranslationInteractable_get_objectGestureTranslationMode_m16B7011915BB13995BBB4E4A7CBF2C4BE902CB48_inline (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::GetBestPlacementPosition(UnityEngine.Vector3,UnityEngine.Vector2,System.Single,System.Single,System.Single,UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode,UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.XR.ARSubsystems.TrackableType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 GestureTransformationUtility_GetBestPlacementPosition_m180DE1C7ED8281C1348A6E806E2EE2512FCB1E0E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentAnchorPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition1, float ___groundingPlaneHeight2, float ___hoverOffset3, float ___maxTranslationDistance4, int32_t ___gestureTranslationMode5, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin6, int32_t ___trackableTypes7, int32_t ___fallbackLayerMask8, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::GetBestPlacementPosition(UnityEngine.Vector3,UnityEngine.Vector2,System.Single,System.Single,System.Single,UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode,Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.ARSubsystems.TrackableType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 GestureTransformationUtility_GetBestPlacementPosition_m0889A627B0D4D6DEC33FDE0F3249E0CF9B657CF9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentAnchorPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition1, float ___groundingPlaneHeight2, float ___hoverOffset3, float ___maxTranslationDistance4, int32_t ___gestureTranslationMode5, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin6, int32_t ___trackableTypes7, int32_t ___fallbackLayerMask8, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_hasHoveringPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Placement_get_hasHoveringPosition_m8AC86FA805F9EE67588FDCB253DB4C41F7647136_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_hasPlacementPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Placement_get_hasPlacementPosition_mF8478CF3AFA0CE0BACE647D9BAAC165A1FB544E1_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_hoveringPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_hoveringPosition_m33C7F03371449CBA640D4FE5D7FC2657BC80888D_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_placementPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_placementPosition_m60592EDE3AEE92A1D74C5CC66B492D45219FE825_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_updatedGroundingPlaneHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Placement_get_updatedGroundingPlaneHeight_m4D14E5829330F269DBDF5ED5AC62A6FD2D27BB14_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_placementRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_hasPlane()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Placement_get_hasPlane_m934E52CE701CDF7A765FAB9B659453622F9CB57B_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager<UnityEngine.XR.ARFoundation.ARRaycastManager>(Unity.XR.CoreUtils.XROrigin,T&,T&)
inline bool GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mFFF81956D91ED36D862264CB76FA46E6A4CDE5DA (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin0, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** ___cachedManager1, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** ___manager2, const RuntimeMethod* method)
{
	return ((  bool (*) (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE*, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44**, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44**, const RuntimeMethod*))GestureTransformationUtility_TryGetTrackableManager_TisRuntimeObject_m632A65DABD82B9FFC5384830F26FEECA423296D5_gshared)(___sessionOrigin0, ___cachedManager1, ___manager2, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager<UnityEngine.XR.ARFoundation.ARPlaneManager>(Unity.XR.CoreUtils.XROrigin,T&,T&)
inline bool GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_mA4228721AEFBC71304ED14F425074B0CF0F1ED22 (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin0, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___cachedManager1, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___manager2, const RuntimeMethod* method)
{
	return ((  bool (*) (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE*, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928**, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928**, const RuntimeMethod*))GestureTransformationUtility_TryGetTrackableManager_TisRuntimeObject_m632A65DABD82B9FFC5384830F26FEECA423296D5_gshared)(___sessionOrigin0, ___cachedManager1, ___manager2, method);
}
// T UnityEngine.Object::FindObjectOfType<Unity.XR.CoreUtils.XROrigin>()
inline XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_mAB31BBA1730F8CD94057988C74010254ADABC140 (const RuntimeMethod* method)
{
	return ((  XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager<UnityEngine.XR.ARFoundation.ARRaycastManager>(UnityEngine.XR.ARFoundation.ARSessionOrigin,T&,T&)
inline bool GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mCAD6094A24DD06BA4DC5F1CF1167B9C288763749 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin0, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** ___cachedManager1, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** ___manager2, const RuntimeMethod* method)
{
	return ((  bool (*) (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44**, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44**, const RuntimeMethod*))GestureTransformationUtility_TryGetTrackableManager_TisRuntimeObject_mCC197E6462421AA6B6450CC7A4440BAC1C331D4C_gshared)(___sessionOrigin0, ___cachedManager1, ___manager2, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager<UnityEngine.XR.ARFoundation.ARPlaneManager>(UnityEngine.XR.ARFoundation.ARSessionOrigin,T&,T&)
inline bool GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m6421D600F3EE508ABA9D6A2BCEC2AFC3E447C78F (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin0, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___cachedManager1, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___manager2, const RuntimeMethod* method)
{
	return ((  bool (*) (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928**, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928**, const RuntimeMethod*))GestureTransformationUtility_TryGetTrackableManager_TisRuntimeObject_mCC197E6462421AA6B6450CC7A4440BAC1C331D4C_gshared)(___sessionOrigin0, ___cachedManager1, ___manager2, method);
}
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC (const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetSessionOrigin(Unity.XR.CoreUtils.XROrigin&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetSessionOrigin_mBAE06D8E5B0CC4F4E5D30FAEAB24DAB3719F8BCD (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE** ___sessionOrigin0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.ARFoundation.ARRaycastManager&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_m2B214762960197684D91064F7CBAE3F76C9E29CB (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin0, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** ___raycastManager1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::Clear()
inline void List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_gshared_inline)(__this, method);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_m187D7037BE9F103763C2608C4CA3C78AEA8432D3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, float ___distance2, int32_t ___hitType3, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastHit,System.Single,UnityEngine.Transform,UnityEngine.XR.ARFoundation.ARTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRaycastHit__ctor_m954400C9EFC7F5B5A227276ED8EE2FEF32E6BC48 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___hit0, float ___distance1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform2, ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___trackable3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::Add(T)
inline void List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70, const RuntimeMethod*))List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_updatedGroundingPlaneHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.GestureTouchesUtility::InchesToPixels(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureTouchesUtility_InchesToPixels_mE350301C72EEC2864DE025135CA06E0D59264916 (float ___inches0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.ARFoundation.ARPlaneManager&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_mED000BD0735C2E7A9FAAC1A04532536E4FDDF16F (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin0, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___planeManager1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARFoundation.ARPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::IsPlaneTypeAllowed(UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode,UnityEngine.XR.ARSubsystems.PlaneAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_IsPlaneTypeAllowed_m666536AD393ECD917C13A49566273A8B7C96ABA7 (int32_t ___gestureTranslationMode0, int32_t ___planeAlignment1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::LimitTranslation(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GestureTransformationUtility_LimitTranslation_m9A5063D09992DC5039A42741E1F0DFCBBDC3AEC9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPosition1, float ___maxTranslationDistance2, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_placementPlane(UnityEngine.XR.ARFoundation.ARPlane)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_placementPlane_mBC9651FDAAC731C1C05D223BC8EC4077B0BE0C31_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_hasPlane(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_hasPlane_mC797A50A6AC3FE43FEF180F6DA16B86FCA3F2D80_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_hasPlacementPosition(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_hasPlacementPosition_mEBCB50BA6CC5F07FD19E341D2B83312B454AA9CB_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_placementPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_placementPosition_m224C7EB77A068D617B0BB786BAFE938DDD4485BE_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_hasHoveringPosition(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_hoveringPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_placementRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_placementRotation_m88E66AF455225CF624B5A5A5354BB21B1B3319C7_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___enter1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, float ___distance0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetSessionOrigin_m5235678B1B0DAD9E6E8C0AB0C18819765AF502AA (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3** ___sessionOrigin0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager(UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.XR.ARFoundation.ARRaycastManager&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_m93585CCB33470F066CC1F08F21B7562BE1C436F5 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin0, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** ___raycastManager1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastHit,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRaycastHit__ctor_m0C23F16B12F6D0F71C0B00D48D8BC3271BF7F39D (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___hit0, float ___distance1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager(UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.XR.ARFoundation.ARPlaneManager&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_mF92C3C16919F0266DC6158A9A837A3B98E6A21CA (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin0, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___planeManager1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_placementPlane()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Placement_get_placementPlane_m164CEE9F117AAAC49FB9EE0027C137B785B8B9B5_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_HasHoveringPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_HasHoveringPosition_mF61C216ABDEFC30A7716260A2FC956D95032BCE0 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_HasHoveringPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_HasHoveringPosition_m1660E3606AB78F55DBFB18041343DCCAFDC6689C (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_HoveringPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_HoveringPosition_m608C1EDD2528CDBD89DFCBD39222D348544238E5 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_HoveringPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_HoveringPosition_m186763F87375CFAEF6E69A82816074895AA1308E (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_HasPlacementPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_HasPlacementPosition_m05FAC9C91E9AA37C0BC228576F2ACDDCB7BB968F (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_HasPlacementPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_HasPlacementPosition_mF1637A14788B8F22DB2C6CF55F9D6ED892A5C039 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_PlacementPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_PlacementPosition_mC4921EB4856C29EC8DA6D61D2239E6A1A4BD2E9B (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_PlacementPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_PlacementPosition_m6210E8CB071A4F68D37513AF3C2C16B48F4DF6EB (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_PlacementRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Placement_get_PlacementRotation_m70824682ACD6B6D895A3F5F26E31A6C89D2982F3 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_PlacementRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_PlacementRotation_m93EBE1EB43F2BAA10D0928150B55B6FD0178EF98 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_HasPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_HasPlane_mBE0340EC4A2D46ABBE116D64E8DDBB2D0581B365 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_HasPlane(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_HasPlane_mF6FC687AFB6D20E6ACA01AA37E247588F7782A18 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_PlacementPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Placement_get_PlacementPlane_m08C7A6D9B533673F66F3CAAF7D53C9C28E4FFCCC (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_PlacementPlane(UnityEngine.XR.ARFoundation.ARPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_PlacementPlane_m2341DC58F82B30382B3DF1646FF22EED3AB68AFC (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_UpdatedGroundingPlaneHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Placement_get_UpdatedGroundingPlaneHeight_mBEA8F9463BDD5F0ED3C63CE6F3D78BD5D0558B8A (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_UpdatedGroundingPlaneHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_UpdatedGroundingPlaneHeight_m4262ABD1EB2E7DE4ABAEBA8D1959F225089D9518 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractor_Awake_m6C75157E01BD94FADF8EC1815E1202CB615DD88E (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragGestureRecognizer__ctor_mDCEA270A7EF6978CCAD58DE18CFB987FAA1657E4 (DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_dragGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_dragGestureRecognizer_mD743BCBFF37A48CF182804B9A3437B6E29C33214_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchGestureRecognizer__ctor_m633E5C31FF4E28B9050BC01B4A3BED254DC10E93 (PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_pinchGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_pinchGestureRecognizer_mA76E1CF9156F7959F943319F61D80247F8B94192_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoFingerDragGestureRecognizer__ctor_m83045490FC91FC8611E0A7572B6184815B1FEDED (TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_twoFingerDragGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_twoFingerDragGestureRecognizer_m418D132DC1ADD2BA874FDBBC7B88525E22D6AAE2_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer__ctor_m7ADA3F9C4DBEF01C753545ACAF306A7721549FBB (TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_tapGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_tapGestureRecognizer_m9B2E0984DD1B87D9CE9E1FB6006B88502E64A3ED_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwistGestureRecognizer__ctor_m8429067972708E4055155E17B7B7DB4F4A5DD213 (TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_twistGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_twistGestureRecognizer_m8A756D09D679776AA07FFAD3E24EC018BEB6C2E8_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::FindXROrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_FindXROrigin_m1D9991B897A314071F9F7B6BB34660503C9D04B8 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::FindARSessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_FindARSessionOrigin_m1604E2804F5F5C887AB1A6F29C43F572D1D0BE35 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractor_OnEnable_m65BC403EF883EFD685764D768F787C11F8906BDD (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.EnhancedTouchSupport::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedTouchSupport_Enable_m3499C94737BB636112851899C283E1FCCC9E3C6E (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractor_OnDisable_mA7C2B26F5887ECF0E95A964759EE035800B40D6E (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.EnhancedTouchSupport::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedTouchSupport_Disable_mDE96196C7171B1827FDFD8762A402D30A01975B6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::ProcessInteractor(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractor_ProcessInteractor_mCA4F4CDFE9578064E85EEA274098EDAE7E9E27BC (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, int32_t ___updatePhase0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Clear()
inline void List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_inline (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_dragGestureRecognizer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* ARGestureInteractor_get_dragGestureRecognizer_m8FAC49452C6C7D8A0E78F8D727B7A41D524AD971_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>::Update()
inline void GestureRecognizer_1_Update_m143998C0DE1A3C78EED82E48B892A02B615C952C (GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B* __this, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B*, const RuntimeMethod*))GestureRecognizer_1_Update_m7926252F59DCB681EA5BA08619F314D7B61A2290_gshared)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_pinchGestureRecognizer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* ARGestureInteractor_get_pinchGestureRecognizer_mCE93BE8467B47945C6756D0A0DFC2AC8734E4ACB_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>::Update()
inline void GestureRecognizer_1_Update_mE9265274FD7AA8646338B2CD7B5A58A74D462154 (GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A* __this, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A*, const RuntimeMethod*))GestureRecognizer_1_Update_m7926252F59DCB681EA5BA08619F314D7B61A2290_gshared)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_twoFingerDragGestureRecognizer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* ARGestureInteractor_get_twoFingerDragGestureRecognizer_m4D992376FB76A691883DB57388F0A4D0E89B5AF9_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>::Update()
inline void GestureRecognizer_1_Update_m2056D1A69113F7EE35F2FAF89915A4617DFBEC6E (GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B* __this, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B*, const RuntimeMethod*))GestureRecognizer_1_Update_m7926252F59DCB681EA5BA08619F314D7B61A2290_gshared)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_tapGestureRecognizer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* ARGestureInteractor_get_tapGestureRecognizer_m2CB26461D4DAE55F9704FFA877C8C64EFA843D72_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>::Update()
inline void GestureRecognizer_1_Update_m108480E4C734F872C77B4872D507D8D2BEC627A4 (GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650* __this, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650*, const RuntimeMethod*))GestureRecognizer_1_Update_m7926252F59DCB681EA5BA08619F314D7B61A2290_gshared)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_twistGestureRecognizer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* ARGestureInteractor_get_twistGestureRecognizer_m2E6D4CE780DB2482ECDE1535347F5897589E7065_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>::Update()
inline void GestureRecognizer_1_Update_m8A768F07AC78676E52EB1792F321580403315A21 (GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E* __this, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E*, const RuntimeMethod*))GestureRecognizer_1_Update_m7926252F59DCB681EA5BA08619F314D7B61A2290_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>::set_xrOrigin(Unity.XR.CoreUtils.XROrigin)
inline void GestureRecognizer_1_set_xrOrigin_m614EB1E623300AFDC510AC1EE21F8F59A6632FE8_inline (GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B*, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE*, const RuntimeMethod*))GestureRecognizer_1_set_xrOrigin_mBDBFAAE6F6F1A580B5DE10434D576CF536394F30_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>::set_xrOrigin(Unity.XR.CoreUtils.XROrigin)
inline void GestureRecognizer_1_set_xrOrigin_m1FE5EA5C4C156B13448C4825CEB5CE63EC05D743_inline (GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A*, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE*, const RuntimeMethod*))GestureRecognizer_1_set_xrOrigin_mBDBFAAE6F6F1A580B5DE10434D576CF536394F30_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>::set_xrOrigin(Unity.XR.CoreUtils.XROrigin)
inline void GestureRecognizer_1_set_xrOrigin_mD86AC28E894C376833FED7876EB3DB2D74B102D4_inline (GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B*, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE*, const RuntimeMethod*))GestureRecognizer_1_set_xrOrigin_mBDBFAAE6F6F1A580B5DE10434D576CF536394F30_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>::set_xrOrigin(Unity.XR.CoreUtils.XROrigin)
inline void GestureRecognizer_1_set_xrOrigin_mD18689063AC5D443F8BD220F8A292FC4C9BE5484_inline (GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650*, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE*, const RuntimeMethod*))GestureRecognizer_1_set_xrOrigin_mBDBFAAE6F6F1A580B5DE10434D576CF536394F30_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>::set_xrOrigin(Unity.XR.CoreUtils.XROrigin)
inline void GestureRecognizer_1_set_xrOrigin_mFF43E932B0BC18F9C51CBC834DD09C2EC8D11EBF_inline (GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E*, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE*, const RuntimeMethod*))GestureRecognizer_1_set_xrOrigin_mBDBFAAE6F6F1A580B5DE10434D576CF536394F30_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::OnRegistered(UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractor_OnRegistered_m1BB39FA738FF1BFA87EB9ACB9D091D2C0FF8F67A (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, InteractorRegisteredEventArgs_t893A4314ACD8A860BFD76CDB09AF89CCC1E84775* ___args0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs::get_manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* BaseRegistrationEventArgs_get_manager_m84ED1D40C6386160D7158A59481F70348DD48413_inline (BaseRegistrationEventArgs_t9822CF35B956BAF32B523A14F3AFEF6A82987F21* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4455C428DEE5DC85344FB4A79F97A7B440D8040E (Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::add_interactableRegistered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionManager_add_interactableRegistered_mA988BE3542F18F59BD66F16017DF19153DA7CF3F (XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* __this, Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB9A5ED0C0D41788CCCC4B92538FAD13F3B66E114 (Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::add_interactableUnregistered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionManager_add_interactableUnregistered_mF868D7595D14DDA38D60F61249878B9E0E261E36 (XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* __this, Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_interactionManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::GetRegisteredInteractables(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionManager_GetRegisteredInteractables_m5255C91F428D890463EC1FDC3273425FC82A2679 (XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* __this, List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___results0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::GetEnumerator()
inline Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275 List_1_GetEnumerator_mE88C6014E5D496A14CFE8D413102CD60E6961E48 (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275 (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Dispose()
inline void Enumerator_Dispose_mBB52FE2839B6F0CDC8045D1593F54538A86710C6 (Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m5A723821D45562AEA6CF9D3057317CC1601A688C_inline (Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Add(T)
inline void List_1_Add_m944DE494A680FC42C4967ECB8ABFEC095F1B549B_inline (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::MoveNext()
inline bool Enumerator_MoveNext_mFA0CD3249649865B04C91FE04E85091C0105935E (Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::OnUnregistered(UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractor_OnUnregistered_mA14336625DC266534FFF8056AB2655A817D1B778 (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, InteractorUnregisteredEventArgs_t77999252E8CB3198B8F1D16FB9F4F6E3412ECB93* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::remove_interactableRegistered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionManager_remove_interactableRegistered_mE2A574D88B059A17C482B057CFB632446D6537D1 (XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* __this, Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::remove_interactableUnregistered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionManager_remove_interactableUnregistered_mC4F1CD6073FFE6B6AB221522A1BEBE2CEE0E93E5 (XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* __this, Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs::get_interactableObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InteractableRegisteredEventArgs_get_interactableObject_m895A23B809D8B0DA415F16C644A4A4B93A8EB87A_inline (InteractableRegisteredEventArgs_t9E35262DC0C14D7FE2265D47AB2D3FC9CAAE023D* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs::get_interactableObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InteractableUnregisteredEventArgs_get_interactableObject_m741DCCDBE1F7476E90F779B28768D86CD0BD02D0_inline (InteractableUnregisteredEventArgs_tEA628E3D57FA85080BB7D4A958AA2A0F6F82BC21* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Remove(T)
inline bool List_1_Remove_m255A559C99BD8172BA90932E05BCE4659425E4A6 (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor>()
inline ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* Object_FindObjectOfType_TisARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_m7A34081C5B7380D280DC14900880531006888A3F (const RuntimeMethod* method)
{
	return ((  ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* ARGestureInteractor_get_instance_m487C0BDE418AFFC2C191353220033315B57D7AC6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.DragGesture>::set_arSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
inline void GestureRecognizer_1_set_arSessionOrigin_m1F60BAB968C6DD30D003F9BF6A4E12391F1F11C4_inline (GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tE0DB5517ADD5BB83AB793926C41D262C9D7D358B*, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*, const RuntimeMethod*))GestureRecognizer_1_set_arSessionOrigin_m0BDE8B137B34182C1B64B407FBEEC6E17A36FE83_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture>::set_arSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
inline void GestureRecognizer_1_set_arSessionOrigin_mBD332E3A86C46D9E8F1AAB6908231CCF74353A93_inline (GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_t39120F08C92375D6A5B7C9091DC591F2F687AD6A*, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*, const RuntimeMethod*))GestureRecognizer_1_set_arSessionOrigin_m0BDE8B137B34182C1B64B407FBEEC6E17A36FE83_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>::set_arSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
inline void GestureRecognizer_1_set_arSessionOrigin_mB41DC518ED3DCEE707F37461385D649AFA303669_inline (GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tEDF23CA6C0B0F8A10C0147F9CCF717751B5B475B*, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*, const RuntimeMethod*))GestureRecognizer_1_set_arSessionOrigin_m0BDE8B137B34182C1B64B407FBEEC6E17A36FE83_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TapGesture>::set_arSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
inline void GestureRecognizer_1_set_arSessionOrigin_m1055A2AE03E62AC600D11EDD5B00C3D0940A3B52_inline (GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_tEA54E8B3E404B2C7A378CFE748A73BD3DC036650*, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*, const RuntimeMethod*))GestureRecognizer_1_set_arSessionOrigin_m0BDE8B137B34182C1B64B407FBEEC6E17A36FE83_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>::set_arSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
inline void GestureRecognizer_1_set_arSessionOrigin_m4CC3C8569C54D32F5C786C2A0B227223375936A5_inline (GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GestureRecognizer_1_t06AA3B82A2A73302D04F25D34730CDA856E3F07E*, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*, const RuntimeMethod*))GestureRecognizer_1_set_arSessionOrigin_m0BDE8B137B34182C1B64B407FBEEC6E17A36FE83_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::.ctor()
inline void List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractor__ctor_mCEB69DD262DE1CF1951979855AFC2FEEC41806FE (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARObjectPlacementEvent__ctor_m6FEAABBFB18CDFDA2FDE6975DEC8DC902CD0A2DE (ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m2D53D243A295AB2EB7020C699F8FEA08430141AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m2D53D243A295AB2EB7020C699F8FEA08430141AD(__this, UnityEvent_1__ctor_m2D53D243A295AB2EB7020C699F8FEA08430141AD_RuntimeMethod_var);
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
// UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::get_placementInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* ARObjectPlacementEventArgs_get_placementInteractable_m8C7A1894D773619285B83DC0C2B7EFC1BC78F44E (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, const RuntimeMethod* method) 
{
	{
		// public ARPlacementInteractable placementInteractable { get; set; }
		ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* L_0 = __this->___U3CplacementInteractableU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::set_placementInteractable(UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARObjectPlacementEventArgs_set_placementInteractable_m1E993691A9845DC0F1923B1B0794F7068B72792F (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* ___value0, const RuntimeMethod* method) 
{
	{
		// public ARPlacementInteractable placementInteractable { get; set; }
		ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* L_0 = ___value0;
		__this->___U3CplacementInteractableU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementInteractableU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::get_placementObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARObjectPlacementEventArgs_get_placementObject_m4694637DF487CA6E3DEBC300876969D3D85CD078 (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject placementObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CplacementObjectU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::set_placementObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARObjectPlacementEventArgs_set_placementObject_m4669BEA08FA461E5495C94C6C951EE866B8E57A7 (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject placementObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CplacementObjectU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementObjectU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARObjectPlacementEventArgs__ctor_m993339704132DE2A4AA9F1F0E0850468A6CF743F (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::get_placementPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARPlacementInteractable_get_placementPrefab_m2001ED3FB62E9CE5CDD7C571155A0D57D47C3856 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PlacementPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PlacementPrefab_47;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::set_placementPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacementInteractable_set_placementPrefab_m398111C81631149B92E9CFA1523D2A800DA9AF64 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PlacementPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_PlacementPrefab_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlacementPrefab_47), (void*)L_0);
		return;
	}
}
// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::get_fallbackLayerMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ARPlacementInteractable_get_fallbackLayerMask_mDFC88F34455FB81C8BE65D16508CBD6962ABE2F2 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FallbackLayerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_FallbackLayerMask_48;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::set_fallbackLayerMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacementInteractable_set_fallbackLayerMask_m307FFCC17E2D3CB52BD5D0DD0E65A444FC5EA62A (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FallbackLayerMask = value;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->___m_FallbackLayerMask_48 = L_0;
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEvent UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::get_objectPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* ARPlacementInteractable_get_objectPlaced_m5A77F589B640E61766B2C9CD332EB15552ED9221 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectPlaced;
		ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* L_0 = __this->___m_ObjectPlaced_49;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::set_objectPlaced(UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacementInteractable_set_objectPlaced_mE55CE1041D2F0BCEBE31B595B7BDA02227D545FB (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectPlaced = value;
		ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* L_0 = ___value0;
		__this->___m_ObjectPlaced_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectPlaced_49), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::TryGetPlacementPose(UnityEngine.XR.Interaction.Toolkit.AR.TapGesture,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARPlacementInteractable_TryGetPlacementPose_m987DC79D4020D06071A9FFC66D9F35BA93374C36 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* ___gesture0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B5_0 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B11_0 = NULL;
	{
		//             var hit = xrOrigin != null
		//                 ? GestureTransformationUtility.Raycast(gesture.startPosition, s_Hits, xrOrigin, TrackableType.PlaneWithinPolygon, m_FallbackLayerMask)
		// #pragma warning disable 618 // Calling deprecated property to help with backwards compatibility.
		//                 : arSessionOrigin != null && GestureTransformationUtility.Raycast(gesture.startPosition, s_Hits, arSessionOrigin, TrackableType.PlaneWithinPolygon, m_FallbackLayerMask);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0;
		L_0 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0043;
		}
	}
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_2;
		L_2 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_4 = ___gesture0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = TapGesture_get_startPosition_mB5CAC1D326B19835575B01A47968972AE84DDF7D_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_6 = ((ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var))->___s_Hits_51;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_7;
		L_7 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = __this->___m_FallbackLayerMask_48;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = GestureTransformationUtility_Raycast_mF399B72ACC81FE80A07517AF470450FA45C8302D(L_5, L_6, L_7, 1, L_9, NULL);
		G_B5_0 = ((int32_t)(L_10));
		goto IL_0065;
	}

IL_0040:
	{
		G_B5_0 = 0;
		goto IL_0065;
	}

IL_0043:
	{
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_11 = ___gesture0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = TapGesture_get_startPosition_mB5CAC1D326B19835575B01A47968972AE84DDF7D_inline(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_13 = ((ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var))->___s_Hits_51;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_14;
		L_14 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_15 = __this->___m_FallbackLayerMask_48;
		int32_t L_16;
		L_16 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = GestureTransformationUtility_Raycast_m100C3FDFB3F72340C265D88DDC7F3C72914FC845(L_12, L_13, L_14, 1, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
	}

IL_0065:
	{
		// if (hit)
		if (!G_B5_0)
		{
			goto IL_0100;
		}
	}
	{
		// pose = s_Hits[0].pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_18 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_19 = ((ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var))->___s_Hits_51;
		NullCheck(L_19);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_20;
		L_20 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_19, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_1 = L_20;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21;
		L_21 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_1), NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_18 = L_21;
		//                 var camera = xrOrigin != null
		//                     ? xrOrigin.Camera
		// #pragma warning disable 618 // Calling deprecated property to help with backwards compatibility.
		//                     : (arSessionOrigin != null ? arSessionOrigin.camera : Camera.main);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_22;
		L_22 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_23)
		{
			goto IL_00b3;
		}
	}
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_24;
		L_24 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_25)
		{
			goto IL_00a6;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26;
		L_26 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		G_B11_0 = L_26;
		goto IL_00be;
	}

IL_00a6:
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_27;
		L_27 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		NullCheck(L_27);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28;
		L_28 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(L_27, NULL);
		G_B11_0 = L_28;
		goto IL_00be;
	}

IL_00b3:
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_29;
		L_29 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		NullCheck(L_29);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30;
		L_30 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_29, NULL);
		G_B11_0 = L_30;
	}

IL_00be:
	{
		V_0 = G_B11_0;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_00ca;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00ca:
	{
		// return Vector3.Dot(camera.transform.position - pose.position, pose.rotation * Vector3.up) >= 0f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33 = V_0;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_36 = ___pose1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_35, L_37, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_39 = ___pose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = L_39->___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_40, L_41, NULL);
		float L_43;
		L_43 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_38, L_42, NULL);
		return (bool)((((int32_t)((!(((float)L_43) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0100:
	{
		// pose = default;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_44 = ___pose1;
		il2cpp_codegen_initobj(L_44, sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971));
		// return false;
		return (bool)0;
	}
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::PlaceObject(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARPlacementInteractable_PlaceObject_m42C1110B36184AA476204F5FDEE3051A6AB9CDE7 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79141A0BEBFDCEFBE6DB72B33554C4A10BB0AF9A);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	{
		// var placementObject = Instantiate(m_PlacementPrefab, pose.position, pose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PlacementPrefab_47;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = ___pose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = L_3.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// var anchor = new GameObject("PlacementAnchor").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteral79141A0BEBFDCEFBE6DB72B33554C4A10BB0AF9A, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		V_0 = L_7;
		// anchor.position = pose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___position_0;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_10, NULL);
		// anchor.rotation = pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = ___pose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12.___rotation_1;
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_13, NULL);
		// placementObject.transform.parent = anchor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_5;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_0;
		NullCheck(L_15);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_15, L_16, NULL);
		//             var trackablesParent = xrOrigin != null
		//                 ? xrOrigin.TrackablesParent
		// #pragma warning disable 618 // Calling deprecated property to help with backwards compatibility.
		//                 : (arSessionOrigin != null ? arSessionOrigin.trackablesParent : null);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_17;
		L_17 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = L_14;
		if (L_18)
		{
			G_B4_0 = L_14;
			goto IL_0077;
		}
	}
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_19;
		L_19 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = G_B1_0;
		if (L_20)
		{
			G_B3_0 = G_B1_0;
			goto IL_006a;
		}
	}
	{
		G_B5_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		G_B5_1 = G_B2_0;
		goto IL_0082;
	}

IL_006a:
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_21;
		L_21 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_21, NULL);
		G_B5_0 = L_22;
		G_B5_1 = G_B3_0;
		goto IL_0082;
	}

IL_0077:
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_23;
		L_23 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = XROrigin_get_TrackablesParent_m6F7933DF03A5376C31D328F865F77D28EEC18E9C_inline(L_23, NULL);
		G_B5_0 = L_24;
		G_B5_1 = G_B4_0;
	}

IL_0082:
	{
		V_1 = G_B5_0;
		// if (trackablesParent != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = G_B5_1;
		if (!L_26)
		{
			G_B7_0 = G_B5_1;
			goto IL_0093;
		}
	}
	{
		// anchor.parent = trackablesParent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_1;
		NullCheck(L_27);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_27, L_28, NULL);
		G_B7_0 = G_B6_0;
	}

IL_0093:
	{
		// return placementObject;
		return G_B7_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::OnObjectPlaced(UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacementInteractable_OnObjectPlaced_mBAA140F8BB3ECD331D97590491F76E88F3D4CDE2 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m3EF7628399D131F068AD4ABD837EFBBF1295D54B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mD15BEE2F2EF8CE3D146D9DF66CD0B409BF8355B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* G_B2_0 = NULL;
	ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* G_B1_0 = NULL;
	ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* G_B5_0 = NULL;
	ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* G_B4_0 = NULL;
	{
		// m_ObjectPlaced?.Invoke(args);
		ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* L_0 = __this->___m_ObjectPlaced_49;
		ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* L_2 = ___args0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m3EF7628399D131F068AD4ABD837EFBBF1295D54B(G_B2_0, L_2, UnityEvent_1_Invoke_m3EF7628399D131F068AD4ABD837EFBBF1295D54B_RuntimeMethod_var);
	}

IL_0012:
	{
		// m_OnObjectPlaced?.Invoke(args.placementInteractable, args.placementObject);
		ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* L_3 = __this->___m_OnObjectPlaced_52;
		ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* L_5 = ___args0;
		NullCheck(L_5);
		ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* L_6;
		L_6 = ARObjectPlacementEventArgs_get_placementInteractable_m8C7A1894D773619285B83DC0C2B7EFC1BC78F44E_inline(L_5, NULL);
		ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* L_7 = ___args0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = ARObjectPlacementEventArgs_get_placementObject_m4694637DF487CA6E3DEBC300876969D3D85CD078_inline(L_7, NULL);
		NullCheck(G_B5_0);
		UnityEvent_2_Invoke_mD15BEE2F2EF8CE3D146D9DF66CD0B409BF8355B8(G_B5_0, L_6, L_8, UnityEvent_2_Invoke_mD15BEE2F2EF8CE3D146D9DF66CD0B409BF8355B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::CanStartManipulationForGesture(UnityEngine.XR.Interaction.Toolkit.AR.TapGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARPlacementInteractable_CanStartManipulationForGesture_m011D1F4524DDCAC00E7C384A7B56669F3F9C91E4 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_get_targetObject_mA70175C7B2483508A5C33A52CA96255F089324A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gesture.targetObject == null;
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_0 = ___gesture0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Gesture_1_get_targetObject_mA70175C7B2483508A5C33A52CA96255F089324A3_inline(L_0, Gesture_1_get_targetObject_mA70175C7B2483508A5C33A52CA96255F089324A3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::OnEndManipulation(UnityEngine.XR.Interaction.Toolkit.AR.TapGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacementInteractable_OnEndManipulation_m600F03D92AD03F1CBC5E0237793F05195B6172C9 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_get_isCanceled_m8959E8FE03351E5641D8809791FA56BE6D9FCFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// base.OnEndManipulation(gesture);
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_0 = ___gesture0;
		ARBaseGestureInteractable_OnEndManipulation_m3EC5A5139E52A986996E3DA2E344A67C9E354889(__this, L_0, NULL);
		// if (gesture.isCanceled)
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_1 = ___gesture0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Gesture_1_get_isCanceled_m8959E8FE03351E5641D8809791FA56BE6D9FCFF5_inline(L_1, Gesture_1_get_isCanceled_m8959E8FE03351E5641D8809791FA56BE6D9FCFF5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (xrOrigin == null && arSessionOrigin == null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_3;
		L_3 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_5;
		L_5 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		return;
	}

IL_002d:
	{
		// if (TryGetPlacementPose(gesture, out var pose))
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_7 = ___gesture0;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(110 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::TryGetPlacementPose(UnityEngine.XR.Interaction.Toolkit.AR.TapGesture,UnityEngine.Pose&) */, __this, L_7, (&V_0));
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// var placementObject = PlaceObject(pose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = VirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(111 /* UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::PlaceObject(UnityEngine.Pose) */, __this, L_9);
		V_1 = L_10;
		// m_ObjectPlacementEventArgs.placementInteractable = this;
		ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* L_11 = __this->___m_ObjectPlacementEventArgs_50;
		NullCheck(L_11);
		ARObjectPlacementEventArgs_set_placementInteractable_m1E993691A9845DC0F1923B1B0794F7068B72792F_inline(L_11, __this, NULL);
		// m_ObjectPlacementEventArgs.placementObject = placementObject;
		ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* L_12 = __this->___m_ObjectPlacementEventArgs_50;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		NullCheck(L_12);
		ARObjectPlacementEventArgs_set_placementObject_m4669BEA08FA461E5495C94C6C951EE866B8E57A7_inline(L_12, L_13, NULL);
		// OnObjectPlaced(m_ObjectPlacementEventArgs);
		ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* L_14 = __this->___m_ObjectPlacementEventArgs_50;
		VirtualActionInvoker1< ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* >::Invoke(112 /* System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::OnObjectPlaced(UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacementEventArgs) */, __this, L_14);
	}

IL_0064:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacedEvent UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::get_onObjectPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* ARPlacementInteractable_get_onObjectPlaced_m9DF27F9088B74E07BD6F9FB8EDE0875B0DBC4BDE (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnObjectPlaced;
		ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* L_0 = __this->___m_OnObjectPlaced_52;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::set_onObjectPlaced(UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacementInteractable_set_onObjectPlaced_m7597BA1A1472092BEDAD9E62C0CA3D201ECED3EC (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_OnObjectPlaced = value;
		ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* L_0 = ___value0;
		__this->___m_OnObjectPlaced_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnObjectPlaced_52), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacementInteractable__ctor_m4EAD0538822BFBBDA0E901E8DC336C3A1F0FA525 (ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARObjectPlacementEvent m_ObjectPlaced = new ARObjectPlacementEvent();
		ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529* L_0 = (ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529*)il2cpp_codegen_object_new(ARObjectPlacementEvent_t7B62FBDB0286659925ECE875323B4FAF2CAE0529_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ARObjectPlacementEvent__ctor_m6FEAABBFB18CDFDA2FDE6975DEC8DC902CD0A2DE(L_0, NULL);
		__this->___m_ObjectPlaced_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectPlaced_49), (void*)L_0);
		// readonly ARObjectPlacementEventArgs m_ObjectPlacementEventArgs = new ARObjectPlacementEventArgs();
		ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* L_1 = (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176*)il2cpp_codegen_object_new(ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ARObjectPlacementEventArgs__ctor_m993339704132DE2A4AA9F1F0E0850468A6CF743F(L_1, NULL);
		__this->___m_ObjectPlacementEventArgs_50 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectPlacementEventArgs_50), (void*)L_1);
		// ARObjectPlacedEvent m_OnObjectPlaced = new ARObjectPlacedEvent();
		ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* L_2 = (ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1*)il2cpp_codegen_object_new(ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ARObjectPlacedEvent__ctor_mFA9B0898344B8A43C2CBE6EBB1A2D2F7B7039851(L_2, NULL);
		__this->___m_OnObjectPlaced_52 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnObjectPlaced_52), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		ARBaseGestureInteractable__ctor_m7D7701B9E98DDBEF1B8DE65810A1CB5DA566B630(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacementInteractable__cctor_mA3141B123BE7F2A4052D7FE5CA209428E5770987 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var))->___s_Hits_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A_il2cpp_TypeInfo_var))->___s_Hits_51), (void*)L_0);
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
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARObjectPlacedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARObjectPlacedEvent__ctor_mFA9B0898344B8A43C2CBE6EBB1A2D2F7B7039851 (ARObjectPlacedEvent_t4F11ACC1CB033D99DD61A58C4332BB6418E5A3E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m626A15219B6D0A85692BA596E19C64B3E97526D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m626A15219B6D0A85692BA596E19C64B3E97526D5(__this, UnityEvent_2__ctor_m626A15219B6D0A85692BA596E19C64B3E97526D5_RuntimeMethod_var);
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
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::get_rotationRateDegreesDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARRotationInteractable_get_rotationRateDegreesDrag_m45BACD86143B2A04DF8D7CC88E0F52463FF9C041 (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RotationRateDegreesDrag;
		float L_0 = __this->___m_RotationRateDegreesDrag_47;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::set_rotationRateDegreesDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRotationInteractable_set_rotationRateDegreesDrag_m5823B47C36A292DC85E94E31006801C33996B00D (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RotationRateDegreesDrag = value;
		float L_0 = ___value0;
		__this->___m_RotationRateDegreesDrag_47 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::get_rotationRateDegreesTwist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARRotationInteractable_get_rotationRateDegreesTwist_mB83DC78E9F635BAB7D1FBFEA9B9FB66BAE76A545 (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RotationRateDegreesTwist;
		float L_0 = __this->___m_RotationRateDegreesTwist_48;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::set_rotationRateDegreesTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRotationInteractable_set_rotationRateDegreesTwist_m06B8C662AD869274B62603F5065004F13DB18044 (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RotationRateDegreesTwist = value;
		float L_0 = ___value0;
		__this->___m_RotationRateDegreesTwist_48 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::CanStartManipulationForGesture(UnityEngine.XR.Interaction.Toolkit.AR.DragGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRotationInteractable_CanStartManipulationForGesture_m332ED2BD02872C957A24CBDE8DFE4DB5CF2A07CB (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IsGameObjectSelected() && gesture.targetObject == null;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(107 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::IsGameObjectSelected() */, __this);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* L_1 = ___gesture0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_inline(L_1, Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::CanStartManipulationForGesture(UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRotationInteractable_CanStartManipulationForGesture_mC76BAF691A53491AEA6402352D8B78275C082666 (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, TwistGesture_t8A413739CB827FAF4260E739A66DBF40CDADFDE7* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_get_targetObject_m80A87A63F0EFC40197D7D8BE34A89A3B77526C41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IsGameObjectSelected() && gesture.targetObject == null;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(107 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::IsGameObjectSelected() */, __this);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		TwistGesture_t8A413739CB827FAF4260E739A66DBF40CDADFDE7* L_1 = ___gesture0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Gesture_1_get_targetObject_m80A87A63F0EFC40197D7D8BE34A89A3B77526C41_inline(L_1, Gesture_1_get_targetObject_m80A87A63F0EFC40197D7D8BE34A89A3B77526C41_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::OnContinueManipulation(UnityEngine.XR.Interaction.Toolkit.AR.DragGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRotationInteractable_OnContinueManipulation_mF91B0FC1E589DCDBA30784B1D047E45C75C08A8F (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B5_0 = NULL;
	{
		//             var camera = xrOrigin != null
		//                 ? xrOrigin.Camera
		// #pragma warning disable 618 // Calling deprecated property to help with backwards compatibility.
		//                 : (arSessionOrigin != null ? arSessionOrigin.camera : Camera.main);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0;
		L_0 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_2;
		L_2 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		G_B5_0 = L_4;
		goto IL_003b;
	}

IL_0023:
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_5;
		L_5 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(L_5, NULL);
		G_B5_0 = L_6;
		goto IL_003b;
	}

IL_0030:
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_7;
		L_7 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		NullCheck(L_7);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_7, NULL);
		G_B5_0 = L_8;
	}

IL_003b:
	{
		V_0 = G_B5_0;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// return;
		return;
	}

IL_0046:
	{
		// var forward = camera.transform.forward;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		// var worldToVerticalOrientedDevice = Quaternion.Inverse(Quaternion.LookRotation(forward, Vector3.up));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_13, L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_15, NULL);
		// var deviceToWorld = camera.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = V_0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		V_1 = L_19;
		// var rotatedDelta = worldToVerticalOrientedDevice * deviceToWorld * gesture.delta;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_16, L_20, NULL);
		DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* L_22 = ___gesture0;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = DragGesture_get_delta_mA9DCFB7CC40377D0ED15A0CB25B6157DB67E64F7_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_21, L_24, NULL);
		V_2 = L_25;
		// var rotationAmount = -1f * (rotatedDelta.x / Screen.dpi) * m_RotationRateDegreesDrag;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		float L_27 = L_26.___x_2;
		float L_28;
		L_28 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		float L_29 = __this->___m_RotationRateDegreesDrag_47;
		V_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-1.0f), ((float)(L_27/L_28)))), L_29));
		// transform.Rotate(0f, rotationAmount, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_31 = V_3;
		NullCheck(L_30);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_30, (0.0f), L_31, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::OnContinueManipulation(UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRotationInteractable_OnContinueManipulation_mF03A3D5E5161EF277F6A9092C396DE9064A887B9 (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, TwistGesture_t8A413739CB827FAF4260E739A66DBF40CDADFDE7* ___gesture0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var rotationAmount = -gesture.deltaRotation * m_RotationRateDegreesTwist;
		TwistGesture_t8A413739CB827FAF4260E739A66DBF40CDADFDE7* L_0 = ___gesture0;
		NullCheck(L_0);
		float L_1;
		L_1 = TwistGesture_get_deltaRotation_m66CBD6DD13F23FB51479315D9EB022B5210DED9D_inline(L_0, NULL);
		float L_2 = __this->___m_RotationRateDegreesTwist_48;
		V_0 = ((float)il2cpp_codegen_multiply(((-L_1)), L_2));
		// transform.Rotate(0f, rotationAmount, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_4 = V_0;
		NullCheck(L_3);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_3, (0.0f), L_4, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRotationInteractable__ctor_mA72FB121E2FCBD152D18E022DEDF50CB220DF7E8 (ARRotationInteractable_t48B10232F6C4985088C8EC46E393ECBAA06F578F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_RotationRateDegreesDrag = 100f;
		__this->___m_RotationRateDegreesDrag_47 = (100.0f);
		// float m_RotationRateDegreesTwist = 2.5f;
		__this->___m_RotationRateDegreesTwist_48 = (2.5f);
		il2cpp_codegen_runtime_class_init_inline(ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		ARBaseGestureInteractable__ctor_m7D7701B9E98DDBEF1B8DE65810A1CB5DA566B630(__this, NULL);
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
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_minScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MinScale;
		float L_0 = __this->___m_MinScale_47;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::set_minScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_set_minScale_mA0DBB1AA8F6FA1A97FFE1AED42AE1FA5A529E66F (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MinScale = value;
		float L_0 = ___value0;
		__this->___m_MinScale_47 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_maxScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_maxScale_m167D8A03D65ABA90040D8EF2738E04CEDD589FC6 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxScale;
		float L_0 = __this->___m_MaxScale_48;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::set_maxScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_set_maxScale_mD64819F7A5FF5355F592B2A3D9F5FC6CA2118F3B (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxScale = value;
		float L_0 = ___value0;
		__this->___m_MaxScale_48 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_elasticRatioLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_elasticRatioLimit_m88EAFF6B41E90A9069F950C3DB920CFD43EFC7A1 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ElasticRatioLimit;
		float L_0 = __this->___m_ElasticRatioLimit_49;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::set_elasticRatioLimit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_set_elasticRatioLimit_mF18BCD98D0ED2017AF401A4545B412BF4A95B061 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ElasticRatioLimit = value;
		float L_0 = ___value0;
		__this->___m_ElasticRatioLimit_49 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_sensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_sensitivity_mCD5CC891C9BBB51493B1983FC058D8E3783B2ABE (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Sensitivity;
		float L_0 = __this->___m_Sensitivity_50;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::set_sensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_set_sensitivity_m59A704D1C70169DC869D5EF95B1BAC7A29240E3D (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Sensitivity = value;
		float L_0 = ___value0;
		__this->___m_Sensitivity_50 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_elasticity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_elasticity_m67BCB1778B85352DBD6DE51D9B4D9C3E2543CBAF (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Elasticity;
		float L_0 = __this->___m_Elasticity_51;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::set_elasticity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_set_elasticity_m0840D0F15A86EE92CEDD0948C223FD2C4F6B77B6 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Elasticity = value;
		float L_0 = ___value0;
		__this->___m_Elasticity_51 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_scaleDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_scaleDelta_m4AF22862C91E3D881108E421F63E856B093ADA67 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral672B1955AE66B2D94961FD791AC80B2CB0CA8E48);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (minScale > maxScale)
		float L_0;
		L_0 = ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline(__this, NULL);
		float L_1;
		L_1 = ARScaleInteractable_get_maxScale_m167D8A03D65ABA90040D8EF2738E04CEDD589FC6_inline(__this, NULL);
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("minScale must be smaller than maxScale.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(_stringLiteral672B1955AE66B2D94961FD791AC80B2CB0CA8E48, __this, NULL);
		// return 0f;
		return (0.0f);
	}

IL_001f:
	{
		// return maxScale - minScale;
		float L_2;
		L_2 = ARScaleInteractable_get_maxScale_m167D8A03D65ABA90040D8EF2738E04CEDD589FC6_inline(__this, NULL);
		float L_3;
		L_3 = ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline(__this, NULL);
		return ((float)il2cpp_codegen_subtract(L_2, L_3));
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_clampedScaleRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_get_clampedScaleRatio_m324538D5A1535B2266FF40ADA1BE961335574627 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// float clampedScaleRatio => Mathf.Clamp01(m_CurrentScaleRatio);
		float L_0 = __this->___m_CurrentScaleRatio_52;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::get_currentScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ARScaleInteractable_get_currentScale_m9CEC115B6079094DC3912E4D8BD7D5F80A8C4E4C (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var elasticScaleRatio = clampedScaleRatio + ElasticDelta();
		float L_0;
		L_0 = ARScaleInteractable_get_clampedScaleRatio_m324538D5A1535B2266FF40ADA1BE961335574627(__this, NULL);
		float L_1;
		L_1 = ARScaleInteractable_ElasticDelta_mCA360696193D87145EB3E00F2CA0B2EA49C1A933(__this, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, L_1));
		// var elasticScale = minScale + (elasticScaleRatio * scaleDelta);
		float L_2;
		L_2 = ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline(__this, NULL);
		float L_3 = V_0;
		float L_4;
		L_4 = ARScaleInteractable_get_scaleDelta_m4AF22862C91E3D881108E421F63E856B093ADA67(__this, NULL);
		// return new Vector3(elasticScale, elasticScale, elasticScale);
		float L_5 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_3, L_4))));
		float L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_5, L_6, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_OnValidate_mE325298B10C395901D7A753ADF759BA43CFDAFA5 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// minScale = Mathf.Max(0f, minScale);
		float L_0;
		L_0 = ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline(__this, NULL);
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), L_0, NULL);
		ARScaleInteractable_set_minScale_mA0DBB1AA8F6FA1A97FFE1AED42AE1FA5A529E66F_inline(__this, L_1, NULL);
		// maxScale = Mathf.Max(Mathf.Max(0f, minScale), maxScale);
		float L_2;
		L_2 = ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline(__this, NULL);
		float L_3;
		L_3 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), L_2, NULL);
		float L_4;
		L_4 = ARScaleInteractable_get_maxScale_m167D8A03D65ABA90040D8EF2738E04CEDD589FC6_inline(__this, NULL);
		float L_5;
		L_5 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_3, L_4, NULL);
		ARScaleInteractable_set_maxScale_mD64819F7A5FF5355F592B2A3D9F5FC6CA2118F3B_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_OnEnable_m61E7AC85C02CEC95FCF795BDC494051AA97514DB (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// base.OnEnable();
		ARBaseGestureInteractable_OnEnable_m27914543513BF1A390E58E6204294749784086A1(__this, NULL);
		// m_CurrentScaleRatio = (transform.localScale.x - minScale) / scaleDelta;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3;
		L_3 = ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline(__this, NULL);
		float L_4;
		L_4 = ARScaleInteractable_get_scaleDelta_m4AF22862C91E3D881108E421F63E856B093ADA67(__this, NULL);
		__this->___m_CurrentScaleRatio_52 = ((float)(((float)il2cpp_codegen_subtract(L_2, L_3))/L_4));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_ProcessInteractable_mED2CA2C4281067FEB642956A3ADB50DE43E9D86D (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Late)
		int32_t L_1 = ___updatePhase0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		// if (!m_IsScaling)
		bool L_2 = __this->___m_IsScaling_53;
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		// m_CurrentScaleRatio =
		//     Mathf.Lerp(m_CurrentScaleRatio, clampedScaleRatio, Time.deltaTime * 8f);
		float L_3 = __this->___m_CurrentScaleRatio_52;
		float L_4;
		L_4 = ARScaleInteractable_get_clampedScaleRatio_m324538D5A1535B2266FF40ADA1BE961335574627(__this, NULL);
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_6;
		L_6 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_3, L_4, ((float)il2cpp_codegen_multiply(L_5, (8.0f))), NULL);
		__this->___m_CurrentScaleRatio_52 = L_6;
		// transform.localScale = currentScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = ARScaleInteractable_get_currentScale_m9CEC115B6079094DC3912E4D8BD7D5F80A8C4E4C(__this, NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::CanStartManipulationForGesture(UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARScaleInteractable_CanStartManipulationForGesture_m7B756BCB1C886DB1BE00A4867DB97856BC25517E (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_get_targetObject_m74E3DD10D62DB8290726983DF17E37C788FA308B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IsGameObjectSelected() && gesture.targetObject == null;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(107 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARBaseGestureInteractable::IsGameObjectSelected() */, __this);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* L_1 = ___gesture0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Gesture_1_get_targetObject_m74E3DD10D62DB8290726983DF17E37C788FA308B_inline(L_1, Gesture_1_get_targetObject_m74E3DD10D62DB8290726983DF17E37C788FA308B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::OnStartManipulation(UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_OnStartManipulation_mC08C59437A829115B69E61AC59B92C2B4085B534 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* ___gesture0, const RuntimeMethod* method) 
{
	{
		// m_IsScaling = true;
		__this->___m_IsScaling_53 = (bool)1;
		// m_CurrentScaleRatio = (transform.localScale.x - minScale) / scaleDelta;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3;
		L_3 = ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline(__this, NULL);
		float L_4;
		L_4 = ARScaleInteractable_get_scaleDelta_m4AF22862C91E3D881108E421F63E856B093ADA67(__this, NULL);
		__this->___m_CurrentScaleRatio_52 = ((float)(((float)il2cpp_codegen_subtract(L_2, L_3))/L_4));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::OnContinueManipulation(UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_OnContinueManipulation_mE04196C430A8BA3D785A55275FAF8EA9B486CDC8 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTouchesUtility_t21BF3E49166B77B8A88AF1653443BF68D87AE495_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_Cancel_m4D73AD32139C582A8AAD006FF0028C94DA2511A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurrentScaleRatio += sensitivity * GestureTouchesUtility.PixelsToInches(gesture.gapDelta);
		float L_0 = __this->___m_CurrentScaleRatio_52;
		float L_1;
		L_1 = ARScaleInteractable_get_sensitivity_mCD5CC891C9BBB51493B1983FC058D8E3783B2ABE_inline(__this, NULL);
		PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* L_2 = ___gesture0;
		NullCheck(L_2);
		float L_3;
		L_3 = PinchGesture_get_gapDelta_m2D36FE8FA4082FC4B55F7DDF2454598C4350AD8D_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureTouchesUtility_t21BF3E49166B77B8A88AF1653443BF68D87AE495_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = GestureTouchesUtility_PixelsToInches_m6E76B0480CEE48CBD3D6E754A930DBE52699C95D(L_3, NULL);
		__this->___m_CurrentScaleRatio_52 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_4))));
		// transform.localScale = currentScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = ARScaleInteractable_get_currentScale_m9CEC115B6079094DC3912E4D8BD7D5F80A8C4E4C(__this, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
		// if (m_CurrentScaleRatio < -elasticRatioLimit
		//     || m_CurrentScaleRatio > (1f + elasticRatioLimit))
		float L_7 = __this->___m_CurrentScaleRatio_52;
		float L_8;
		L_8 = ARScaleInteractable_get_elasticRatioLimit_m88EAFF6B41E90A9069F950C3DB920CFD43EFC7A1_inline(__this, NULL);
		if ((((float)L_7) < ((float)((-L_8)))))
		{
			goto IL_0053;
		}
	}
	{
		float L_9 = __this->___m_CurrentScaleRatio_52;
		float L_10;
		L_10 = ARScaleInteractable_get_elasticRatioLimit_m88EAFF6B41E90A9069F950C3DB920CFD43EFC7A1_inline(__this, NULL);
		if ((!(((float)L_9) > ((float)((float)il2cpp_codegen_add((1.0f), L_10))))))
		{
			goto IL_0059;
		}
	}

IL_0053:
	{
		// gesture.Cancel();
		PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* L_11 = ___gesture0;
		NullCheck(L_11);
		Gesture_1_Cancel_m4D73AD32139C582A8AAD006FF0028C94DA2511A2(L_11, Gesture_1_Cancel_m4D73AD32139C582A8AAD006FF0028C94DA2511A2_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::OnEndManipulation(UnityEngine.XR.Interaction.Toolkit.AR.PinchGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable_OnEndManipulation_mEFC5B20CB306FD1BD2A963460576EFE7E70F47EB (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* ___gesture0, const RuntimeMethod* method) 
{
	{
		// m_IsScaling = false;
		__this->___m_IsScaling_53 = (bool)0;
		// }
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::ElasticDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARScaleInteractable_ElasticDelta_mCA360696193D87145EB3E00F2CA0B2EA49C1A933 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (m_CurrentScaleRatio > 1f)
		float L_0 = __this->___m_CurrentScaleRatio_52;
		if ((!(((float)L_0) > ((float)(1.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		// overRatio = m_CurrentScaleRatio - 1f;
		float L_1 = __this->___m_CurrentScaleRatio_52;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, (1.0f)));
		goto IL_0038;
	}

IL_001c:
	{
		// else if (m_CurrentScaleRatio < 0f)
		float L_2 = __this->___m_CurrentScaleRatio_52;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// overRatio = m_CurrentScaleRatio;
		float L_3 = __this->___m_CurrentScaleRatio_52;
		V_0 = L_3;
		goto IL_0038;
	}

IL_0032:
	{
		// return 0f;
		return (0.0f);
	}

IL_0038:
	{
		// return (1f - (1f / ((Mathf.Abs(overRatio) * elasticity) + 1f))) * Mathf.Sign(overRatio);
		float L_4 = V_0;
		float L_5;
		L_5 = fabsf(L_4);
		float L_6;
		L_6 = ARScaleInteractable_get_elasticity_m67BCB1778B85352DBD6DE51D9B4D9C3E2543CBAF_inline(__this, NULL);
		float L_7 = V_0;
		float L_8;
		L_8 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_7, NULL);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, L_6)), (1.0f))))))), L_8));
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARScaleInteractable__ctor_mAD014E0F828B208D2862EF42FF30AD80F73FA976 (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_MinScale = 0.75f;
		__this->___m_MinScale_47 = (0.75f);
		// float m_MaxScale = 1.75f;
		__this->___m_MaxScale_48 = (1.75f);
		// float m_Sensitivity = 0.75f;
		__this->___m_Sensitivity_50 = (0.75f);
		// float m_Elasticity = 0.15f;
		__this->___m_Elasticity_51 = (0.150000006f);
		il2cpp_codegen_runtime_class_init_inline(ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		ARBaseGestureInteractable__ctor_m7D7701B9E98DDBEF1B8DE65810A1CB5DA566B630(__this, NULL);
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
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::get_selectionVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARSelectionInteractable_get_selectionVisualization_m14429A4E8DFEB2764FEDDC06AE3601B1B7FE5CA1 (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectionVisualization;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_SelectionVisualization_47;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::set_selectionVisualization(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSelectionInteractable_set_selectionVisualization_mB54A0769C84516E5CD639BCFA0AEFDAE4E5789AC (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SelectionVisualization = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_SelectionVisualization_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SelectionVisualization_47), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARSelectionInteractable_IsSelectableBy_m7CC45E6897787D20356898A7386A3613E0EF76A5 (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsSelectableBy(IXRSelectInteractor interactor) => interactor is ARGestureInteractor && m_GestureSelected;
		RuntimeObject* L_0 = ___interactor0;
		if (!((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745*)IsInstClass((RuntimeObject*)L_0, ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var)))
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->___m_GestureSelected_48;
		return L_1;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::CanStartManipulationForGesture(UnityEngine.XR.Interaction.Toolkit.AR.TapGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARSelectionInteractable_CanStartManipulationForGesture_m99B3B75CEA35C5B02EBCD2B5519A0415B58742EF (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* ___gesture0, const RuntimeMethod* method) 
{
	{
		// protected override bool CanStartManipulationForGesture(TapGesture gesture) => true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::OnEndManipulation(UnityEngine.XR.Interaction.Toolkit.AR.TapGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSelectionInteractable_OnEndManipulation_m00F822E87F973817F289120524EA6516ACC63AC1 (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_get_isCanceled_m8959E8FE03351E5641D8809791FA56BE6D9FCFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_get_targetObject_mA70175C7B2483508A5C33A52CA96255F089324A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEndManipulation(gesture);
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_0 = ___gesture0;
		ARBaseGestureInteractable_OnEndManipulation_m3EC5A5139E52A986996E3DA2E344A67C9E354889(__this, L_0, NULL);
		// if (gesture.isCanceled)
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_1 = ___gesture0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Gesture_1_get_isCanceled_m8959E8FE03351E5641D8809791FA56BE6D9FCFF5_inline(L_1, Gesture_1_get_isCanceled_m8959E8FE03351E5641D8809791FA56BE6D9FCFF5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (gestureInteractor == null)
		ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* L_3;
		L_3 = ARBaseGestureInteractable_get_gestureInteractor_m2B15167ABA301409F0A50C3810FEF794750C57EB_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// if (gesture.targetObject == gameObject)
		TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* L_5 = ___gesture0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Gesture_1_get_targetObject_mA70175C7B2483508A5C33A52CA96255F089324A3_inline(L_5, Gesture_1_get_targetObject_mA70175C7B2483508A5C33A52CA96255F089324A3_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// m_GestureSelected = !m_GestureSelected;
		bool L_9 = __this->___m_GestureSelected_48;
		__this->___m_GestureSelected_48 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		return;
	}

IL_0042:
	{
		// m_GestureSelected = false;
		__this->___m_GestureSelected_48 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::OnSelectEntering(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSelectionInteractable_OnSelectEntering_m0ACA4FBB9BD00E94711A075D757C720380A981FF (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnSelectEntering(args);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		XRBaseInteractable_OnSelectEntering_mA92C356B0CBA88075ED772C00D6D7B53FED2AA93(__this, L_0, NULL);
		// if (m_SelectionVisualization != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_SelectionVisualization_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// m_SelectionVisualization.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_SelectionVisualization_47;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::OnSelectExiting(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSelectionInteractable_OnSelectExiting_m6C1FB94E26549EDE03DC22C19EFCF90292944480 (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnSelectExiting(args);
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_0 = ___args0;
		XRBaseInteractable_OnSelectExiting_m4F97E28A978DC4A5B7B843CA0FDAAFA9640F72F3(__this, L_0, NULL);
		// if (m_SelectionVisualization != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_SelectionVisualization_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// m_SelectionVisualization.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_SelectionVisualization_47;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARSelectionInteractable_IsSelectableBy_mEAD84E76A6D95297969317B681B73721D4CB13F9 (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) 
{
	{
		// public override bool IsSelectableBy(XRBaseInteractor interactor) => IsSelectableBy((IXRSelectInteractor)interactor);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___interactor0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(54 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor) */, __this, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSelectionInteractable__ctor_m01B8BFEA185D36AF5CF566282B1C186A2F6DF578 (ARSelectionInteractable_t2B692035286A6C59F91B86BBF525780B113CC96E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		ARBaseGestureInteractable__ctor_m7D7701B9E98DDBEF1B8DE65810A1CB5DA566B630(__this, NULL);
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
// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::get_objectGestureTranslationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTranslationInteractable_get_objectGestureTranslationMode_m16B7011915BB13995BBB4E4A7CBF2C4BE902CB48 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectGestureTranslationMode;
		int32_t L_0 = __this->___m_ObjectGestureTranslationMode_47;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::set_objectGestureTranslationMode(UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_set_objectGestureTranslationMode_m9E090B4BCE5A68DEBBE72E0ECE13902323DBF6A4 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectGestureTranslationMode = value;
		int32_t L_0 = ___value0;
		__this->___m_ObjectGestureTranslationMode_47 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::get_maxTranslationDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARTranslationInteractable_get_maxTranslationDistance_m7BC61267CCA196F2484075A471C512F03F151766 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxTranslationDistance;
		float L_0 = __this->___m_MaxTranslationDistance_48;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::set_maxTranslationDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_set_maxTranslationDistance_mAC412F6B742BF476562CE25AA9F023B775929DF3 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxTranslationDistance = value;
		float L_0 = ___value0;
		__this->___m_MaxTranslationDistance_48 = L_0;
		return;
	}
}
// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::get_fallbackLayerMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ARTranslationInteractable_get_fallbackLayerMask_mCF501AAD2FE50137D27B16F17684684125D56477 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FallbackLayerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_FallbackLayerMask_49;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::set_fallbackLayerMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_set_fallbackLayerMask_m2CF645B45AB6D59799974A0657D1F521F7138DC7 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FallbackLayerMask = value;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->___m_FallbackLayerMask_49 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_ProcessInteractable_mADC3A96433B42A84BB40D174234ED214D0841E73 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0011;
		}
	}
	{
		// UpdatePosition();
		ARTranslationInteractable_UpdatePosition_m5BDCFC5791A96867BFAD62011B52FD4DBB02510B(__this, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::CanStartManipulationForGesture(UnityEngine.XR.Interaction.Toolkit.AR.DragGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTranslationInteractable_CanStartManipulationForGesture_m82509559AB33B41E186D61ABB3A5890671C9934E (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gesture.targetObject != null && gesture.targetObject == gameObject && transform.parent != null;
		DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* L_0 = ___gesture0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_inline(L_0, Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* L_3 = ___gesture0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_inline(L_3, Gesture_1_get_targetObject_m6853FD795F9AE957C0ED1497E5B73D0A668B28C5_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_9;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::OnStartManipulation(UnityEngine.XR.Interaction.Toolkit.AR.DragGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_OnStartManipulation_m350DB82E1E7D503F1852ACA881C94CA734E7F566 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* ___gesture0, const RuntimeMethod* method) 
{
	{
		// m_GroundingPlaneHeight = transform.parent.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___y_3;
		__this->___m_GroundingPlaneHeight_54 = L_3;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::OnContinueManipulation(UnityEngine.XR.Interaction.Toolkit.AR.DragGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_OnContinueManipulation_mA4A532DB7568893175D4E529A350FBDAB052EC99 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0E32B1A1602E0F44822A4A8B284A2D78EE0B1CE);
		s_Il2CppMethodInitialized = true;
	}
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// if (transform.parent == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Translation Interactable needs a parent object.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(_stringLiteralE0E32B1A1602E0F44822A4A8B284A2D78EE0B1CE, __this, NULL);
		// return;
		return;
	}

IL_001f:
	{
		// m_IsActive = true;
		__this->___m_IsActive_52 = (bool)1;
		//             var desiredPlacement = xrOrigin != null
		//                 ? GestureTransformationUtility.GetBestPlacementPosition(
		//                     transform.parent.position, gesture.position, m_GroundingPlaneHeight, 0.03f,
		//                     maxTranslationDistance, objectGestureTranslationMode, xrOrigin, fallbackLayerMask: m_FallbackLayerMask)
		// #pragma warning disable 618 // Calling deprecated method to help with backwards compatibility.
		//                 : GestureTransformationUtility.GetBestPlacementPosition(
		//                     transform.parent.position, gesture.position, m_GroundingPlaneHeight, 0.03f,
		//                     maxTranslationDistance, objectGestureTranslationMode, arSessionOrigin, fallbackLayerMask: m_FallbackLayerMask);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_3;
		L_3 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_007a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* L_8 = ___gesture0;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = DragGesture_get_position_mF154E9A1E9201CFE888D10D2BA1E7F507A15E3F4_inline(L_8, NULL);
		float L_10 = __this->___m_GroundingPlaneHeight_54;
		float L_11;
		L_11 = ARTranslationInteractable_get_maxTranslationDistance_m7BC61267CCA196F2484075A471C512F03F151766_inline(__this, NULL);
		int32_t L_12;
		L_12 = ARTranslationInteractable_get_objectGestureTranslationMode_m16B7011915BB13995BBB4E4A7CBF2C4BE902CB48_inline(__this, NULL);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_13;
		L_13 = ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline(__this, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_14 = __this->___m_FallbackLayerMask_49;
		int32_t L_15;
		L_15 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_16;
		L_16 = GestureTransformationUtility_GetBestPlacementPosition_m180DE1C7ED8281C1348A6E806E2EE2512FCB1E0E(L_7, L_9, L_10, (0.0299999993f), L_11, L_12, L_13, 1, L_15, NULL);
		G_B5_0 = L_16;
		goto IL_00be;
	}

IL_007a:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* L_20 = ___gesture0;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = DragGesture_get_position_mF154E9A1E9201CFE888D10D2BA1E7F507A15E3F4_inline(L_20, NULL);
		float L_22 = __this->___m_GroundingPlaneHeight_54;
		float L_23;
		L_23 = ARTranslationInteractable_get_maxTranslationDistance_m7BC61267CCA196F2484075A471C512F03F151766_inline(__this, NULL);
		int32_t L_24;
		L_24 = ARTranslationInteractable_get_objectGestureTranslationMode_m16B7011915BB13995BBB4E4A7CBF2C4BE902CB48_inline(__this, NULL);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_25;
		L_25 = ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline(__this, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_26 = __this->___m_FallbackLayerMask_49;
		int32_t L_27;
		L_27 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_28;
		L_28 = GestureTransformationUtility_GetBestPlacementPosition_m0889A627B0D4D6DEC33FDE0F3249E0CF9B657CF9(L_19, L_21, L_22, (0.0299999993f), L_23, L_24, L_25, 1, L_27, NULL);
		G_B5_0 = L_28;
	}

IL_00be:
	{
		V_0 = G_B5_0;
		// if (desiredPlacement.hasHoveringPosition && desiredPlacement.hasPlacementPosition)
		bool L_29;
		L_29 = Placement_get_hasHoveringPosition_m8AC86FA805F9EE67588FDCB253DB4C41F7647136_inline((&V_0), NULL);
		if (!L_29)
		{
			goto IL_016e;
		}
	}
	{
		bool L_30;
		L_30 = Placement_get_hasPlacementPosition_mF8478CF3AFA0CE0BACE647D9BAAC165A1FB544E1_inline((&V_0), NULL);
		if (!L_30)
		{
			goto IL_016e;
		}
	}
	{
		// m_DesiredLocalPosition = transform.parent.InverseTransformPoint(desiredPlacement.hoveringPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Placement_get_hoveringPosition_m33C7F03371449CBA640D4FE5D7FC2657BC80888D_inline((&V_0), NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_32, L_33, NULL);
		__this->___m_DesiredLocalPosition_53 = L_34;
		// m_DesiredAnchorPosition = desiredPlacement.placementPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Placement_get_placementPosition_m60592EDE3AEE92A1D74C5CC66B492D45219FE825_inline((&V_0), NULL);
		__this->___m_DesiredAnchorPosition_55 = L_35;
		// m_GroundingPlaneHeight = desiredPlacement.updatedGroundingPlaneHeight;
		float L_36;
		L_36 = Placement_get_updatedGroundingPlaneHeight_m4D14E5829330F269DBDF5ED5AC62A6FD2D27BB14_inline((&V_0), NULL);
		__this->___m_GroundingPlaneHeight_54 = L_36;
		// if (((desiredPlacement.placementRotation * Vector3.up) - transform.up).magnitude > k_DiffThreshold)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_37, L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_39, L_41, NULL);
		V_1 = L_42;
		float L_43;
		L_43 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_43) > ((float)(9.99999975E-05f)))))
		{
			goto IL_014d;
		}
	}
	{
		// m_DesiredRotation = desiredPlacement.placementRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_inline((&V_0), NULL);
		__this->___m_DesiredRotation_56 = L_44;
		goto IL_015e;
	}

IL_014d:
	{
		// m_DesiredRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_45, NULL);
		__this->___m_DesiredRotation_56 = L_46;
	}

IL_015e:
	{
		// if (desiredPlacement.hasPlane)
		bool L_47;
		L_47 = Placement_get_hasPlane_m934E52CE701CDF7A765FAB9B659453622F9CB57B_inline((&V_0), NULL);
		if (!L_47)
		{
			goto IL_016e;
		}
	}
	{
		// m_LastPlacement = desiredPlacement;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_48 = V_0;
		__this->___m_LastPlacement_57 = L_48;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_LastPlacement_57))->___U3CplacementPlaneU3Ek__BackingField_6), (void*)NULL);
	}

IL_016e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::OnEndManipulation(UnityEngine.XR.Interaction.Toolkit.AR.DragGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_OnEndManipulation_mCD2A0E7F7CCABD385C1F434EEA6E821AFB11D5C8 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79141A0BEBFDCEFBE6DB72B33554C4A10BB0AF9A);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// if (!m_LastPlacement.hasPlacementPosition)
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* L_0 = (&__this->___m_LastPlacement_57);
		bool L_1;
		L_1 = Placement_get_hasPlacementPosition_mF8478CF3AFA0CE0BACE647D9BAAC165A1FB544E1_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var oldAnchor = transform.parent.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		// var desiredPose = new Pose(m_DesiredAnchorPosition, m_LastPlacement.placementRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___m_DesiredAnchorPosition_55;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* L_6 = (&__this->___m_LastPlacement_57);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_inline(L_6, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_0), L_5, L_7, NULL);
		// var desiredLocalPosition = transform.parent.InverseTransformPoint(desiredPose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10.___position_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_9, L_11, NULL);
		V_1 = L_12;
		// if (desiredLocalPosition.magnitude > maxTranslationDistance)
		float L_13;
		L_13 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_14;
		L_14 = ARTranslationInteractable_get_maxTranslationDistance_m7BC61267CCA196F2484075A471C512F03F151766_inline(__this, NULL);
		G_B3_0 = L_4;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			G_B4_0 = L_4;
			goto IL_006f;
		}
	}
	{
		// desiredLocalPosition = desiredLocalPosition.normalized * maxTranslationDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		float L_16;
		L_16 = ARTranslationInteractable_get_maxTranslationDistance_m7BC61267CCA196F2484075A471C512F03F151766_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, L_16, NULL);
		V_1 = L_17;
		G_B4_0 = G_B3_0;
	}

IL_006f:
	{
		// desiredPose.position = transform.parent.TransformPoint(desiredLocalPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_19, L_20, NULL);
		(&V_0)->___position_0 = L_21;
		// var anchor = new GameObject("PlacementAnchor").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_22, _stringLiteral79141A0BEBFDCEFBE6DB72B33554C4A10BB0AF9A, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		V_2 = L_23;
		// anchor.position = m_LastPlacement.placementPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_2;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* L_25 = (&__this->___m_LastPlacement_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Placement_get_placementPosition_m60592EDE3AEE92A1D74C5CC66B492D45219FE825_inline(L_25, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_26, NULL);
		// anchor.rotation = m_LastPlacement.placementRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_2;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* L_28 = (&__this->___m_LastPlacement_57);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_inline(L_28, NULL);
		NullCheck(L_27);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_27, L_29, NULL);
		// transform.parent = anchor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_2;
		NullCheck(L_30);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_30, L_31, NULL);
		// Destroy(oldAnchor);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(G_B4_0, NULL);
		// m_DesiredLocalPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_DesiredLocalPosition_53 = L_32;
		// if (((desiredPose.rotation * Vector3.up) - transform.up).magnitude > k_DiffThreshold)
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = L_33.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_34, L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_36, L_38, NULL);
		V_3 = L_39;
		float L_40;
		L_40 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		if ((!(((float)L_40) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0112;
		}
	}
	{
		// m_DesiredRotation = desiredPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_41 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = L_41.___rotation_1;
		__this->___m_DesiredRotation_56 = L_42;
		goto IL_0123;
	}

IL_0112:
	{
		// m_DesiredRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_43, NULL);
		__this->___m_DesiredRotation_56 = L_44;
	}

IL_0123:
	{
		// m_IsActive = true;
		__this->___m_IsActive_52 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable_UpdatePosition_m5BDCFC5791A96867BFAD62011B52FD4DBB02510B (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!m_IsActive)
		bool L_0 = __this->___m_IsActive_52;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var oldLocalPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		// var newLocalPosition = Vector3.Lerp(
		//     oldLocalPosition, m_DesiredLocalPosition, Time.deltaTime * k_PositionSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_DesiredLocalPosition_53;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, (12.0f))), NULL);
		V_0 = L_5;
		// var diffLength = (m_DesiredLocalPosition - newLocalPosition).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___m_DesiredLocalPosition_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_7, NULL);
		V_2 = L_8;
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		// if (diffLength < k_DiffThreshold)
		if ((!(((float)L_9) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0054;
		}
	}
	{
		// newLocalPosition = m_DesiredLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___m_DesiredLocalPosition_53;
		V_0 = L_10;
		// m_IsActive = false;
		__this->___m_IsActive_52 = (bool)0;
	}

IL_0054:
	{
		// transform.localPosition = newLocalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_12, NULL);
		// var oldRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		// var newRotation =
		//     Quaternion.Lerp(oldRotation, m_DesiredRotation, Time.deltaTime * k_PositionSpeed);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = __this->___m_DesiredRotation_56;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_14, L_15, ((float)il2cpp_codegen_multiply(L_16, (12.0f))), NULL);
		V_1 = L_17;
		// transform.rotation = newRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_1;
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTranslationInteractable__ctor_m830DC66E9B418617FD0BC6844D1D4C332F8103A7 (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_MaxTranslationDistance = 10f;
		__this->___m_MaxTranslationDistance_48 = (10.0f);
		il2cpp_codegen_runtime_class_init_inline(ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		ARBaseGestureInteractable__ctor_m7D7701B9E98DDBEF1B8DE65810A1CB5DA566B630(__this, NULL);
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
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.ARFoundation.ARRaycastManager&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_m2B214762960197684D91064F7CBAE3F76C9E29CB (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin0, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** ___raycastManager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mFFF81956D91ED36D862264CB76FA46E6A4CDE5DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryGetTrackableManager(sessionOrigin, ref s_ARRaycastManager, out raycastManager);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = ___sessionOrigin0;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** L_1 = ___raycastManager1;
		bool L_2;
		L_2 = GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mFFF81956D91ED36D862264CB76FA46E6A4CDE5DA(L_0, (&((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARRaycastManager_4), L_1, GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mFFF81956D91ED36D862264CB76FA46E6A4CDE5DA_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.ARFoundation.ARPlaneManager&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_mED000BD0735C2E7A9FAAC1A04532536E4FDDF16F (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin0, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___planeManager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_mA4228721AEFBC71304ED14F425074B0CF0F1ED22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryGetTrackableManager(sessionOrigin, ref s_ARPlaneManager, out planeManager);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = ___sessionOrigin0;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** L_1 = ___planeManager1;
		bool L_2;
		L_2 = GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_mA4228721AEFBC71304ED14F425074B0CF0F1ED22(L_0, (&((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARPlaneManager_5), L_1, GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_mA4228721AEFBC71304ED14F425074B0CF0F1ED22_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetSessionOrigin(Unity.XR.CoreUtils.XROrigin&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetSessionOrigin_mBAE06D8E5B0CC4F4E5D30FAEAB24DAB3719F8BCD (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE** ___sessionOrigin0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_mAB31BBA1730F8CD94057988C74010254ADABC140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE231D324FA672581D506DFF24DC908488F4B1573);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_XROrigin == null)
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_XROrigin_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// s_XROrigin = Object.FindObjectOfType<XROrigin>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_2;
		L_2 = Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_mAB31BBA1730F8CD94057988C74010254ADABC140(Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_mAB31BBA1730F8CD94057988C74010254ADABC140_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_XROrigin_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_XROrigin_2), (void*)L_2);
		// if (s_XROrigin == null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_3 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_XROrigin_2;
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogWarning($"Could not find {nameof(XROrigin)} in scene.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralE231D324FA672581D506DFF24DC908488F4B1573, NULL);
		// sessionOrigin = s_XROrigin;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE** L_5 = ___sessionOrigin0;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_6 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_XROrigin_2;
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		// return false;
		return (bool)0;
	}

IL_0037:
	{
		// sessionOrigin = s_XROrigin;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE** L_7 = ___sessionOrigin0;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_8 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_XROrigin_2;
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_8);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager(UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.XR.ARFoundation.ARRaycastManager&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_m93585CCB33470F066CC1F08F21B7562BE1C436F5 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin0, ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** ___raycastManager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mCAD6094A24DD06BA4DC5F1CF1167B9C288763749_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryGetTrackableManager(sessionOrigin, ref s_ARRaycastManager, out raycastManager);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = ___sessionOrigin0;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44** L_1 = ___raycastManager1;
		bool L_2;
		L_2 = GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mCAD6094A24DD06BA4DC5F1CF1167B9C288763749(L_0, (&((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARRaycastManager_4), L_1, GestureTransformationUtility_TryGetTrackableManager_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_mCAD6094A24DD06BA4DC5F1CF1167B9C288763749_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetTrackableManager(UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.XR.ARFoundation.ARPlaneManager&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetTrackableManager_mF92C3C16919F0266DC6158A9A837A3B98E6A21CA (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin0, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___planeManager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m6421D600F3EE508ABA9D6A2BCEC2AFC3E447C78F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryGetTrackableManager(sessionOrigin, ref s_ARPlaneManager, out planeManager);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = ___sessionOrigin0;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** L_1 = ___planeManager1;
		bool L_2;
		L_2 = GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m6421D600F3EE508ABA9D6A2BCEC2AFC3E447C78F(L_0, (&((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARPlaneManager_5), L_1, GestureTransformationUtility_TryGetTrackableManager_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m6421D600F3EE508ABA9D6A2BCEC2AFC3E447C78F_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::TryGetSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_TryGetSessionOrigin_m5235678B1B0DAD9E6E8C0AB0C18819765AF502AA (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3** ___sessionOrigin0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2E938E4B4CED833B8000B21F3B75911AE8D896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_ARSessionOrigin == null)
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARSessionOrigin_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// s_ARSessionOrigin = Object.FindObjectOfType<ARSessionOrigin>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_2;
		L_2 = Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC(Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARSessionOrigin_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARSessionOrigin_3), (void*)L_2);
		// if (s_ARSessionOrigin == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_3 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARSessionOrigin_3;
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogWarning($"Could not find {nameof(ARSessionOrigin)} in scene.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralEC2E938E4B4CED833B8000B21F3B75911AE8D896, NULL);
		// sessionOrigin = s_ARSessionOrigin;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3** L_5 = ___sessionOrigin0;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_6 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARSessionOrigin_3;
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		// return false;
		return (bool)0;
	}

IL_0037:
	{
		// sessionOrigin = s_ARSessionOrigin;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3** L_7 = ___sessionOrigin0;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_8 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_ARSessionOrigin_3;
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_8);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.ARSubsystems.TrackableType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_Raycast_m100C3FDFB3F72340C265D88DDC7F3C72914FC845 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin2, int32_t ___trackableTypes3, int32_t ___fallbackLayerMask4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* V_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B11_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B17_0 = NULL;
	{
		// if ((sessionOrigin != null || TryGetSessionOrigin(out sessionOrigin)) &&
		//     TryGetTrackableManager(sessionOrigin, out ARRaycastManager raycastManager) &&
		//     raycastManager.Raycast(screenPoint, hitResults, trackableTypes))
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = ___sessionOrigin2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GestureTransformationUtility_TryGetSessionOrigin_mBAE06D8E5B0CC4F4E5D30FAEAB24DAB3719F8BCD((&___sessionOrigin2), NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}

IL_0012:
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_3 = ___sessionOrigin2;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = GestureTransformationUtility_TryGetTrackableManager_m2B214762960197684D91064F7CBAE3F76C9E29CB(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___screenPoint0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ___hitResults1;
		int32_t L_8 = ___trackableTypes3;
		NullCheck(L_5);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_5, L_6, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// hitResults.Clear();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ___hitResults1;
		NullCheck(L_10);
		List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_inline(L_10, List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_RuntimeMethod_var);
		// if (fallbackLayerMask == 0 || (trackableTypes & hitType) == 0)
		int32_t L_11 = ___fallbackLayerMask4;
		if (!L_11)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = ___trackableTypes3;
		if (((int32_t)((int32_t)L_12&1)))
		{
			goto IL_003a;
		}
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}

IL_003a:
	{
		// var camera = sessionOrigin != null ? sessionOrigin.Camera : Camera.main;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_13 = ___sessionOrigin2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_004a;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		G_B11_0 = L_15;
		goto IL_0050;
	}

IL_004a:
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_16 = ___sessionOrigin2;
		NullCheck(L_16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_16, NULL);
		G_B11_0 = L_17;
	}

IL_0050:
	{
		V_1 = G_B11_0;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_005c:
	{
		// var ray = camera.ScreenPointToRay(screenPoint);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___screenPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_21, NULL);
		NullCheck(L_20);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_23;
		L_23 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_20, L_22, NULL);
		// if (Physics.Raycast(ray, out var hit, Mathf.Infinity, fallbackLayerMask))
		int32_t L_24 = ___fallbackLayerMask4;
		bool L_25;
		L_25 = Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D(L_23, (&V_2), (std::numeric_limits<float>::infinity()), L_24, NULL);
		if (!L_25)
		{
			goto IL_00db;
		}
	}
	{
		// var transform = sessionOrigin != null ? sessionOrigin.transform : hit.collider.transform;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_26 = ___sessionOrigin2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_27)
		{
			goto IL_008f;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28;
		L_28 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_2), NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		G_B17_0 = L_29;
		goto IL_0095;
	}

IL_008f:
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_30 = ___sessionOrigin2;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		G_B17_0 = L_31;
	}

IL_0095:
	{
		V_3 = G_B17_0;
		//                 hitResults.Add(new ARRaycastHit(
		//                     new XRRaycastHit(
		//                         TrackableId.invalidId,
		//                         new Pose(hit.point, Quaternion.LookRotation(Vector3.forward, hit.normal)),
		//                         hit.distance,
		//                         hitType),
		//                     hit.distance,
		// #if AR_FOUNDATION_4_1_OR_NEWER
		//                     transform, null));
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_32 = ___hitResults1;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_33;
		L_33 = TrackableId_get_invalidId_m187D7037BE9F103763C2608C4CA3C78AEA8432D3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_35, L_36, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_38), L_34, L_37, /*hidden argument*/NULL);
		float L_39;
		L_39 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_2), NULL);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_40;
		memset((&L_40), 0, sizeof(L_40));
		XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641((&L_40), L_33, L_38, L_39, 1, /*hidden argument*/NULL);
		float L_41;
		L_41 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_2), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = V_3;
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_43;
		memset((&L_43), 0, sizeof(L_43));
		ARRaycastHit__ctor_m954400C9EFC7F5B5A227276ED8EE2FEF32E6BC48((&L_43), L_40, L_41, L_42, (ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0*)NULL, /*hidden argument*/NULL);
		NullCheck(L_32);
		List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_inline(L_32, L_43, List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_00db:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::GetBestPlacementPosition(UnityEngine.Vector3,UnityEngine.Vector2,System.Single,System.Single,System.Single,UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode,Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.ARSubsystems.TrackableType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 GestureTransformationUtility_GetBestPlacementPosition_m0889A627B0D4D6DEC33FDE0F3249E0CF9B657CF9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentAnchorPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition1, float ___groundingPlaneHeight2, float ___hoverOffset3, float ___maxTranslationDistance4, int32_t ___gestureTranslationMode5, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___sessionOrigin6, int32_t ___trackableTypes7, int32_t ___fallbackLayerMask8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTouchesUtility_t21BF3E49166B77B8A88AF1653443BF68D87AE495_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* V_12 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_13;
	memset((&V_13), 0, sizeof(V_13));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_14 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B5_0 = NULL;
	{
		// var result = new Placement();
		il2cpp_codegen_initobj((&V_0), sizeof(Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21));
		// if (sessionOrigin == null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = ___sessionOrigin6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// TryGetSessionOrigin(out sessionOrigin);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GestureTransformationUtility_TryGetSessionOrigin_mBAE06D8E5B0CC4F4E5D30FAEAB24DAB3719F8BCD((&___sessionOrigin6), NULL);
	}

IL_001a:
	{
		// var camera = sessionOrigin != null ? sessionOrigin.Camera : Camera.main;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_3 = ___sessionOrigin6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		G_B5_0 = L_5;
		goto IL_0032;
	}

IL_002b:
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_6 = ___sessionOrigin6;
		NullCheck(L_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_6, NULL);
		G_B5_0 = L_7;
	}

IL_0032:
	{
		V_1 = G_B5_0;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_10 = V_0;
		return L_10;
	}

IL_003e:
	{
		// var cameraTransform = camera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		V_2 = L_12;
		// result.updatedGroundingPlaneHeight = groundingPlaneHeight;
		float L_13 = ___groundingPlaneHeight2;
		Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_inline((&V_0), L_13, NULL);
		// var angle = 90f - Vector3.Angle(cameraTransform.forward, Vector3.down);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_17;
		L_17 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_15, L_16, NULL);
		V_3 = ((float)il2cpp_codegen_subtract((90.0f), L_17));
		// var touchOffsetRatio = Mathf.Clamp01(angle / 90f);
		float L_18 = V_3;
		float L_19;
		L_19 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_18/(90.0f))), NULL);
		// var screenTouchOffset = touchOffsetRatio * k_MaxScreenTouchOffset;
		V_4 = ((float)il2cpp_codegen_multiply(L_19, (0.400000006f)));
		// screenPosition.y += GestureTouchesUtility.InchesToPixels(screenTouchOffset);
		float* L_20 = (&(&___screenPosition1)->___y_1);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		float L_23 = V_4;
		il2cpp_codegen_runtime_class_init_inline(GestureTouchesUtility_t21BF3E49166B77B8A88AF1653443BF68D87AE495_il2cpp_TypeInfo_var);
		float L_24;
		L_24 = GestureTouchesUtility_InchesToPixels_mE350301C72EEC2864DE025135CA06E0D59264916(L_23, NULL);
		*((float*)L_21) = (float)((float)il2cpp_codegen_add(L_22, L_24));
		// var hoverRatio = Mathf.Clamp01(angle / 45f);
		float L_25 = V_3;
		float L_26;
		L_26 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_25/(45.0f))), NULL);
		V_5 = L_26;
		// hoverOffset *= hoverRatio;
		float L_27 = ___hoverOffset3;
		float L_28 = V_5;
		___hoverOffset3 = ((float)il2cpp_codegen_multiply(L_27, L_28));
		// var distance = (cameraTransform.position - currentAnchorPosition).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_2;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___currentAnchorPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_30, L_31, NULL);
		V_11 = L_32;
		float L_33;
		L_33 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_11), NULL);
		// var distanceHoverRatio = Mathf.Clamp01(distance / k_HoverDistanceThreshold);
		float L_34;
		L_34 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_33/(1.0f))), NULL);
		V_6 = L_34;
		// hoverOffset *= distanceHoverRatio;
		float L_35 = ___hoverOffset3;
		float L_36 = V_6;
		___hoverOffset3 = ((float)il2cpp_codegen_multiply(L_35, L_36));
		// if (Raycast(screenPosition, s_Hits, sessionOrigin, trackableTypes, fallbackLayerMask))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ___screenPosition1;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_38 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_Hits_6;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_39 = ___sessionOrigin6;
		int32_t L_40 = ___trackableTypes7;
		int32_t L_41 = ___fallbackLayerMask8;
		bool L_42;
		L_42 = GestureTransformationUtility_Raycast_m100C3FDFB3F72340C265D88DDC7F3C72914FC845(L_37, L_38, L_39, L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_0204;
		}
	}
	{
		// if (!TryGetTrackableManager(sessionOrigin, out ARPlaneManager planeManager))
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_43 = ___sessionOrigin6;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = GestureTransformationUtility_TryGetTrackableManager_mED000BD0735C2E7A9FAAC1A04532536E4FDDF16F(L_43, (&V_12), NULL);
		if (L_44)
		{
			goto IL_00e9;
		}
	}
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_45 = V_0;
		return L_45;
	}

IL_00e9:
	{
		// var firstHit = s_Hits[0];
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_46 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_Hits_6;
		NullCheck(L_46);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_47;
		L_47 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_46, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_13 = L_47;
		// var plane = planeManager.GetPlane(firstHit.trackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_48 = V_12;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_49;
		L_49 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_13), NULL);
		NullCheck(L_48);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_50;
		L_50 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_48, L_49, NULL);
		V_14 = L_50;
		// if (plane == null || IsPlaneTypeAllowed(gestureTranslationMode, plane.alignment))
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_51 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_52)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_53 = ___gestureTranslationMode5;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_54 = V_14;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = GestureTransformationUtility_IsPlaneTypeAllowed_m666536AD393ECD917C13A49566273A8B7C96ABA7(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_0202;
		}
	}

IL_0123:
	{
		// if (Vector3.Dot(cameraTransform.position - firstHit.pose.position,
		//                 firstHit.pose.rotation * Vector3.up) < 0f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = V_2;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_59;
		L_59 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_13), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = L_59.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_58, L_60, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_62;
		L_62 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_13), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63 = L_62.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_63, L_64, NULL);
		float L_66;
		L_66 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_61, L_65, NULL);
		if ((!(((float)L_66) < ((float)(0.0f)))))
		{
			goto IL_015e;
		}
	}
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_67 = V_0;
		return L_67;
	}

IL_015e:
	{
		// if (plane == null ||
		//     plane.alignment == PlaneAlignment.Vertical ||
		//     plane.alignment == PlaneAlignment.HorizontalDown ||
		//     plane.alignment == PlaneAlignment.HorizontalUp)
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_68 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_69)
		{
			goto IL_018c;
		}
	}
	{
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_70 = V_14;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_70, NULL);
		if ((((int32_t)L_71) == ((int32_t)((int32_t)200))))
		{
			goto IL_018c;
		}
	}
	{
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_72 = V_14;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_72, NULL);
		if ((((int32_t)L_73) == ((int32_t)((int32_t)101))))
		{
			goto IL_018c;
		}
	}
	{
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_74 = V_14;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_74, NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0204;
		}
	}

IL_018c:
	{
		// groundingPoint = LimitTranslation(
		//     firstHit.pose.position, currentAnchorPosition, maxTranslationDistance);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_76;
		L_76 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_13), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = L_76.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ___currentAnchorPosition0;
		float L_79 = ___maxTranslationDistance4;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = GestureTransformationUtility_LimitTranslation_m9A5063D09992DC5039A42741E1F0DFCBBDC3AEC9(L_77, L_78, L_79, NULL);
		V_7 = L_80;
		// if (plane != null)
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_81 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_81, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_82)
		{
			goto IL_01bd;
		}
	}
	{
		// result.placementPlane = plane;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_83 = V_14;
		Placement_set_placementPlane_mBC9651FDAAC731C1C05D223BC8EC4077B0BE0C31_inline((&V_0), L_83, NULL);
		// result.hasPlane = true;
		Placement_set_hasPlane_mC797A50A6AC3FE43FEF180F6DA16B86FCA3F2D80_inline((&V_0), (bool)1, NULL);
	}

IL_01bd:
	{
		// result.hasPlacementPosition = true;
		Placement_set_hasPlacementPosition_mEBCB50BA6CC5F07FD19E341D2B83312B454AA9CB_inline((&V_0), (bool)1, NULL);
		// result.placementPosition = groundingPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_7;
		Placement_set_placementPosition_m224C7EB77A068D617B0BB786BAFE938DDD4485BE_inline((&V_0), L_84, NULL);
		// result.hasHoveringPosition = true;
		Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_inline((&V_0), (bool)1, NULL);
		// result.hoveringPosition = groundingPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_7;
		Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_inline((&V_0), L_85, NULL);
		// result.updatedGroundingPlaneHeight = groundingPoint.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_7;
		float L_87 = L_86.___y_3;
		Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_inline((&V_0), L_87, NULL);
		// result.placementRotation = firstHit.pose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_88;
		L_88 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_13), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89 = L_88.___rotation_1;
		Placement_set_placementRotation_m88E66AF455225CF624B5A5A5354BB21B1B3319C7_inline((&V_0), L_89, NULL);
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_90 = V_0;
		return L_90;
	}

IL_0202:
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_91 = V_0;
		return L_91;
	}

IL_0204:
	{
		// if (angle < 0f)
		float L_92 = V_3;
		if ((!(((float)L_92) < ((float)(0.0f)))))
		{
			goto IL_020e;
		}
	}
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_93 = V_0;
		return L_93;
	}

IL_020e:
	{
		// var cameraRay = camera.ScreenPointToRay(screenPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_94 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = ___screenPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_95, NULL);
		NullCheck(L_94);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_97;
		L_97 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_94, L_96, NULL);
		V_8 = L_97;
		// var groundingPlane =
		//     new Plane(Vector3.up, new Vector3(0f, groundingPlaneHeight, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_99 = ___groundingPlaneHeight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_100), (0.0f), L_99, (0.0f), /*hidden argument*/NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_9), L_98, L_100, NULL);
		// if (groundingPlane.Raycast(cameraRay, out var enter))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_101 = V_8;
		bool L_102;
		L_102 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_9), L_101, (&V_10), NULL);
		if (!L_102)
		{
			goto IL_027b;
		}
	}
	{
		// groundingPoint = LimitTranslation(
		//     cameraRay.GetPoint(enter), currentAnchorPosition, maxTranslationDistance);
		float L_103 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_8), L_103, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = ___currentAnchorPosition0;
		float L_106 = ___maxTranslationDistance4;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = GestureTransformationUtility_LimitTranslation_m9A5063D09992DC5039A42741E1F0DFCBBDC3AEC9(L_104, L_105, L_106, NULL);
		V_7 = L_107;
		// result.hasHoveringPosition = true;
		Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_inline((&V_0), (bool)1, NULL);
		// result.hoveringPosition = groundingPoint + (Vector3.up * hoverOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_110 = ___hoverOffset3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_109, L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_108, L_111, NULL);
		Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_inline((&V_0), L_112, NULL);
		goto IL_027d;
	}

IL_027b:
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_113 = V_0;
		return L_113;
	}

IL_027d:
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_114 = V_0;
		return L_114;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::LimitTranslation(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GestureTransformationUtility_LimitTranslation_m9A5063D09992DC5039A42741E1F0DFCBBDC3AEC9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPosition1, float ___maxTranslationDistance2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if ((desiredPosition - currentPosition).sqrMagnitude > Mathf.Pow(maxTranslationDistance, 2f))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___desiredPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___currentPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		float L_4 = ___maxTranslationDistance2;
		float L_5;
		L_5 = powf(L_4, (2.0f));
		if ((!(((float)L_3) > ((float)L_5))))
		{
			goto IL_0038;
		}
	}
	{
		// return currentPosition + (
		//     (desiredPosition - currentPosition).normalized * maxTranslationDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___currentPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___desiredPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___currentPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_8, NULL);
		V_0 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_11 = ___maxTranslationDistance2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_12, NULL);
		return L_13;
	}

IL_0038:
	{
		// return desiredPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___desiredPosition0;
		return L_14;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::IsPlaneTypeAllowed(UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode,UnityEngine.XR.ARSubsystems.PlaneAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_IsPlaneTypeAllowed_m666536AD393ECD917C13A49566273A8B7C96ABA7 (int32_t ___gestureTranslationMode0, int32_t ___planeAlignment1, const RuntimeMethod* method) 
{
	{
		// if (gestureTranslationMode == GestureTranslationMode.Any)
		int32_t L_0 = ___gestureTranslationMode0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (gestureTranslationMode == GestureTranslationMode.Horizontal &&
		//     (planeAlignment == PlaneAlignment.HorizontalDown ||
		//         planeAlignment == PlaneAlignment.HorizontalUp))
		int32_t L_1 = ___gestureTranslationMode0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___planeAlignment1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)101))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = ___planeAlignment1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		// return true;
		return (bool)1;
	}

IL_0015:
	{
		// if (gestureTranslationMode == GestureTranslationMode.Vertical &&
		//     planeAlignment == PlaneAlignment.Vertical)
		int32_t L_4 = ___gestureTranslationMode0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_5 = ___planeAlignment1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)200)))))
		{
			goto IL_0023;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0023:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.XR.ARSubsystems.TrackableType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_Raycast_mF399B72ACC81FE80A07517AF470450FA45C8302D (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin2, int32_t ___trackableTypes3, int32_t ___fallbackLayerMask4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* V_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B11_0 = NULL;
	float G_B16_0 = 0.0f;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 G_B16_1;
	memset((&G_B16_1), 0, sizeof(G_B16_1));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* G_B16_2 = NULL;
	float G_B15_0 = 0.0f;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 G_B15_1;
	memset((&G_B15_1), 0, sizeof(G_B15_1));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* G_B15_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B17_0 = NULL;
	float G_B17_1 = 0.0f;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 G_B17_2;
	memset((&G_B17_2), 0, sizeof(G_B17_2));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* G_B17_3 = NULL;
	{
		// if ((sessionOrigin != null || TryGetSessionOrigin(out sessionOrigin)) &&
		//     TryGetTrackableManager(sessionOrigin, out ARRaycastManager raycastManager) &&
		//     raycastManager.Raycast(screenPoint, hitResults, trackableTypes))
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = ___sessionOrigin2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GestureTransformationUtility_TryGetSessionOrigin_m5235678B1B0DAD9E6E8C0AB0C18819765AF502AA((&___sessionOrigin2), NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}

IL_0012:
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_3 = ___sessionOrigin2;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = GestureTransformationUtility_TryGetTrackableManager_m93585CCB33470F066CC1F08F21B7562BE1C436F5(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___screenPoint0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ___hitResults1;
		int32_t L_8 = ___trackableTypes3;
		NullCheck(L_5);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_5, L_6, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// hitResults.Clear();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ___hitResults1;
		NullCheck(L_10);
		List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_inline(L_10, List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_RuntimeMethod_var);
		// if (fallbackLayerMask == 0 || (trackableTypes & hitType) == 0)
		int32_t L_11 = ___fallbackLayerMask4;
		if (!L_11)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = ___trackableTypes3;
		if (((int32_t)((int32_t)L_12&1)))
		{
			goto IL_003a;
		}
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}

IL_003a:
	{
		// var camera = sessionOrigin != null ? sessionOrigin.camera : Camera.main;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_13 = ___sessionOrigin2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_004a;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		G_B11_0 = L_15;
		goto IL_0050;
	}

IL_004a:
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_16 = ___sessionOrigin2;
		NullCheck(L_16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(L_16, NULL);
		G_B11_0 = L_17;
	}

IL_0050:
	{
		V_1 = G_B11_0;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_005c:
	{
		// var ray = camera.ScreenPointToRay(screenPoint);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___screenPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_21, NULL);
		NullCheck(L_20);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_23;
		L_23 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_20, L_22, NULL);
		// if (Physics.Raycast(ray, out var hit, Mathf.Infinity, fallbackLayerMask))
		int32_t L_24 = ___fallbackLayerMask4;
		bool L_25;
		L_25 = Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D(L_23, (&V_2), (std::numeric_limits<float>::infinity()), L_24, NULL);
		if (!L_25)
		{
			goto IL_00d8;
		}
	}
	{
		// hitResults.Add(new ARRaycastHit(
		//     new XRRaycastHit(
		//         TrackableId.invalidId,
		//         new Pose(hit.point, Quaternion.LookRotation(Vector3.forward, hit.normal)),
		//         hit.distance,
		//         hitType),
		//     hit.distance,
		//     sessionOrigin != null ? sessionOrigin.transform : hit.collider.transform));
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_26 = ___hitResults1;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_27;
		L_27 = TrackableId_get_invalidId_m187D7037BE9F103763C2608C4CA3C78AEA8432D3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_29, L_30, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_32), L_28, L_31, /*hidden argument*/NULL);
		float L_33;
		L_33 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_2), NULL);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_34;
		memset((&L_34), 0, sizeof(L_34));
		XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641((&L_34), L_27, L_32, L_33, 1, /*hidden argument*/NULL);
		float L_35;
		L_35 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_2), NULL);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_36 = ___sessionOrigin2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B15_0 = L_35;
		G_B15_1 = L_34;
		G_B15_2 = L_26;
		if (L_37)
		{
			G_B16_0 = L_35;
			G_B16_1 = L_34;
			G_B16_2 = L_26;
			goto IL_00c6;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_38;
		L_38 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_2), NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		G_B17_0 = L_39;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_00cc;
	}

IL_00c6:
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_40 = ___sessionOrigin2;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		G_B17_0 = L_41;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_00cc:
	{
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_42;
		memset((&L_42), 0, sizeof(L_42));
		ARRaycastHit__ctor_m0C23F16B12F6D0F71C0B00D48D8BC3271BF7F39D((&L_42), G_B17_2, G_B17_1, G_B17_0, /*hidden argument*/NULL);
		NullCheck(G_B17_3);
		List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_inline(G_B17_3, L_42, List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_00d8:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::GetBestPlacementPosition(UnityEngine.Vector3,UnityEngine.Vector2,System.Single,System.Single,System.Single,UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode,UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.XR.ARSubsystems.TrackableType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 GestureTransformationUtility_GetBestPlacementPosition_m180DE1C7ED8281C1348A6E806E2EE2512FCB1E0E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentAnchorPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition1, float ___groundingPlaneHeight2, float ___hoverOffset3, float ___maxTranslationDistance4, int32_t ___gestureTranslationMode5, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin6, int32_t ___trackableTypes7, int32_t ___fallbackLayerMask8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTouchesUtility_t21BF3E49166B77B8A88AF1653443BF68D87AE495_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* V_12 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_13;
	memset((&V_13), 0, sizeof(V_13));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_14 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B5_0 = NULL;
	{
		// var result = new Placement();
		il2cpp_codegen_initobj((&V_0), sizeof(Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21));
		// if (sessionOrigin == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = ___sessionOrigin6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// TryGetSessionOrigin(out sessionOrigin);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GestureTransformationUtility_TryGetSessionOrigin_m5235678B1B0DAD9E6E8C0AB0C18819765AF502AA((&___sessionOrigin6), NULL);
	}

IL_001a:
	{
		// var camera = sessionOrigin != null ? sessionOrigin.camera : Camera.main;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_3 = ___sessionOrigin6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		G_B5_0 = L_5;
		goto IL_0032;
	}

IL_002b:
	{
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_6 = ___sessionOrigin6;
		NullCheck(L_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(L_6, NULL);
		G_B5_0 = L_7;
	}

IL_0032:
	{
		V_1 = G_B5_0;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_10 = V_0;
		return L_10;
	}

IL_003e:
	{
		// var cameraTransform = camera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		V_2 = L_12;
		// result.updatedGroundingPlaneHeight = groundingPlaneHeight;
		float L_13 = ___groundingPlaneHeight2;
		Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_inline((&V_0), L_13, NULL);
		// var angle = 90f - Vector3.Angle(cameraTransform.forward, Vector3.down);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_17;
		L_17 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_15, L_16, NULL);
		V_3 = ((float)il2cpp_codegen_subtract((90.0f), L_17));
		// var touchOffsetRatio = Mathf.Clamp01(angle / 90f);
		float L_18 = V_3;
		float L_19;
		L_19 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_18/(90.0f))), NULL);
		// var screenTouchOffset = touchOffsetRatio * k_MaxScreenTouchOffset;
		V_4 = ((float)il2cpp_codegen_multiply(L_19, (0.400000006f)));
		// screenPosition.y += GestureTouchesUtility.InchesToPixels(screenTouchOffset);
		float* L_20 = (&(&___screenPosition1)->___y_1);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		float L_23 = V_4;
		il2cpp_codegen_runtime_class_init_inline(GestureTouchesUtility_t21BF3E49166B77B8A88AF1653443BF68D87AE495_il2cpp_TypeInfo_var);
		float L_24;
		L_24 = GestureTouchesUtility_InchesToPixels_mE350301C72EEC2864DE025135CA06E0D59264916(L_23, NULL);
		*((float*)L_21) = (float)((float)il2cpp_codegen_add(L_22, L_24));
		// var hoverRatio = Mathf.Clamp01(angle / 45f);
		float L_25 = V_3;
		float L_26;
		L_26 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_25/(45.0f))), NULL);
		V_5 = L_26;
		// hoverOffset *= hoverRatio;
		float L_27 = ___hoverOffset3;
		float L_28 = V_5;
		___hoverOffset3 = ((float)il2cpp_codegen_multiply(L_27, L_28));
		// var distance = (cameraTransform.position - currentAnchorPosition).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_2;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___currentAnchorPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_30, L_31, NULL);
		V_11 = L_32;
		float L_33;
		L_33 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_11), NULL);
		// var distanceHoverRatio = Mathf.Clamp01(distance / k_HoverDistanceThreshold);
		float L_34;
		L_34 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_33/(1.0f))), NULL);
		V_6 = L_34;
		// hoverOffset *= distanceHoverRatio;
		float L_35 = ___hoverOffset3;
		float L_36 = V_6;
		___hoverOffset3 = ((float)il2cpp_codegen_multiply(L_35, L_36));
		// if (Raycast(screenPosition, s_Hits, sessionOrigin, trackableTypes, fallbackLayerMask))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ___screenPosition1;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_38 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_Hits_6;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_39 = ___sessionOrigin6;
		int32_t L_40 = ___trackableTypes7;
		int32_t L_41 = ___fallbackLayerMask8;
		bool L_42;
		L_42 = GestureTransformationUtility_Raycast_mF399B72ACC81FE80A07517AF470450FA45C8302D(L_37, L_38, L_39, L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_0204;
		}
	}
	{
		// if (!TryGetTrackableManager(sessionOrigin, out ARPlaneManager planeManager))
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_43 = ___sessionOrigin6;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = GestureTransformationUtility_TryGetTrackableManager_mF92C3C16919F0266DC6158A9A837A3B98E6A21CA(L_43, (&V_12), NULL);
		if (L_44)
		{
			goto IL_00e9;
		}
	}
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_45 = V_0;
		return L_45;
	}

IL_00e9:
	{
		// var firstHit = s_Hits[0];
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_46 = ((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_Hits_6;
		NullCheck(L_46);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_47;
		L_47 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_46, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_13 = L_47;
		// var plane = planeManager.GetPlane(firstHit.trackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_48 = V_12;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_49;
		L_49 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_13), NULL);
		NullCheck(L_48);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_50;
		L_50 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_48, L_49, NULL);
		V_14 = L_50;
		// if (plane == null || IsPlaneTypeAllowed(gestureTranslationMode, plane.alignment))
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_51 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_52)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_53 = ___gestureTranslationMode5;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_54 = V_14;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = GestureTransformationUtility_IsPlaneTypeAllowed_m666536AD393ECD917C13A49566273A8B7C96ABA7(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_0202;
		}
	}

IL_0123:
	{
		// if (Vector3.Dot(cameraTransform.position - firstHit.pose.position,
		//                 firstHit.pose.rotation * Vector3.up) < 0f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = V_2;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_59;
		L_59 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_13), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = L_59.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_58, L_60, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_62;
		L_62 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_13), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63 = L_62.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_63, L_64, NULL);
		float L_66;
		L_66 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_61, L_65, NULL);
		if ((!(((float)L_66) < ((float)(0.0f)))))
		{
			goto IL_015e;
		}
	}
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_67 = V_0;
		return L_67;
	}

IL_015e:
	{
		// if (plane == null ||
		//     plane.alignment == PlaneAlignment.Vertical ||
		//     plane.alignment == PlaneAlignment.HorizontalDown ||
		//     plane.alignment == PlaneAlignment.HorizontalUp)
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_68 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_69)
		{
			goto IL_018c;
		}
	}
	{
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_70 = V_14;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_70, NULL);
		if ((((int32_t)L_71) == ((int32_t)((int32_t)200))))
		{
			goto IL_018c;
		}
	}
	{
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_72 = V_14;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_72, NULL);
		if ((((int32_t)L_73) == ((int32_t)((int32_t)101))))
		{
			goto IL_018c;
		}
	}
	{
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_74 = V_14;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_74, NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0204;
		}
	}

IL_018c:
	{
		// groundingPoint = LimitTranslation(
		//     firstHit.pose.position, currentAnchorPosition, maxTranslationDistance);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_76;
		L_76 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_13), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = L_76.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ___currentAnchorPosition0;
		float L_79 = ___maxTranslationDistance4;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = GestureTransformationUtility_LimitTranslation_m9A5063D09992DC5039A42741E1F0DFCBBDC3AEC9(L_77, L_78, L_79, NULL);
		V_7 = L_80;
		// if (plane != null)
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_81 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_81, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_82)
		{
			goto IL_01bd;
		}
	}
	{
		// result.placementPlane = plane;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_83 = V_14;
		Placement_set_placementPlane_mBC9651FDAAC731C1C05D223BC8EC4077B0BE0C31_inline((&V_0), L_83, NULL);
		// result.hasPlane = true;
		Placement_set_hasPlane_mC797A50A6AC3FE43FEF180F6DA16B86FCA3F2D80_inline((&V_0), (bool)1, NULL);
	}

IL_01bd:
	{
		// result.hasPlacementPosition = true;
		Placement_set_hasPlacementPosition_mEBCB50BA6CC5F07FD19E341D2B83312B454AA9CB_inline((&V_0), (bool)1, NULL);
		// result.placementPosition = groundingPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_7;
		Placement_set_placementPosition_m224C7EB77A068D617B0BB786BAFE938DDD4485BE_inline((&V_0), L_84, NULL);
		// result.hasHoveringPosition = true;
		Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_inline((&V_0), (bool)1, NULL);
		// result.hoveringPosition = groundingPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_7;
		Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_inline((&V_0), L_85, NULL);
		// result.updatedGroundingPlaneHeight = groundingPoint.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_7;
		float L_87 = L_86.___y_3;
		Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_inline((&V_0), L_87, NULL);
		// result.placementRotation = firstHit.pose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_88;
		L_88 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_13), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89 = L_88.___rotation_1;
		Placement_set_placementRotation_m88E66AF455225CF624B5A5A5354BB21B1B3319C7_inline((&V_0), L_89, NULL);
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_90 = V_0;
		return L_90;
	}

IL_0202:
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_91 = V_0;
		return L_91;
	}

IL_0204:
	{
		// if (angle < 0f)
		float L_92 = V_3;
		if ((!(((float)L_92) < ((float)(0.0f)))))
		{
			goto IL_020e;
		}
	}
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_93 = V_0;
		return L_93;
	}

IL_020e:
	{
		// var cameraRay = camera.ScreenPointToRay(screenPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_94 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = ___screenPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_95, NULL);
		NullCheck(L_94);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_97;
		L_97 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_94, L_96, NULL);
		V_8 = L_97;
		// var groundingPlane =
		//     new Plane(Vector3.up, new Vector3(0f, groundingPlaneHeight, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_99 = ___groundingPlaneHeight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_100), (0.0f), L_99, (0.0f), /*hidden argument*/NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_9), L_98, L_100, NULL);
		// if (groundingPlane.Raycast(cameraRay, out var enter))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_101 = V_8;
		bool L_102;
		L_102 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_9), L_101, (&V_10), NULL);
		if (!L_102)
		{
			goto IL_027b;
		}
	}
	{
		// groundingPoint = LimitTranslation(
		//     cameraRay.GetPoint(enter), currentAnchorPosition, maxTranslationDistance);
		float L_103 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_8), L_103, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = ___currentAnchorPosition0;
		float L_106 = ___maxTranslationDistance4;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = GestureTransformationUtility_LimitTranslation_m9A5063D09992DC5039A42741E1F0DFCBBDC3AEC9(L_104, L_105, L_106, NULL);
		V_7 = L_107;
		// result.hasHoveringPosition = true;
		Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_inline((&V_0), (bool)1, NULL);
		// result.hoveringPosition = groundingPoint + (Vector3.up * hoverOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_110 = ___hoverOffset3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_109, L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_108, L_111, NULL);
		Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_inline((&V_0), L_112, NULL);
		goto IL_027d;
	}

IL_027b:
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_113 = V_0;
		return L_113;
	}

IL_027d:
	{
		// return result;
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_114 = V_0;
		return L_114;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureTransformationUtility_Raycast_m8FD4D1F2840E907F2E1CE1DBF3023EF10EB95319 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Raycast(screenPoint, hitResults, (ARSessionOrigin)null, trackableTypes, fallbackLayerMask);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___screenPoint0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_1 = ___hitResults1;
		int32_t L_2 = ___trackableTypes2;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GestureTransformationUtility_Raycast_mF399B72ACC81FE80A07517AF470450FA45C8302D(L_0, L_1, (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*)NULL, L_2, ((int32_t)512), NULL);
		return L_3;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::GetBestPlacementPosition(UnityEngine.Vector3,UnityEngine.Vector2,System.Single,System.Single,System.Single,UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/GestureTranslationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 GestureTransformationUtility_GetBestPlacementPosition_mC2FC5F4B773D6F22C7107AD392479ABF975E19A7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentAnchorPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPos1, float ___groundingPlaneHeight2, float ___hoverOffset3, float ___maxTranslationDistance4, int32_t ___gestureTranslationMode5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetBestPlacementPosition(currentAnchorPosition,
		//     screenPos,
		//     groundingPlaneHeight,
		//     hoverOffset,
		//     maxTranslationDistance,
		//     gestureTranslationMode,
		//     (ARSessionOrigin)null,
		//     fallbackLayerMask: fallbackLayerMask);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___currentAnchorPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___screenPos1;
		float L_2 = ___groundingPlaneHeight2;
		float L_3 = ___hoverOffset3;
		float L_4 = ___maxTranslationDistance4;
		int32_t L_5 = ___gestureTranslationMode5;
		il2cpp_codegen_runtime_class_init_inline(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21 L_6;
		L_6 = GestureTransformationUtility_GetBestPlacementPosition_m180DE1C7ED8281C1348A6E806E2EE2512FCB1E0E(L_0, L_1, L_2, L_3, L_4, L_5, (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3*)NULL, 1, ((int32_t)512), NULL);
		return L_6;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureTransformationUtility__cctor_m46051363C2521BEF20933978750E8A5D76E92640 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_Hits_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_StaticFields*)il2cpp_codegen_static_fields_for(GestureTransformationUtility_tFE84D342344E2B1DD414D023AF7C085EBB011996_il2cpp_TypeInfo_var))->___s_Hits_6), (void*)L_0);
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
// Conversion methods for marshalling of: UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement
IL2CPP_EXTERN_C void Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshal_pinvoke(const Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21& unmarshaled, Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CplacementPlaneU3Ek__BackingField_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<placementPlane>k__BackingField' of type 'Placement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CplacementPlaneU3Ek__BackingField_6Exception, NULL);
}
IL2CPP_EXTERN_C void Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshal_pinvoke_back(const Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshaled_pinvoke& marshaled, Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21& unmarshaled)
{
	Exception_t* ___U3CplacementPlaneU3Ek__BackingField_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<placementPlane>k__BackingField' of type 'Placement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CplacementPlaneU3Ek__BackingField_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement
IL2CPP_EXTERN_C void Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshal_pinvoke_cleanup(Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement
IL2CPP_EXTERN_C void Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshal_com(const Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21& unmarshaled, Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshaled_com& marshaled)
{
	Exception_t* ___U3CplacementPlaneU3Ek__BackingField_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<placementPlane>k__BackingField' of type 'Placement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CplacementPlaneU3Ek__BackingField_6Exception, NULL);
}
IL2CPP_EXTERN_C void Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshal_com_back(const Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshaled_com& marshaled, Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21& unmarshaled)
{
	Exception_t* ___U3CplacementPlaneU3Ek__BackingField_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<placementPlane>k__BackingField' of type 'Placement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CplacementPlaneU3Ek__BackingField_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement
IL2CPP_EXTERN_C void Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshal_com_cleanup(Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_hasHoveringPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_hasHoveringPosition_m8AC86FA805F9EE67588FDCB253DB4C41F7647136 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public bool hasHoveringPosition { get; set; }
		bool L_0 = __this->___U3ChasHoveringPositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Placement_get_hasHoveringPosition_m8AC86FA805F9EE67588FDCB253DB4C41F7647136_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	bool _returnValue;
	_returnValue = Placement_get_hasHoveringPosition_m8AC86FA805F9EE67588FDCB253DB4C41F7647136_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_hasHoveringPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool hasHoveringPosition { get; set; }
		bool L_0 = ___value0;
		__this->___U3ChasHoveringPositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_hoveringPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_hoveringPosition_m33C7F03371449CBA640D4FE5D7FC2657BC80888D (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 hoveringPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ChoveringPositionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_hoveringPosition_m33C7F03371449CBA640D4FE5D7FC2657BC80888D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Placement_get_hoveringPosition_m33C7F03371449CBA640D4FE5D7FC2657BC80888D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_hoveringPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 hoveringPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3ChoveringPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_hasPlacementPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_hasPlacementPosition_mF8478CF3AFA0CE0BACE647D9BAAC165A1FB544E1 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public bool hasPlacementPosition { get; set; }
		bool L_0 = __this->___U3ChasPlacementPositionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Placement_get_hasPlacementPosition_mF8478CF3AFA0CE0BACE647D9BAAC165A1FB544E1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	bool _returnValue;
	_returnValue = Placement_get_hasPlacementPosition_mF8478CF3AFA0CE0BACE647D9BAAC165A1FB544E1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_hasPlacementPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_hasPlacementPosition_mEBCB50BA6CC5F07FD19E341D2B83312B454AA9CB (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool hasPlacementPosition { get; set; }
		bool L_0 = ___value0;
		__this->___U3ChasPlacementPositionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_hasPlacementPosition_mEBCB50BA6CC5F07FD19E341D2B83312B454AA9CB_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_hasPlacementPosition_mEBCB50BA6CC5F07FD19E341D2B83312B454AA9CB_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_placementPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_placementPosition_m60592EDE3AEE92A1D74C5CC66B492D45219FE825 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 placementPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CplacementPositionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_placementPosition_m60592EDE3AEE92A1D74C5CC66B492D45219FE825_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Placement_get_placementPosition_m60592EDE3AEE92A1D74C5CC66B492D45219FE825_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_placementPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_placementPosition_m224C7EB77A068D617B0BB786BAFE938DDD4485BE (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 placementPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CplacementPositionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_placementPosition_m224C7EB77A068D617B0BB786BAFE938DDD4485BE_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_placementPosition_m224C7EB77A068D617B0BB786BAFE938DDD4485BE_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_placementRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion placementRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CplacementRotationU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_placementRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_placementRotation_m88E66AF455225CF624B5A5A5354BB21B1B3319C7 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion placementRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CplacementRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_placementRotation_m88E66AF455225CF624B5A5A5354BB21B1B3319C7_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_placementRotation_m88E66AF455225CF624B5A5A5354BB21B1B3319C7_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_hasPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_hasPlane_m934E52CE701CDF7A765FAB9B659453622F9CB57B (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public bool hasPlane { get; set; }
		bool L_0 = __this->___U3ChasPlaneU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Placement_get_hasPlane_m934E52CE701CDF7A765FAB9B659453622F9CB57B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	bool _returnValue;
	_returnValue = Placement_get_hasPlane_m934E52CE701CDF7A765FAB9B659453622F9CB57B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_hasPlane(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_hasPlane_mC797A50A6AC3FE43FEF180F6DA16B86FCA3F2D80 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool hasPlane { get; set; }
		bool L_0 = ___value0;
		__this->___U3ChasPlaneU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_hasPlane_mC797A50A6AC3FE43FEF180F6DA16B86FCA3F2D80_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_hasPlane_mC797A50A6AC3FE43FEF180F6DA16B86FCA3F2D80_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_placementPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Placement_get_placementPlane_m164CEE9F117AAAC49FB9EE0027C137B785B8B9B5 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public ARPlane placementPlane { get; set; }
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___U3CplacementPlaneU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Placement_get_placementPlane_m164CEE9F117AAAC49FB9EE0027C137B785B8B9B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* _returnValue;
	_returnValue = Placement_get_placementPlane_m164CEE9F117AAAC49FB9EE0027C137B785B8B9B5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_placementPlane(UnityEngine.XR.ARFoundation.ARPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_placementPlane_mBC9651FDAAC731C1C05D223BC8EC4077B0BE0C31 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___value0, const RuntimeMethod* method) 
{
	{
		// public ARPlane placementPlane { get; set; }
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = ___value0;
		__this->___U3CplacementPlaneU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementPlaneU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_placementPlane_mBC9651FDAAC731C1C05D223BC8EC4077B0BE0C31_AdjustorThunk (RuntimeObject* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_placementPlane_mBC9651FDAAC731C1C05D223BC8EC4077B0BE0C31_inline(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_updatedGroundingPlaneHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Placement_get_updatedGroundingPlaneHeight_m4D14E5829330F269DBDF5ED5AC62A6FD2D27BB14 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public float updatedGroundingPlaneHeight { get; set; }
		float L_0 = __this->___U3CupdatedGroundingPlaneHeightU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Placement_get_updatedGroundingPlaneHeight_m4D14E5829330F269DBDF5ED5AC62A6FD2D27BB14_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	float _returnValue;
	_returnValue = Placement_get_updatedGroundingPlaneHeight_m4D14E5829330F269DBDF5ED5AC62A6FD2D27BB14_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_updatedGroundingPlaneHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float updatedGroundingPlaneHeight { get; set; }
		float L_0 = ___value0;
		__this->___U3CupdatedGroundingPlaneHeightU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_HasHoveringPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_HasHoveringPosition_mF61C216ABDEFC30A7716260A2FC956D95032BCE0 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// get => hasHoveringPosition;
		bool L_0;
		L_0 = Placement_get_hasHoveringPosition_m8AC86FA805F9EE67588FDCB253DB4C41F7647136_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Placement_get_HasHoveringPosition_mF61C216ABDEFC30A7716260A2FC956D95032BCE0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	bool _returnValue;
	_returnValue = Placement_get_HasHoveringPosition_mF61C216ABDEFC30A7716260A2FC956D95032BCE0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_HasHoveringPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_HasHoveringPosition_m1660E3606AB78F55DBFB18041343DCCAFDC6689C (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => hasHoveringPosition = value;
		bool L_0 = ___value0;
		Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_HasHoveringPosition_m1660E3606AB78F55DBFB18041343DCCAFDC6689C_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_HasHoveringPosition_m1660E3606AB78F55DBFB18041343DCCAFDC6689C(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_HoveringPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_HoveringPosition_m608C1EDD2528CDBD89DFCBD39222D348544238E5 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// get => hoveringPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Placement_get_hoveringPosition_m33C7F03371449CBA640D4FE5D7FC2657BC80888D_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_HoveringPosition_m608C1EDD2528CDBD89DFCBD39222D348544238E5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Placement_get_HoveringPosition_m608C1EDD2528CDBD89DFCBD39222D348544238E5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_HoveringPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_HoveringPosition_m186763F87375CFAEF6E69A82816074895AA1308E (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => hoveringPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_HoveringPosition_m186763F87375CFAEF6E69A82816074895AA1308E_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_HoveringPosition_m186763F87375CFAEF6E69A82816074895AA1308E(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_HasPlacementPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_HasPlacementPosition_m05FAC9C91E9AA37C0BC228576F2ACDDCB7BB968F (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// get => hasPlacementPosition;
		bool L_0;
		L_0 = Placement_get_hasPlacementPosition_mF8478CF3AFA0CE0BACE647D9BAAC165A1FB544E1_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Placement_get_HasPlacementPosition_m05FAC9C91E9AA37C0BC228576F2ACDDCB7BB968F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	bool _returnValue;
	_returnValue = Placement_get_HasPlacementPosition_m05FAC9C91E9AA37C0BC228576F2ACDDCB7BB968F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_HasPlacementPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_HasPlacementPosition_mF1637A14788B8F22DB2C6CF55F9D6ED892A5C039 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => hasPlacementPosition = value;
		bool L_0 = ___value0;
		Placement_set_hasPlacementPosition_mEBCB50BA6CC5F07FD19E341D2B83312B454AA9CB_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_HasPlacementPosition_mF1637A14788B8F22DB2C6CF55F9D6ED892A5C039_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_HasPlacementPosition_mF1637A14788B8F22DB2C6CF55F9D6ED892A5C039(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_PlacementPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_PlacementPosition_mC4921EB4856C29EC8DA6D61D2239E6A1A4BD2E9B (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// get => placementPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Placement_get_placementPosition_m60592EDE3AEE92A1D74C5CC66B492D45219FE825_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_PlacementPosition_mC4921EB4856C29EC8DA6D61D2239E6A1A4BD2E9B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Placement_get_PlacementPosition_mC4921EB4856C29EC8DA6D61D2239E6A1A4BD2E9B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_PlacementPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_PlacementPosition_m6210E8CB071A4F68D37513AF3C2C16B48F4DF6EB (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => placementPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Placement_set_placementPosition_m224C7EB77A068D617B0BB786BAFE938DDD4485BE_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_PlacementPosition_m6210E8CB071A4F68D37513AF3C2C16B48F4DF6EB_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_PlacementPosition_m6210E8CB071A4F68D37513AF3C2C16B48F4DF6EB(_thisAdjusted, ___value0, method);
}
// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_PlacementRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Placement_get_PlacementRotation_m70824682ACD6B6D895A3F5F26E31A6C89D2982F3 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// get => placementRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Placement_get_PlacementRotation_m70824682ACD6B6D895A3F5F26E31A6C89D2982F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = Placement_get_PlacementRotation_m70824682ACD6B6D895A3F5F26E31A6C89D2982F3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_PlacementRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_PlacementRotation_m93EBE1EB43F2BAA10D0928150B55B6FD0178EF98 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// set => placementRotation = value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		Placement_set_placementRotation_m88E66AF455225CF624B5A5A5354BB21B1B3319C7_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_PlacementRotation_m93EBE1EB43F2BAA10D0928150B55B6FD0178EF98_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_PlacementRotation_m93EBE1EB43F2BAA10D0928150B55B6FD0178EF98(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_HasPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Placement_get_HasPlane_mBE0340EC4A2D46ABBE116D64E8DDBB2D0581B365 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// get => hasPlane;
		bool L_0;
		L_0 = Placement_get_hasPlane_m934E52CE701CDF7A765FAB9B659453622F9CB57B_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Placement_get_HasPlane_mBE0340EC4A2D46ABBE116D64E8DDBB2D0581B365_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	bool _returnValue;
	_returnValue = Placement_get_HasPlane_mBE0340EC4A2D46ABBE116D64E8DDBB2D0581B365(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_HasPlane(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_HasPlane_mF6FC687AFB6D20E6ACA01AA37E247588F7782A18 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => hasPlane = value;
		bool L_0 = ___value0;
		Placement_set_hasPlane_mC797A50A6AC3FE43FEF180F6DA16B86FCA3F2D80_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_HasPlane_mF6FC687AFB6D20E6ACA01AA37E247588F7782A18_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_HasPlane_mF6FC687AFB6D20E6ACA01AA37E247588F7782A18(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_PlacementPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Placement_get_PlacementPlane_m08C7A6D9B533673F66F3CAAF7D53C9C28E4FFCCC (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// get => placementPlane;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0;
		L_0 = Placement_get_placementPlane_m164CEE9F117AAAC49FB9EE0027C137B785B8B9B5_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Placement_get_PlacementPlane_m08C7A6D9B533673F66F3CAAF7D53C9C28E4FFCCC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* _returnValue;
	_returnValue = Placement_get_PlacementPlane_m08C7A6D9B533673F66F3CAAF7D53C9C28E4FFCCC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_PlacementPlane(UnityEngine.XR.ARFoundation.ARPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_PlacementPlane_m2341DC58F82B30382B3DF1646FF22EED3AB68AFC (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___value0, const RuntimeMethod* method) 
{
	{
		// set => placementPlane = value;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = ___value0;
		Placement_set_placementPlane_mBC9651FDAAC731C1C05D223BC8EC4077B0BE0C31_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_PlacementPlane_m2341DC58F82B30382B3DF1646FF22EED3AB68AFC_AdjustorThunk (RuntimeObject* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_PlacementPlane_m2341DC58F82B30382B3DF1646FF22EED3AB68AFC(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::get_UpdatedGroundingPlaneHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Placement_get_UpdatedGroundingPlaneHeight_mBEA8F9463BDD5F0ED3C63CE6F3D78BD5D0558B8A (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// get => updatedGroundingPlaneHeight;
		float L_0;
		L_0 = Placement_get_updatedGroundingPlaneHeight_m4D14E5829330F269DBDF5ED5AC62A6FD2D27BB14_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Placement_get_UpdatedGroundingPlaneHeight_mBEA8F9463BDD5F0ED3C63CE6F3D78BD5D0558B8A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	float _returnValue;
	_returnValue = Placement_get_UpdatedGroundingPlaneHeight_mBEA8F9463BDD5F0ED3C63CE6F3D78BD5D0558B8A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility/Placement::set_UpdatedGroundingPlaneHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placement_set_UpdatedGroundingPlaneHeight_m4262ABD1EB2E7DE4ABAEBA8D1959F225089D9518 (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => updatedGroundingPlaneHeight = value;
		float L_0 = ___value0;
		Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Placement_set_UpdatedGroundingPlaneHeight_m4262ABD1EB2E7DE4ABAEBA8D1959F225089D9518_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21*>(__this + _offset);
	Placement_set_UpdatedGroundingPlaneHeight_m4262ABD1EB2E7DE4ABAEBA8D1959F225089D9518(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_xrOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ARGestureInteractor_get_xrOrigin_m8C436F9844960D5B3277A8F029071A250A8F1322 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// get => m_XROrigin;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = __this->___m_XROrigin_34;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_xrOrigin(Unity.XR.CoreUtils.XROrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_set_xrOrigin_m8185DB3716CF4F6114C192623DE1E54AD94FB721 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___value0, const RuntimeMethod* method) 
{
	{
		// m_XROrigin = value;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = ___value0;
		__this->___m_XROrigin_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_XROrigin_34), (void*)L_0);
		// if (Application.isPlaying)
		bool L_1;
		L_1 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// PushXROrigin();
		VirtualActionInvoker0::Invoke(83 /* System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::PushXROrigin() */, __this);
	}

IL_0014:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_dragGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* ARGestureInteractor_get_dragGestureRecognizer_m8FAC49452C6C7D8A0E78F8D727B7A41D524AD971 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public DragGestureRecognizer dragGestureRecognizer { get; private set; }
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0 = __this->___U3CdragGestureRecognizerU3Ek__BackingField_35;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_dragGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_set_dragGestureRecognizer_mD743BCBFF37A48CF182804B9A3437B6E29C33214 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* ___value0, const RuntimeMethod* method) 
{
	{
		// public DragGestureRecognizer dragGestureRecognizer { get; private set; }
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0 = ___value0;
		__this->___U3CdragGestureRecognizerU3Ek__BackingField_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdragGestureRecognizerU3Ek__BackingField_35), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_pinchGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* ARGestureInteractor_get_pinchGestureRecognizer_mCE93BE8467B47945C6756D0A0DFC2AC8734E4ACB (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public PinchGestureRecognizer pinchGestureRecognizer { get; private set; }
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_0 = __this->___U3CpinchGestureRecognizerU3Ek__BackingField_36;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_pinchGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_set_pinchGestureRecognizer_mA76E1CF9156F7959F943319F61D80247F8B94192 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* ___value0, const RuntimeMethod* method) 
{
	{
		// public PinchGestureRecognizer pinchGestureRecognizer { get; private set; }
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_0 = ___value0;
		__this->___U3CpinchGestureRecognizerU3Ek__BackingField_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchGestureRecognizerU3Ek__BackingField_36), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_twoFingerDragGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* ARGestureInteractor_get_twoFingerDragGestureRecognizer_m4D992376FB76A691883DB57388F0A4D0E89B5AF9 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TwoFingerDragGestureRecognizer twoFingerDragGestureRecognizer { get; private set; }
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_0 = __this->___U3CtwoFingerDragGestureRecognizerU3Ek__BackingField_37;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_twoFingerDragGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_set_twoFingerDragGestureRecognizer_m418D132DC1ADD2BA874FDBBC7B88525E22D6AAE2 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* ___value0, const RuntimeMethod* method) 
{
	{
		// public TwoFingerDragGestureRecognizer twoFingerDragGestureRecognizer { get; private set; }
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_0 = ___value0;
		__this->___U3CtwoFingerDragGestureRecognizerU3Ek__BackingField_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtwoFingerDragGestureRecognizerU3Ek__BackingField_37), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_tapGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* ARGestureInteractor_get_tapGestureRecognizer_m2CB26461D4DAE55F9704FFA877C8C64EFA843D72 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TapGestureRecognizer tapGestureRecognizer { get; private set; }
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_0 = __this->___U3CtapGestureRecognizerU3Ek__BackingField_38;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_tapGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_set_tapGestureRecognizer_m9B2E0984DD1B87D9CE9E1FB6006B88502E64A3ED (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* ___value0, const RuntimeMethod* method) 
{
	{
		// public TapGestureRecognizer tapGestureRecognizer { get; private set; }
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_0 = ___value0;
		__this->___U3CtapGestureRecognizerU3Ek__BackingField_38 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtapGestureRecognizerU3Ek__BackingField_38), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_twistGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* ARGestureInteractor_get_twistGestureRecognizer_m2E6D4CE780DB2482ECDE1535347F5897589E7065 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TwistGestureRecognizer twistGestureRecognizer { get; private set; }
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_0 = __this->___U3CtwistGestureRecognizerU3Ek__BackingField_39;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_twistGestureRecognizer(UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_set_twistGestureRecognizer_m8A756D09D679776AA07FFAD3E24EC018BEB6C2E8 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* ___value0, const RuntimeMethod* method) 
{
	{
		// public TwistGestureRecognizer twistGestureRecognizer { get; private set; }
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_0 = ___value0;
		__this->___U3CtwistGestureRecognizerU3Ek__BackingField_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtwistGestureRecognizerU3Ek__BackingField_39), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_Reset_m40834E46F15022CED9630C3D0388E8546D282F7A (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_Awake_m3643A2E15F2A9310254C333E9BA50E983BBE70F1 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		XRBaseInteractor_Awake_m6C75157E01BD94FADF8EC1815E1202CB615DD88E(__this, NULL);
		// dragGestureRecognizer = new DragGestureRecognizer();
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0 = (DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5*)il2cpp_codegen_object_new(DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DragGestureRecognizer__ctor_mDCEA270A7EF6978CCAD58DE18CFB987FAA1657E4(L_0, NULL);
		ARGestureInteractor_set_dragGestureRecognizer_mD743BCBFF37A48CF182804B9A3437B6E29C33214_inline(__this, L_0, NULL);
		// pinchGestureRecognizer = new PinchGestureRecognizer();
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_1 = (PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501*)il2cpp_codegen_object_new(PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PinchGestureRecognizer__ctor_m633E5C31FF4E28B9050BC01B4A3BED254DC10E93(L_1, NULL);
		ARGestureInteractor_set_pinchGestureRecognizer_mA76E1CF9156F7959F943319F61D80247F8B94192_inline(__this, L_1, NULL);
		// twoFingerDragGestureRecognizer = new TwoFingerDragGestureRecognizer();
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_2 = (TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542*)il2cpp_codegen_object_new(TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TwoFingerDragGestureRecognizer__ctor_m83045490FC91FC8611E0A7572B6184815B1FEDED(L_2, NULL);
		ARGestureInteractor_set_twoFingerDragGestureRecognizer_m418D132DC1ADD2BA874FDBBC7B88525E22D6AAE2_inline(__this, L_2, NULL);
		// tapGestureRecognizer = new TapGestureRecognizer();
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_3 = (TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47*)il2cpp_codegen_object_new(TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TapGestureRecognizer__ctor_m7ADA3F9C4DBEF01C753545ACAF306A7721549FBB(L_3, NULL);
		ARGestureInteractor_set_tapGestureRecognizer_m9B2E0984DD1B87D9CE9E1FB6006B88502E64A3ED_inline(__this, L_3, NULL);
		// twistGestureRecognizer = new TwistGestureRecognizer();
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_4 = (TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46*)il2cpp_codegen_object_new(TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TwistGestureRecognizer__ctor_m8429067972708E4055155E17B7B7DB4F4A5DD213(L_4, NULL);
		ARGestureInteractor_set_twistGestureRecognizer_m8A756D09D679776AA07FFAD3E24EC018BEB6C2E8_inline(__this, L_4, NULL);
		// FindXROrigin();
		ARGestureInteractor_FindXROrigin_m1D9991B897A314071F9F7B6BB34660503C9D04B8(__this, NULL);
		// PushXROrigin();
		VirtualActionInvoker0::Invoke(83 /* System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::PushXROrigin() */, __this);
		// FindARSessionOrigin();
		ARGestureInteractor_FindARSessionOrigin_m1604E2804F5F5C887AB1A6F29C43F572D1D0BE35(__this, NULL);
		// PushARSessionOrigin();
		VirtualActionInvoker0::Invoke(84 /* System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::PushARSessionOrigin() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_OnEnable_m157D77611D935C65F99837566DD77AE36F956A95 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// base.OnEnable();
		XRBaseInteractor_OnEnable_m65BC403EF883EFD685764D768F787C11F8906BDD(__this, NULL);
		// EnhancedTouchSupport.Enable();
		EnhancedTouchSupport_Enable_m3499C94737BB636112851899C283E1FCCC9E3C6E(NULL);
		// FindXROrigin();
		ARGestureInteractor_FindXROrigin_m1D9991B897A314071F9F7B6BB34660503C9D04B8(__this, NULL);
		// PushXROrigin();
		VirtualActionInvoker0::Invoke(83 /* System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::PushXROrigin() */, __this);
		// FindARSessionOrigin();
		ARGestureInteractor_FindARSessionOrigin_m1604E2804F5F5C887AB1A6F29C43F572D1D0BE35(__this, NULL);
		// PushARSessionOrigin();
		VirtualActionInvoker0::Invoke(84 /* System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::PushARSessionOrigin() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_OnDisable_mDD8AC7C41DD3511F75216E8047EC24E96BF21724 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDisable();
		XRBaseInteractor_OnDisable_mA7C2B26F5887ECF0E95A964759EE035800B40D6E(__this, NULL);
		// EnhancedTouchSupport.Disable();
		EnhancedTouchSupport_Disable_mDE96196C7171B1827FDFD8762A402D30A01975B6(NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::ProcessInteractor(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_ProcessInteractor_m2674AE236AE2F8AD4E97EE9E8FF2F49F72DAEC19 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	{
		// base.ProcessInteractor(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractor_ProcessInteractor_mCA4F4CDFE9578064E85EEA274098EDAE7E9E27BC(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0011;
		}
	}
	{
		// UpdateGestureRecognizers();
		VirtualActionInvoker0::Invoke(82 /* System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::UpdateGestureRecognizers() */, __this);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::FindXROrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_FindXROrigin_m1D9991B897A314071F9F7B6BB34660503C9D04B8 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_mAB31BBA1730F8CD94057988C74010254ADABC140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_XROrigin != null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = __this->___m_XROrigin_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (s_XROriginCache == null)
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_2 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_XROriginCache_41;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// s_XROriginCache = FindObjectOfType<XROrigin>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_4;
		L_4 = Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_mAB31BBA1730F8CD94057988C74010254ADABC140(Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_mAB31BBA1730F8CD94057988C74010254ADABC140_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_XROriginCache_41 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_XROriginCache_41), (void*)L_4);
	}

IL_0026:
	{
		// m_XROrigin = s_XROriginCache;
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_5 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_XROriginCache_41;
		__this->___m_XROrigin_34 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_XROrigin_34), (void*)L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::FindARSessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_FindARSessionOrigin_m1604E2804F5F5C887AB1A6F29C43F572D1D0BE35 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ARSessionOrigin != null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___m_ARSessionOrigin_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (s_ARSessionOriginCache == null)
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_2 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_ARSessionOriginCache_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// s_ARSessionOriginCache = FindObjectOfType<ARSessionOrigin>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_4;
		L_4 = Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC(Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_ARSessionOriginCache_42 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_ARSessionOriginCache_42), (void*)L_4);
	}

IL_0026:
	{
		// m_ARSessionOrigin = s_ARSessionOriginCache;
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_5 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_ARSessionOriginCache_42;
		__this->___m_ARSessionOrigin_44 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARSessionOrigin_44), (void*)L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::GetValidTargets(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_GetValidTargets_m0A434F45E4D253B9220CE1646C83506399A4CCEA (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___validTargets0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// validTargets.Clear();
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_0 = ___validTargets0;
		NullCheck(L_0);
		List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_inline(L_0, List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_RuntimeMethod_var);
		// validTargets.AddRange(m_ValidTargets);
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_1 = ___validTargets0;
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_2 = __this->___m_ValidTargets_40;
		NullCheck(L_1);
		List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C(L_1, L_2, List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::UpdateGestureRecognizers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_UpdateGestureRecognizers_mCC5AEBBDF3AE1A2AD2AF1923B011A7467E4BBA74 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_Update_m108480E4C734F872C77B4872D507D8D2BEC627A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_Update_m143998C0DE1A3C78EED82E48B892A02B615C952C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_Update_m2056D1A69113F7EE35F2FAF89915A4617DFBEC6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_Update_m8A768F07AC78676E52EB1792F321580403315A21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_Update_mE9265274FD7AA8646338B2CD7B5A58A74D462154_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dragGestureRecognizer.Update();
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0;
		L_0 = ARGestureInteractor_get_dragGestureRecognizer_m8FAC49452C6C7D8A0E78F8D727B7A41D524AD971_inline(__this, NULL);
		NullCheck(L_0);
		GestureRecognizer_1_Update_m143998C0DE1A3C78EED82E48B892A02B615C952C(L_0, GestureRecognizer_1_Update_m143998C0DE1A3C78EED82E48B892A02B615C952C_RuntimeMethod_var);
		// pinchGestureRecognizer.Update();
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_1;
		L_1 = ARGestureInteractor_get_pinchGestureRecognizer_mCE93BE8467B47945C6756D0A0DFC2AC8734E4ACB_inline(__this, NULL);
		NullCheck(L_1);
		GestureRecognizer_1_Update_mE9265274FD7AA8646338B2CD7B5A58A74D462154(L_1, GestureRecognizer_1_Update_mE9265274FD7AA8646338B2CD7B5A58A74D462154_RuntimeMethod_var);
		// twoFingerDragGestureRecognizer.Update();
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_2;
		L_2 = ARGestureInteractor_get_twoFingerDragGestureRecognizer_m4D992376FB76A691883DB57388F0A4D0E89B5AF9_inline(__this, NULL);
		NullCheck(L_2);
		GestureRecognizer_1_Update_m2056D1A69113F7EE35F2FAF89915A4617DFBEC6E(L_2, GestureRecognizer_1_Update_m2056D1A69113F7EE35F2FAF89915A4617DFBEC6E_RuntimeMethod_var);
		// tapGestureRecognizer.Update();
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_3;
		L_3 = ARGestureInteractor_get_tapGestureRecognizer_m2CB26461D4DAE55F9704FFA877C8C64EFA843D72_inline(__this, NULL);
		NullCheck(L_3);
		GestureRecognizer_1_Update_m108480E4C734F872C77B4872D507D8D2BEC627A4(L_3, GestureRecognizer_1_Update_m108480E4C734F872C77B4872D507D8D2BEC627A4_RuntimeMethod_var);
		// twistGestureRecognizer.Update();
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_4;
		L_4 = ARGestureInteractor_get_twistGestureRecognizer_m2E6D4CE780DB2482ECDE1535347F5897589E7065_inline(__this, NULL);
		NullCheck(L_4);
		GestureRecognizer_1_Update_m8A768F07AC78676E52EB1792F321580403315A21(L_4, GestureRecognizer_1_Update_m8A768F07AC78676E52EB1792F321580403315A21_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::PushXROrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_PushXROrigin_m270902390F3EA390CFEF6A1FFFC47CF4A3C7DB5E (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_xrOrigin_m1FE5EA5C4C156B13448C4825CEB5CE63EC05D743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_xrOrigin_m614EB1E623300AFDC510AC1EE21F8F59A6632FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_xrOrigin_mD18689063AC5D443F8BD220F8A292FC4C9BE5484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_xrOrigin_mD86AC28E894C376833FED7876EB3DB2D74B102D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_xrOrigin_mFF43E932B0BC18F9C51CBC834DD09C2EC8D11EBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dragGestureRecognizer.xrOrigin = m_XROrigin;
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0;
		L_0 = ARGestureInteractor_get_dragGestureRecognizer_m8FAC49452C6C7D8A0E78F8D727B7A41D524AD971_inline(__this, NULL);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_1 = __this->___m_XROrigin_34;
		NullCheck(L_0);
		GestureRecognizer_1_set_xrOrigin_m614EB1E623300AFDC510AC1EE21F8F59A6632FE8_inline(L_0, L_1, GestureRecognizer_1_set_xrOrigin_m614EB1E623300AFDC510AC1EE21F8F59A6632FE8_RuntimeMethod_var);
		// pinchGestureRecognizer.xrOrigin = m_XROrigin;
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_2;
		L_2 = ARGestureInteractor_get_pinchGestureRecognizer_mCE93BE8467B47945C6756D0A0DFC2AC8734E4ACB_inline(__this, NULL);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_3 = __this->___m_XROrigin_34;
		NullCheck(L_2);
		GestureRecognizer_1_set_xrOrigin_m1FE5EA5C4C156B13448C4825CEB5CE63EC05D743_inline(L_2, L_3, GestureRecognizer_1_set_xrOrigin_m1FE5EA5C4C156B13448C4825CEB5CE63EC05D743_RuntimeMethod_var);
		// twoFingerDragGestureRecognizer.xrOrigin = m_XROrigin;
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_4;
		L_4 = ARGestureInteractor_get_twoFingerDragGestureRecognizer_m4D992376FB76A691883DB57388F0A4D0E89B5AF9_inline(__this, NULL);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_5 = __this->___m_XROrigin_34;
		NullCheck(L_4);
		GestureRecognizer_1_set_xrOrigin_mD86AC28E894C376833FED7876EB3DB2D74B102D4_inline(L_4, L_5, GestureRecognizer_1_set_xrOrigin_mD86AC28E894C376833FED7876EB3DB2D74B102D4_RuntimeMethod_var);
		// tapGestureRecognizer.xrOrigin = m_XROrigin;
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_6;
		L_6 = ARGestureInteractor_get_tapGestureRecognizer_m2CB26461D4DAE55F9704FFA877C8C64EFA843D72_inline(__this, NULL);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_7 = __this->___m_XROrigin_34;
		NullCheck(L_6);
		GestureRecognizer_1_set_xrOrigin_mD18689063AC5D443F8BD220F8A292FC4C9BE5484_inline(L_6, L_7, GestureRecognizer_1_set_xrOrigin_mD18689063AC5D443F8BD220F8A292FC4C9BE5484_RuntimeMethod_var);
		// twistGestureRecognizer.xrOrigin = m_XROrigin;
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_8;
		L_8 = ARGestureInteractor_get_twistGestureRecognizer_m2E6D4CE780DB2482ECDE1535347F5897589E7065_inline(__this, NULL);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_9 = __this->___m_XROrigin_34;
		NullCheck(L_8);
		GestureRecognizer_1_set_xrOrigin_mFF43E932B0BC18F9C51CBC834DD09C2EC8D11EBF_inline(L_8, L_9, GestureRecognizer_1_set_xrOrigin_mFF43E932B0BC18F9C51CBC834DD09C2EC8D11EBF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::OnRegistered(UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_OnRegistered_m962CFDB405BF7CAF3749193418A06A32C391C623 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, InteractorRegisteredEventArgs_t893A4314ACD8A860BFD76CDB09AF89CCC1E84775* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_OnInteractableRegistered_mF7D0E8D9871CC17E3380340B70BE5B02E1D3DF23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_OnInteractableUnregistered_m207B86251E5E651D83B41622B219B325D003026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBB52FE2839B6F0CDC8045D1593F54538A86710C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFA0CD3249649865B04C91FE04E85091C0105935E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5A723821D45562AEA6CF9D3057317CC1601A688C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m944DE494A680FC42C4967ECB8ABFEC095F1B549B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE88C6014E5D496A14CFE8D413102CD60E6961E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// base.OnRegistered(args);
		InteractorRegisteredEventArgs_t893A4314ACD8A860BFD76CDB09AF89CCC1E84775* L_0 = ___args0;
		XRBaseInteractor_OnRegistered_m1BB39FA738FF1BFA87EB9ACB9D091D2C0FF8F67A(__this, L_0, NULL);
		// args.manager.interactableRegistered += OnInteractableRegistered;
		InteractorRegisteredEventArgs_t893A4314ACD8A860BFD76CDB09AF89CCC1E84775* L_1 = ___args0;
		NullCheck(L_1);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_2;
		L_2 = BaseRegistrationEventArgs_get_manager_m84ED1D40C6386160D7158A59481F70348DD48413_inline(L_1, NULL);
		Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* L_3 = (Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8*)il2cpp_codegen_object_new(Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m4455C428DEE5DC85344FB4A79F97A7B440D8040E(L_3, __this, (intptr_t)((void*)ARGestureInteractor_OnInteractableRegistered_mF7D0E8D9871CC17E3380340B70BE5B02E1D3DF23_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		XRInteractionManager_add_interactableRegistered_mA988BE3542F18F59BD66F16017DF19153DA7CF3F(L_2, L_3, NULL);
		// args.manager.interactableUnregistered += OnInteractableUnregistered;
		InteractorRegisteredEventArgs_t893A4314ACD8A860BFD76CDB09AF89CCC1E84775* L_4 = ___args0;
		NullCheck(L_4);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_5;
		L_5 = BaseRegistrationEventArgs_get_manager_m84ED1D40C6386160D7158A59481F70348DD48413_inline(L_4, NULL);
		Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* L_6 = (Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0*)il2cpp_codegen_object_new(Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mB9A5ED0C0D41788CCCC4B92538FAD13F3B66E114(L_6, __this, (intptr_t)((void*)ARGestureInteractor_OnInteractableUnregistered_m207B86251E5E651D83B41622B219B325D003026F_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		XRInteractionManager_add_interactableUnregistered_mF868D7595D14DDA38D60F61249878B9E0E261E36(L_5, L_6, NULL);
		// m_ValidTargets.Clear();
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_7 = __this->___m_ValidTargets_40;
		NullCheck(L_7);
		List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_inline(L_7, List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_RuntimeMethod_var);
		// interactionManager.GetRegisteredInteractables(s_Interactables);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_8;
		L_8 = XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_9 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Interactables_43;
		NullCheck(L_8);
		XRInteractionManager_GetRegisteredInteractables_m5255C91F428D890463EC1FDC3273425FC82A2679(L_8, L_9, NULL);
		// foreach (var interactable in s_Interactables)
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_10 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Interactables_43;
		NullCheck(L_10);
		Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275 L_11;
		L_11 = List_1_GetEnumerator_mE88C6014E5D496A14CFE8D413102CD60E6961E48(L_10, List_1_GetEnumerator_mE88C6014E5D496A14CFE8D413102CD60E6961E48_RuntimeMethod_var);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0084:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mBB52FE2839B6F0CDC8045D1593F54538A86710C6((&V_0), Enumerator_Dispose_mBB52FE2839B6F0CDC8045D1593F54538A86710C6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0079_1;
			}

IL_005d_1:
			{
				// foreach (var interactable in s_Interactables)
				RuntimeObject* L_12;
				L_12 = Enumerator_get_Current_m5A723821D45562AEA6CF9D3057317CC1601A688C_inline((&V_0), Enumerator_get_Current_m5A723821D45562AEA6CF9D3057317CC1601A688C_RuntimeMethod_var);
				V_1 = L_12;
				// if (interactable is ARBaseGestureInteractable)
				RuntimeObject* L_13 = V_1;
				if (!((ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D*)IsInstClass((RuntimeObject*)L_13, ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var)))
				{
					goto IL_0079_1;
				}
			}
			{
				// m_ValidTargets.Add(interactable);
				List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_14 = __this->___m_ValidTargets_40;
				RuntimeObject* L_15 = V_1;
				NullCheck(L_14);
				List_1_Add_m944DE494A680FC42C4967ECB8ABFEC095F1B549B_inline(L_14, L_15, List_1_Add_m944DE494A680FC42C4967ECB8ABFEC095F1B549B_RuntimeMethod_var);
			}

IL_0079_1:
			{
				// foreach (var interactable in s_Interactables)
				bool L_16;
				L_16 = Enumerator_MoveNext_mFA0CD3249649865B04C91FE04E85091C0105935E((&V_0), Enumerator_MoveNext_mFA0CD3249649865B04C91FE04E85091C0105935E_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_0092;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		// s_Interactables.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_17 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Interactables_43;
		NullCheck(L_17);
		List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_inline(L_17, List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::OnUnregistered(UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_OnUnregistered_mE44668657789CA68326BF88C0B36FA61B90A8DE8 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, InteractorUnregisteredEventArgs_t77999252E8CB3198B8F1D16FB9F4F6E3412ECB93* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_OnInteractableRegistered_mF7D0E8D9871CC17E3380340B70BE5B02E1D3DF23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_OnInteractableUnregistered_m207B86251E5E651D83B41622B219B325D003026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnUnregistered(args);
		InteractorUnregisteredEventArgs_t77999252E8CB3198B8F1D16FB9F4F6E3412ECB93* L_0 = ___args0;
		XRBaseInteractor_OnUnregistered_mA14336625DC266534FFF8056AB2655A817D1B778(__this, L_0, NULL);
		// args.manager.interactableRegistered -= OnInteractableRegistered;
		InteractorUnregisteredEventArgs_t77999252E8CB3198B8F1D16FB9F4F6E3412ECB93* L_1 = ___args0;
		NullCheck(L_1);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_2;
		L_2 = BaseRegistrationEventArgs_get_manager_m84ED1D40C6386160D7158A59481F70348DD48413_inline(L_1, NULL);
		Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* L_3 = (Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8*)il2cpp_codegen_object_new(Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m4455C428DEE5DC85344FB4A79F97A7B440D8040E(L_3, __this, (intptr_t)((void*)ARGestureInteractor_OnInteractableRegistered_mF7D0E8D9871CC17E3380340B70BE5B02E1D3DF23_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		XRInteractionManager_remove_interactableRegistered_mE2A574D88B059A17C482B057CFB632446D6537D1(L_2, L_3, NULL);
		// args.manager.interactableUnregistered -= OnInteractableUnregistered;
		InteractorUnregisteredEventArgs_t77999252E8CB3198B8F1D16FB9F4F6E3412ECB93* L_4 = ___args0;
		NullCheck(L_4);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_5;
		L_5 = BaseRegistrationEventArgs_get_manager_m84ED1D40C6386160D7158A59481F70348DD48413_inline(L_4, NULL);
		Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* L_6 = (Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0*)il2cpp_codegen_object_new(Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mB9A5ED0C0D41788CCCC4B92538FAD13F3B66E114(L_6, __this, (intptr_t)((void*)ARGestureInteractor_OnInteractableUnregistered_m207B86251E5E651D83B41622B219B325D003026F_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		XRInteractionManager_remove_interactableUnregistered_mC4F1CD6073FFE6B6AB221522A1BEBE2CEE0E93E5(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::OnInteractableRegistered(UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_OnInteractableRegistered_mF7D0E8D9871CC17E3380340B70BE5B02E1D3DF23 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, InteractableRegisteredEventArgs_t9E35262DC0C14D7FE2265D47AB2D3FC9CAAE023D* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m944DE494A680FC42C4967ECB8ABFEC095F1B549B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.interactableObject is ARBaseGestureInteractable)
		InteractableRegisteredEventArgs_t9E35262DC0C14D7FE2265D47AB2D3FC9CAAE023D* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InteractableRegisteredEventArgs_get_interactableObject_m895A23B809D8B0DA415F16C644A4A4B93A8EB87A_inline(L_0, NULL);
		if (!((ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D*)IsInstClass((RuntimeObject*)L_1, ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		// m_ValidTargets.Add(args.interactableObject);
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_2 = __this->___m_ValidTargets_40;
		InteractableRegisteredEventArgs_t9E35262DC0C14D7FE2265D47AB2D3FC9CAAE023D* L_3 = ___args0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InteractableRegisteredEventArgs_get_interactableObject_m895A23B809D8B0DA415F16C644A4A4B93A8EB87A_inline(L_3, NULL);
		NullCheck(L_2);
		List_1_Add_m944DE494A680FC42C4967ECB8ABFEC095F1B549B_inline(L_2, L_4, List_1_Add_m944DE494A680FC42C4967ECB8ABFEC095F1B549B_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::OnInteractableUnregistered(UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_OnInteractableUnregistered_m207B86251E5E651D83B41622B219B325D003026F (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, InteractableUnregisteredEventArgs_tEA628E3D57FA85080BB7D4A958AA2A0F6F82BC21* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m255A559C99BD8172BA90932E05BCE4659425E4A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.interactableObject is ARBaseGestureInteractable)
		InteractableUnregisteredEventArgs_tEA628E3D57FA85080BB7D4A958AA2A0F6F82BC21* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InteractableUnregisteredEventArgs_get_interactableObject_m741DCCDBE1F7476E90F779B28768D86CD0BD02D0_inline(L_0, NULL);
		if (!((ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D*)IsInstClass((RuntimeObject*)L_1, ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		// m_ValidTargets.Remove(args.interactableObject);
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_2 = __this->___m_ValidTargets_40;
		InteractableUnregisteredEventArgs_tEA628E3D57FA85080BB7D4A958AA2A0F6F82BC21* L_3 = ___args0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InteractableUnregisteredEventArgs_get_interactableObject_m741DCCDBE1F7476E90F779B28768D86CD0BD02D0_inline(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = List_1_Remove_m255A559C99BD8172BA90932E05BCE4659425E4A6(L_2, L_4, List_1_Remove_m255A559C99BD8172BA90932E05BCE4659425E4A6_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_arSessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ARGestureInteractor_get_arSessionOrigin_m4066EA6643EBC72BC5D89109800ED04FA04CFA79 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ARSessionOrigin;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___m_ARSessionOrigin_44;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::set_arSessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_set_arSessionOrigin_m024856A0B68F5D3A53B460411F8237EEEED9639D (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___value0, const RuntimeMethod* method) 
{
	{
		// m_ARSessionOrigin = value;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = ___value0;
		__this->___m_ARSessionOrigin_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARSessionOrigin_44), (void*)L_0);
		// if (Application.isPlaying)
		bool L_1;
		L_1 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// PushARSessionOrigin();
		VirtualActionInvoker0::Invoke(84 /* System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::PushARSessionOrigin() */, __this);
	}

IL_0014:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* ARGestureInteractor_get_instance_m487C0BDE418AFFC2C191353220033315B57D7AC6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_m7A34081C5B7380D280DC14900880531006888A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06E3140DEA4B30E8FC8E750C1CE973EB40F7CA99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Instance == null)
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* L_0 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Instance_45;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// s_Instance = FindObjectOfType<ARGestureInteractor>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* L_2;
		L_2 = Object_FindObjectOfType_TisARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_m7A34081C5B7380D280DC14900880531006888A3F(Object_FindObjectOfType_TisARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_m7A34081C5B7380D280DC14900880531006888A3F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Instance_45 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Instance_45), (void*)L_2);
		// if (s_Instance == null)
		ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* L_3 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Instance_45;
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("No instance of ARGestureInteractor exists in the scene.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral06E3140DEA4B30E8FC8E750C1CE973EB40F7CA99, NULL);
	}

IL_002e:
	{
		// return s_Instance;
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* L_5 = ((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Instance_45;
		return L_5;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* ARGestureInteractor_get_Instance_mD4F6F8DE5A6EB6A3EA360A881A9A84925B667285 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ARGestureInteractor Instance => instance;
		il2cpp_codegen_runtime_class_init_inline(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* L_0;
		L_0 = ARGestureInteractor_get_instance_m487C0BDE418AFFC2C191353220033315B57D7AC6(NULL);
		return L_0;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.DragGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_DragGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* ARGestureInteractor_get_DragGestureRecognizer_mAA8054C9987213C3C823A72C411C689C4238DEE7 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public DragGestureRecognizer DragGestureRecognizer => dragGestureRecognizer;
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0;
		L_0 = ARGestureInteractor_get_dragGestureRecognizer_m8FAC49452C6C7D8A0E78F8D727B7A41D524AD971_inline(__this, NULL);
		return L_0;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.PinchGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_PinchGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* ARGestureInteractor_get_PinchGestureRecognizer_m09E857B103CBFC2D11C48FC25934B0FFFD514CB8 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public PinchGestureRecognizer PinchGestureRecognizer => pinchGestureRecognizer;
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_0;
		L_0 = ARGestureInteractor_get_pinchGestureRecognizer_mCE93BE8467B47945C6756D0A0DFC2AC8734E4ACB_inline(__this, NULL);
		return L_0;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_TwoFingerDragGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* ARGestureInteractor_get_TwoFingerDragGestureRecognizer_mB54F33FE0E5002C39A571DA24BC4334EE6056745 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TwoFingerDragGestureRecognizer TwoFingerDragGestureRecognizer => twoFingerDragGestureRecognizer;
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_0;
		L_0 = ARGestureInteractor_get_twoFingerDragGestureRecognizer_m4D992376FB76A691883DB57388F0A4D0E89B5AF9_inline(__this, NULL);
		return L_0;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_TapGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* ARGestureInteractor_get_TapGestureRecognizer_m6CD66BC449D629BA4E0824FF578B42A2595B577D (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TapGestureRecognizer TapGestureRecognizer => tapGestureRecognizer;
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_0;
		L_0 = ARGestureInteractor_get_tapGestureRecognizer_m2CB26461D4DAE55F9704FFA877C8C64EFA843D72_inline(__this, NULL);
		return L_0;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AR.TwistGestureRecognizer UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::get_TwistGestureRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* ARGestureInteractor_get_TwistGestureRecognizer_m601BA2874EBC2D2CEFFB800BDE0008ED0B3B0984 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TwistGestureRecognizer TwistGestureRecognizer => twistGestureRecognizer;
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_0;
		L_0 = ARGestureInteractor_get_twistGestureRecognizer_m2E6D4CE780DB2482ECDE1535347F5897589E7065_inline(__this, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::PushARSessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor_PushARSessionOrigin_mC8D4B8CB5CE4BEC7293A246F14365F48B3265526 (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_arSessionOrigin_m1055A2AE03E62AC600D11EDD5B00C3D0940A3B52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_arSessionOrigin_m1F60BAB968C6DD30D003F9BF6A4E12391F1F11C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_arSessionOrigin_m4CC3C8569C54D32F5C786C2A0B227223375936A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_arSessionOrigin_mB41DC518ED3DCEE707F37461385D649AFA303669_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_1_set_arSessionOrigin_mBD332E3A86C46D9E8F1AAB6908231CCF74353A93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dragGestureRecognizer.arSessionOrigin = m_ARSessionOrigin;
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0;
		L_0 = ARGestureInteractor_get_dragGestureRecognizer_m8FAC49452C6C7D8A0E78F8D727B7A41D524AD971_inline(__this, NULL);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_1 = __this->___m_ARSessionOrigin_44;
		NullCheck(L_0);
		GestureRecognizer_1_set_arSessionOrigin_m1F60BAB968C6DD30D003F9BF6A4E12391F1F11C4_inline(L_0, L_1, GestureRecognizer_1_set_arSessionOrigin_m1F60BAB968C6DD30D003F9BF6A4E12391F1F11C4_RuntimeMethod_var);
		// pinchGestureRecognizer.arSessionOrigin = m_ARSessionOrigin;
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_2;
		L_2 = ARGestureInteractor_get_pinchGestureRecognizer_mCE93BE8467B47945C6756D0A0DFC2AC8734E4ACB_inline(__this, NULL);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_3 = __this->___m_ARSessionOrigin_44;
		NullCheck(L_2);
		GestureRecognizer_1_set_arSessionOrigin_mBD332E3A86C46D9E8F1AAB6908231CCF74353A93_inline(L_2, L_3, GestureRecognizer_1_set_arSessionOrigin_mBD332E3A86C46D9E8F1AAB6908231CCF74353A93_RuntimeMethod_var);
		// twoFingerDragGestureRecognizer.arSessionOrigin = m_ARSessionOrigin;
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_4;
		L_4 = ARGestureInteractor_get_twoFingerDragGestureRecognizer_m4D992376FB76A691883DB57388F0A4D0E89B5AF9_inline(__this, NULL);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_5 = __this->___m_ARSessionOrigin_44;
		NullCheck(L_4);
		GestureRecognizer_1_set_arSessionOrigin_mB41DC518ED3DCEE707F37461385D649AFA303669_inline(L_4, L_5, GestureRecognizer_1_set_arSessionOrigin_mB41DC518ED3DCEE707F37461385D649AFA303669_RuntimeMethod_var);
		// tapGestureRecognizer.arSessionOrigin = m_ARSessionOrigin;
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_6;
		L_6 = ARGestureInteractor_get_tapGestureRecognizer_m2CB26461D4DAE55F9704FFA877C8C64EFA843D72_inline(__this, NULL);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_7 = __this->___m_ARSessionOrigin_44;
		NullCheck(L_6);
		GestureRecognizer_1_set_arSessionOrigin_m1055A2AE03E62AC600D11EDD5B00C3D0940A3B52_inline(L_6, L_7, GestureRecognizer_1_set_arSessionOrigin_m1055A2AE03E62AC600D11EDD5B00C3D0940A3B52_RuntimeMethod_var);
		// twistGestureRecognizer.arSessionOrigin = m_ARSessionOrigin;
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_8;
		L_8 = ARGestureInteractor_get_twistGestureRecognizer_m2E6D4CE780DB2482ECDE1535347F5897589E7065_inline(__this, NULL);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_9 = __this->___m_ARSessionOrigin_44;
		NullCheck(L_8);
		GestureRecognizer_1_set_arSessionOrigin_m4CC3C8569C54D32F5C786C2A0B227223375936A5_inline(L_8, L_9, GestureRecognizer_1_set_arSessionOrigin_m4CC3C8569C54D32F5C786C2A0B227223375936A5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor__ctor_mBDE13EF9AE00A65ABC1FF3E2726FDEE57FDFB7DD (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly List<IXRInteractable> m_ValidTargets = new List<IXRInteractable>();
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_0 = (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*)il2cpp_codegen_object_new(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F(L_0, List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		__this->___m_ValidTargets_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValidTargets_40), (void*)L_0);
		XRBaseInteractor__ctor_mCEB69DD262DE1CF1951979855AFC2FEEC41806FE(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGestureInteractor__cctor_m94E7D146B637C769EAC63D783E9AB3F199B5D8AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<IXRInteractable> s_Interactables = new List<IXRInteractable>();
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_0 = (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*)il2cpp_codegen_object_new(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F(L_0, List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Interactables_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_StaticFields*)il2cpp_codegen_static_fields_for(ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745_il2cpp_TypeInfo_var))->___s_Interactables_43), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ARBaseGestureInteractable_get_xrOrigin_m3265951474490BE894414D4518E7EE90CE1D0985_inline (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_XROrigin;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = __this->___m_XROrigin_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ARBaseGestureInteractable_get_arSessionOrigin_m025228C0281BAFBADED6B89E920B24E7EE52FCB8_inline (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ARSessionOrigin;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___m_ARSessionOrigin_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TapGesture_get_startPosition_mB5CAC1D326B19835575B01A47968972AE84DDF7D_inline (TapGesture_t5BC6843199F68B2FB1AA487C4BA07C2F3A04D79E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 startPosition { get; private set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CstartPositionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Camera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XROrigin_get_TrackablesParent_m6F7933DF03A5376C31D328F865F77D28EEC18E9C_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// public Transform TrackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* ARObjectPlacementEventArgs_get_placementInteractable_m8C7A1894D773619285B83DC0C2B7EFC1BC78F44E_inline (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, const RuntimeMethod* method) 
{
	{
		// public ARPlacementInteractable placementInteractable { get; set; }
		ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* L_0 = __this->___U3CplacementInteractableU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARObjectPlacementEventArgs_get_placementObject_m4694637DF487CA6E3DEBC300876969D3D85CD078_inline (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject placementObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CplacementObjectU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARObjectPlacementEventArgs_set_placementInteractable_m1E993691A9845DC0F1923B1B0794F7068B72792F_inline (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* ___value0, const RuntimeMethod* method) 
{
	{
		// public ARPlacementInteractable placementInteractable { get; set; }
		ARPlacementInteractable_t9EFF45579CF20DF6382D200DF41970F801FA009A* L_0 = ___value0;
		__this->___U3CplacementInteractableU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementInteractableU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARObjectPlacementEventArgs_set_placementObject_m4669BEA08FA461E5495C94C6C951EE866B8E57A7_inline (ARObjectPlacementEventArgs_t1A08B4EBF39EA210EC1BD7D8B2B45513974A3176* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject placementObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CplacementObjectU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementObjectU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DragGesture_get_delta_mA9DCFB7CC40377D0ED15A0CB25B6157DB67E64F7_inline (DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; private set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TwistGesture_get_deltaRotation_m66CBD6DD13F23FB51479315D9EB022B5210DED9D_inline (TwistGesture_t8A413739CB827FAF4260E739A66DBF40CDADFDE7* __this, const RuntimeMethod* method) 
{
	{
		// public float deltaRotation { get; private set; }
		float L_0 = __this->___U3CdeltaRotationU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_minScale_m6AB8C6221A51D724D14350D994E1BE163B699F29_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MinScale;
		float L_0 = __this->___m_MinScale_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_maxScale_m167D8A03D65ABA90040D8EF2738E04CEDD589FC6_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxScale;
		float L_0 = __this->___m_MaxScale_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARScaleInteractable_set_minScale_mA0DBB1AA8F6FA1A97FFE1AED42AE1FA5A529E66F_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MinScale = value;
		float L_0 = ___value0;
		__this->___m_MinScale_47 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARScaleInteractable_set_maxScale_mD64819F7A5FF5355F592B2A3D9F5FC6CA2118F3B_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxScale = value;
		float L_0 = ___value0;
		__this->___m_MaxScale_48 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_sensitivity_mCD5CC891C9BBB51493B1983FC058D8E3783B2ABE_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Sensitivity;
		float L_0 = __this->___m_Sensitivity_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PinchGesture_get_gapDelta_m2D36FE8FA4082FC4B55F7DDF2454598C4350AD8D_inline (PinchGesture_t7EF8DE8CBD51BA040C3AFDAEA2406198FD39A1FD* __this, const RuntimeMethod* method) 
{
	{
		// public float gapDelta { get; private set; }
		float L_0 = __this->___U3CgapDeltaU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_elasticRatioLimit_m88EAFF6B41E90A9069F950C3DB920CFD43EFC7A1_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ElasticRatioLimit;
		float L_0 = __this->___m_ElasticRatioLimit_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARScaleInteractable_get_elasticity_m67BCB1778B85352DBD6DE51D9B4D9C3E2543CBAF_inline (ARScaleInteractable_t1DA3CB6FB71267B2C80885F216AE8A4EC7A6B0FC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Elasticity;
		float L_0 = __this->___m_Elasticity_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* ARBaseGestureInteractable_get_gestureInteractor_m2B15167ABA301409F0A50C3810FEF794750C57EB_inline (ARBaseGestureInteractable_t7FF715FA0E5BE6C9F48E9869A7B0F4819913832D* __this, const RuntimeMethod* method) 
{
	{
		// protected ARGestureInteractor gestureInteractor { get; private set; }
		ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* L_0 = __this->___U3CgestureInteractorU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DragGesture_get_position_mF154E9A1E9201CFE888D10D2BA1E7F507A15E3F4_inline (DragGesture_tF1E1F57E706E0CA095772FA1580A5FD1B182CCAD* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; private set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARTranslationInteractable_get_maxTranslationDistance_m7BC61267CCA196F2484075A471C512F03F151766_inline (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxTranslationDistance;
		float L_0 = __this->___m_MaxTranslationDistance_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARTranslationInteractable_get_objectGestureTranslationMode_m16B7011915BB13995BBB4E4A7CBF2C4BE902CB48_inline (ARTranslationInteractable_t340F96917FC22210F61D564D36B90A04452159C4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectGestureTranslationMode;
		int32_t L_0 = __this->___m_ObjectGestureTranslationMode_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Placement_get_hasHoveringPosition_m8AC86FA805F9EE67588FDCB253DB4C41F7647136_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public bool hasHoveringPosition { get; set; }
		bool L_0 = __this->___U3ChasHoveringPositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Placement_get_hasPlacementPosition_mF8478CF3AFA0CE0BACE647D9BAAC165A1FB544E1_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public bool hasPlacementPosition { get; set; }
		bool L_0 = __this->___U3ChasPlacementPositionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_hoveringPosition_m33C7F03371449CBA640D4FE5D7FC2657BC80888D_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 hoveringPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ChoveringPositionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Placement_get_placementPosition_m60592EDE3AEE92A1D74C5CC66B492D45219FE825_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 placementPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CplacementPositionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Placement_get_updatedGroundingPlaneHeight_m4D14E5829330F269DBDF5ED5AC62A6FD2D27BB14_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public float updatedGroundingPlaneHeight { get; set; }
		float L_0 = __this->___U3CupdatedGroundingPlaneHeightU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Placement_get_placementRotation_mF08FE35402CEC7C29E6898CA71196140E88C7592_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion placementRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CplacementRotationU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Placement_get_hasPlane_m934E52CE701CDF7A765FAB9B659453622F9CB57B_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public bool hasPlane { get; set; }
		bool L_0 = __this->___U3ChasPlaneU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_m187D7037BE9F103763C2608C4CA3C78AEA8432D3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_updatedGroundingPlaneHeight_m0DD4CAE79BEDBCC8CA4D5495D3525FD6D653A1EF_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float updatedGroundingPlaneHeight { get; set; }
		float L_0 = ___value0;
		__this->___U3CupdatedGroundingPlaneHeightU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_placementPlane_mBC9651FDAAC731C1C05D223BC8EC4077B0BE0C31_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___value0, const RuntimeMethod* method) 
{
	{
		// public ARPlane placementPlane { get; set; }
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = ___value0;
		__this->___U3CplacementPlaneU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementPlaneU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_hasPlane_mC797A50A6AC3FE43FEF180F6DA16B86FCA3F2D80_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool hasPlane { get; set; }
		bool L_0 = ___value0;
		__this->___U3ChasPlaneU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_hasPlacementPosition_mEBCB50BA6CC5F07FD19E341D2B83312B454AA9CB_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool hasPlacementPosition { get; set; }
		bool L_0 = ___value0;
		__this->___U3ChasPlacementPositionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_placementPosition_m224C7EB77A068D617B0BB786BAFE938DDD4485BE_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 placementPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CplacementPositionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_hasHoveringPosition_m4E6752BA84A623E3D1D59F7EACF85E6A01BFB339_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool hasHoveringPosition { get; set; }
		bool L_0 = ___value0;
		__this->___U3ChasHoveringPositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_hoveringPosition_mE922BF472F9407B600C075397553C50B24A64FC6_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 hoveringPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3ChoveringPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Placement_set_placementRotation_m88E66AF455225CF624B5A5A5354BB21B1B3319C7_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion placementRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CplacementRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Placement_get_placementPlane_m164CEE9F117AAAC49FB9EE0027C137B785B8B9B5_inline (Placement_tABA5FA6A1414E251272FF386E11D3B314FE82B21* __this, const RuntimeMethod* method) 
{
	{
		// public ARPlane placementPlane { get; set; }
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___U3CplacementPlaneU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_dragGestureRecognizer_mD743BCBFF37A48CF182804B9A3437B6E29C33214_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* ___value0, const RuntimeMethod* method) 
{
	{
		// public DragGestureRecognizer dragGestureRecognizer { get; private set; }
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0 = ___value0;
		__this->___U3CdragGestureRecognizerU3Ek__BackingField_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdragGestureRecognizerU3Ek__BackingField_35), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_pinchGestureRecognizer_mA76E1CF9156F7959F943319F61D80247F8B94192_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* ___value0, const RuntimeMethod* method) 
{
	{
		// public PinchGestureRecognizer pinchGestureRecognizer { get; private set; }
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_0 = ___value0;
		__this->___U3CpinchGestureRecognizerU3Ek__BackingField_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchGestureRecognizerU3Ek__BackingField_36), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_twoFingerDragGestureRecognizer_m418D132DC1ADD2BA874FDBBC7B88525E22D6AAE2_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* ___value0, const RuntimeMethod* method) 
{
	{
		// public TwoFingerDragGestureRecognizer twoFingerDragGestureRecognizer { get; private set; }
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_0 = ___value0;
		__this->___U3CtwoFingerDragGestureRecognizerU3Ek__BackingField_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtwoFingerDragGestureRecognizerU3Ek__BackingField_37), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_tapGestureRecognizer_m9B2E0984DD1B87D9CE9E1FB6006B88502E64A3ED_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* ___value0, const RuntimeMethod* method) 
{
	{
		// public TapGestureRecognizer tapGestureRecognizer { get; private set; }
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_0 = ___value0;
		__this->___U3CtapGestureRecognizerU3Ek__BackingField_38 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtapGestureRecognizerU3Ek__BackingField_38), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGestureInteractor_set_twistGestureRecognizer_m8A756D09D679776AA07FFAD3E24EC018BEB6C2E8_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* ___value0, const RuntimeMethod* method) 
{
	{
		// public TwistGestureRecognizer twistGestureRecognizer { get; private set; }
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_0 = ___value0;
		__this->___U3CtwistGestureRecognizerU3Ek__BackingField_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtwistGestureRecognizerU3Ek__BackingField_39), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* ARGestureInteractor_get_dragGestureRecognizer_m8FAC49452C6C7D8A0E78F8D727B7A41D524AD971_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public DragGestureRecognizer dragGestureRecognizer { get; private set; }
		DragGestureRecognizer_t4E0FDDB00687AF441143447A26E3C62401A793F5* L_0 = __this->___U3CdragGestureRecognizerU3Ek__BackingField_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* ARGestureInteractor_get_pinchGestureRecognizer_mCE93BE8467B47945C6756D0A0DFC2AC8734E4ACB_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public PinchGestureRecognizer pinchGestureRecognizer { get; private set; }
		PinchGestureRecognizer_tE572B5EFA291C87001D3169F7C684C3723122501* L_0 = __this->___U3CpinchGestureRecognizerU3Ek__BackingField_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* ARGestureInteractor_get_twoFingerDragGestureRecognizer_m4D992376FB76A691883DB57388F0A4D0E89B5AF9_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TwoFingerDragGestureRecognizer twoFingerDragGestureRecognizer { get; private set; }
		TwoFingerDragGestureRecognizer_t86C15F291E58ADC2F6F459DECEE8C6BC93687542* L_0 = __this->___U3CtwoFingerDragGestureRecognizerU3Ek__BackingField_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* ARGestureInteractor_get_tapGestureRecognizer_m2CB26461D4DAE55F9704FFA877C8C64EFA843D72_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TapGestureRecognizer tapGestureRecognizer { get; private set; }
		TapGestureRecognizer_t6B221668F538CDF22D6FEC88AA3E2ED483A6DD47* L_0 = __this->___U3CtapGestureRecognizerU3Ek__BackingField_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* ARGestureInteractor_get_twistGestureRecognizer_m2E6D4CE780DB2482ECDE1535347F5897589E7065_inline (ARGestureInteractor_t5F50A16286B9051118C926B6C44BAECE78F81745* __this, const RuntimeMethod* method) 
{
	{
		// public TwistGestureRecognizer twistGestureRecognizer { get; private set; }
		TwistGestureRecognizer_tBC24BC65279B1C2E58B9D139A44CDC79F243BE46* L_0 = __this->___U3CtwistGestureRecognizerU3Ek__BackingField_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* BaseRegistrationEventArgs_get_manager_m84ED1D40C6386160D7158A59481F70348DD48413_inline (BaseRegistrationEventArgs_t9822CF35B956BAF32B523A14F3AFEF6A82987F21* __this, const RuntimeMethod* method) 
{
	{
		// public XRInteractionManager manager { get; set; }
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_0 = __this->___U3CmanagerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InteractionManager;
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_0 = __this->___m_InteractionManager_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InteractableRegisteredEventArgs_get_interactableObject_m895A23B809D8B0DA415F16C644A4A4B93A8EB87A_inline (InteractableRegisteredEventArgs_t9E35262DC0C14D7FE2265D47AB2D3FC9CAAE023D* __this, const RuntimeMethod* method) 
{
	{
		// public IXRInteractable interactableObject { get; set; }
		RuntimeObject* L_0 = __this->___U3CinteractableObjectU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InteractableUnregisteredEventArgs_get_interactableObject_m741DCCDBE1F7476E90F779B28768D86CD0BD02D0_inline (InteractableUnregisteredEventArgs_tEA628E3D57FA85080BB7D4A958AA2A0F6F82BC21* __this, const RuntimeMethod* method) 
{
	{
		// public IXRInteractable interactableObject { get; set; }
		RuntimeObject* L_0 = __this->___U3CinteractableObjectU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Gesture_1_get_targetObject_m92F38594D383EC616FCFC8E1152EBD1BF534D25A_gshared_inline (Gesture_1_t766A790B49A7840C0133EB04B5E41FFF564C75C8* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject targetObject { get; protected set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this->___U3CtargetObjectU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Gesture_1_get_isCanceled_m1078472C721C62109767B52D374B4368793114D8_gshared_inline (Gesture_1_t766A790B49A7840C0133EB04B5E41FFF564C75C8* __this, const RuntimeMethod* method) 
{
	{
		// public bool isCanceled { get; private set; }
		bool L_0 = (bool)__this->___U3CisCanceledU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m745AD367DBF830D48A033BF8A0FEC96327094A99_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* L_3 = (ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m32B7FC0EB4DA797BFDB203BBDC50F244BFF42358_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 ___item0, const RuntimeMethod* method) 
{
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* L_1 = (ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* L_6 = V_0;
		int32_t L_7 = V_1;
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70)L_8);
		return;
	}

IL_0034:
	{
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_9 = ___item0;
		((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureRecognizer_1_set_xrOrigin_mBDBFAAE6F6F1A580B5DE10434D576CF536394F30_gshared_inline (GestureRecognizer_1_t36E2F5A12154F0109297A031C6EC1C0F28EB8267* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___value0, const RuntimeMethod* method) 
{
	{
		// public XROrigin xrOrigin { get; set; }
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = ___value0;
		__this->___U3CxrOriginU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CxrOriginU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureRecognizer_1_set_arSessionOrigin_m0BDE8B137B34182C1B64B407FBEEC6E17A36FE83_gshared_inline (GestureRecognizer_1_t36E2F5A12154F0109297A031C6EC1C0F28EB8267* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___value0, const RuntimeMethod* method) 
{
	{
		// public ARSessionOrigin arSessionOrigin { get; set; }
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = ___value0;
		__this->___U3CarSessionOriginU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CarSessionOriginU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
