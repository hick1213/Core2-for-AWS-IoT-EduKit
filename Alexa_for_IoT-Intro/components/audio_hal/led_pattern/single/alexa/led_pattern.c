// Copyright 2018 Espressif Systems (Shanghai) PTE LTD
// All rights reserved.

#include <esp_err.h>
#include <esp_log.h>
#include <led_pattern.h>

const led_pattern_state_t led_single_listening_enter[] = {
    {16, {0x000000}},
    {16, {0x00001A}},
    {16, {0x000033}},
    {16, {0x00004D}},
    {16, {0x000066}},
    {16, {0x000080}},
    {16, {0x000099}},
    {16, {0x0000B3}},
    {16, {0x0000CC}},
    {16, {0x0000E6}},
    {16, {0x0000FF}},
    {16, {0x001AFF}},
    {16, {0x0033FF}},
    {16, {0x004DFF}},
    {16, {0x0066FF}},
    {16, {0x0080FF}},
    {16, {0x0099FF}},
    {16, {0x00B3FF}},
    {16, {0x00CCFF}},
    {16, {0x00E6FF}},
    {16, {0x00FFFF}},
};

const led_pattern_state_t led_single_listening_ongoing[] = {
    {22, {0x00FFFF}},
};

const led_pattern_state_t led_single_speaking[] = {
    {16, {0x0000FF}},
    {16, {0x0000FF}},
    {16, {0x0001FF}},
    {16, {0x0002FF}},
    {16, {0x0003FF}},
    {16, {0x0004FF}},
    {16, {0x0005FF}},
    {16, {0x0006FF}},
    {16, {0x0008FF}},
    {16, {0x000AFF}},
    {16, {0x000DFF}},
    {16, {0x0010FF}},
    {16, {0x0012FF}},
    {16, {0x0015FF}},
    {16, {0x0018FF}},
    {16, {0x001CFF}},
    {16, {0x001FFF}},
    {16, {0x0023FF}},
    {16, {0x0026FF}},
    {16, {0x002AFF}},
    {16, {0x002EFF}},
    {16, {0x0032FF}},
    {16, {0x0036FF}},
    {16, {0x003AFF}},
    {16, {0x003EFF}},
    {16, {0x0043FF}},
    {16, {0x0047FF}},
    {16, {0x004CFF}},
    {16, {0x0050FF}},
    {16, {0x0055FF}},
    {16, {0x005AFF}},
    {16, {0x005FFF}},
    {16, {0x0064FF}},
    {16, {0x0069FF}},
    {16, {0x006EFF}},
    {16, {0x0073FF}},
    {16, {0x0078FF}},
    {16, {0x007DFF}},
    {16, {0x0082FF}},
    {16, {0x0088FF}},
    {16, {0x008DFF}},
    {16, {0x0092FF}},
    {16, {0x0098FF}},
    {16, {0x009DFF}},
    {16, {0x00A3FF}},
    {16, {0x00A8FF}},
    {16, {0x00AEFF}},
    {16, {0x00B3FF}},
    {16, {0x00B9FF}},
    {16, {0x00BFFF}},
    {16, {0x00C4FF}},
    {16, {0x00CAFF}},
    {16, {0x00D0FF}},
    {16, {0x00D6FF}},
    {16, {0x00DBFF}},
    {16, {0x00E1FF}},
    {16, {0x00E7FF}},
    {16, {0x00ECFF}},
    {16, {0x00F2FF}},
    {16, {0x00F7FF}},
    {16, {0x00FCFF}},
    {16, {0x00FFFF}},
    {16, {0x00FFFF}},
    {16, {0x00FEFF}},
    {16, {0x00FDFF}},
    {16, {0x00FCFF}},
    {16, {0x00FBFF}},
    {16, {0x00F9FF}},
    {16, {0x00F7FF}},
    {16, {0x00F4FF}},
    {16, {0x00F2FF}},
    {16, {0x00EFFF}},
    {16, {0x00ECFF}},
    {16, {0x00E9FF}},
    {16, {0x00E6FF}},
    {16, {0x00E3FF}},
    {16, {0x00DFFF}},
    {16, {0x00DCFF}},
    {16, {0x00D8FF}},
    {16, {0x00D4FF}},
    {16, {0x00D0FF}},
    {16, {0x00CCFF}},
    {16, {0x00C8FF}},
    {16, {0x00C4FF}},
    {16, {0x00BFFF}},
    {16, {0x00BBFF}},
    {16, {0x00B6FF}},
    {16, {0x00B2FF}},
    {16, {0x00ADFF}},
    {16, {0x00A8FF}},
    {16, {0x00A3FF}},
    {16, {0x009EFF}},
    {16, {0x0099FF}},
    {16, {0x0094FF}},
    {16, {0x008FFF}},
    {16, {0x008AFF}},
    {16, {0x0085FF}},
    {16, {0x007FFF}},
    {16, {0x007AFF}},
    {16, {0x0075FF}},
    {16, {0x006FFF}},
    {16, {0x006AFF}},
    {16, {0x0064FF}},
    {16, {0x005FFF}},
    {16, {0x0059FF}},
    {16, {0x0053FF}},
    {16, {0x004EFF}},
    {16, {0x0048FF}},
    {16, {0x0042FF}},
    {16, {0x003DFF}},
    {16, {0x0037FF}},
    {16, {0x0031FF}},
    {16, {0x002CFF}},
    {16, {0x0026FF}},
    {16, {0x0021FF}},
    {16, {0x001BFF}},
    {16, {0x0016FF}},
    {16, {0x0010FF}},
    {16, {0x000BFF}},
    {16, {0x0007FF}},
    {16, {0x0002FF}},
};

