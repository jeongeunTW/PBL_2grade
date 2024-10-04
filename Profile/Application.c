/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 11.00
* Profile  : Profile
* Platform : Tara.Win32.RGBA8888
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationAlbumView.h"
#include "_ApplicationApplication.h"
#include "_ApplicationMainView.h"
#include "_ApplicationQuickMenu.h"
#include "_ApplicationSettingParameter.h"
#include "_ApplicationSettingSpec.h"
#include "_ApplicationSwitchMode.h"
#include "_CoreGroup.h"
#include "_CoreHorizontalList.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_CoreWipeTouchHandler.h"
#include "_EffectsFadeInOutTransition.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTransition.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x0000028C, /* ratio 61.35 % */
  0xB8001300, 0x00066452, 0x00400034, 0x06000190, 0x22003680, 0x64581816, 0x1122000A,
  0x18244C01, 0x8C9E0003, 0x010E280A, 0x1C000610, 0xA4007400, 0x8006F001, 0x280D8C9B,
  0x06500122, 0x2C9B1B00, 0x42680213, 0x3A8025D3, 0xA4500F19, 0xCA63F3D2, 0xF6640E88,
  0xA5B379BC, 0xC53820C2, 0xD1987CFC, 0xB36CC500, 0x060B1802, 0x8255A22C, 0x2571AA74,
  0x452BCB36, 0xE010D502, 0xA22C7422, 0x50498240, 0x70A884F6, 0x1410C644, 0x059D8EC3,
  0xB44298C4, 0x542AD96A, 0x2E18E74B, 0x29727C69, 0x1BAC1104, 0xD8D52C34, 0x55885315,
  0xC722572B, 0xA668B214, 0x64354D35, 0x72C9C8B2, 0x30229411, 0xDD536C68, 0xA22C2522,
  0x8162BC88, 0x37FBED91, 0x00CCDAED, 0xAC461B08, 0xC7E36138, 0x38032791, 0xB0B57A9D,
  0x1B399AC4, 0x345A0CF3, 0x280888E9, 0x67CC2E42, 0x11D66A9A, 0x3D8D82ED, 0xC0002FDB,
  0x2AE307B7, 0x6FB9187C, 0x2B2590C7, 0xFAAC7E9C, 0x37BDE3F5, 0x7A1CFE77, 0x04E8C674,
  0x82E30959, 0x5431960B, 0x4C1160BA, 0x45EDB076, 0x09B677DB, 0xBB78DB96, 0x7A18C799,
  0x1FA429C1, 0x2801FE7F, 0xCDC96620, 0x127D9CD7, 0x314F0451, 0xD3A574AC, 0x077A0676,
  0x95BA829E, 0xC083DBD7, 0x87C007A9, 0xE197F221, 0x9739F472, 0x844546D1, 0x11324C48,
  0x6CA24429, 0x2098997C, 0xB6F2296E, 0x09E96FD8, 0x183263A7, 0x8D1F2002, 0x51973E1B,
  0x00010144, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 800, 450 }};
