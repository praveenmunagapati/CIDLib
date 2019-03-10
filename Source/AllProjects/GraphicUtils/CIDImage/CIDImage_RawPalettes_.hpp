//
// FILE NAME: CIDLib_RawPalettes_.hpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 12/05/1995
//
// COPYRIGHT: $_CIDLib_CopyRight_$
//
//  $_CIDLib_CopyRight2_$
//
// DESCRIPTION:
//
//  This is a private header for the CIDLib_ClrPalette.cpp file. This
//  guy contains the raw color arrays for some of the predefined palettes
//  that TClrPalette can construct to. An enum, EDefPalettes, allows the
//  user to select from them. Some can be built on the fly but these are
//  best done like this.
//
// CAVEATS/GOTCHAS:
//
//  1)  Note that they are in the order: Blue, Green, Red which is the
//      order defined by TRawRGB!
//
// LOG:
//
//  $_CIDLib_Log_$
//
#pragma once


#pragma CIDLIB_PACK(CIDLIBPACK)

namespace CIDImage_RawPalettes
{
    tCIDLib::TRawRGB argbDefault16[16] =
    {
          {   0,   0,   0 }     // Black
        , { 255,   0,   0 }     // Blue
        , {   0,   0, 255 }     // Red
        , { 255,   0, 255 }     // Pink
        , {   0, 255,   0 }     // Green
        , { 255, 255,   0 }     // Cyan
        , {   0, 255, 255 }     // Yellow
        , { 255, 255, 255 }     // White
        , { 128, 128, 128 }     // Dark Gray
        , { 128,   0,   0 }     // Dark Blue
        , {   0,   0, 128 }     // Dark Red
        , {   0, 128,   0 }     // Dark Green
        , { 128, 128,   0 }     // Dark Cyan
        , {   0, 128, 128 }     // Brown
        , { 204, 204, 204 }     // Pale Gray
    };