const led_pattern_state_t led_single_mic_off_exit[] = {
    {11, {0xFF0000}},
    {11, {0xEE0000}},
    {11, {0xDD0000}},
    {11, {0xCC0000}},
    {11, {0xBB0000}},
    {11, {0xAA0000}},
    {11, {0x990000}},
    {11, {0x880000}},
    {11, {0x770000}},
    {11, {0x660000}},
    {11, {0x550000}},
    {11, {0x440000}},
    {11, {0x330000}},
    {11, {0x220000}},
    {11, {0x110000}},
    {11, {0x000000}},
};

const led_pattern_state_t led_single_mic_off_ongoing[] = {
    {66, {0x990000}},
};

const led_pattern_state_t led_single_mic_off_enter[] = {
    {33, {0x110000}},
    {33, {0x220000}},
    {33, {0x330000}},
    {33, {0x440000}},
    {33, {0x550000}},
    {33, {0x660000}},
    {33, {0x770000}},
    {33, {0x880000}},
    {33, {0x990000}},
    {33, {0xAA0000}},
    {33, {0xBB0000}},
    {33, {0xCC0000}},
    {33, {0xDD0000}},
    {33, {0xEE0000}},
    {66, {0xFF0000}},
    {66, {0xEE0000}},
    {66, {0xDD0000}},
    {66, {0xCC0000}},
    {66, {0xBB0000}},
    {66, {0xAA0000}},
    {66, {0x990000}},
};

const led_pattern_state_t led_single_listening_exit[] = {
    {16, {0x00ffff}},
    {16, {0x00e6ff}},
    {16, {0x00ccff}},
    {16, {0x00b3ff}},
    {16, {0x0099ff}},
    {16, {0x0080ff}},
    {16, {0x0066ff}},
    {16, {0x004dff}},
    {16, {0x0033ff}},
    {16, {0x001aff}},
    {16, {0x0000ff}},
    {16, {0x0000e6}},
    {16, {0x0000cc}},
    {16, {0x0000b3}},
    {16, {0x000099}},
    {16, {0x000080}},
    {16, {0x000066}},
    {16, {0x00004D}},
    {16, {0x000033}},
    {16, {0x000000}},
};

const led_pattern_state_t led_single_error[] = {
    {25, {0x280000}},
    {25, {0x380000}},
    {25, {0x480000}},
    {25, {0x500000}},
    {25, {0x580000}},
    {25, {0x680000}},
    {25, {0x780000}},
    {25, {0x900000}},
    {25, {0xA00000}},
    {25, {0xC00000}},
    {25, {0xD00000}},
    {25, {0xE00000}},
    {25, {0xF80000}},
    {100, {0xFF0000}},
    {25, {0xF80000}},
    {25, {0xF00000}},
    {25, {0xF00000}},
    {25, {0xD00000}},
    {25, {0xC00000}},
    {25, {0xa00000}},
    {25, {0x900000}},
    {25, {0x780000}},
    {25, {0x680000}},
    {25, {0x580000}},
    {25, {0x500000}},
    {25, {0x480000}},
    {25, {0x280000}},
    {25, {0x280000}},
    {25, {0x380000}},
    {25, {0x480000}},
    {25, {0x500000}},
    {25, {0x580000}},
    {25, {0x680000}},
    {25, {0x780000}},
    {25, {0x900000}},
    {25, {0xa00000}},
    {25, {0xC00000}},
    {25, {0xD00000}},
    {25, {0xe00000}},
    {25, {0xF00000}},
    {25, {0xF80000}},
    {100, {0xFF0000}},
    {25, {0xF80000}},
    {25, {0xF00000}},
    {25, {0xe00000}},
    {25, {0xD00000}},
    {25, {0xC00000}},
    {25, {0xa00000}},
    {25, {0x900000}},
    {25, {0x780000}},
    {25, {0x680000}},
    {25, {0x580000}},
    {25, {0x500000}},
    {25, {0x480000}},
    {25, {0x280000}},
    {25, {0x280000}},
    {25, {0x380000}},
    {25, {0x480000}},
    {25, {0x500000}},
    {25, {0x580000}},
    {25, {0x680000}},
    {25, {0x780000}},
    {25, {0x900000}},
    {25, {0xa00000}},
    {25, {0xC00000}},
    {25, {0xD00000}},
    {25, {0xe00000}},
    {25, {0xF00000}},
    {25, {0xF80000}},
    {100, {0xFF0000}},
    {25, {0xF80000}},
    {25, {0xF00000}},
    {25, {0xe00000}},
    {25, {0xD00000}},
    {25, {0xC00000}},
    {25, {0xa00000}},
    {25, {0x900000}},
    {25, {0x780000}},
    {25, {0x680000}},
    {25, {0x580000}},
    {25, {0x500000}},
    {25, {0x480000}},
    {25, {0x280000}},
};