static const XRect _Const0001 = {{ 39, 38 }, { 119, 88 }};
static const XRect _Const0002 = {{ 137, 48 }, { 237, 78 }};
static const XStringRes _Const0003 = { _StringsDefault0, 0x0002 };
static const XRect _Const0004 = {{ 655, 43 }, { 755, 93 }};
static const XRect _Const0005 = {{ 39, 44 }, { 119, 83 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x000B };
static const XColor _Const0007 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0008 = {{ 124, 125 }, { 676, 326 }};
static const XPoint _Const0009 = { 0, 0 };
static const XPoint _Const000A = { 800, 0 };
static const XPoint _Const000B = { 800, 450 };
static const XPoint _Const000C = { 0, 450 };
static const XRect _Const000D = {{ 27, 329 }, { 132, 429 }};
static const XStringRes _Const000E = { _StringsDefault0, 0x0010 };
static const XRect _Const000F = {{ 237, 329 }, { 564, 429 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x0015 };
static const XRect _Const0011 = {{ 671, 329 }, { 777, 429 }};
static const XRect _Const0012 = {{ 238, 100 }, { 604, 320 }};
static const XStringRes _Const0013 = { _StringsDefault0, 0x001F };
static const XRect _Const0014 = {{ 376, 156 }, { 476, 186 }};
static const XStringRes _Const0015 = { _StringsDefault0, 0x002C };
static const XStringRes _Const0016 = { _StringsDefault0, 0x0033 };
static const XPoint _Const0017 = { 450, 17 };
static const XPoint _Const0018 = { 350, 17 };
static const XRect _Const0019 = {{ 350, 28 }, { 450, 69 }};
static const XStringRes _Const001A = { _StringsDefault0, 0x0041 };
static const XRect _Const001B = {{ 0, 128 }, { 800, 225 }};
static const XPoint _Const001C = { 150, 0 };
static const XRect _Const001D = {{ 0, 255 }, { 800, 352 }};
static const XRect _Const001E = {{ 0, 352 }, { 800, 449 }};
static const XRect _Const001F = {{ 350, 98 }, { 450, 128 }};
static const XStringRes _Const0020 = { _StringsDefault0, 0x0047 };
static const XColor _Const0021 = { 0x56, 0x56, 0x56, 0xFF };
static const XRect _Const0022 = {{ 350, 225 }, { 450, 255 }};
static const XStringRes _Const0023 = { _StringsDefault0, 0x004D };
static const XStringRes _Const0024 = { _StringsDefault0, 0x0053 };
static const XColor _Const0025 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XColor _Const0026 = { 0x00, 0x00, 0x00, 0x64 };
static const XRect _Const0027 = {{ 274, 302 }, { 526, 345 }};
static const XRect _Const0028 = {{ 264, 350 }, { 537, 418 }};
static const XStringRes _Const0029 = { _StringsDefault0, 0x005C };
static const XRect _Const002A = {{ 288, 147 }, { 513, 302 }};
static const XPoint _Const002B = { 160, 0 };
static const XRect _Const002C = {{ 0, 165 }, { 800, 285 }};
static const XRect _Const002D = {{ 255, 47 }, { 305, 97 }};
static const XStringRes _Const002E = { _StringsDefault0, 0x007D };
static const XStringRes _Const002F = { _StringsDefault0, 0x0084 };
static const XStringRes _Const0030 = { _StringsDefault0, 0x00A6 };
static const XStringRes _Const0031 = { _StringsDefault0, 0x00AE };
static const XStringRes _Const0032 = { _StringsDefault0, 0x00D1 };
static const XStringRes _Const0033 = { _StringsDefault0, 0x00D9 };
static const XStringRes _Const0034 = { _StringsDefault0, 0x00FC };
static const XStringRes _Const0035 = { _StringsDefault0, 0x0101 };
static const XStringRes _Const0036 = { _StringsDefault0, 0x0121 };
static const XStringRes _Const0037 = { _StringsDefault0, 0x0126 };

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationMainView, 
  0 )), 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationApplication )

/* User defined auto object: 'Application::PushButtonConfig' */
EW_DEFINE_AUTOOBJECT( ApplicationPushButtonConfig, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Application::PushButtonConfig' */
void ApplicationPushButtonConfig__Init( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::PushButtonConfig' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationPushButtonConfig )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationPushButtonConfig )

/* Include a file containing the bitmap resource : 'Application::BtnCircle' */
#include "_ApplicationBtnCircle.h"

/* Table with links to derived variants of the bitmap resource : 'Application::BtnCircle' */
EW_RES_WITHOUT_VARIANTS( ApplicationBtnCircle )

/* Include a file containing the bitmap resource : 'Application::BtnCapsule' */
#include "_ApplicationBtnCapsule.h"

/* Table with links to derived variants of the bitmap resource : 'Application::BtnCapsule' */
EW_RES_WITHOUT_VARIANTS( ApplicationBtnCapsule )

/* Initializer for the class 'Application::MainView' */
void ApplicationMainView__Init( ApplicationMainView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMainView );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->SDBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->RemainingMemory, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Battery, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->SD, &_this->_.XObject, 0 );
  CoreWipeTouchHandler__Init( &_this->WipeTouchHandler, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->ScreenTouchHandler, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->Zoom, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->Setting, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->FOV, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMainView );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->SDBackground, _Const0001 );
  CoreRectView__OnSetBounds( &_this->RemainingMemory, _Const0002 );
  ViewsText_OnSetPadding( &_this->RemainingMemory, 0 );
  ViewsText_OnSetString( &_this->RemainingMemory, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Battery, _Const0004 );
  ViewsBorder_OnSetWidth( &_this->Battery, 4 );
  CoreRectView__OnSetBounds( &_this->SD, _Const0005 );
  ViewsText_OnSetString( &_this->SD, EwLoadString( &_Const0006 ));
  ViewsText_OnSetColor( &_this->SD, _Const0007 );
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const0000 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0008 );
  _this->SlideTouchHandler.RetargetCondition = CoreRetargetReasonForeignPress | 
  CoreRetargetReasonLongPress;
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->ScreenTouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->ScreenTouchHandler, _Const000A );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->ScreenTouchHandler, _Const000B );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->ScreenTouchHandler, _Const000C );
  _this->ScreenTouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreRectView__OnSetBounds( &_this->Zoom, _Const000D );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Zoom, 1 );
  WidgetSetPushButton_OnSetLabel( &_this->Zoom, EwLoadString( &_Const000E ));
  CoreRectView__OnSetBounds( &_this->Setting, _Const000F );
  WidgetSetPushButton_OnSetLabel( &_this->Setting, EwLoadString( &_Const0010 ));
  CoreRectView__OnSetBounds( &_this->FOV, _Const0011 );
  WidgetSetPushButton_OnSetLabel( &_this->FOV, EwLoadString( &_Const0010 ));
  CoreGroup__Add( _this, ((CoreView)&_this->SDBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RemainingMemory ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Battery ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WipeTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ScreenTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Zoom ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Setting ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FOV ), 0 );
  ViewsText_OnSetFont( &_this->RemainingMemory, EwLoadResource( &ResourcesFontLarge, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->SD, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  _this->WipeTouchHandler.OnBottom = EwNewSlot( _this, ApplicationMainView_EnterQuickMenu );
  _this->WipeTouchHandler.OnRight = EwNewSlot( _this, ApplicationMainView_EnterAlbum );
  _this->WipeTouchHandler.OnTop = EwNewSlot( _this, ApplicationMainView_EnterSetSpec );
  _this->WipeTouchHandler.OnLeft = EwNewSlot( _this, ApplicationMainView_EnterSetParam );
  _this->SlideTouchHandler.OnSlide = EwNewSlot( _this, ApplicationMainView_SelectMode );
  _this->ScreenTouchHandler.OnLeave = EwNewSlot( _this, ApplicationMainView_ElementVisiable );
  _this->ScreenTouchHandler.OnPress = EwNullSlot;
  WidgetSetPushButton_OnSetIcon( &_this->Zoom, EwLoadResource( &ApplicationBtnCircle, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->Zoom, EwGetAutoObject( &ApplicationPushButtonConfig, 
  WidgetSetPushButtonConfig ));
  WidgetSetPushButton_OnSetIcon( &_this->Setting, EwLoadResource( &ApplicationBtnCapsule, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetIcon( &_this->FOV, EwLoadResource( &ApplicationBtnCircle, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->FOV, EwGetAutoObject( &ApplicationPushButtonConfig, 
  WidgetSetPushButtonConfig ));
}

/* Re-Initializer for the class 'Application::MainView' */
void ApplicationMainView__ReInit( ApplicationMainView _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->SDBackground );
  ViewsText__ReInit( &_this->RemainingMemory );
  ViewsBorder__ReInit( &_this->Battery );
  ViewsText__ReInit( &_this->SD );
  CoreWipeTouchHandler__ReInit( &_this->WipeTouchHandler );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->ScreenTouchHandler );
  WidgetSetPushButton__ReInit( &_this->Zoom );
  WidgetSetPushButton__ReInit( &_this->Setting );
  WidgetSetPushButton__ReInit( &_this->FOV );
}

/* Finalizer method for the class 'Application::MainView' */
void ApplicationMainView__Done( ApplicationMainView _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->SDBackground );
  ViewsText__Done( &_this->RemainingMemory );
  ViewsBorder__Done( &_this->Battery );
  ViewsText__Done( &_this->SD );
  CoreWipeTouchHandler__Done( &_this->WipeTouchHandler );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->ScreenTouchHandler );
  WidgetSetPushButton__Done( &_this->Zoom );
  WidgetSetPushButton__Done( &_this->Setting );
  WidgetSetPushButton__Done( &_this->FOV );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::MainView.EnterQuickMenu()' */
void ApplicationMainView_EnterQuickMenu( ApplicationMainView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationQuickMenu, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MainView.ElementVisiable()' */
void ApplicationMainView_ElementVisiable( ApplicationMainView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetVisible( &_this->SD, (XBool)!ViewsText_OnGetVisible( &_this->SD ));
  ViewsRectangle_OnSetVisible( &_this->SDBackground, (XBool)!ViewsRectangle_OnGetVisible( 
  &_this->SDBackground ));
  ViewsBorder_OnSetVisible( &_this->Battery, (XBool)!ViewsBorder_OnGetVisible( &_this->Battery ));
  CoreGroup_OnSetVisible((CoreGroup)&_this->FOV, (XBool)!CoreGroup_OnGetVisible((CoreGroup)&_this->FOV ));
  CoreGroup_OnSetVisible((CoreGroup)&_this->Zoom, (XBool)!CoreGroup_OnGetVisible((CoreGroup)&_this->Zoom ));
  CoreGroup_OnSetVisible((CoreGroup)&_this->Setting, (XBool)!CoreGroup_OnGetVisible((CoreGroup)&_this->Setting ));
  ViewsText_OnSetVisible( &_this->RemainingMemory, (XBool)!ViewsText_OnGetVisible( 
  &_this->RemainingMemory ));
}

/* 'C' function for method : 'Application::MainView.EnterAlbum()' */
void ApplicationMainView_EnterAlbum( ApplicationMainView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationAlbumView, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideRightCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MainView.EnterSetSpec()' */
void ApplicationMainView_EnterSetSpec( ApplicationMainView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingSpec, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideUpCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MainView.EnterSetParam()' */
void ApplicationMainView_EnterSetParam( ApplicationMainView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingParameter, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideLeftCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MainView.SelectMode()' */
void ApplicationMainView_SelectMode( ApplicationMainView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSwitchMode, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::MainView' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMainView )
EW_END_OF_CLASS_VARIANTS( ApplicationMainView )

/* Virtual Method Table (VMT) for the class : 'Application::MainView' */
EW_DEFINE_CLASS( ApplicationMainView, CoreGroup, SDBackground, SDBackground, SDBackground, 
                 SDBackground, _.VMT, _.VMT, "Application::MainView" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMainView )

/* Initializer for the class 'Application::QuickMenu' */
void ApplicationQuickMenu__Init( ApplicationQuickMenu _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationQuickMenu );

  /* ... then construct all embedded objects */
  CoreWipeTouchHandler__Init( &_this->WipeTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationQuickMenu );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const0000 );
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0012 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0013 ));
  ViewsText_OnSetColor( &_this->Text, _Const0007 );
  CoreGroup__Add( _this, ((CoreView)&_this->WipeTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->WipeTouchHandler.OnTop = EwNewSlot( _this, ApplicationQuickMenu_EnterMainView );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontExtraLarge, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::QuickMenu' */
void ApplicationQuickMenu__ReInit( ApplicationQuickMenu _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreWipeTouchHandler__ReInit( &_this->WipeTouchHandler );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::QuickMenu' */
void ApplicationQuickMenu__Done( ApplicationQuickMenu _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreWipeTouchHandler__Done( &_this->WipeTouchHandler );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::QuickMenu.EnterMainView()' */
void ApplicationQuickMenu_EnterMainView( ApplicationQuickMenu _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationMainView, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsFadeInOutCentered, EffectsFadeInOutTransition )), 
    0, 0, 0, ((EffectsTransition)EwGetAutoObject( &EffectsSlideUpCentered, EffectsSlideTransition )), 
    0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::QuickMenu' */
EW_DEFINE_CLASS_VARIANTS( ApplicationQuickMenu )
EW_END_OF_CLASS_VARIANTS( ApplicationQuickMenu )

/* Virtual Method Table (VMT) for the class : 'Application::QuickMenu' */
EW_DEFINE_CLASS( ApplicationQuickMenu, CoreGroup, WipeTouchHandler, WipeTouchHandler, 
                 WipeTouchHandler, WipeTouchHandler, _.VMT, _.VMT, "Application::QuickMenu" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationQuickMenu )

/* Initializer for the class 'Application::SettingParameter' */
void ApplicationSettingParameter__Init( ApplicationSettingParameter _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingParameter );

  /* ... then construct all embedded objects */
  CoreWipeTouchHandler__Init( &_this->WipeTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingParameter );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const0000 );
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0014 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0015 ));
  CoreGroup__Add( _this, ((CoreView)&_this->WipeTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->WipeTouchHandler.OnRight = EwNewSlot( _this, ApplicationSettingParameter_EnterMainView );
  _this->WipeTouchHandler.OnLeft = EwNullSlot;
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationMyFont, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::SettingParameter' */
void ApplicationSettingParameter__ReInit( ApplicationSettingParameter _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreWipeTouchHandler__ReInit( &_this->WipeTouchHandler );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::SettingParameter' */
void ApplicationSettingParameter__Done( ApplicationSettingParameter _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreWipeTouchHandler__Done( &_this->WipeTouchHandler );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::SettingParameter.EnterMainView()' */
void ApplicationSettingParameter_EnterMainView( ApplicationSettingParameter _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationMainView, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsFadeInOutCentered, EffectsFadeInOutTransition )), 
    0, 0, 0, ((EffectsTransition)EwGetAutoObject( &EffectsSlideRightCentered, EffectsSlideTransition )), 
    0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SettingParameter' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingParameter )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingParameter )

/* Virtual Method Table (VMT) for the class : 'Application::SettingParameter' */
EW_DEFINE_CLASS( ApplicationSettingParameter, CoreGroup, WipeTouchHandler, WipeTouchHandler, 
                 WipeTouchHandler, WipeTouchHandler, _.VMT, _.VMT, "Application::SettingParameter" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingParameter )

/* Initializer for the class 'Application::AlbumView' */
void ApplicationAlbumView__Init( ApplicationAlbumView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationAlbumView );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  CoreWipeTouchHandler__Init( &_this->WipeTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationAlbumView );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0012 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0016 ));
  ViewsText_OnSetColor( &_this->Text, _Const0007 );
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const0000 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WipeTouchHandler ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontExtraLarge, ResourcesFont ));
  _this->WipeTouchHandler.OnLeft = EwNewSlot( _this, ApplicationAlbumView_EnterMainView );
}

/* Re-Initializer for the class 'Application::AlbumView' */
void ApplicationAlbumView__ReInit( ApplicationAlbumView _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Text );
  CoreWipeTouchHandler__ReInit( &_this->WipeTouchHandler );
}

/* Finalizer method for the class 'Application::AlbumView' */
void ApplicationAlbumView__Done( ApplicationAlbumView _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Text );
  CoreWipeTouchHandler__Done( &_this->WipeTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::AlbumView.EnterMainView()' */
void ApplicationAlbumView_EnterMainView( ApplicationAlbumView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationMainView, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsFadeInOutCentered, EffectsFadeInOutTransition )), 
    0, 0, 0, ((EffectsTransition)EwGetAutoObject( &EffectsSlideLeftCentered, EffectsSlideTransition )), 
    0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::AlbumView' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAlbumView )
EW_END_OF_CLASS_VARIANTS( ApplicationAlbumView )

/* Virtual Method Table (VMT) for the class : 'Application::AlbumView' */
EW_DEFINE_CLASS( ApplicationAlbumView, CoreGroup, Text, Text, Text, Text, _.VMT, 
                 _.VMT, "Application::AlbumView" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationAlbumView )

/* Initializer for the class 'Application::SettingSpec' */
void ApplicationSettingSpec__Init( ApplicationSettingSpec _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingSpec );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  CoreWipeTouchHandler__Init( &_this->WipeTouchHandler, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreHorizontalList__Init( &_this->HorizontalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler1, &_this->_.XObject, 0 );
  CoreHorizontalList__Init( &_this->HorizontalList1, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler2, &_this->_.XObject, 0 );
  CoreHorizontalList__Init( &_this->HorizontalList2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingSpec );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0007 );
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0017 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const0018 );
  ViewsLine_OnSetWidth( &_this->Line, 5 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0019 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001A ));
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const001B );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const001C );
  CoreRectView__OnSetBounds( &_this->HorizontalList, _Const001B );
  CoreHorizontalList_OnSetPaddingRight( &_this->HorizontalList, 330 );
  CoreHorizontalList_OnSetScrollOffset( &_this->HorizontalList, 0 );
  CoreHorizontalList_OnSetSelectedItem( &_this->HorizontalList, 0 );
  CoreHorizontalList_OnSetPaddingLeft( &_this->HorizontalList, 320 );
  CoreHorizontalList_OnSetItemWidth( &_this->HorizontalList, 150 );
  CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 4 );
  CoreHorizontalList_OnSetItemClass( &_this->HorizontalList, EW_CLASS( ViewsText ));
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler1, _Const001D );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler1, _Const001C );
  CoreRectView__OnSetBounds( &_this->HorizontalList1, _Const001D );
  CoreHorizontalList_OnSetPaddingRight( &_this->HorizontalList1, 330 );
  CoreHorizontalList_OnSetScrollOffset( &_this->HorizontalList1, 0 );
  CoreHorizontalList_OnSetSelectedItem( &_this->HorizontalList1, 0 );
  CoreHorizontalList_OnSetPaddingLeft( &_this->HorizontalList1, 320 );
  CoreHorizontalList_OnSetItemWidth( &_this->HorizontalList1, 150 );
  CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList1, 4 );
  CoreHorizontalList_OnSetItemClass( &_this->HorizontalList1, EW_CLASS( ViewsText ));
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler2, _Const001E );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler2, _Const001C );
  CoreRectView__OnSetBounds( &_this->HorizontalList2, _Const001E );
  CoreHorizontalList_OnSetPaddingRight( &_this->HorizontalList2, 330 );
  CoreHorizontalList_OnSetScrollOffset( &_this->HorizontalList2, 0 );
  CoreHorizontalList_OnSetSelectedItem( &_this->HorizontalList2, 0 );
  CoreHorizontalList_OnSetPaddingLeft( &_this->HorizontalList2, 320 );
  CoreHorizontalList_OnSetItemWidth( &_this->HorizontalList2, 150 );
  CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList2, 4 );
  CoreHorizontalList_OnSetItemClass( &_this->HorizontalList2, EW_CLASS( WidgetSetPushButton ));
  CoreRectView__OnSetBounds( &_this->Text1, _Const001F );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0020 ));
  ViewsText_OnSetColor( &_this->Text1, _Const0021 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const0022 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0023 ));
  ViewsText_OnSetColor( &_this->Text2, _Const0021 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WipeTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalList1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalList2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  _this->WipeTouchHandler.OnBottom = EwNewSlot( _this, ApplicationSettingSpec_EnterMainView );
  _this->WipeTouchHandler.OnLeft = EwNullSlot;
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationMyFont, ResourcesFont ));
  CoreGroup__OnSetFocus( &_this->HorizontalList, 0 );
  _this->HorizontalList.OnLoadItem = EwNewSlot( _this, ApplicationSettingSpec_OnLoadItem );
  CoreHorizontalList_OnSetSlideHandler( &_this->HorizontalList, &_this->SlideTouchHandler );
  CoreGroup__OnSetFocus( &_this->HorizontalList1, 0 );
  _this->HorizontalList1.OnLoadItem = EwNewSlot( _this, ApplicationSettingSpec_OnLoadItem1 );
  CoreHorizontalList_OnSetSlideHandler( &_this->HorizontalList1, &_this->SlideTouchHandler1 );
  CoreGroup__OnSetFocus( &_this->HorizontalList2, 0 );
  _this->HorizontalList2.OnLoadItem = EwNewSlot( _this, ApplicationSettingSpec_OnLoadItem2 );
  CoreHorizontalList_OnSetSlideHandler( &_this->HorizontalList2, &_this->SlideTouchHandler2 );
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationMyFont2, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationMyFont2, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::SettingSpec' */
void ApplicationSettingSpec__ReInit( ApplicationSettingSpec _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreWipeTouchHandler__ReInit( &_this->WipeTouchHandler );
  ViewsLine__ReInit( &_this->Line );
  ViewsText__ReInit( &_this->Text );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreHorizontalList__ReInit( &_this->HorizontalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler1 );
  CoreHorizontalList__ReInit( &_this->HorizontalList1 );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler2 );
  CoreHorizontalList__ReInit( &_this->HorizontalList2 );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->Text2 );
}

