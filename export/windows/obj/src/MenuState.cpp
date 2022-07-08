#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f119275e66a7b90_8_new,"MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",8,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_13_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",13,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_23_update,"MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",23,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_28_clickPlay,"MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",28,0xdfbcb22c)

void MenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_8_new)
HXDLIN(   8)		super::__construct(MaxSize);
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

void *MenuState_obj::_hx_vtable = 0;

Dynamic MenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x32c1072e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32c1072e;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_13_create)
HXLINE(  14)		this->playButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Play",14,5a,33,35),this->clickPlay_dyn());
HXLINE(  15)		this->add(this->playButton);
HXLINE(  17)		{
HXLINE(  17)			 ::flixel::ui::FlxButton _this = this->playButton;
HXDLIN(  17)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  17)			bool _hx_tmp;
HXDLIN(  17)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  17)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  17)					_hx_tmp = false;
            				}
            			}
HXDLIN(  17)			if (_hx_tmp) {
HXLINE(  17)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  17)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  17)			bool _hx_tmp1;
HXDLIN(  17)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  17)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  17)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  17)			if (_hx_tmp1) {
HXLINE(  17)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  17)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  18)		this->super::create();
            	}


void MenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_23_update)
HXDLIN(  23)		this->super::update(elapsed);
            	}


void MenuState_obj::clickPlay(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_28_clickPlay)
HXDLIN(  28)		 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  28)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN(  28)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))


::hx::ObjectPtr< MenuState_obj > MenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MenuState_obj > __this = new MenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MenuState_obj > MenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MenuState_obj *__this = (MenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuState_obj), true, "MenuState"));
	*(void **)__this = MenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(playButton,"playButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playButton,"playButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return ::hx::Val( clickPlay_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { return ::hx::Val( playButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { playButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("playButton",06,f3,a3,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MenuState_obj,playButton),HX_("playButton",06,f3,a3,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_("playButton",06,f3,a3,80),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("clickPlay",5c,9a,59,29),
	::String(null()) };

::hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	MenuState_obj _hx_dummy;
	MenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuState",d2,bf,b6,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