    tCIDLib::TRawRGB argbDefault256[256] =
    {
          {   0,   0,   0 }, { 168,   0,   0 }, {   0, 168,   0 }
        , { 168, 168,   0 }, {   0,   0, 168 }, { 168,   0, 168 }
        , {   0,  84, 168 }, { 168, 168, 168 }, {  84,  84,  84 }
        , { 252,  84,  84 }, {  84, 252,  84 }, { 252, 252,  84 }
        , {  84,  84, 252 }, { 252,  84, 252 }, {  84, 252, 252 }
        , { 252, 252, 252 }, {   0,   0,   0 }, {  20,  20,  20 }
        , {  32,  32,  32 }, {  44,  44,  44 }, {  56,  56,  56 }
        , {  68,  68,  68 }, {  80,  80,  80 }, {  96,  96,  96 }
        , { 112, 112, 112 }, { 128, 128, 128 }, { 144, 144, 144 }
        , { 160, 160, 160 }, { 180, 180, 180 }, { 200, 200, 200 }
        , { 224, 224, 224 }, { 252, 252, 252 }, { 252,   0,   0 }
        , { 252,   0,  64 }, { 252,   0, 124 }, { 252,   0, 188 }
        , { 252,   0, 252 }, { 188,   0, 252 }, { 124,   0, 252 }
        , {  64,   0, 252 }, {   0,   0, 252 }, {   0,  64, 252 }
        , {   0, 124, 252 }, {   0, 188, 252 }, {   0, 252, 252 }
        , {   0, 252, 188 }, {   0, 252, 124 }, {   0, 252,  64 }
        , {   0, 252,   0 }, {  64, 252,   0 }, { 124, 252,   0 }
        , { 188, 252,   0 }, { 252, 252,   0 }, { 252, 188,   0 }
        , { 252, 124,   0 }, { 252,  64,   0 }, { 252, 124, 124 }
        , { 252, 124, 156 }, { 252, 124, 188 }, { 252, 124, 220 }
        , { 252, 124, 252 }, { 220, 124, 252 }, { 188, 124, 252 }
        , { 156, 124, 252 }, { 124, 124, 252 }, { 124, 156, 252 }
        , { 124, 188, 252 }, { 124, 220, 252 }, { 124, 252, 252 }
        , { 124, 252, 220 }, { 124, 252, 188 }, { 124, 252, 156 }
        , { 124, 252, 124 }, { 156, 252, 124 }, { 188, 252, 124 }
        , { 220, 252, 124 }, { 252, 252, 124 }, { 252, 220, 124 }
        , { 252, 188, 124 }, { 252, 156, 124 }, { 252, 180, 180 }
        , { 252, 180, 196 }, { 252, 180, 216 }, { 252, 180, 232 }
        , { 252, 180, 252 }, { 232, 180, 252 }, { 216, 180, 252 }
        , { 196, 180, 252 }, { 180, 180, 252 }, { 180, 196, 252 }
        , { 180, 216, 252 }, { 180, 232, 252 }, { 180, 252, 252 }
        , { 180, 252, 232 }, { 180, 252, 216 }, { 180, 252, 196 }
        , { 180, 252, 180 }, { 196, 252, 180 }, { 216, 252, 180 }
        , { 232, 252, 180 }, { 252, 252, 180 }, { 252, 232, 180 }
        , { 252, 216, 180 }, { 252, 196, 180 }, { 112,   0,   0 }
        , { 112,   0,  28 }, { 112,   0,  56 }, { 112,   0,  84 }
        , { 112,   0, 112 }, {  84,   0, 112 }, {  56,   0, 112 }
        , {  28,   0, 112 }, {   0,   0, 112 }, {   0,  28, 112 }
        , {   0,  56, 112 }, {   0,  84, 112 }, {   0, 112, 112 }
        , {   0, 112,  84 }, {   0, 112,  56 }, {   0, 112,  28 }
        , {   0, 112,   0 }, {  28, 112,   0 }, {  56, 112,   0 }
        , {  84, 112,   0 }, { 112, 112,   0 }, { 112,  84,   0 }
        , { 112,  56,   0 }, { 112,  28,   0 }, { 112,  56,  56 }
        , { 112,  56,  68 }, { 112,  56,  84 }, { 112,  56,  96 }
        , { 112,  56, 112 }, {  96,  56, 112 }, {  84,  56, 112 }
        , {  68,  56, 112 }, {  56,  56, 112 }, {  56,  68, 112 }
        , {  56,  84, 112 }, {  56,  96, 112 }, {  56, 112, 112 }
        , {  56, 112,  96 }, {  56, 112,  84 }, {  56, 112,  68 }
        , {  56, 112,  56 }, {  68, 112,  56 }, {  84, 112,  56 }
        , {  96, 112,  56 }, { 112, 112,  56 }, { 112,  96,  56 }
        , { 112,  84,  56 }, { 112,  68,  56 }, { 112,  80,  80 }
        , { 112,  80,  88 }, { 112,  80,  96 }, { 112,  80, 104 }
        , { 112,  80, 112 }, { 104,  80, 112 }, {  96,  80, 112 }
        , {  88,  80, 112 }, {  80,  80, 112 }, {  80,  88, 112 }
        , {  80,  96, 112 }, {  80, 104, 112 }, {  80, 112, 112 }
        , {  80, 112, 104 }, {  80, 112,  96 }, {  80, 112,  88 }
        , {  80, 112,  80 }, {  88, 112,  80 }, {  96, 112,  80 }
        , { 104, 112,  80 }, { 112, 112,  80 }, { 112, 104,  80 }
        , { 112,  96,  80 }, { 112,  88,  80 }, {  64,   0,   0 }
        , {  64,   0,  16 }, {  64,   0,  32 }, {  64,   0,  48 }
        , {  64,   0,  64 }, {  48,   0,  64 }, {  32,   0,  64 }
        , {  16,   0,  64 }, {   0,   0,  64 }, {   0,  16,  64 }
        , {   0,  32,  64 }, {   0,  48,  64 }, {   0,  64,  64 }
        , {   0,  64,  48 }, {   0,  64,  32 }, {   0,  64,  16 }
        , {   0,  64,   0 }, {  16,  64,   0 }, {  32,  64,   0 }
        , {  48,  64,   0 }, {  64,  64,   0 }, {  64,  48,   0 }
        , {  64,  32,   0 }, {  64,  16,   0 }, {  64,  32,  32 }
        , {  64,  32,  40 }, {  64,  32,  48 }, {  64,  32,  56 }
        , {  64,  32,  64 }, {  56,  32,  64 }, {  48,  32,  64 }
        , {  40,  32,  64 }, {  32,  32,  64 }, {  32,  40,  64 }
        , {  32,  48,  64 }, {  32,  56,  64 }, {  32,  64,  64 }
        , {  32,  64,  56 }, {  32,  64,  48 }, {  32,  64,  40 }
        , {  32,  64,  32 }, {  40,  64,  32 }, {  48,  64,  32 }
        , {  56,  64,  32 }, {  64,  64,  32 }, {  64,  56,  32 }
        , {  64,  48,  32 }, {  64,  40,  32 }, {  64,  44,  44 }
        , {  64,  44,  48 }, {  64,  44,  52 }, {  64,  44,  60 }
        , {  64,  44,  64 }, {  60,  44,  64 }, {  52,  44,  64 }
        , {  48,  44,  64 }, {  44,  44,  64 }, {  44,  48,  64 }
        , {  44,  52,  64 }, {  44,  60,  64 }, {  44,  64,  64 }
        , {  44,  64,  60 }, {  44,  64,  52 }, {  44,  64,  48 }
        , {  44,  64,  44 }, {  48,  64,  44 }, {  52,  64,  44 }
        , {  60,  64,  44 }, {  64,  64,  44 }, {  64,  60,  44 }
        , {  64,  52,  44 }, {  64,  48,  44 }, {   0,   0,   0 }
        , {   0,   0,   0 }, {   0,   0,   0 }, {   0,   0,   0 }
        , {   0,   0,   0 }, {   0,   0,   0 }, {   0,   0,   0 }
        , {   0,   0,   0 }
    };