/* Finalizer method for the class 'Application::SettingSpec' */
void ApplicationSettingSpec__Done( ApplicationSettingSpec _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  CoreWipeTouchHandler__Done( &_this->WipeTouchHandler );
  ViewsLine__Done( &_this->Line );
  ViewsText__Done( &_this->Text );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreHorizontalList__Done( &_this->HorizontalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler1 );
  CoreHorizontalList__Done( &_this->HorizontalList1 );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler2 );
  CoreHorizontalList__Done( &_this->HorizontalList2 );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->Text2 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::SettingSpec.EnterMainView()' */
void ApplicationSettingSpec_EnterMainView( ApplicationSettingSpec _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationMainView, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsFadeInOutCentered, EffectsFadeInOutTransition )), 
    0, 0, 0, ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, EffectsSlideTransition )), 
    0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* This method is called by 'HorizontalList' every time the list loads or updates 
   an item. */
void ApplicationSettingSpec_OnLoadItem( ApplicationSettingSpec _this, XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->HorizontalList.Item;
  itemView = EwCastObject( _this->HorizontalList.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwConcatString( EwLoadString( &_Const0024 ), 
  EwNewStringInt( itemNo, 0, 10 )));
  ViewsText_OnSetFont( itemView, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0025 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  _this->HorizontalList.ItemWidth, EwGetRectH( _this->HorizontalList.Super2.Bounds ))));
}