const led_pattern_state_t led_single_bt_connect[] = {
    {75, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {150, {0x000000}},
    {75, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {150, {0x000000}},
    {75, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {150, {0x000000}},
    {5, {0x000000}},
};

const led_pattern_state_t led_single_bt_disconnect[] = {
    {75, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {150, {0x000000}},
    {75, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {150, {0x000000}},
    {75, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {5, {0x000000}},
    {150, {0x000000}},
    {5, {0x000000}},
};

const led_pattern_state_t led_single_notification_ongoing[] = {
    {16, {0x000000}},
    {16, {0x050400}},
    {16, {0x0a0800}},
    {16, {0x0f0d00}},
    {16, {0x141100}},
    {16, {0x1a1500}},
    {16, {0x1f1900}},
    {16, {0x241e00}},
    {16, {0x292200}},
    {16, {0x2e2600}},
    {16, {0x332a00}},
    {16, {0x382f00}},
    {16, {0x3d3300}},
    {16, {0x423700}},
    {16, {0x473b00}},
    {16, {0x4d4000}},
    {16, {0x524400}},
    {16, {0x574800}},
    {16, {0x5c4c00}},
    {16, {0x615100}},
    {16, {0x665500}},
    {16, {0x6b5900}},
    {16, {0x705d00}},
    {16, {0x756200}},
    {16, {0x7a6600}},
    {16, {0x806a00}},
    {16, {0x856e00}},
    {16, {0x8a7200}},
    {16, {0x8f7700}},
    {16, {0x947b00}},
    {16, {0x997f00}},
    {16, {0x9e8300}},
    {16, {0xa38800}},
    {16, {0xa88c00}},
    {16, {0xad9000}},
    {16, {0xb39400}},
    {16, {0xb89900}},
    {16, {0xbd9d00}},
    {16, {0xc2a100}},
    {16, {0xc7a500}},
    {16, {0xccaa00}},
    {16, {0xd1ae00}},
    {16, {0xd6b200}},
    {16, {0xdbb600}},
    {16, {0xe0bb00}},
    {16, {0xe6bf00}},
    {16, {0xebc300}},
    {16, {0xf0c700}},
    {16, {0xf5cc00}},
    {16, {0xfad000}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xfad000}},
    {16, {0xf5cb00}},
    {16, {0xefc700}},
    {16, {0xeac300}},
    {16, {0xe5be00}},
    {16, {0xe0ba00}},
    {16, {0xdbb600}},
    {16, {0xd5b100}},
    {16, {0xd0ad00}},
    {16, {0xcba900}},
    {16, {0xc6a400}},
    {16, {0xc1a000}},
    {16, {0xbb9c00}},
    {16, {0xb69700}},
    {16, {0xb19300}},
    {16, {0xac8f00}},
    {16, {0xa78a00}},
    {16, {0xa18600}},
    {16, {0x9c8200}},
    {16, {0x977d00}},
    {16, {0x927900}},
    {16, {0x8d7500}},
    {16, {0x877000}},
    {16, {0x826c00}},
    {16, {0x7d6800}},
    {16, {0x786400}},
    {16, {0x725f00}},
    {16, {0x6d5b00}},
    {16, {0x685700}},
    {16, {0x635200}},
    {16, {0x5e4e00}},
    {16, {0x584a00}},
    {16, {0x534500}},
    {16, {0x4e4100}},
    {16, {0x493d00}},
    {16, {0x443800}},
    {16, {0x3e3400}},
    {16, {0x393000}},
    {16, {0x342b00}},
    {16, {0x2f2700}},
    {16, {0x2a2300}},
    {16, {0x241e00}},
    {16, {0x1f1a00}},
    {16, {0x1a1600}},
    {16, {0x151100}},
    {16, {0x100d00}},
    {16, {0x0a0900}},
    {16, {0x050400}},
    {16, {0x000000}},
    {1500, {0x000000}},
};

const led_pattern_state_t led_single_notification_new[] = {
    {16, {0x000000}},
    {16, {0x060500}},
    {16, {0x0c0a00}},
    {16, {0x120f00}},
    {16, {0x181400}},
    {16, {0x1e1900}},
    {16, {0x241e00}},
    {16, {0x2a2300}},
    {16, {0x2f2700}},
    {16, {0x352c00}},
    {16, {0x3b3100}},
    {16, {0x413600}},
    {16, {0x473b00}},
    {16, {0x4d4000}},
    {16, {0x534500}},
    {16, {0x594a00}},
    {16, {0x5f4f00}},
    {16, {0x655400}},
    {16, {0x6b5900}},
    {16, {0x715e00}},
    {16, {0x776300}},
    {16, {0x7d6800}},
    {16, {0x826c00}},
    {16, {0x887100}},
    {16, {0x8e7600}},
    {16, {0x947b00}},
    {16, {0x9a8000}},
    {16, {0xa08500}},
    {16, {0xa68a00}},
    {16, {0xac8f00}},
    {16, {0xb29400}},
    {16, {0xb89900}},
    {16, {0xbe9e00}},
    {16, {0xc4a300}},
    {16, {0xcaa800}},
    {16, {0xd0ad00}},
    {16, {0xd5b100}},
    {16, {0xdbb600}},
    {16, {0xe1bb00}},
    {16, {0xe7c000}},
    {16, {0xedc500}},
    {16, {0xf3ca00}},
    {16, {0xf9cf00}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xffd400}},
    {16, {0xf9cf00}},
    {16, {0xf3ca00}},
    {16, {0xedc500}},
    {16, {0xe7c000}},
    {16, {0xe1bb00}},
    {16, {0xdbb600}},
    {16, {0xd5b100}},
    {16, {0xceac00}},
    {16, {0xc8a700}},
    {16, {0xc2a200}},
    {16, {0xbc9c00}},
    {16, {0xb69700}},
    {16, {0xb09200}},
    {16, {0xaa8d00}},
    {16, {0xa48800}},
    {16, {0x9e8300}},
    {16, {0x987e00}},
    {16, {0x927900}},
    {16, {0x8c7400}},
    {16, {0x866f00}},
    {16, {0x806a00}},
    {16, {0x796500}},
    {16, {0x736000}},
    {16, {0x6d5b00}},
    {16, {0x675600}},
    {16, {0x615100}},
    {16, {0x5b4c00}},
    {16, {0x554700}},
    {16, {0x4f4200}},
    {16, {0x493d00}},
    {16, {0x433800}},
    {16, {0x3d3200}},
    {16, {0x372d00}},
    {16, {0x312800}},
    {16, {0x2b2300}},
    {16, {0x241e00}},
    {16, {0x1e1900}},
    {16, {0x181400}},
    {16, {0x120f00}},
    {16, {0x0c0a00}},
    {16, {0x060500}},
    {16, {0x000000}},
};

const led_pattern_state_t led_single_thinking[] = {
    {100, {0x0000FF}},
    {100, {0x00FFFF}},
};

const led_pattern_state_t led_single_alrt_short[] = {
    {16, {0x000000}},
    {16, {0x000033}},
    {16, {0x000066}},
    {16, {0x000099}},
    {16, {0x0000cc}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000f2}},
    {16, {0x0000e6}},
    {16, {0x0000d9}},
    {16, {0x0000cc}},
    {16, {0x0000bf}},
    {16, {0x0000b3}},
    {16, {0x0000a6}},
    {16, {0x000099}},
    {16, {0x00008c}},
    {16, {0x000080}},
    {16, {0x000073}},
    {16, {0x000066}},
    {16, {0x000059}},
    {16, {0x00004d}},
    {16, {0x000040}},
    {16, {0x00005c}},
    {16, {0x00007d}},
    {16, {0x0000a3}},
    {16, {0x0000cf}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000f2}},
    {16, {0x0000e6}},
    {16, {0x0000d9}},
    {16, {0x0000cc}},
    {16, {0x0000bf}},
    {16, {0x0000b3}},
    {16, {0x0000a6}},
    {16, {0x000099}},
    {16, {0x00008c}},
    {16, {0x000080}},
    {16, {0x000073}},
    {16, {0x000066}},
    {16, {0x000059}},
    {16, {0x00004d}},
    {16, {0x000040}},
    {16, {0x00335c}},
    {16, {0x00667d}},
    {16, {0x0099a3}},
    {16, {0x00cccf}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00f2f2}},
    {16, {0x00e6e6}},
    {16, {0x00d9d9}},
    {16, {0x00cccc}},
    {16, {0x00bfbf}},
    {16, {0x00b3b3}},
    {16, {0x00a6a6}},
    {16, {0x009999}},
    {16, {0x008c8c}},
    {16, {0x008080}},
    {16, {0x007373}},
    {16, {0x006666}},
    {16, {0x005959}},
    {16, {0x004d4d}},
    {16, {0x004040}},
    {16, {0x005c5c}},
    {16, {0x007d7d}},
    {16, {0x00a3a3}},
    {16, {0x00cfcf}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00f2f2}},
    {16, {0x00e6e6}},
    {16, {0x00d9d9}},
    {16, {0x00cccc}},
    {16, {0x00bfbf}},
    {16, {0x00b3b3}},
    {16, {0x00a6a6}},
    {16, {0x009999}},
    {16, {0x008c8c}},
    {16, {0x008080}},
    {16, {0x007373}},
    {16, {0x006666}},
    {16, {0x005959}},
    {16, {0x004d4d}},
    {16, {0x004040}},
    {16, {0x002a5c}},
    {16, {0x00187d}},
    {16, {0x000ba3}},
    {16, {0x0004cf}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000f2}},
    {16, {0x0000e6}},
    {16, {0x0000d9}},
    {16, {0x0000cc}},
    {16, {0x0000bf}},
    {16, {0x0000b3}},
    {16, {0x0000a6}},
    {16, {0x000099}},
    {16, {0x00008c}},
    {16, {0x000080}},
    {16, {0x000073}},
    {16, {0x000066}},
    {16, {0x000059}},
    {16, {0x00004d}},
    {16, {0x000040}},
    {16, {0x00005c}},
    {16, {0x00007d}},
    {16, {0x0000a3}},
    {16, {0x0000cf}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000f2}},
    {16, {0x0000e6}},
    {16, {0x0000d9}},
    {16, {0x0000cc}},
    {16, {0x0000bf}},
    {16, {0x0000b3}},
    {16, {0x0000a6}},
    {16, {0x000099}},
    {16, {0x00008c}},
    {16, {0x000080}},
    {16, {0x000073}},
    {16, {0x000066}},
    {16, {0x000059}},
    {16, {0x00004d}},
    {16, {0x000040}},
    {16, {0x00335c}},
    {16, {0x00667d}},
    {16, {0x0099a3}},
    {16, {0x00cccf}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00f2f2}},
    {16, {0x00e6e6}},
    {16, {0x00d9d9}},
    {16, {0x00cccc}},
    {16, {0x00bfbf}},
    {16, {0x00b3b3}},
    {16, {0x00a6a6}},
    {16, {0x009999}},
    {16, {0x008c8c}},
    {16, {0x008080}},
    {16, {0x007373}},
    {16, {0x006666}},
    {16, {0x005959}},
    {16, {0x004d4d}},
    {16, {0x004040}},
    {16, {0x005c5c}},
    {16, {0x007d7d}},
    {16, {0x00a3a3}},
    {16, {0x00cfcf}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00f2f2}},
    {16, {0x00e6e6}},
    {16, {0x00d9d9}},
    {16, {0x00cccc}},
    {16, {0x00bfbf}},
    {16, {0x00b3b3}},
    {16, {0x00a6a6}},
    {16, {0x009999}},
    {16, {0x008c8c}},
    {16, {0x008080}},
    {16, {0x007373}},
    {16, {0x006666}},
    {16, {0x005959}},
    {16, {0x004d4d}},
    {16, {0x004040}},
    {16, {0x003333}},
    {16, {0x002626}},
    {16, {0x001a1a}},
    {16, {0x000d0d}},
};