    tCIDLib::TRawRGB argbGrayScale[256] =
    {
          {   0,   0,   0 }, { 252, 252, 252 }, { 252, 252, 248 }
        , { 252, 248, 252 }, { 248, 248, 252 }, { 248, 248, 248 }
        , { 248, 248, 244 }, { 252, 244, 248 }, { 244, 244, 248 }
        , { 244, 244, 244 }, { 244, 244, 240 }, { 248, 240, 244 }
        , { 240, 240, 244 }, { 240, 240, 240 }, { 240, 240, 236 }
        , { 244, 236, 240 }, { 236, 236, 240 }, { 236, 236, 236 }
        , { 236, 236, 232 }, { 240, 232, 236 }, { 232, 232, 236 }
        , { 232, 232, 232 }, { 232, 232, 228 }, { 236, 228, 232 }
        , { 228, 228, 232 }, { 228, 228, 228 }, { 228, 228, 224 }
        , { 232, 224, 228 }, { 224, 224, 228 }, { 224, 224, 224 }
        , { 224, 224, 220 }, { 228, 220, 224 }, { 220, 220, 224 }
        , { 220, 220, 220 }, { 220, 220, 216 }, { 224, 216, 220 }
        , { 216, 216, 220 }, { 216, 216, 216 }, { 216, 216, 212 }
        , { 220, 212, 216 }, { 212, 212, 216 }, { 212, 212, 212 }
        , { 212, 212, 208 }, { 216, 208, 212 }, { 208, 208, 212 }
        , { 208, 208, 208 }, { 208, 208, 204 }, { 212, 204, 208 }
        , { 204, 204, 208 }, { 204, 204, 204 }, { 204, 204, 200 }
        , { 208, 200, 204 }, { 200, 200, 204 }, { 200, 200, 200 }
        , { 200, 200, 196 }, { 204, 196, 200 }, { 196, 196, 200 }
        , { 196, 196, 196 }, { 196, 196, 192 }, { 200, 192, 196 }
        , { 192, 192, 196 }, { 192, 192, 192 }, { 192, 192, 188 }
        , { 196, 188, 192 }, { 188, 188, 192 }, { 188, 188, 188 }
        , { 188, 188, 184 }, { 192, 184, 188 }, { 184, 184, 188 }
        , { 184, 184, 184 }, { 184, 184, 180 }, { 188, 180, 184 }
        , { 180, 180, 184 }, { 180, 180, 180 }, { 180, 180, 176 }
        , { 184, 176, 180 }, { 176, 176, 180 }, { 176, 176, 176 }
        , { 176, 176, 172 }, { 180, 172, 176 }, { 172, 172, 176 }
        , { 172, 172, 172 }, { 172, 172, 168 }, { 176, 168, 172 }
        , { 168, 168, 172 }, { 168, 168, 168 }, { 168, 168, 164 }
        , { 172, 164, 168 }, { 164, 164, 168 }, { 164, 164, 164 }
        , { 164, 164, 160 }, { 168, 160, 164 }, { 160, 160, 164 }
        , { 160, 160, 160 }, { 160, 160, 156 }, { 164, 156, 160 }
        , { 156, 156, 160 }, { 156, 156, 156 }, { 156, 156, 152 }
        , { 160, 152, 156 }, { 152, 152, 156 }, { 152, 152, 152 }
        , { 152, 152, 148 }, { 156, 148, 152 }, { 148, 148, 152 }
        , { 148, 148, 148 }, { 148, 148, 144 }, { 152, 144, 148 }
        , { 144, 144, 148 }, { 144, 144, 144 }, { 144, 144, 140 }
        , { 148, 140, 144 }, { 140, 140, 144 }, { 140, 140, 140 }
        , { 140, 140, 136 }, { 144, 136, 140 }, { 136, 136, 140 }
        , { 136, 136, 136 }, { 136, 136, 132 }, { 140, 132, 136 }
        , { 132, 132, 136 }, { 132, 132, 132 }, { 132, 132, 128 }
        , { 136, 128, 132 }, { 128, 128, 132 }, { 128, 128, 128 }
        , { 128, 128, 124 }, { 132, 124, 128 }, { 124, 124, 128 }
        , { 124, 124, 124 }, { 124, 124, 120 }, { 128, 120, 124 }
        , { 120, 120, 124 }, { 120, 120, 120 }, { 120, 120, 116 }
        , { 124, 116, 120 }, { 116, 116, 120 }, { 116, 116, 116 }
        , { 116, 116, 112 }, { 120, 112, 116 }, { 112, 112, 116 }
        , { 112, 112, 112 }, { 112, 112, 108 }, { 116, 108, 112 }
        , { 108, 108, 112 }, { 108, 108, 108 }, { 108, 108, 104 }
        , { 112, 104, 108 }, { 104, 104, 108 }, { 104, 104, 104 }
        , { 104, 104, 100 }, { 108, 100, 104 }, { 100, 100, 104 }
        , { 100, 100, 100 }, { 100, 100,  96 }, { 104,  96, 100 }
        , {  96,  96, 100 }, {  96,  96,  96 }, {  96,  96,  92 }
        , { 100,  92,  96 }, {  92,  92,  96 }, {  92,  92,  92 }
        , {  92,  92,  88 }, {  96,  88,  92 }, {  88,  88,  92 }
        , {  88,  88,  88 }, {  88,  88,  84 }, {  92,  84,  88 }
        , {  84,  84,  88 }, {  84,  84,  84 }, {  84,  84,  80 }
        , {  88,  80,  84 }, {  80,  80,  84 }, {  80,  80,  80 }
        , {  80,  80,  76 }, {  84,  76,  80 }, {  76,  76,  80 }
        , {  76,  76,  76 }, {  76,  76,  72 }, {  80,  72,  76 }
        , {  72,  72,  76 }, {  72,  72,  72 }, {  72,  72,  68 }
        , {  76,  68,  72 }, {  68,  68,  72 }, {  68,  68,  68 }
        , {  68,  68,  64 }, {  72,  64,  68 }, {  64,  64,  68 }
        , {  64,  64,  64 }, {  64,  64,  60 }, {  68,  60,  64 }
        , {  60,  60,  64 }, {  60,  60,  60 }, {  60,  60,  56 }
        , {  64,  56,  60 }, {  56,  56,  60 }, {  56,  56,  56 }
        , {  56,  56,  52 }, {  60,  52,  56 }, {  52,  52,  56 }
        , {  52,  52,  52 }, {  52,  52,  48 }, {  56,  48,  52 }
        , {  48,  48,  52 }, {  48,  48,  48 }, {  48,  48,  44 }
        , {  52,  44,  48 }, {  44,  44,  48 }, {  44,  44,  44 }
        , {  44,  44,  40 }, {  48,  40,  44 }, {  40,  40,  44 }
        , {  40,  40,  40 }, {  40,  40,  36 }, {  44,  36,  40 }
        , {  36,  36,  40 }, {  36,  36,  36 }, {  36,  36,  32 }
        , {  40,  32,  36 }, {  32,  32,  36 }, {  32,  32,  32 }
        , {  32,  32,  28 }, {  36,  28,  32 }, {  28,  28,  32 }
        , {  28,  28,  28 }, {  28,  28,  24 }, {  32,  24,  28 }
        , {  24,  24,  28 }, {  24,  24,  24 }, {  24,  24,  20 }
        , {  28,  20,  24 }, {  20,  20,  24 }, {  20,  20,  20 }
        , {  20,  20,  16 }, {  24,  16,  20 }, {  16,  16,  20 }
        , {  16,  16,  16 }, {  16,  16,  12 }, {  20,  12,  16 }
        , {  12,  12,  16 }, {  12,  12,  12 }, {  12,  12,   8 }
        , {  16,   8,  12 }, {   8,   8,  12 }, {   8,   8,   8 }
        , {   8,   8,   4 }, {  12,   4,   8 }, {   4,   4,   8 }
        , {   4,   4,   4 }, {   4,   4,   0 }, {   8,   0,   4 }
        , {   0,   0,   4 }, {   0,   0,   0 }, {   0,   0,   0 }
        , {   0,   0,   0 }
    };
}

#pragma CIDLIB_POPPACK