/* This method is called by 'HorizontalList' every time the list loads or updates 
   an item. */
void ApplicationSettingSpec_OnLoadItem1( ApplicationSettingSpec _this, XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->HorizontalList1.Item;
  itemView = EwCastObject( _this->HorizontalList1.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwConcatString( EwLoadString( &_Const0024 ), 
  EwNewStringInt( itemNo, 0, 10 )));
  ViewsText_OnSetFont( itemView, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0025 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  _this->HorizontalList1.ItemWidth, EwGetRectH( _this->HorizontalList1.Super2.Bounds ))));
}

/* This method is called by 'HorizontalList' every time the list loads or updates 
   an item. */
void ApplicationSettingSpec_OnLoadItem2( ApplicationSettingSpec _this, XObject sender )
{
  XInt32 itemNo;
  WidgetSetPushButton itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->HorizontalList2.Item;
  itemView = EwCastObject( _this->HorizontalList2.View, WidgetSetPushButton );

  if ( itemView == 0 )
    return;

  WidgetSetPushButton_OnSetLabel( itemView, EwConcatString( EwLoadString( &_Const0024 ), 
  EwNewStringInt( itemNo, 0, 10 )));
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  _this->HorizontalList2.ItemWidth, EwGetRectH( _this->HorizontalList2.Super2.Bounds ))));
}