const led_pattern_state_t led_single_alrt[] = {
    {16, {0x000000}},
    {16, {0x000033}},
    {16, {0x000066}},
    {16, {0x000099}},
    {16, {0x0000cc}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000f2}},
    {16, {0x0000e6}},
    {16, {0x0000d9}},
    {16, {0x0000cc}},
    {16, {0x0000bf}},
    {16, {0x0000b3}},
    {16, {0x0000a6}},
    {16, {0x000099}},
    {16, {0x00008c}},
    {16, {0x000080}},
    {16, {0x000073}},
    {16, {0x000066}},
    {16, {0x000059}},
    {16, {0x00004d}},
    {16, {0x000040}},
    {16, {0x00005c}},
    {16, {0x00007d}},
    {16, {0x0000a3}},
    {16, {0x0000cf}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000ff}},
    {16, {0x0000f2}},
    {16, {0x0000e6}},
    {16, {0x0000d9}},
    {16, {0x0000cc}},
    {16, {0x0000bf}},
    {16, {0x0000b3}},
    {16, {0x0000a6}},
    {16, {0x000099}},
    {16, {0x00008c}},
    {16, {0x000080}},
    {16, {0x000073}},
    {16, {0x000066}},
    {16, {0x000059}},
    {16, {0x00004d}},
    {16, {0x000040}},
    {16, {0x00335c}},
    {16, {0x00667d}},
    {16, {0x0099a3}},
    {16, {0x00cccf}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00f2f2}},
    {16, {0x00e6e6}},
    {16, {0x00d9d9}},
    {16, {0x00cccc}},
    {16, {0x00bfbf}},
    {16, {0x00b3b3}},
    {16, {0x00a6a6}},
    {16, {0x009999}},
    {16, {0x008c8c}},
    {16, {0x008080}},
    {16, {0x007373}},
    {16, {0x006666}},
    {16, {0x005959}},
    {16, {0x004d4d}},
    {16, {0x004040}},
    {16, {0x005c5c}},
    {16, {0x007d7d}},
    {16, {0x00a3a3}},
    {16, {0x00cfcf}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00ffff}},
    {16, {0x00f2f2}},
    {16, {0x00e6e6}},
    {16, {0x00d9d9}},
    {16, {0x00cccc}},
    {16, {0x00bfbf}},
    {16, {0x00b3b3}},
    {16, {0x00a6a6}},
    {16, {0x009999}},
    {16, {0x008c8c}},
    {16, {0x008080}},
    {16, {0x007373}},
    {16, {0x006666}},
    {16, {0x005959}},
    {16, {0x004d4d}},
};

