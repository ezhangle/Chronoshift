/**
* @file
*
* @author CCHyper
* @author OmniBlade
*
* @brief Static instances of infantry type objects.
*
* @copyright Chronoshift is free software: you can redistribute it and/or
*            modify it under the terms of the GNU General Public License
*            as published by the Free Software Foundation, either version
*            2 of the License, or (at your option) any later version.
*            A full copy of the GNU General Public License can be found in
*            LICENSE
*/
#include "infantrydata.h"

// Do controls for Dog.
static const DoInfoStruct DogDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 0, 1, 1 }, // DO_GUARD
    { 0, 1, 1 }, // DO_PRONE
    { 8, 6, 6 }, // DO_WALK
    { 104, 14, 14 }, // DO_FIRE_UP
    { 0, 0, 0 }, // DO_DOWN
    { 56, 6, 6 }, // DO_CRAWL
    { 0, 0, 0 }, // DO_UP
    { 104, 14, 14 }, // DO_FIRE_PRONE
    { 216, 18, 0 }, // DO_IDLE1
    { 216, 18, 0 }, // DO_IDLE2
    { 235, 7, 0 }, // DO_DIE1
    { 242, 9, 0 }, // DO_DIE2
    { 242, 9, 0 }, // DO_DIE3
    { 242, 9, 0 }, // DO_DIE4
    { 251, 14, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 106, 12, 14 }, // DO_20
};