/* Variants derived from the class : 'Application::SettingSpec' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingSpec )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingSpec )

/* Virtual Method Table (VMT) for the class : 'Application::SettingSpec' */
EW_DEFINE_CLASS( ApplicationSettingSpec, CoreGroup, Rectangle, Rectangle, Rectangle, 
                 Rectangle, _.VMT, _.VMT, "Application::SettingSpec" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingSpec )

/* Initializer for the class 'Application::SwitchMode' */
void ApplicationSwitchMode__Init( ApplicationSwitchMode _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSwitchMode );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreHorizontalList__Init( &_this->HorizontalList, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->TouchTimer, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSwitchMode );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0026 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0027 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001A ));
  CoreRectView__OnSetBounds( &_this->Text1, _Const0028 );
  ViewsText_OnSetWrapText( &_this->Text1, 1 );
  ViewsText_OnSetAlignment( &_this->Text1, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertTop );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0029 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const002A );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0000 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const002B );
  CoreSlideTouchHandler_OnSetResetDelay( &_this->SlideTouchHandler, 200 );
  CoreSlideTouchHandler_OnSetSpeedLimit( &_this->SlideTouchHandler, 80.000000f );
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.500000f );
  CoreView_OnSetStackingPriority((CoreView)&_this->HorizontalList, 0 );
  CoreRectView__OnSetBounds( &_this->HorizontalList, _Const002C );
  CoreHorizontalList_OnSetEndless( &_this->HorizontalList, 1 );
  CoreHorizontalList_OnSetScrollOffset( &_this->HorizontalList, 160 );
  CoreHorizontalList_OnSetSelectedItem( &_this->HorizontalList, 0 );
  CoreHorizontalList_OnSetItemWidth( &_this->HorizontalList, 160 );
  CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 6 );
  CoreHorizontalList_OnSetItemClass( &_this->HorizontalList, EW_CLASS( ViewsImage ));
  CoreTimer_OnSetPeriod( &_this->TouchTimer, 0 );
  CoreTimer_OnSetBegin( &_this->TouchTimer, 3000 );
  CoreTimer_OnSetEnabled( &_this->TouchTimer, 1 );
  CoreRectView__OnSetBounds( &_this->Image1, _Const002D );
  ViewsImage_OnSetFrameNumber( &_this->Image1, 1 );
  ViewsImage_OnSetEmbedded( &_this->Image1, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationMyFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationMyFont1, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationBlueBtn, ResourcesBitmap ));
  _this->SlideTouchHandler.OnSlide = EwNewSlot( _this, ApplicationSwitchMode_OnLoadItem );
  _this->SlideTouchHandler.OnEnd = EwNewSlot( _this, ApplicationSwitchMode_SelectItem );
  _this->SlideTouchHandler.OnStart = EwNewSlot( _this, ApplicationSwitchMode_RestartTimer );
  _this->HorizontalList.OnLoadItem = EwNewSlot( _this, ApplicationSwitchMode_OnLoadItem );
  CoreHorizontalList_OnSetSlideHandler( &_this->HorizontalList, &_this->SlideTouchHandler );
  _this->TouchTimer.OnTrigger = EwNewSlot( _this, ApplicationSwitchMode_EnterMainView );
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &Applicationcamera, ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::SwitchMode' */
void ApplicationSwitchMode__ReInit( ApplicationSwitchMode _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text1 );
  ViewsImage__ReInit( &_this->Image );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreHorizontalList__ReInit( &_this->HorizontalList );
  CoreTimer__ReInit( &_this->TouchTimer );
  ViewsImage__ReInit( &_this->Image1 );
}