const led_pattern_state_t led_single_bootup_1[] = {
    {100, {0x000000}},
};

const led_pattern_state_t led_single_bootup_2[] = {
    {126, {0x00FFFF}},
    {26, {0x00EEFF}},
    {26, {0x00DDFF}},
    {26, {0x00CCFF}},
    {26, {0x00BBFF}},
    {26, {0x00AAFF}},
    {26, {0x0099FF}},
    {26, {0x0088FF}},
    {26, {0x0077FF}},
    {26, {0x0066FF}},
    {26, {0x0055FF}},
    {26, {0x0044FF}},
    {26, {0x0033FF}},
    {26, {0x0022FF}},
    {126, {0x0000FF}},
    {26, {0x0000DF}},
    {26, {0x0000BF}},
    {26, {0x00009F}},
    {26, {0x00007F}},
    {26, {0x00005F}},
    {26, {0x00003F}},
    {26, {0x00001F}},
    {126, {0x000000}},
    {26, {0x00001F}},
    {26, {0x00003F}},
    {26, {0x00005F}},
    {26, {0x00007F}},
    {26, {0x00009F}},
    {26, {0x0000BF}},
    {26, {0x0000DF}},
    {126, {0x0000FF}},
    {26, {0x0022FF}},
    {26, {0x0033FF}},
    {26, {0x0044FF}},
    {26, {0x0055FF}},
    {26, {0x0066FF}},
    {26, {0x0077FF}},
    {26, {0x0088FF}},
    {26, {0x0099FF}},
    {26, {0x00AAFF}},
    {26, {0x00BBFF}},
    {26, {0x00CCFF}},
    {26, {0x00DDFF}},
    {26, {0x00EEFF}},
};

