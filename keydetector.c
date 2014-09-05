#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <linux/input.h>
#include <sys/time.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int main()
{
    struct input_event event;
    FILE* file = fopen("/dev/input/event0", "r");
    char* type;
    char* code;
    char* value;
    while(1)
    {
        fread(&event.time.tv_sec, sizeof(time_t), 1, file);
        fread(&event.time.tv_usec, sizeof(suseconds_t), 1, file);
        fread(&event.type, sizeof(unsigned short), 1, file);
        fread(&event.code, sizeof(unsigned short), 1, file);
        fread(&event.value, sizeof(unsigned int), 1, file);
        if(event.type == EV_KEY)
        {
            switch(event.code)
            {
                case KEY_RESERVED : code = "KEY_RESERVED"; break;
                case KEY_ESC : code = "KEY_ESC"; break;
                case KEY_1 : code = "KEY_1"; break;
                case KEY_2 : code = "KEY_2"; break;
                case KEY_3 : code = "KEY_3"; break;
                case KEY_4 : code = "KEY_4"; break;
                case KEY_5 : code = "KEY_5"; break;
                case KEY_6 : code = "KEY_6"; break;
                case KEY_7 : code = "KEY_7"; break;
                case KEY_8 : code = "KEY_8"; break;
                case KEY_9 : code = "KEY_9"; break;
                case KEY_0 : code = "KEY_0"; break;
                case KEY_MINUS : code = "KEY_MINUS"; break;
                case KEY_EQUAL : code = "KEY_EQUAL"; break;
                case KEY_BACKSPACE : code = "KEY_BACKSPACE"; break;
                case KEY_TAB : code = "KEY_TAB"; break;
                case KEY_Q : code = "KEY_Q"; break;
                case KEY_W : code = "KEY_W"; break;
                case KEY_E : code = "KEY_E"; break;
                case KEY_R : code = "KEY_R"; break;
                case KEY_T : code = "KEY_T"; break;
                case KEY_Y : code = "KEY_Y"; break;
                case KEY_U : code = "KEY_U"; break;
                case KEY_I : code = "KEY_I"; break;
                case KEY_O : code = "KEY_O"; break;
                case KEY_P : code = "KEY_P"; break;
                case KEY_LEFTBRACE : code = "KEY_LEFTBRACE"; break;
                case KEY_RIGHTBRACE : code = "KEY_RIGHTBRACE"; break;
                case KEY_ENTER : code = "KEY_ENTER"; break;
                case KEY_LEFTCTRL : code = "KEY_LEFTCTRL"; break;
                case KEY_A : code = "KEY_A"; break;
                case KEY_S : code = "KEY_S"; break;
                case KEY_D : code = "KEY_D"; break;
                case KEY_F : code = "KEY_F"; break;
                case KEY_G : code = "KEY_G"; break;
                case KEY_H : code = "KEY_H"; break;
                case KEY_J : code = "KEY_J"; break;
                case KEY_K : code = "KEY_K"; break;
                case KEY_L : code = "KEY_L"; break;
                case KEY_SEMICOLON : code = "KEY_SEMICOLON"; break;
                case KEY_APOSTROPHE : code = "KEY_APOSTROPHE"; break;
                case KEY_GRAVE : code = "KEY_GRAVE"; break;
                case KEY_LEFTSHIFT : code = "KEY_LEFTSHIFT"; break;
                case KEY_BACKSLASH : code = "KEY_BACKSLASH"; break;
                case KEY_Z : code = "KEY_Z"; break;
                case KEY_X : code = "KEY_X"; break;
                case KEY_C : code = "KEY_C"; break;
                case KEY_V : code = "KEY_V"; break;
                case KEY_B : code = "KEY_B"; break;
                case KEY_N : code = "KEY_N"; break;
                case KEY_M : code = "KEY_M"; break;
                case KEY_COMMA : code = "KEY_COMMA"; break;
                case KEY_DOT : code = "KEY_DOT"; break;
                case KEY_SLASH : code = "KEY_SLASH"; break;
                case KEY_RIGHTSHIFT : code = "KEY_RIGHTSHIFT"; break;
                case KEY_KPASTERISK : code = "KEY_KPASTERISK"; break;
                case KEY_LEFTALT : code = "KEY_LEFTALT"; break;
                case KEY_SPACE : code = "KEY_SPACE"; break;
                case KEY_CAPSLOCK : code = "KEY_CAPSLOCK"; break;
                case KEY_F1 : code = "KEY_F1"; break;
                case KEY_F2 : code = "KEY_F2"; break;
                case KEY_F3 : code = "KEY_F3"; break;
                case KEY_F4 : code = "KEY_F4"; break;
                case KEY_F5 : code = "KEY_F5"; break;
                case KEY_F6 : code = "KEY_F6"; break;
                case KEY_F7 : code = "KEY_F7"; break;
                case KEY_F8 : code = "KEY_F8"; break;
                case KEY_F9 : code = "KEY_F9"; break;
                case KEY_F10 : code = "KEY_F10"; break;
                case KEY_NUMLOCK : code = "KEY_NUMLOCK"; break;
                case KEY_SCROLLLOCK : code = "KEY_SCROLLLOCK"; break;
                case KEY_KP7 : code = "KEY_KP7"; break;
                case KEY_KP8 : code = "KEY_KP8"; break;
                case KEY_KP9 : code = "KEY_KP9"; break;
                case KEY_KPMINUS : code = "KEY_KPMINUS"; break;
                case KEY_KP4 : code = "KEY_KP4"; break;
                case KEY_KP5 : code = "KEY_KP5"; break;
                case KEY_KP6 : code = "KEY_KP6"; break;
                case KEY_KPPLUS	: code = "KEY_KPPLUS"; break;
                case KEY_KP1 : code = "KEY_KP1"; break;
                case KEY_KP2 : code = "KEY_KP2"; break;
                case KEY_KP3 : code = "KEY_KP3"; break;
                case KEY_KP0 : code = "KEY_KP0"; break;
                case KEY_KPDOT : code = "KEY_KPDOT"; break;
                case KEY_ZENKAKUHANKAKU	: code = "KEY_ZENKAKUHANKAKU"; break;
                case KEY_102ND : code = "KEY_102ND"; break;
                case KEY_F11 : code = "KEY_F11"; break;
                case KEY_F12 : code = "KEY_F12"; break;
                case KEY_RO : code = "KEY_R0"; break;
                case KEY_KATAKANA : code = "KEY_KATAKANA"; break;
                case KEY_HIRAGANA : code = "KEY_HIRAGANA"; break;
                case KEY_HENKAN	: code = "KEY_HENKAN"; break;
                case KEY_KATAKANAHIRAGANA : code = "KEY_KATAKANAHIRAGANA"; break;
                case KEY_MUHENKAN : code = "KEY_MUHENKAN"; break;
                case KEY_KPJPCOMMA : code = "KEY_KPJPCOMMA"; break;
                case KEY_KPENTER : code = "KEY_KPENTER"; break;
                case KEY_RIGHTCTRL : code = "KEY_RIGHTCTRL"; break;
                case KEY_KPSLASH : code = "KEY_KPSLASH"; break;
                case KEY_SYSRQ : code = "KEY_SYSRQ"; break;
                case KEY_RIGHTALT : code = "KEY_RIGHTALT"; break;
                case KEY_LINEFEED : code = "KEY_LINEFEED"; break;
                case KEY_HOME : code = "KEY_HOME"; break;
                case KEY_UP : code = "KEY_UP"; break;
                case KEY_PAGEUP : code = "KEY_PAGEUP"; break;
                case KEY_LEFT : code = "KEY_LEFT"; break;
                case KEY_RIGHT : code = "KEY_RITHGT"; break;
                case KEY_END : code = "KEY_END"; break;
                case KEY_DOWN : code = "KEY_DOWN"; break;
                case KEY_PAGEDOWN : code = "KEY_PAGEDOWN"; break;
                case KEY_INSERT : code = "KEY_INSERT"; break;
                case KEY_DELETE : code = "KEY_DELETE"; break;
                case KEY_MACRO : code = "KEY_MACRO"; break;
                case KEY_MUTE : code = "KEY_MUTE"; break;
                case KEY_VOLUMEDOWN : code = "KEY_VOLUMEDOWN"; break;
                case KEY_VOLUMEUP : code = "KEY_VOLUMEUP"; break;
                case KEY_POWER : code = "KEY_POWER"; break;
                case KEY_KPEQUAL : code = "KEY_KPEQUAL"; break;
                case KEY_KPPLUSMINUS : code = "KEY_KPPLUSMINUS"; break;
                case KEY_PAUSE : code = "KEY_PAUSE"; break;
                case KEY_SCALE : code = "KEY_SCALE"; break;
                case KEY_KPCOMMA : code = "KEY_KPCOMMA"; break;
                case KEY_HANGEUL : code = "KEY_HANGEUL"; break;
                case KEY_HANJA : code = "KEY_HANJA"; break;
                case KEY_YEN : code = "KEY_YEN"; break;
                case KEY_LEFTMETA : code = "KEY_LEFTMETA"; break;
                case KEY_RIGHTMETA : code = "KEY_RIGHTMETA"; break;
                case KEY_COMPOSE : code = "KEY_COMPOSE"; break;
                case KEY_STOP : code = "KEY_STOP"; break;
                case KEY_AGAIN : code = "KEY_AGAIN"; break;
                case KEY_PROPS : code = "KEY_PROPS"; break;
                case KEY_UNDO : code = "KEY_UNDO"; break;
                case KEY_FRONT : code = "KEY_FRONT"; break;
                case KEY_COPY : code = "KEY_COPY"; break;
                case KEY_OPEN : code = "KEY_OPEN"; break;
                case KEY_PASTE : code = "KEY_PASTE"; break;
                case KEY_FIND : code = "KEY_FIND"; break;
                case KEY_CUT : code = "KEY_CUT"; break;
                case KEY_HELP : code = "KEY_HELP"; break;
                case KEY_MENU : code = "KEY_MENU"; break;
                case KEY_CALC : code = "KEY_CALC"; break;
                case KEY_SETUP : code = "KEY_SETUP"; break;
                case KEY_SLEEP : code = "KEY_SLEEP"; break;
                case KEY_WAKEUP : code = "KEY_WAKEUP"; break;
                case KEY_FILE : code = "KEY_FILE"; break;
                case KEY_SENDFILE : code = "KEY_SENDFILE"; break;
                case KEY_DELETEFILE : code = "KEY_DELETEFILE"; break;
                case KEY_XFER : code = "KEY_XFER"; break;
                case KEY_PROG1 : code = "KEY_PROG1"; break;
                case KEY_PROG2 : code = "KEY_PROG2"; break;
                case KEY_WWW : code = "KEY_WWW"; break;
                case KEY_MSDOS : code = "KEY_MSDOS"; break;
                case KEY_SCREENLOCK : code = "KEY_(SCREENLOCK/COFFEE)"; break;
                case KEY_DIRECTION : code = "KEY_DIRECTION"; break;
                case KEY_CYCLEWINDOWS : code = "KEY_CYCLEWINDOWS"; break;
                case KEY_MAIL : code = "KEY_MAIL"; break;
                case KEY_BOOKMARKS : code = "KEY_BOOKMARKS"; break;
                case KEY_COMPUTER : code = "KEY_COMPUTER"; break;
                case KEY_BACK : code = "KEY_BACK"; break;
                case KEY_FORWARD : code = "KEY_FORWARD"; break;
                case KEY_CLOSECD : code = "KEY_CLOSED"; break;
                case KEY_EJECTCD : code = "KEY_EJECTED"; break;
                case KEY_EJECTCLOSECD : code = "KEY_EJECTCLOSED"; break;
                case KEY_NEXTSONG : code = "KEY_NEXTSONG"; break;
                case KEY_PLAYPAUSE : code = "KEY_PLAYPAUSE"; break;
                case KEY_PREVIOUSSONG : code = "KEY_PREVIOUSSONG"; break;
                case KEY_STOPCD : code = "KEY_STOPCD"; break;
                case KEY_RECORD : code = "KEY_RECORD"; break;
                case KEY_REWIND : code = "KEY_REWIND"; break;
                case KEY_PHONE : code = "KEY_PHONE"; break;
                case KEY_ISO : code = "KEY_ISO"; break;
                case KEY_CONFIG : code = "KEY_CONFIG"; break;
                case KEY_HOMEPAGE : code = "KEY_HOMEPAGE"; break;
                case KEY_REFRESH : code = "KEY_REFRESH"; break;
                case KEY_EXIT : code = "KEY_EXIT"; break;
                case KEY_MOVE : code = "KEY_MOVE"; break;
                case KEY_EDIT : code = "KEY_EDIT"; break;
                case KEY_SCROLLUP : code = "KEY_SCROLLUP"; break;
                case KEY_SCROLLDOWN : code = "KEY_SCROLLDOWN"; break;
                case KEY_KPLEFTPAREN : code = "KEY_KPLEFTPAREN"; break;
                case KEY_KPRIGHTPAREN : code = "KEY_KPRIGHTPAREN"; break;
                case KEY_NEW : code = "KEY_NEW"; break;
                case KEY_REDO : code = "KEY_REDO"; break;
                case KEY_F13 : code = "KEY_F13"; break;
                case KEY_F14 : code = "KEY_F14"; break;
                case KEY_F15 : code = "KEY_F15"; break;
                case KEY_F16 : code = "KEY_F16"; break;
                case KEY_F17 : code = "KEY_F17"; break;
                case KEY_F18 : code = "KEY_F18"; break;
                case KEY_F19 : code = "KEY_F19"; break;
                case KEY_F20 : code = "KEY_F20"; break;
                case KEY_F21 : code = "KEY_F21"; break;
                case KEY_F22 : code = "KEY_F22"; break;
                case KEY_F23 : code = "KEY_F23"; break;
                case KEY_F24 : code = "KEY_F24"; break;
                case KEY_PLAYCD	: code = "KEY_PLAYCD"; break;
                case KEY_PAUSECD : code = "KEY_PAUSECD"; break;
                case KEY_PROG3 : code = "KEY_PROG3"; break;
                case KEY_PROG4 : code = "KEY_PROG4"; break;
                case KEY_DASHBOARD : code = "KEY_DASHBOARD"; break;
                case KEY_SUSPEND : code = "KEY_SUSPEND"; break;
                case KEY_CLOSE : code = "KEY_CLOSE"; break;
                case KEY_PLAY : code = "KEY_PLAY"; break;
                case KEY_FASTFORWARD : code = "KEY_FASTFORWARD"; break;
                case KEY_BASSBOOST : code = "KEY_BASSBOST"; break;
                case KEY_PRINT : code = "KEY_PRINT"; break;
                case KEY_HP : code = "KEY_HP"; break;
                case KEY_CAMERA	: code = "KEY_CAMERA"; break;
                case KEY_SOUND : code = "KEY_SOUND"; break;
                case KEY_QUESTION : code = "KEY_QUESTION"; break;
                case KEY_EMAIL : code = "KEY_EMAIL"; break;
                case KEY_CHAT : code = "KEY_CHAT"; break;
                case KEY_SEARCH	: code = "KEY_SEARCH"; break;
                case KEY_CONNECT : code = "KEY_CONNECT"; break;
                case KEY_FINANCE : code = "KEY_FINANCE"; break;
                case KEY_SPORT : code = "KEY_SPORT"; break;
                case KEY_SHOP : code = "KEY_SHOP"; break;
                case KEY_ALTERASE : code = "KEY_ALTERASE"; break;
                case KEY_CANCEL	: code = "KEY_CANCEL"; break;
                case KEY_BRIGHTNESSDOWN : code = "KEY_BRIGHTNESSDOWN"; break;
                case KEY_BRIGHTNESSUP : code = "KEY_BRIGHTNESSUP"; break;
                case KEY_MEDIA : code = "KEY_MEDIA"; break;
                case KEY_SWITCHVIDEOMODE : code = "KEY_SWITCHVIDEOMODE"; break;
                case KEY_KBDILLUMTOGGLE	: code = "KEY_KBDILLUMTOGGLE"; break;
                case KEY_KBDILLUMDOWN : code = "KEY_KBDILLUMDOWN"; break;
                case KEY_KBDILLUMUP : code = "KEY_KBDILLUMUP"; break;
                case KEY_SEND : code = "KEY_SEND"; break;
                case KEY_REPLY : code = "KEY_REPLY"; break;
                case KEY_FORWARDMAIL : code = "KEY_FORWARDMAIL"; break;
                case KEY_SAVE : code = "KEY_SAVE"; break;
                case KEY_DOCUMENTS : code = "KEY_DOCUMENTS"; break;
                case KEY_BATTERY : code = "KEY_BATTERY"; break;
                case KEY_BLUETOOTH : code = "KEY_BLUETOOTH"; break;
                case KEY_WLAN : code = "KEY_WLAN"; break;
                case KEY_UWB : code = "KEY_UWB"; break;
                case KEY_UNKNOWN : code = "KEY_UNKNOWN"; break;
                case KEY_VIDEO_NEXT : code = "KEY_VIDEO_NEXT"; break;
                case KEY_VIDEO_PREV : code = "KEY_VIDEO_PREV"; break;
                case KEY_BRIGHTNESS_CYCLE : code = "KEY_BRIGHTNESS_CYCLE"; break;
                case KEY_BRIGHTNESS_AUTO : code = "KEY_BRIGHTNESS_(ZERO/AUTO)"; break;
                case KEY_DISPLAY_OFF : code = "KEY_DISPLAY_OFF"; break;
                case KEY_WWAN : code = "KEY_(WWAN/WIMAX)"; break;
                case KEY_RFKILL : code = "KEY_RFKILL"; break;
                case KEY_MICMUTE : code = "KEY_MICMUTE"; break;
            }
            switch(event.value)
            {
                case 0:
                    value = "keyrelease";
                    break;
                case 1:
                    value = "keypress";
                    break;
                case 2:
                    value = "autorepeat";
                    break;
            }
            if(value != "keyrelease")
                printf("\n"KCYN"%s"KNRM":"KRED"%s"KNRM"\n", code, value);
        }
    }
    return EXIT_SUCCESS;
}