/* Finalizer method for the class 'Application::SwitchMode' */
void ApplicationSwitchMode__Done( ApplicationSwitchMode _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text1 );
  ViewsImage__Done( &_this->Image );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreHorizontalList__Done( &_this->HorizontalList );
  CoreTimer__Done( &_this->TouchTimer );
  ViewsImage__Done( &_this->Image1 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* This method is called by 'HorizontalList' every time the list loads or updates 
   an item. */
void ApplicationSwitchMode_OnLoadItem( ApplicationSwitchMode _this, XObject sender )
{
  XInt32 itemNo;
  ViewsImage itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->HorizontalList.Item;
  itemView = EwCastObject( _this->HorizontalList.View, ViewsImage );

  if ( itemView == 0 )
    return;

  ViewsImage_OnSetBitmap( itemView, EwLoadResource( &ApplicationSymbolIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetFrameNumber( itemView, itemNo % itemView->Bitmap->NoOfFrames );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  _this->HorizontalList.ItemWidth, EwGetRectH( _this->HorizontalList.Super2.Bounds ))));
}

/* 'C' function for method : 'Application::SwitchMode.SelectItem()' */
void ApplicationSwitchMode_SelectItem( ApplicationSwitchMode _this, XObject sender )
{
  XInt32 itemIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemIndex = _this->HorizontalList.ScrollOffset / -160;

  switch ( itemIndex )
  {
    case 0 :
    {
      ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const002E ));
      ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const002F ));
    }
    break;

    case 1 :
    {
      ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0030 ));
      ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0031 ));
    }
    break;

    case 2 :
    {
      ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0032 ));
      ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0033 ));
    }
    break;

    case 3 :
    {
      ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0034 ));
      ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0035 ));
    }
    break;

    case 4 :
    {
      ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0036 ));
      ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0037 ));
    }
    break;

    default : 
    {
      ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001A ));
      ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0029 ));
    }
  }
}