const led_pattern_state_t led_single_speaker_mute[] = {
    {22, {0x000000}},
    {22, {0x111111}},
    {22, {0x222222}},
    {22, {0x333333}},
    {22, {0x444444}},
    {22, {0x555555}},
    {22, {0x666666}},
    {22, {0x777777}},
    {22, {0x888888}},
    {22, {0x999999}},
    {22, {0xAAAAAA}},
    {22, {0xBBBBBB}},
    {22, {0xCCCCCC}},
    {22, {0xDDDDDD}},
    {22, {0xEEEEEE}},
    {22, {0xFFFFFF}},
    {22, {0xEEEEEE}},
    {22, {0xDDDDDD}},
    {22, {0xCCCCCC}},
    {22, {0xBBBBBB}},
    {22, {0xAAAAAA}},
    {22, {0x999999}},
    {22, {0x888888}},
    {22, {0x777777}},
    {22, {0x666666}},
    {22, {0x555555}},
    {22, {0x444444}},
    {22, {0x333333}},
    {22, {0x222222}},
    {22, {0x111111}},
    {22, {0x000000}},
};

const led_pattern_state_t led_single_speaker_vol[] = {
    {11, {0x000000}},
    {11, {0x0C0C0C}},
    {11, {0x181818}},
    {11, {0x242424}},
    {11, {0x303030}},
    {11, {0x3C3C3C}},
    {11, {0x484848}},
    {11, {0x545454}},
    {11, {0x606060}},
    {11, {0x6C6C6C}},
    {11, {0x787878}},
    {11, {0x848484}},
    {11, {0x909090}},
    {11, {0x9C9C9C}},
    {11, {0xA8A8A8}},
    {11, {0xB4B4B4}},
    {11, {0xC0C0C0}},
    {11, {0xCCCCCC}},
    {11, {0xD8D8D8}},
    {11, {0xE4E4E4}},
};

const led_pattern_state_t led_single_off[] = {
    {10, {0x000000}},
};

const led_pattern_state_t led_single_setup_mode[] = {
    {75, {0x000000}},
    {75, {0x110100}},
    {75, {0x220200}},
    {75, {0x330300}},
    {75, {0x440400}},
    {75, {0x550500}},
    {75, {0x660600}},
    {75, {0x770800}},
    {75, {0x880900}},
    {75, {0x990A00}},
    {75, {0xAA0C00}},
    {75, {0xBB0D00}},
    {75, {0xCC0E00}},
    {75, {0xDD0F00}},
    {75, {0xEE1000}},
    {75, {0xFF1100}},
    {75, {0xEE1000}},
    {75, {0xDD0F00}},
    {75, {0xCC0E00}},
    {75, {0xBB0D00}},
    {75, {0xAA0C00}},
    {75, {0x990A00}},
    {75, {0x880900}},
    {75, {0x770800}},
    {75, {0x660600}},
    {75, {0x550500}},
    {75, {0x440400}},
    {75, {0x330300}},
    {75, {0x220200}},
    {75, {0x110100}},
};

