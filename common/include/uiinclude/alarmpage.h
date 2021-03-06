#ifndef _ALARMPAGE_H_
#define _ALARMPAGE_H_

#include "ui.h"

#define IDC_PROGRESS_ALARM_COMPART				IDD_DIALOG_ALARM+1

#define IDC_STATIC_ALARM_INPUTPIN				IDD_DIALOG_ALARM+2
#define IDC_STATIC_ALARM_ALARMTYPE				IDD_DIALOG_ALARM+3
#define IDC_STATIC_ALARM_DISPOSE				IDD_DIALOG_ALARM+4

#define IDC_COMBO_ALARM_INPUTPIN				IDD_DIALOG_ALARM+5
#define IDC_COMBO_ALARM_ALARMTYPE				IDD_DIALOG_ALARM+6
#define IDC_COMBO_ALARM_DISPOSE					IDD_DIALOG_ALARM+7

#define IDC_BUTTON_ALARM_SETTIME				IDD_DIALOG_ALARM+8
#define IDC_BUTTON_ALARM_MANAGE					IDD_DIALOG_ALARM+9
#define IDC_BUTTON_ALARM_PTZ					IDD_DIALOG_ALARM+10

#define IDC_STATIC_ALARM_COPY					IDD_DIALOG_ALARM+11
#define IDC_COMBO_ALARM_COPY					IDD_DIALOG_ALARM+12
#define IDC_BUTTON_ALARM_COPY					IDD_DIALOG_ALARM+13

#define IDC_STATIC_ALARM_OUTPUTPIN				IDD_DIALOG_ALARM+14
#define IDC_STATIC_ALARM_OUTPUTTYPE				IDD_DIALOG_ALARM+15
#define IDC_STATIC_ALARM_OUTPUTTIME				IDD_DIALOG_ALARM+16
#define IDC_STATIC_ALARM_OUTPUTDELAY			IDD_DIALOG_ALARM+17

#define IDC_COMBO_ALARM_OUTPUTPIN				IDD_DIALOG_ALARM+18
#define IDC_COMBO_ALARM_OUTPUTTYPE				IDD_DIALOG_ALARM+19
#define IDC_BUTTON_ALARM_OUTPUTTIME				IDD_DIALOG_ALARM+20
#define IDC_COMBO_ALARM_OUTPUTDELAY				IDD_DIALOG_ALARM+21

#define IDC_STATIC_ALARM_OUTPUTCOPY				IDD_DIALOG_ALARM+22
#define IDC_COMBO_ALARM_OUTPUTCOPY				IDD_DIALOG_ALARM+23
#define IDC_BUTTON_ALARM_OUTPUTCOPY				IDD_DIALOG_ALARM+24

#define IDC_BUTTON_ALARM_OK						IDD_DIALOG_ALARM+25
#define IDC_BUTTON_ALARM_CANCEL					IDD_DIALOG_ALARM+26

BOOL CreateAlarmPage();
BOOL ShowAlarmPage();

#endif

