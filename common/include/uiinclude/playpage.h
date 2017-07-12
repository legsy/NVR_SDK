#ifndef _PLAYPAGE_H_
#define _PLAYPAGE_H_

#include "ui.h"

#define IDC_STATIC_PLAY_CHNINDEX			IDD_DIALOG_PLAY+1
#define IDC_COMBO_PLAY_CHNINDEX				IDD_DIALOG_PLAY+2

#define IDC_STATIC_PLAY_RECORDTYPE			IDD_DIALOG_PLAY+3
#define IDC_COMBO_PLAY_RECORDTYPE			IDD_DIALOG_PLAY+4

#define IDC_STATIC_PLAY_RECORDTIME			IDD_DIALOG_PLAY+5
//#define IDC_EDIT_PLAY_STARTDATE			IDD_DIALOG_PLAY+6
//#define IDC_EDIT_PLAY_STARTTIME			IDD_DIALOG_PLAY+7
#define IDC_STATIC_PLAY_TO					IDD_DIALOG_PLAY+8
//#define IDC_EDIT_PLAY_ENDDATE				IDD_DIALOG_PLAY+9
//#define IDC_EDIT_PLAY_ENDTIME				IDD_DIALOG_PLAY+10

#define IDC_BUTTON_PLAY_SEARCH				IDD_DIALOG_PLAY+11
#define IDC_BUTTON_PLAY_PLAY				IDD_DIALOG_PLAY+12

#define IDC_STATIC_PLAY_SELECTPAGE			IDD_DIALOG_PLAY+13
#define IDC_EDIT_PLAY_CURPAGE				IDD_DIALOG_PLAY+14
#define IDC_STATIC_PLAY_COMPART				IDD_DIALOG_PLAY+15
#define IDC_STATIC_PLAY_TOTALPAGE			IDD_DIALOG_PLAY+16

#define IDC_STATIC_PLAY_FILEINDEX			IDD_DIALOG_PLAY+17
#define IDC_STATIC_PLAY_FILETIME			IDD_DIALOG_PLAY+18
#define IDC_STATIC_PLAY_FILESIZE			IDD_DIALOG_PLAY+19
#define IDC_STATIC_PLAY_FILEFLAG			IDD_DIALOG_PLAY+20
#define IDC_LIST_PLAY_FILEINFO				IDD_DIALOG_PLAY+21

#define IDC_STATIC_PLAY_STORE				IDD_DIALOG_PLAY+22
#define IDC_COMBO_PLAY_STORE				IDD_DIALOG_PLAY+23

#define IDC_BUTTON_PLAY_BACKUP				IDD_DIALOG_PLAY+24

#define IDC_BUTTON_PLAY_COPY				IDD_DIALOG_PLAY+25
#define IDC_BUTTON_PLAY_HIT					IDD_DIALOG_PLAY+26
#define IDC_BUTTON_PLAY_NOTHIT				IDD_DIALOG_PLAY+27

#define IDC_BUTTON_PLAY_BACK				IDD_DIALOG_PLAY+28

#define IDC_EDIT_PLAY_STARTYEAR				IDD_DIALOG_PLAY+29
#define IDC_EDIT_PLAY_STARTMON				IDD_DIALOG_PLAY+30
#define IDC_EDIT_PLAY_STARTDAY				IDD_DIALOG_PLAY+31
#define IDC_EDIT_PLAY_STARTHOUR				IDD_DIALOG_PLAY+32
#define IDC_EDIT_PLAY_STARTMIN				IDD_DIALOG_PLAY+33
#define IDC_EDIT_PLAY_STARTSEC				IDD_DIALOG_PLAY+34

#define IDC_EDIT_PLAY_ENDYEAR				IDD_DIALOG_PLAY+35
#define IDC_EDIT_PLAY_ENDMON				IDD_DIALOG_PLAY+36
#define IDC_EDIT_PLAY_ENDDAY				IDD_DIALOG_PLAY+37
#define IDC_EDIT_PLAY_ENDHOUR				IDD_DIALOG_PLAY+38
#define IDC_EDIT_PLAY_ENDMIN				IDD_DIALOG_PLAY+39
#define IDC_EDIT_PLAY_ENDSEC				IDD_DIALOG_PLAY+40

#define IDC_STATIC_PLAY_STARTSEP1			IDD_DIALOG_PLAY+41
#define IDC_STATIC_PLAY_STARTSEP2			IDD_DIALOG_PLAY+42
#define IDC_STATIC_PLAY_STARTSEP3			IDD_DIALOG_PLAY+43
#define IDC_STATIC_PLAY_STARTSEP4			IDD_DIALOG_PLAY+44

#define IDC_STATIC_PLAY_ENDSEP1				IDD_DIALOG_PLAY+45
#define IDC_STATIC_PLAY_ENDSEP2				IDD_DIALOG_PLAY+46
#define IDC_STATIC_PLAY_ENDSEP3				IDD_DIALOG_PLAY+47
#define IDC_STATIC_PLAY_ENDSEP4				IDD_DIALOG_PLAY+48


#define IDC_DATETIME_PLAY_STARTTIME                      IDD_DIALOG_PLAY+49
#define IDC_DATETIME_PLAY_ENDTIME                          IDD_DIALOG_PLAY+50

#define IDC_BUTTON_PLAY_GOTOPAGE                           IDD_DIALOG_PLAY+51 

BOOL CreatePlayPage();
BOOL ShowPlayPage();

#endif