const led_pattern_state_t led_single_ota[] = {
    {75, {0x00FF00}},
};

const led_pattern_state_t led_single_do_not_disturb[] = {
    {10, {0x0A0014}},
    {10, {0x020005}},
    {10, {0x05000A}},
    {10, {0x07000F}},
    {10, {0x0A0014}},
    {10, {0x0C0019}},
    {10, {0x0F001E}},
    {10, {0x110023}},
    {10, {0x140028}},
    {10, {0x16002D}},
    {10, {0x190034}},
    {10, {0x1D003A}},
    {22, {0x200041}},
    {22, {0x230048}},
    {22, {0x27004E}},
    {22, {0x2A0055}},
    {22, {0x2D005C}},
    {22, {0x310062}},
    {22, {0x340069}},
    {22, {0x370070}},
    {22, {0x3B0076}},
    {22, {0x3E007D}},
    {22, {0x410084}},
    {50, {0x45008A}},
    {50, {0x480091}},
    {50, {0x4B0098}},
    {50, {0x4F009E}},
    {60, {0x5200A5}},
    {50, {0x4F009E}},
    {50, {0x4B0098}},
    {50, {0x480091}},
    {50, {0x45008A}},
    {40, {0x410084}},
    {40, {0x3E007D}},
    {40, {0x3B0076}},
    {40, {0x370070}},
    {40, {0x340069}},
    {40, {0x310062}},
    {40, {0x2D005C}},
    {40, {0x2A0055}},
    {40, {0x27004E}},
    {40, {0x230048}},
    {40, {0x200041}},
    {40, {0x1D003A}},
    {40, {0x190034}},
    {40, {0x16002D}},
    {40, {0x140028}},
    {40, {0x110023}},
    {40, {0x0F001E}},
    {40, {0x0C0019}},
    {40, {0x0A0014}},
    {40, {0x07000F}},
    {40, {0x05000A}},
    {30, {0x020005}},
    {33, {0x000000}},
};

static const char *TAG = "led_pattern";

static bool is_init_done = false;
led_pattern_config_t led_single_conf[LED_PATTERN_MAX];

esp_err_t led_pattern_get_config(led_pattern_config_t **led_pattern_config)
{
    if (is_init_done == false) {
        ESP_LOGE(TAG, "LED pattern not initialized");
        return ESP_FAIL;
    }
    *led_pattern_config = led_single_conf;
    return ESP_OK;
}

bool led_pattern_is_init_done()
{
    return is_init_done;
}

