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

#ifndef Application_H
#define Application_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationAlbumView.h"
#include "_ApplicationApplication.h"
#include "_ApplicationMainView.h"
#include "_ApplicationQuickMenu.h"
#include "_ApplicationSettingParameter.h"
#include "_ApplicationSettingSpec.h"
#include "_ApplicationSwitchMode.h"

/* Bitmap resource : 'Application::BtnCircle' */
EW_DECLARE_BITMAP_RES( ApplicationBtnCircle )

/* Bitmap resource : 'Application::BtnCapsule' */
EW_DECLARE_BITMAP_RES( ApplicationBtnCapsule )

/* Bitmap resource : 'Application::BlueBtn' */
EW_DECLARE_BITMAP_RES( ApplicationBlueBtn )

/* Font resource : 'Application::MyFont' */
EW_DECLARE_FONT_RES( ApplicationMyFont )

/* Font resource : 'Application::MyFont1' */
EW_DECLARE_FONT_RES( ApplicationMyFont1 )

/* Bitmap resource : 'Application::camera' */
EW_DECLARE_BITMAP_RES( Applicationcamera )

/* Bitmap resource containing diverse icons you can use in your project. The icons 
   have the size 36x36 pixel. */
EW_DECLARE_BITMAP_RES( ApplicationSymbolIconsMedium )

/* Font resource : 'Application::MyFont2' */
EW_DECLARE_FONT_RES( ApplicationMyFont2 )

/* Forward declaration of the class WidgetSet::PushButtonConfig */
#ifndef _WidgetSetPushButtonConfig_
  EW_DECLARE_CLASS( WidgetSetPushButtonConfig )
#define _WidgetSetPushButtonConfig_
#endif

/* User defined auto object: 'Application::PushButtonConfig' */
EW_DECLARE_AUTOOBJECT( ApplicationPushButtonConfig, WidgetSetPushButtonConfig )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
