// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANKC_TABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_KLUDGE_DOUBLETAPBOOT

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAMENUM,"GameNum") \

#define MIRYOKU_LAYERMAPPING_GAMENUM MIRYOKU_MAPPING

#define MIRYOKU_LAYER_TAP \
KC_Q,             KC_W,             KC_F,             KC_P,             KC_B,             KC_J,             KC_L,             KC_U,             KC_Y,             KC_SQT,           \
KC_A,             KC_R,             KC_S,             KC_T,             KC_G,             KC_M,             KC_N,             KC_E,             KC_I,             KC_O,             \
KC_Z,             KC_X,             KC_C,             KC_D,             KC_V,             KC_K,             KC_H,             KC_COMM,         KC_DOT,           KC_SLSH,         \
U_NP,              U_NP,              KC_ESC,           KC_SPC,      U_LT(U_GAMENUM, KC_TAB), KC_RET,       HYPR_T(BSPC),     TD(U_TD_U_BASE),   U_NP,              U_NP

#define MIRYOKU_LAYER_GAMENUM \
KC_F1,            KC_F2,            KC_F3,            KC_F4,            KC_TILD,         KC_LBRC,          KC_F7,            KC_F8,            KC_F9,            KC_RBRC,         \
KC_NUM_6,         KC_NUM_7,         KC_NUM_8,         KC_NUM_9,         KC_NUM_0,         KC_EQL,           KC_F4,            KC_F5,            KC_F6,            KC_SEMI,         \
KC_NUM_1,         KC_NUM_2,         KC_NUM_3,         KC_NUM_4,         KC_NUM_5,         KC_BSLH,          KC_F1,            KC_F2,            KC_F3,            KC_TILD,        \
U_NP,              U_NP,              KC_ESC,           KC_SPC,           U_NP,           KC_MINS,         KC_NUM_0,        KC_DOT,           U_NP,              U_NP