void led_pattern_init()
{
    led_single_conf[LED_PATTERN_BOOTUP_1].led_states_count = sizeof(led_single_bootup_1) / sizeof(led_single_bootup_1[0]);
    led_single_conf[LED_PATTERN_BOOTUP_1].led_states = (led_pattern_state_t *)led_single_bootup_1;

    led_single_conf[LED_PATTERN_BOOTUP_2].led_states_count = sizeof(led_single_bootup_2) / sizeof(led_single_bootup_2[0]);
    led_single_conf[LED_PATTERN_BOOTUP_2].led_states = (led_pattern_state_t *)led_single_bootup_2;

    led_single_conf[LED_PATTERN_LISTENING_ENTER].led_states_count = sizeof(led_single_listening_enter) / sizeof(led_single_listening_enter[0]);
    led_single_conf[LED_PATTERN_LISTENING_ENTER].led_states = (led_pattern_state_t *)led_single_listening_enter;

    led_single_conf[LED_PATTERN_LISTENING_ONGOING].led_states_count = sizeof(led_single_listening_ongoing) / sizeof(led_single_listening_ongoing[0]);
    led_single_conf[LED_PATTERN_LISTENING_ONGOING].led_states = (led_pattern_state_t *)led_single_listening_ongoing;

    led_single_conf[LED_PATTERN_LISTENING_EXIT].led_states_count = sizeof(led_single_listening_exit) / sizeof(led_single_listening_exit[0]);
    led_single_conf[LED_PATTERN_LISTENING_EXIT].led_states = (led_pattern_state_t *)led_single_listening_exit;

    led_single_conf[LED_PATTERN_SPEAKER_VOL].led_states_count = sizeof(led_single_speaker_vol) / sizeof(led_single_speaker_vol[0]);
    led_single_conf[LED_PATTERN_SPEAKER_VOL].led_states = (led_pattern_state_t *)led_single_speaker_vol;

    led_single_conf[LED_PATTERN_SPEAKER_MUTE].led_states_count = sizeof(led_single_speaker_mute) / sizeof(led_single_speaker_mute[0]);
    led_single_conf[LED_PATTERN_SPEAKER_MUTE].led_states = (led_pattern_state_t *)led_single_speaker_mute;

    led_single_conf[LED_PATTERN_SPEAKING].led_states_count = sizeof(led_single_speaking) / sizeof(led_single_speaking[0]);
    led_single_conf[LED_PATTERN_SPEAKING].led_states = (led_pattern_state_t *)led_single_speaking;

    led_single_conf[LED_PATTERN_MIC_OFF_EXIT].led_states_count = sizeof(led_single_mic_off_exit) / sizeof(led_single_mic_off_exit[0]);
    led_single_conf[LED_PATTERN_MIC_OFF_EXIT].led_states = (led_pattern_state_t *)led_single_mic_off_exit;

    led_single_conf[LED_PATTERN_MIC_OFF_ONGOING].led_states_count = sizeof(led_single_mic_off_ongoing) / sizeof(led_single_mic_off_ongoing[0]);
    led_single_conf[LED_PATTERN_MIC_OFF_ONGOING].led_states = (led_pattern_state_t *)led_single_mic_off_ongoing;

    led_single_conf[LED_PATTERN_MIC_OFF_ENTER].led_states_count = sizeof(led_single_mic_off_enter) / sizeof(led_single_mic_off_enter[0]);
    led_single_conf[LED_PATTERN_MIC_OFF_ENTER].led_states = (led_pattern_state_t *)led_single_mic_off_enter;

    led_single_conf[LED_PATTERN_ERROR].led_states_count = sizeof(led_single_error) / sizeof(led_single_error[0]);
    led_single_conf[LED_PATTERN_ERROR].led_states = (led_pattern_state_t *)led_single_error;

    led_single_conf[LED_PATTERN_BT_CONNECT].led_states_count = sizeof(led_single_bt_connect) / sizeof(led_single_bt_connect[0]);
    led_single_conf[LED_PATTERN_BT_CONNECT].led_states = (led_pattern_state_t *)led_single_bt_connect;

    led_single_conf[LED_PATTERN_BT_DISCONNECT].led_states_count = sizeof(led_single_bt_disconnect) / sizeof(led_single_bt_disconnect[0]);
    led_single_conf[LED_PATTERN_BT_DISCONNECT].led_states = (led_pattern_state_t *)led_single_bt_disconnect;

    led_single_conf[LED_PATTERN_NOTIFICATION_ONGOING].led_states_count = sizeof(led_single_notification_ongoing) / sizeof(led_single_notification_ongoing[0]);
    led_single_conf[LED_PATTERN_NOTIFICATION_ONGOING].led_states = (led_pattern_state_t *)led_single_notification_ongoing;

    led_single_conf[LED_PATTERN_NOTIFICATION_NEW].led_states_count = sizeof(led_single_notification_new) / sizeof(led_single_notification_new[0]);
    led_single_conf[LED_PATTERN_NOTIFICATION_NEW].led_states = (led_pattern_state_t *)led_single_notification_new;

    led_single_conf[LED_PATTERN_THINKING].led_states_count = sizeof(led_single_thinking) / sizeof(led_single_thinking[0]);
    led_single_conf[LED_PATTERN_THINKING].led_states = (led_pattern_state_t *)led_single_thinking;

    led_single_conf[LED_PATTERN_ALERT_SHORT].led_states_count = sizeof(led_single_alrt_short) / sizeof(led_single_alrt_short[0]);
    led_single_conf[LED_PATTERN_ALERT_SHORT].led_states = (led_pattern_state_t *)led_single_alrt_short;

    led_single_conf[LED_PATTERN_ALERT].led_states_count = sizeof(led_single_alrt) / sizeof(led_single_alrt[0]);
    led_single_conf[LED_PATTERN_ALERT].led_states = (led_pattern_state_t *)led_single_alrt;

    led_single_conf[LED_PATTERN_SETUP].led_states_count = sizeof(led_single_setup_mode) / sizeof(led_single_setup_mode[0]);
    led_single_conf[LED_PATTERN_SETUP].led_states = (led_pattern_state_t *)led_single_setup_mode;

    led_single_conf[LED_PATTERN_OFF].led_states_count = sizeof(led_single_off) / sizeof(led_single_off[0]);
    led_single_conf[LED_PATTERN_OFF].led_states = (led_pattern_state_t *)led_single_off;

    led_single_conf[LED_PATTERN_DO_NOT_DISTURB].led_states_count = sizeof(led_single_do_not_disturb) / sizeof(led_single_do_not_disturb[0]);
    led_single_conf[LED_PATTERN_DO_NOT_DISTURB].led_states = (led_pattern_state_t *)led_single_do_not_disturb;

    led_single_conf[LED_PATTERN_OTA].led_states_count = sizeof(led_single_ota) / sizeof(led_single_ota[0]);
    led_single_conf[LED_PATTERN_OTA].led_states = (led_pattern_state_t *)led_single_ota;

    is_init_done = true;
}