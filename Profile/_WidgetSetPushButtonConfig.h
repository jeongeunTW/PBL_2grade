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

#ifndef _WidgetSetPushButtonConfig_H
#define _WidgetSetPushButtonConfig_H

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

#include "_WidgetSetWidgetConfig.h"

/* Forward declaration of the class WidgetSet::PushButtonConfig */
#ifndef _WidgetSetPushButtonConfig_
  EW_DECLARE_CLASS( WidgetSetPushButtonConfig )
#define _WidgetSetPushButtonConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a monostable 'push button' widget (WidgetSet::PushButton). In 
   the practice, you will create an instance of this class, configure its properties 
   with bitmaps, colors and other relevant attributes according to your design expectations 
   and assign such prepared configuration object to the property 'Appearance' of 
   every affected push button widget. Thereupon the widgets will use the configuration 
   information provided in the object.
   During its lifetime the button remains always in one of the four states: 'disabled', 
   'default', 'focused' and 'active'. The state 'disabled' is true for every not 
   available button (the property 'Enabled' of the button is 'false'). Such buttons 
   will ignore all user inputs. The state 'default' determines a button, which is 
   ready to be touched by the user or ready to become focused. As soon as the button 
   becomes focused, it switches in the state 'focused'. In this state the user can 
   activate the button by pressing a key on the keyboard. Finally, the state 'active' 
   is true, if the user actually interacts with the button (the button is pressed). 
   With the configuration object you can specify the appearance of the button for 
   every state individually. For this purpose you should know from which views the 
   button is composed of:
   - 'Face' is a bitmap frame view (Views::Frame) filling per default the entire 
   background of the button. In the configuration object you can individually specify 
   for every button state the desired bitmap (@FaceActive, @FaceDefault, @FaceDisabled, 
   @FaceFocused), the frame number within the bitmap (@FaceFrameActive, @FaceFrameDefault, 
   @FaceFrameDisabled, @FaceFrameFocused) and opacity or color to tint the bitmap 
   (@FaceTintActive, @FaceTintDefault, @FaceTintDisabled, @FaceTintFocused). The 
   button can automatically play animated bitmaps if the corresponding frame number 
   is -1. If desired, with the property @FaceLayout you can also configure the bitmap 
   to be arranged horizontally and vertically instead of filling the entire widget 
   area.
   - 'Icon' is an image view (Views::Image) displayed per default in the center 
   of the button. The corresponding bitmap is determined in the property 'Icon' 
   in the push button widget. In the configuration object you can specify the alignment 
   (@IconAlignment) and margins (@IconMarginBottom, @IconMarginLeft, @IconMarginRight, 
   @IconMarginTop) how to arrange the 'Icon' bitmap within the button area. Furthermore, 
   for every button state the opacity or color to tint the bitmap can be determined 
   (@IconTintActive, @IconTintDefault, @IconTintDisabled, @IconTintFocused).
   - 'Label' is a text view (Views::Text) displayed per default in the center of 
   the button. The corresponding text is determined in the property 'Label' in the 
   push button widget. In the configuration object you can specify the font (@LabelFont), 
   alignment (@LabelAlignment) and margins (@LabelMarginBottom, @LabelMarginLeft, 
   @LabelMarginRight, @LabelMarginTop) to use for the text view. For every button 
   state you can specify individual text color values (@LabelColorActive, @LabelColorDefault, 
   @LabelColorDisabled, @LabelColorFocused).
   If the button is actually focused, it can also be activated by pressing the keyboard 
   key specified in the property @KeyCode. To prevent the button from being able 
   to be focused, initialize this property with the value Core::KeyCode.NoKey. The 
   property @PressedFeedbackDuration configures the duration how long the button 
   should appear active (pressed) even if it has been taped for a very short time.
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the button to 
   not shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig )
EW_END_OF_FIELDS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_METHODS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetPushButtonConfig )

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetPushButtonConfig_H */

/* Embedded Wizard */