/* 'C' function for method : 'Application::SwitchMode.EnterMainView()' */
void ApplicationSwitchMode_EnterMainView( ApplicationSwitchMode _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationMainView, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SwitchMode.RestartTimer()' */
void ApplicationSwitchMode_RestartTimer( ApplicationSwitchMode _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->TouchTimer, 0 );

  CoreTimer_OnSetEnabled( &_this->TouchTimer, 1 );
}

/* Variants derived from the class : 'Application::SwitchMode' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSwitchMode )
EW_END_OF_CLASS_VARIANTS( ApplicationSwitchMode )

/* Virtual Method Table (VMT) for the class : 'Application::SwitchMode' */
EW_DEFINE_CLASS( ApplicationSwitchMode, CoreGroup, Rectangle, Rectangle, Rectangle, 
                 Rectangle, _.VMT, _.VMT, "Application::SwitchMode" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSwitchMode )

/* Include a file containing the bitmap resource : 'Application::BlueBtn' */
#include "_ApplicationBlueBtn.h"

/* Table with links to derived variants of the bitmap resource : 'Application::BlueBtn' */
EW_RES_WITHOUT_VARIANTS( ApplicationBlueBtn )

/* Include a file containing the font resource : 'Application::MyFont' */
#include "_ApplicationMyFont.h"

/* Table with links to derived variants of the font resource : 'Application::MyFont' */
EW_RES_WITHOUT_VARIANTS( ApplicationMyFont )

/* Include a file containing the font resource : 'Application::MyFont1' */
#include "_ApplicationMyFont1.h"

/* Table with links to derived variants of the font resource : 'Application::MyFont1' */
EW_RES_WITHOUT_VARIANTS( ApplicationMyFont1 )

/* Include a file containing the bitmap resource : 'Application::camera' */
#include "_Applicationcamera.h"

/* Table with links to derived variants of the bitmap resource : 'Application::camera' */
EW_RES_WITHOUT_VARIANTS( Applicationcamera )

/* Include a file containing the bitmap resource : 'Application::SymbolIconsMedium' */
#include "_ApplicationSymbolIconsMedium.h"

/* Table with links to derived variants of the bitmap resource : 'Application::SymbolIconsMedium' */
EW_RES_WITHOUT_VARIANTS( ApplicationSymbolIconsMedium )

/* Include a file containing the font resource : 'Application::MyFont2' */
#include "_ApplicationMyFont2.h"

/* Table with links to derived variants of the font resource : 'Application::MyFont2' */
EW_RES_WITHOUT_VARIANTS( ApplicationMyFont2 )

/* Embedded Wizard */