// Do controls for E1.
static const DoInfoStruct E1DoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 8, 1, 1 }, // DO_GUARD
    { 192, 1, 8 }, // DO_PRONE
    { 16, 6, 6 }, // DO_WALK
    { 64, 8, 8 }, // DO_FIRE_UP
    { 128, 2, 2 }, // DO_DOWN
    { 144, 4, 4 }, // DO_CRAWL
    { 176, 2, 2 }, // DO_UP
    { 192, 6, 8 }, // DO_FIRE_PRONE
    { 256, 16, 0 }, // DO_IDLE1
    { 272, 16, 0 }, // DO_IDLE2
    { 288, 8, 0 }, // DO_DIE1
    { 304, 8, 0 }, // DO_DIE2
    { 304, 8, 0 }, // DO_DIE3
    { 312, 12, 0 }, // DO_DIE4
    { 324, 18, 0 }, // DO_DIE5
    { 342, 3, 3 }, // DO_16
    { 366, 3, 3 }, // DO_17
    { 390, 3, 3 }, // DO_18
    { 414, 3, 3 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Grenadier.
static const DoInfoStruct GrenadierDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 8, 1, 1 }, // DO_GUARD
    { 288, 1, 12 }, // DO_PRONE
    { 16, 6, 6 }, // DO_WALK
    { 64, 20, 20 }, // DO_FIRE_UP
    { 224, 2, 2 }, // DO_DOWN
    { 240, 4, 4 }, // DO_CRAWL
    { 272, 2, 2 }, // DO_UP
    { 288, 8, 12 }, // DO_FIRE_PRONE
    { 384, 16, 0 }, // DO_IDLE1
    { 400, 16, 0 }, // DO_IDLE2
    { 416, 8, 0 }, // DO_DIE1
    { 432, 8, 0 }, // DO_DIE2
    { 432, 8, 0 }, // DO_DIE3
    { 440, 12, 0 }, // DO_DIE4
    { 452, 18, 0 }, // DO_DIE5
    { 470, 3, 3 }, // DO_16
    { 494, 3, 3 }, // DO_17
    { 518, 3, 3 }, // DO_18
    { 542, 3, 3 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for E3.
static const DoInfoStruct E3DoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 8, 1, 1 }, // DO_GUARD
    { 192, 1, 10 }, // DO_PRONE
    { 16, 6, 6 }, // DO_WALK
    { 64, 8, 8 }, // DO_FIRE_UP
    { 128, 2, 2 }, // DO_DOWN
    { 144, 4, 4 }, // DO_CRAWL
    { 176, 2, 2 }, // DO_UP
    { 192, 10, 10 }, // DO_FIRE_PRONE
    { 272, 16, 0 }, // DO_IDLE1
    { 288, 16, 0 }, // DO_IDLE2
    { 304, 8, 0 }, // DO_DIE1
    { 320, 8, 0 }, // DO_DIE2
    { 320, 8, 0 }, // DO_DIE3
    { 328, 12, 0 }, // DO_DIE4
    { 340, 18, 0 }, // DO_DIE5
    { 358, 3, 3 }, // DO_16
    { 382, 3, 3 }, // DO_17
    { 406, 3, 3 }, // DO_18
    { 430, 3, 3 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Flame Trooper.
static const DoInfoStruct FlameTrooperDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 8, 1, 1 }, // DO_GUARD
    { 256, 1, 16 }, // DO_PRONE
    { 16, 6, 6 }, // DO_WALK
    { 64, 16, 16 }, // DO_FIRE_UP
    { 192, 2, 2 }, // DO_DOWN
    { 208, 4, 4 }, // DO_CRAWL
    { 240, 2, 2 }, // DO_UP
    { 256, 16, 16 }, // DO_FIRE_PRONE
    { 384, 16, 0 }, // DO_IDLE1
    { 400, 16, 0 }, // DO_IDLE2
    { 416, 8, 0 }, // DO_DIE1
    { 432, 8, 0 }, // DO_DIE2
    { 432, 8, 0 }, // DO_DIE3
    { 440, 12, 0 }, // DO_DIE4
    { 452, 18, 0 }, // DO_DIE5
    { 470, 3, 3 }, // DO_16
    { 494, 3, 3 }, // DO_17
    { 518, 3, 3 }, // DO_18
    { 542, 3, 3 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Engineer.
static const DoInfoStruct EngineerDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 8, 1, 1 }, // DO_GUARD
    { 82, 1, 4 }, // DO_PRONE
    { 16, 6, 6 }, // DO_WALK
    { 0, 0, 0 }, // DO_FIRE_UP
    { 67, 2, 2 }, // DO_DOWN
    { 82, 4, 4 }, // DO_CRAWL
    { 114, 2, 2 }, // DO_UP
    { 0, 0, 0 }, // DO_FIRE_PRONE
    { 130, 16, 0 }, // DO_IDLE1
    { 130, 16, 0 }, // DO_IDLE2
    { 146, 8, 0 }, // DO_DIE1
    { 154, 8, 0 }, // DO_DIE2
    { 162, 8, 0 }, // DO_DIE3
    { 162, 12, 0 }, // DO_DIE4
    { 182, 18, 0 }, // DO_DIE5
    { 200, 3, 3 }, // DO_16
    { 224, 3, 3 }, // DO_17
    { 200, 3, 3 }, // DO_18
    { 224, 3, 3 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for E7.
static const DoInfoStruct E7DoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 0, 1, 1 }, // DO_GUARD
    { 128, 1, 4 }, // DO_PRONE
    { 8, 6, 6 }, // DO_WALK
    { 56, 7, 7 }, // DO_FIRE_UP
    { 113, 2, 2 }, // DO_DOWN
    { 128, 4, 4 }, // DO_CRAWL
    { 161, 2, 2 }, // DO_UP
    { 176, 7, 7 }, // DO_FIRE_PRONE
    { 232, 17, 0 }, // DO_IDLE1
    { 249, 13, 0 }, // DO_IDLE2
    { 262, 8, 0 }, // DO_DIE1
    { 270, 8, 0 }, // DO_DIE2
    { 278, 8, 0 }, // DO_DIE3
    { 286, 12, 0 }, // DO_DIE4
    { 298, 18, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Spy.
static const DoInfoStruct SpyDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 8, 1, 1 }, // DO_GUARD
    { 144, 1, 4 }, // DO_PRONE
    { 16, 6, 6 }, // DO_WALK
    { 64, 8, 8 }, // DO_FIRE_UP
    { 128, 2, 2 }, // DO_DOWN
    { 144, 4, 4 }, // DO_CRAWL
    { 176, 2, 2 }, // DO_UP
    { 192, 8, 8 }, // DO_FIRE_PRONE
    { 256, 14, 0 }, // DO_IDLE1
    { 270, 18, 0 }, // DO_IDLE2
    { 288, 8, 0 }, // DO_DIE1
    { 296, 8, 0 }, // DO_DIE2
    { 304, 8, 0 }, // DO_DIE3
    { 312, 12, 0 }, // DO_DIE4
    { 324, 18, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Thief.
static const DoInfoStruct ThiefDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 8, 1, 1 }, // DO_GUARD
    { 72, 1, 4 }, // DO_PRONE
    { 8, 6, 6 }, // DO_WALK
    { 0, 0, 0 }, // DO_FIRE_UP
    { 56, 2, 2 }, // DO_DOWN
    { 72, 4, 4 }, // DO_CRAWL
    { 108, 2, 2 }, // DO_UP
    { 0, 0, 0 }, // DO_FIRE_PRONE
    { 120, 19, 0 }, // DO_IDLE1
    { 120, 19, 0 }, // DO_IDLE2
    { 139, 8, 0 }, // DO_DIE1
    { 147, 8, 0 }, // DO_DIE2
    { 155, 8, 0 }, // DO_DIE3
    { 163, 12, 0 }, // DO_DIE4
    { 175, 18, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Medic.
static const DoInfoStruct MedicDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 0, 1, 1 }, // DO_GUARD
    { 130, 1, 4 }, // DO_PRONE
    { 8, 6, 6 }, // DO_WALK
    { 56, 28, 0 }, // DO_FIRE_UP
    { 114, 2, 2 }, // DO_DOWN
    { 130, 4, 4 }, // DO_CRAWL
    { 162, 2, 2 }, // DO_UP
    { 56, 28, 0 }, // DO_FIRE_PRONE
    { 178, 15, 0 }, // DO_IDLE1
    { 178, 15, 0 }, // DO_IDLE2
    { 193, 8, 0 }, // DO_DIE1
    { 210, 8, 0 }, // DO_DIE2
    { 202, 8, 0 }, // DO_DIE3
    { 217, 12, 0 }, // DO_DIE4
    { 229, 18, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for General.
static const DoInfoStruct GeneralDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 0, 1, 1 }, // DO_GUARD
    { 104, 1, 4 }, // DO_PRONE
    { 8, 6, 6 }, // DO_WALK
    { 56, 4, 4 }, // DO_FIRE_UP
    { 88, 2, 2 }, // DO_DOWN
    { 104, 4, 4 }, // DO_CRAWL
    { 136, 2, 2 }, // DO_UP
    { 152, 4, 4 }, // DO_FIRE_PRONE
    { 184, 26, 0 }, // DO_IDLE1
    { 184, 26, 0 }, // DO_IDLE2
    { 210, 8, 0 }, // DO_DIE1
    { 226, 8, 0 }, // DO_DIE2
    { 218, 8, 0 }, // DO_DIE3
    { 234, 12, 0 }, // DO_DIE4
    { 246, 18, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Defualt Do controls for Civilian(s).
static const DoInfoStruct CivilianDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 0, 1, 1 }, // DO_GUARD
    { 0, 1, 1 }, // DO_PRONE
    { 56, 6, 6 }, // DO_WALK
    { 120, 4, 4 }, // DO_FIRE_UP
    { 0, 1, 1 }, // DO_DOWN
    { 8, 6, 6 }, // DO_CRAWL
    { 0, 1, 1 }, // DO_UP
    { 120, 4, 4 }, // DO_FIRE_PRONE
    { 104, 10, 0 }, // DO_IDLE1
    { 114, 6, 0 }, // DO_IDLE2
    { 152, 8, 0 }, // DO_DIE1
    { 160, 8, 0 }, // DO_DIE2
    { 160, 8, 0 }, // DO_DIE3
    { 168, 12, 0 }, // DO_DIE4
    { 180, 18, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Einstein.
static const DoInfoStruct EinsteinDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 0, 1, 1 }, // DO_GUARD
    { 0, 1, 1 }, // DO_PRONE
    { 56, 6, 6 }, // DO_WALK
    { 113, 4, 4 }, // DO_FIRE_UP
    { 0, 1, 1 }, // DO_DOWN
    { 8, 6, 6 }, // DO_CRAWL
    { 0, 1, 1 }, // DO_UP
    { 0, 0, 0 }, // DO_FIRE_PRONE
    { 104, 16, 0 }, // DO_IDLE1
    { 104, 16, 0 }, // DO_IDLE2
    { 120, 8, 0 }, // DO_DIE1
    { 128, 8, 0 }, // DO_DIE2
    { 136, 12, 0 }, // DO_DIE3
    { 136, 12, 0 }, // DO_DIE4
    { 148, 17, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Shock Trooper.
static const DoInfoStruct ShockTrooperDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 8, 1, 1 }, // DO_GUARD
    { 256, 1, 16 }, // DO_PRONE
    { 16, 6, 6 }, // DO_WALK
    { 64, 16, 16 }, // DO_FIRE_UP
    { 192, 2, 2 }, // DO_DOWN
    { 208, 4, 4 }, // DO_CRAWL
    { 240, 2, 2 }, // DO_UP
    { 256, 16, 16 }, // DO_FIRE_PRONE
    { 384, 16, 0 }, // DO_IDLE1
    { 400, 16, 0 }, // DO_IDLE2
    { 416, 8, 0 }, // DO_DIE1
    { 432, 8, 0 }, // DO_DIE2
    { 432, 8, 0 }, // DO_DIE3
    { 440, 12, 0 }, // DO_DIE4
    { 452, 18, 0 }, // DO_DIE5
    { 470, 3, 3 }, // DO_16
    { 494, 3, 3 }, // DO_17
    { 518, 3, 3 }, // DO_18
    { 542, 3, 3 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// Do controls for Mechanic.
static const DoInfoStruct MechanicDoControls[DO_COUNT] = {
    { 0, 1, 1 }, // DO_READY
    { 0, 1, 1 }, // DO_GUARD
    { 130, 1, 4 }, // DO_PRONE
    { 8, 6, 6 }, // DO_WALK
    { 56, 28, 0 }, // DO_FIRE_UP
    { 114, 2, 2 }, // DO_DOWN
    { 130, 4, 4 }, // DO_CRAWL
    { 162, 2, 2 }, // DO_UP
    { 56, 28, 0 }, // DO_FIRE_PRONE
    { 178, 15, 0 }, // DO_IDLE1
    { 178, 15, 0 }, // DO_IDLE2
    { 193, 8, 0 }, // DO_DIE1
    { 210, 8, 0 }, // DO_DIE2
    { 202, 8, 0 }, // DO_DIE3
    { 217, 12, 0 }, // DO_DIE4
    { 229, 18, 0 }, // DO_DIE5
    { 0, 1, 0 }, // DO_16
    { 0, 1, 0 }, // DO_17
    { 0, 1, 0 }, // DO_18
    { 0, 1, 0 }, // DO_19
    { 0, 0, 0 }, // DO_20
};

// clang-format off
static const uint8_t RemapCiv2[256] = {
    0, 1, 2, 3, 4, 5, 6, 209, 8, 9, 10, 11, 12, 13, 12, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 187, 188, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 209,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 167, 13, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

static const uint8_t RemapCiv4[256] = {
    0, 1, 2, 3, 4, 5, 6, 187, 8, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 118, 110, 119,
    112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 188, 207,
    208, 209, 182, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

static const uint8_t RemapCiv5[256] = {
    0, 1, 2, 3, 4, 5, 6, 109, 8, 9, 10, 11, 131, 13, 14, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 177, 110, 178,
    112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 111, 201, 202, 203, 204, 205, 111, 207,
    208, 209, 182, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

static const uint8_t RemapCiv6[256] = {
    0, 1, 2, 3, 4, 5, 6, 120, 8, 9, 10, 11, 12, 13, 238, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 236, 206, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 111,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

static const uint8_t RemapCiv7[256] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 131, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 157, 212, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 7,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 118, 119, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

static const uint8_t RemapCiv8[256] = {
    0, 1, 2, 3, 4, 5, 6, 182, 8, 9, 10, 11, 12, 13, 131, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 215, 7, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 182,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 198, 199, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 111, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

static const uint8_t RemapCiv9[256] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 7, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 163, 165, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 200,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 111, 13, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

static const uint8_t RemapCiv10[256] = {
    0, 1, 2, 3, 4, 5, 6, 137, 8, 9, 10, 11, 12, 13, 15, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 129, 131, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 137,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 163, 165, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

// I think this is a fire death remap, though never used.
static const uint8_t RemapEmber[256] = {
    0, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 12, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103
};

/**
 * For reference, the constructor argument order is;
 *
 * Type (InfantryType)
 * UI Name
 * Name
 * A4
 * ROT Count
 * Female
 * Crawls
 * Civilian
 * Alt Remap
 * Nominal
 * Theater
 * Pip
 * Sequence (Do Info)
 * Fire Up
 * Fire Prone
 * Alt Remap (Array)
 *
 */


// Attack Dog
const InfantryTypeClass InfantryDog(
    INFANTRY_DOG, TXT_DOG, "DOG", 21, 16, false, false, false, false, false, false, PIP_GREEN, DogDoControls, 1, 1, nullptr);

// Rifle Infantry
const InfantryTypeClass InfantryE1(
    INFANTRY_E1, TXT_E1, "E1", 53, 16, false, true, false, false, false, false, PIP_GREEN, E1DoControls, 2, 2, nullptr);

// Grenadier
const InfantryTypeClass InfantryGrenadier(INFANTRY_E2, TXT_E2, "E2", 53, 16, false, true, false, false, false, false,
    PIP_GREEN, GrenadierDoControls, 14, 6, nullptr);

// Rocket Soldier
const InfantryTypeClass InfantryE3(
    INFANTRY_E3, TXT_E3, "E3", 53, 16, false, true, false, false, false, false, PIP_GREEN, E3DoControls, 3, 3, nullptr);

// Flame Trooper
const InfantryTypeClass InfantryFlameTrooper(INFANTRY_FLAME_TROOPER, TXT_E4, "E4", 53, 16, false, true, false, false, false,
    false, PIP_GREEN, FlameTrooperDoControls, 2, 0, nullptr);

// Engineer
const InfantryTypeClass InfantryEngineer(INFANTRY_ENGINEER, TXT_E6, "E6", 53, 16, false, false, false, false, false, false,
    PIP_YELLOW, EngineerDoControls, 3, 3, nullptr);

// Spy
const InfantryTypeClass InfantrySpy(INFANTRY_SPY, TXT_SPY, "SPY", 53, 16, false, false, false, false, false, false,
    PIP_YELLOW, SpyDoControls, 3, 3, nullptr);

// Thief
const InfantryTypeClass InfantryThief(INFANTRY_THIEF, TXT_THIEF, "THF", 53, 16, false, false, false, false, false, false,
    PIP_YELLOW, ThiefDoControls, 3, 3, nullptr);

// Tanya
const InfantryTypeClass InfantryE7(
    INFANTRY_TANYA, TXT_E7, "E7", 53, 16, false, true, false, false, false, false, PIP_RED, E7DoControls, 2, 2, nullptr);

// Medic
const InfantryTypeClass InfantryMedic(INFANTRY_MEDIC, TXT_MEDIC, "MEDI", 53, 16, false, true, false, false, false, false,
    PIP_YELLOW, MedicDoControls, 25, 25, nullptr);

// General
const InfantryTypeClass InfantryGeneral(INFANTRY_GENERAL, TXT_GENERAL, "GNRL", 53, 16, false, true, false, false, false,
    false, PIP_YELLOW, GeneralDoControls, 2, 2, nullptr);

// Civilian 1
const InfantryTypeClass InfantryC1(
    INFANTRY_C1, TXT_C1, "C1", 53, 16, false, false, true, false, true, false, PIP_WHITE, CivilianDoControls, 2, 0, nullptr);

// Civilian 2
const InfantryTypeClass InfantryC2(INFANTRY_C2, TXT_C2, "C2", 53, 16, false, false, true, true, true, false, PIP_WHITE,
    CivilianDoControls, 2, 0, RemapCiv2);

// Civilian 3
const InfantryTypeClass InfantryC3(
    INFANTRY_C3, TXT_C3, "C3", 53, 16, true, false, true, false, true, false, PIP_WHITE, CivilianDoControls, 2, 0, nullptr);

// Civilian 4
const InfantryTypeClass InfantryC4(
    INFANTRY_C4, TXT_C4, "C4", 53, 16, true, false, true, true, true, false, PIP_WHITE, CivilianDoControls, 2, 0, RemapCiv4);

// Civilian 5
const InfantryTypeClass InfantryC5(INFANTRY_C5, TXT_C5, "C5", 53, 16, false, false, true, true, true, false, PIP_WHITE,
    CivilianDoControls, 2, 0, RemapCiv5);

// Civilian 6
const InfantryTypeClass InfantryC6(INFANTRY_C6, TXT_C6, "C6", 53, 16, false, false, true, true, true, false, PIP_WHITE,
    CivilianDoControls, 2, 0, RemapCiv6);

// Civilian 7
const InfantryTypeClass InfantryC7(INFANTRY_C7, TXT_C7, "C7", 53, 16, false, false, true, true, true, false, PIP_WHITE,
    CivilianDoControls, 2, 0, RemapCiv7);

// Civilian 8
const InfantryTypeClass InfantryC8(INFANTRY_C8, TXT_C8, "C8", 53, 16, false, false, true, true, true, false, PIP_WHITE,
    CivilianDoControls, 2, 0, RemapCiv8);

// Civilian 9
const InfantryTypeClass InfantryC9(INFANTRY_C9, TXT_C9, "C9", 53, 16, false, false, true, true, true, false, PIP_WHITE,
    CivilianDoControls, 2, 0, RemapCiv9);

// Civilian 10
const InfantryTypeClass InfantryC10(INFANTRY_C10, TXT_SCIENTIST, "C10", 53, 16, false, false, true, true, true, false,
    PIP_YELLOW, CivilianDoControls, 2, 0, RemapCiv10);

// Einstein
const InfantryTypeClass InfantryEinstein(INFANTRY_EINSTEIN, TXT_EINSTEIN, "EINSTEIN", 53, 16, false, false, true, false,
    true, false, PIP_YELLOW, EinsteinDoControls, 0, 0, nullptr);

// Delphi
const InfantryTypeClass InfantryDelphi(INFANTRY_DELPHI, TXT_DELPHI, "DELPHI", 53, 16, false, false, true, false, true, false,
    PIP_YELLOW, CivilianDoControls, 2, 0, nullptr);

// Dr Chan
const InfantryTypeClass InfantryDrChan(INFANTRY_CHAN, TXT_CHAN, "CHAN", 53, 16, false, false, true, false, true, false,
    PIP_YELLOW, EinsteinDoControls, 2, 0, nullptr);

// Shock Trooper
const InfantryTypeClass InfantryShockTrooper(INFANTRY_SHOCK_TROOPER, TXT_SHOK, "SHOK", 53, 16, false, true, false, false,
    false, false, PIP_GREEN, ShockTrooperDoControls, 2, 0, nullptr);

// Mechanic
const InfantryTypeClass InfantryMechanic(INFANTRY_MECHANIC, TXT_MECH, "MECH", 53, 16, false, true, false, false, false,
    false, PIP_YELLOW, MechanicDoControls, 25, 25, nullptr);
