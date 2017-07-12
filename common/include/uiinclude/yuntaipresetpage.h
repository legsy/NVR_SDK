#ifndef _YUNTAIPRESETPAGE_H_
#define _YUNTAIPRESETPAGE_H_

#include "ui.h"

#define IDC_STATIC_YTPRESET_POS				IDD_DIALOG_YTPRESET+1
#define IDC_STATIC_YTPRESET_ZOOM			IDD_DIALOG_YTPRESET+2
#define IDC_STATIC_YTPRESET_IRIS			IDD_DIALOG_YTPRESET+3
#define IDC_STATIC_YTPRESET_NUM				IDD_DIALOG_YTPRESET+4
#define IDC_STATIC_YTPRESET_FOCUS			IDD_DIALOG_YTPRESET+5

#define IDC_EDIT_YTPRESET_NUM				IDD_DIALOG_YTPRESET+6

#define IDC_BUTTON_YTPRESET_LEFT			 IDD_DIALOG_YTPRESET+7
#define IDC_BUTTON_YTPRESET_RIGHT			 IDD_DIALOG_YTPRESET+8
#define IDC_BUTTON_YTPRESET_UP				 IDD_DIALOG_YTPRESET+9
#define IDC_BUTTON_YTPRESET_DOWN			 IDD_DIALOG_YTPRESET+10

#define IDC_BUTTON_YTPRESET_ZOOMDOWN		 IDD_DIALOG_YTPRESET+11
#define IDC_BUTTON_YTPRESET_ZOOMUP			 IDD_DIALOG_YTPRESET+12
#define IDC_BUTTON_YTPRESET_IRISDOWN		 IDD_DIALOG_YTPRESET+13
#define IDC_BUTTON_YTPRESET_IRISUP			 IDD_DIALOG_YTPRESET+14
#define IDC_BUTTON_YTPRESET_FOCUSDOWN		 IDD_DIALOG_YTPRESET+15
#define IDC_BUTTON_YTPRESET_FOCUSUP			 IDD_DIALOG_YTPRESET+16

#define IDC_BUTTON_YTPRESET_SAVE				 IDD_DIALOG_YTPRESET+17
#define IDC_BUTTON_YTPRESET_CANCEL			 IDD_DIALOG_YTPRESET+18
#define IDC_BUTTON_YTPRESET_DEL				 IDD_DIALOG_YTPRESET+19

BOOL CreateYunTaiPresetPage();
BOOL ShowYunTaiPresetPage();
void GetYunTaiChn(u8 *pchn);
void SetYunTaiChn(u8 chn);

#endif