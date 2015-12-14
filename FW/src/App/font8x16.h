#ifndef __FONT8X16_H__
#define __FONT8X16_H__
//======================================================================================================
#if !defined(CODEPAGE)
//uint8_t const fonta_en[][FONT_A_WIDTH*FONT_A_HEIGHT/8] =
uint8_t const fonta_en[] =
    {

        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //00
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,
        0x7F,0xFC,0x38,0x7F,0xFC,0x38,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //01
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,
        0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,
        0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC1,0x80,0x00,    //02
        0xC1,0x80,0x1F,0xFF,0xF8,0x1F,0xFF,0xF8,0x01,0x83,0x00,0x01,0x83,0x00,0x3F,0xFF,
        0xF0,0x3F,0xFF,0xF0,0x03,0x06,0x00,0x03,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x07,0x83,0xC0,0x0F,0xE3,0xE0,0x1C,0x60,0x70,0x18,0x30,0x30,0x7F,0xFF,0xFE,0x7F,    //03
        0xFF,0xFE,0x18,0x30,0x30,0x1C,0x18,0x70,0x0F,0x1F,0xE0,0x07,0x07,0xC0,0x00,0x00,
        0x00,0x00,0x00,0x00,0x1F,0x00,0x18,0x7F,0xC0,0x78,0x60,0xC1,0xE0,0x7F,0xCF,0x80,
        0x1F,0x3C,0x00,0x00,0xF3,0xE0,0x07,0xCF,0xF8,0x1E,0x0C,0x18,0x78,0x0F,0xF8,0x60,    //04
        0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x0E,0x1F,0xF0,0x1F,0xB8,
        0x38,0x30,0xE0,0x18,0x30,0xF8,0x18,0x31,0x9E,0x30,0x1F,0x07,0xE0,0x0E,0x03,0xE0,
        0x00,0x1F,0x78,0x00,0x1C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //05
        0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0xE6,0x00,0x00,0xFC,0x00,0x00,0xF8,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0x80,0x0F,0xFF,0xF0,0x3E,0x00,0x7C,0x70,    //06
        0x00,0x0E,0xC0,0x00,0x03,0x80,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x01,0xC0,0x00,0x03,
        0x70,0x00,0x0E,0x3E,0x00,0x7C,0x0F,0xFF,0xF0,0x01,0xFF,0x80,0x00,0x00,0x00,0x00,    //07
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x06,0x00,0x03,0x8E,0x00,0x01,0x8C,
        0x00,0x00,0xD8,0x00,0x1F,0xFF,0xC0,0x1F,0xFF,0xC0,0x00,0xD8,0x00,0x01,0x8C,0x00,
        0x03,0x8E,0x00,0x03,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,    //08
        0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x07,0xFF,0xE0,0x07,0xFF,0xE0,0x00,0x18,
        0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x73,0x00,    //09
        0x00,0x7E,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,
        0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,    //0A
        0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x78,0x00,0x00,0x78,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,    //0B
        0x00,0x1F,0x00,0x00,0xFC,0x00,0x07,0xE0,0x00,0x1F,0x00,0x00,0xF8,0x00,0x07,0xE0,
        0x00,0x3F,0x00,0x00,0xF8,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x07,0xFF,0x80,0x1F,0xFF,0xE0,0x38,0x00,0x70,0x60,0x00,0x18,0x60,0x00,0x18,0x60,    //0C
        0x00,0x18,0x60,0x00,0x18,0x38,0x00,0x70,0x1F,0xFF,0xE0,0x07,0xFF,0x80,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,
        0x38,0x00,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //0D
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x38,0x3E,0x00,0x78,0x70,0x01,
        0xF8,0x60,0x03,0x98,0x60,0x07,0x18,0x60,0x1E,0x18,0x60,0x38,0x18,0x70,0xF0,0x18,
        0x3F,0xC0,0x18,0x0F,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x01,0xC0,0x3E,    //0E
        0x01,0xF0,0x70,0x00,0x38,0x60,0x00,0x18,0x60,0x60,0x18,0x60,0x60,0x18,0x60,0x60,
        0x18,0x70,0xF0,0x38,0x3F,0xDF,0xF0,0x0F,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x07,0x00,0x00,0x1F,0x00,0x00,0x7B,0x00,0x01,0xE3,0x00,0x07,0x83,0x00,0x1E,    //0F
        0x03,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x7F,0xF0,0xF0,0x7F,0xF0,0x38,0x60,0x60,0x18,
        0x60,0xC0,0x18,0x60,0xC0,0x18,0x60,0xC0,0x18,0x60,0xE0,0x38,0x60,0x7F,0xF0,0x00,    //10
        0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xC0,0x3F,0xFF,0xF0,0x70,0x60,
        0x38,0x60,0xC0,0x18,0x60,0xC0,0x18,0x60,0xC0,0x18,0x60,0xC0,0x18,0x70,0xE0,0x38,
        0x3C,0x7F,0xF0,0x0C,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x60,    //11
        0x00,0x00,0x60,0x00,0x00,0x60,0x03,0xF8,0x60,0x3F,0xF8,0x61,0xFC,0x00,0x67,0xC0,
        0x00,0x7E,0x00,0x00,0x78,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x0F,0x0F,0xC0,0x3F,0xBF,0xF0,0x70,0xF0,0x38,0x60,0x60,0x18,0x60,0x60,0x18,0x60,    //12
        0x60,0x18,0x60,0x60,0x18,0x70,0xF0,0x38,0x3F,0xBF,0xF0,0x0F,0x0F,0xC0,0x00,0x00,
        0x00,0x00,0x00,0x00,0x0F,0xC0,0xC0,0x3F,0xF0,0xF0,0x70,0x38,0x38,0x60,0x18,0x18,
        0x60,0x18,0x18,0x60,0x18,0x18,0x60,0x18,0x18,0x70,0x30,0x38,0x3F,0xFF,0xF0,0x0F,    //13
        0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x01,0xE0,0x78,0x01,0xE0,0x78,0x01,0xE0,0x78,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //14
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xE0,0x73,0x01,0xE0,0x7E,0x01,0xE0,
        0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x10,0x00,0x00,0x38,0x00,0x00,0x6C,0x00,0x00,0xC6,0x00,0x01,0x83,0x00,0x03,    //15
        0x01,0x80,0x06,0x00,0xC0,0x0C,0x00,0x60,0x08,0x00,0x20,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,
        0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,    //16
        0xC3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x20,0x0C,0x00,
        0x60,0x06,0x00,0xC0,0x03,0x01,0x80,0x01,0x83,0x00,0x00,0xC6,0x00,0x00,0x6C,0x00,
        0x00,0x38,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x3F,    //17
        0x00,0x00,0x70,0x00,0x00,0x60,0x00,0x38,0x60,0x0E,0x38,0x60,0x3E,0x38,0x60,0x70,
        0x38,0x70,0xE0,0x00,0x3F,0xC0,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x07,0xFF,0x80,0x1C,0x00,0xE0,0x30,0xFE,0x30,0x63,0xFF,0x18,0x46,0x01,0x88,0x46,    //18
        0x01,0x88,0x43,0xFF,0x08,0x67,0xFF,0x98,0x38,0x01,0x90,0x0F,0xFF,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x1F,0xF8,0x01,0xFF,0x00,0x0F,0xE3,0x00,
        0x7C,0x03,0x00,0x7C,0x03,0x00,0x0F,0xE3,0x00,0x01,0xFF,0x00,0x00,0x1F,0xF8,0x00,    //19
        0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x60,0x60,
        0x18,0x60,0x60,0x18,0x60,0x60,0x18,0x60,0x60,0x18,0x70,0xE0,0x18,0x3F,0xF0,0x30,
        0x1F,0x3F,0xF0,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xC0,0x3F,    //1A
        0xFF,0xF0,0x70,0x00,0x38,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x00,
        0x18,0x70,0x00,0x38,0x3E,0x01,0xF0,0x0E,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
        0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x00,0x18,0x60,    //1B
        0x00,0x18,0x30,0x00,0x30,0x38,0x00,0x70,0x1F,0xFF,0xE0,0x07,0xFF,0x80,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x60,0x30,0x18,
        0x60,0x30,0x18,0x60,0x30,0x18,0x60,0x30,0x18,0x60,0x30,0x18,0x60,0x30,0x18,0x60,    //1C
        0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,
        0xF8,0x60,0x30,0x00,0x60,0x30,0x00,0x60,0x30,0x00,0x60,0x30,0x00,0x60,0x30,0x00,
        0x60,0x30,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xC0,0x3F,    //1D
        0xFF,0xF0,0x70,0x00,0x38,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x18,0x18,0x60,0x18,
        0x30,0x70,0x18,0xE0,0x3E,0x1F,0xF8,0x0E,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
        0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,    //1E
        0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x00,0x18,
        0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x00,0x18,0x00,    //1F
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x03,0xF0,0x00,0x00,
        0x38,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x38,0x7F,0xFF,0xF0,
        0x7F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xF8,0x7F,    //20
        0xFF,0xF8,0x00,0x18,0x00,0x00,0x70,0x00,0x01,0xF8,0x00,0x07,0x9E,0x00,0x1E,0x07,
        0x80,0x78,0x01,0xE0,0x60,0x00,0x78,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x00,0x00,0x18,0x00,0x00,0x18,0x00,    //21
        0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,
        0x00,0x00,0x00,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x0F,0x80,0x00,0x01,0xF0,0x00,
        0x00,0x3E,0x00,0x00,0x3E,0x00,0x01,0xF0,0x00,0x0F,0x80,0x00,0x7F,0xFF,0xF8,0x7F,    //22
        0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,
        0xF8,0x1F,0x00,0x00,0x03,0xE0,0x00,0x00,0xFC,0x00,0x00,0x1F,0x00,0x00,0x03,0xE0,
        0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xC0,0x3F,    //23
        0xFF,0xF0,0x70,0x00,0x38,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x00,
        0x18,0x70,0x00,0x38,0x3F,0xFF,0xF0,0x0F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
        0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x60,0x18,0x00,0x60,0x18,0x00,0x60,0x18,0x00,0x60,    //24
        0x18,0x00,0x60,0x18,0x00,0x70,0x38,0x00,0x3F,0xF0,0x00,0x0F,0xC0,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x0F,0xFF,0xC0,0x3F,0xFF,0xF0,0x70,0x00,0x38,0x60,0x00,0x18,
        0x60,0x01,0x98,0x60,0x01,0xD8,0x60,0x00,0x70,0x70,0x00,0x38,0x3F,0xFF,0xFC,0x0F,    //25
        0xFF,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xF8,0x7F,0xFF,0xF8,0x60,0x30,
        0x00,0x60,0x30,0x00,0x60,0x30,0x00,0x60,0x3C,0x00,0x60,0x3F,0x00,0x70,0x63,0xE0,
        0x3F,0xE0,0xF8,0x0F,0x80,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x01,0xC0,0x3F,    //26
        0xC1,0xF0,0x70,0xC0,0x38,0x60,0x60,0x18,0x60,0x60,0x18,0x60,0x30,0x18,0x60,0x30,
        0x18,0x70,0x18,0x38,0x3E,0x1F,0xF0,0x0E,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
        0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x7F,0xFF,0xF8,0x7F,    //27
        0xFF,0xF8,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x7F,0xFF,0xC0,0x7F,0xFF,0xF0,0x00,0x00,0x38,0x00,0x00,0x18,
        0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x38,0x7F,0xFF,0xF0,0x7F,    //28
        0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x7F,0xC0,0x00,0x07,0xFC,
        0x00,0x00,0x3F,0x80,0x00,0x01,0xF8,0x00,0x01,0xF8,0x00,0x3F,0x80,0x07,0xFC,0x00,
        0x7F,0xC0,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x7F,    //29
        0xFF,0xF8,0x00,0x01,0xF8,0x00,0x1F,0x80,0x07,0xF0,0x00,0x07,0xF0,0x00,0x00,0x1F,
        0x80,0x00,0x01,0xF8,0x7F,0xFF,0xF8,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x60,0x00,0x38,0x78,0x00,0xF8,0x1F,0x03,0xC0,0x07,0xCF,0x00,0x00,0xF8,0x00,0x00,    //2A
        0xF8,0x00,0x07,0xCF,0x00,0x1F,0x03,0xC0,0x78,0x00,0xF8,0x60,0x00,0x38,0x00,0x00,
        0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x7E,0x00,0x00,0x0F,0xC0,0x00,0x01,0xF0,0x00,
        0x00,0x3F,0xF8,0x00,0x3F,0xF8,0x01,0xF0,0x00,0x0F,0xC0,0x00,0x7E,0x00,0x00,0x70,    //2B
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x60,0x00,0xF8,0x60,0x07,
        0xD8,0x60,0x1F,0x18,0x60,0xF8,0x18,0x67,0xE0,0x18,0x7F,0x00,0x18,0x78,0x00,0x18,
        0x60,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //2C
        0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x03,0xC0,0x00,
        0x03,0xC0,0x00,0x03,0xC0,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0xC0,0x00,0x00,0xF8,0x00,0x00,0x3F,0x00,0x00,0x07,0xE0,0x00,0x00,0xF8,0x00,0x00,    //2D
        0x1F,0x00,0x00,0x07,0xE0,0x00,0x00,0xFC,0x00,0x00,0x1F,0x00,0x00,0x03,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x03,0xC0,0x00,0x03,0xC0,0x00,0x03,
        0xC0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //2E
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x18,0x00,
        0x00,0x30,0x00,0x00,0x60,0x00,0x00,0xC0,0x00,0x00,0x60,0x00,0x00,0x30,0x00,0x00,
        0x18,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,    //2F
        0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,
        0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0xE0,0x00,0x00,0x70,    //30
        0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x01,0x8F,0xF0,0x03,0x8C,0x38,0x03,0x18,0x18,
        0x03,0x18,0x18,0x03,0x18,0x18,0x03,0x98,0x30,0x01,0xFF,0xF8,0x00,0xFF,0xF8,0x00,    //31
        0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF8,0xFF,0xFF,0xF8,0x01,0x80,
        0x30,0x03,0x00,0x18,0x03,0x00,0x18,0x03,0x00,0x18,0x03,0x00,0x18,0x03,0x80,0x38,
        0x01,0xFF,0xF0,0x00,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x01,    //32
        0xFF,0xF0,0x03,0x80,0x38,0x03,0x00,0x18,0x03,0x00,0x18,0x03,0x00,0x18,0x03,0x00,
        0x18,0x03,0x80,0x38,0x01,0xE0,0xF0,0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x7F,0xC0,0x01,0xFF,0xF0,0x03,0x80,0x38,0x03,0x00,0x18,0x03,0x00,0x18,0x03,    //33
        0x00,0x18,0x03,0x00,0x18,0x01,0x80,0x30,0xFF,0xFF,0xF8,0xFF,0xFF,0xF8,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x01,0xFF,0xF0,0x03,0x8C,0x38,0x03,0x0C,0x18,
        0x03,0x0C,0x18,0x03,0x0C,0x18,0x03,0x0C,0x18,0x03,0x8C,0x38,0x01,0xFC,0x70,0x00,    //34
        0x7C,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,
        0x00,0x3F,0xFF,0xF8,0x7F,0xFF,0xF8,0xE3,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,
        0xC3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x0C,0x01,    //35
        0xFF,0xCE,0x03,0x80,0xE3,0x03,0x00,0x63,0x03,0x00,0x63,0x03,0x00,0x63,0x03,0x00,
        0x63,0x01,0x80,0xC7,0x03,0xFF,0xFE,0x03,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
        0xFF,0xFF,0xF8,0xFF,0xFF,0xF8,0x00,0xC0,0x00,0x01,0x80,0x00,0x03,0x00,0x00,0x03,    //36
        0x00,0x00,0x03,0x00,0x00,0x03,0x80,0x00,0x01,0xFF,0xF8,0x00,0xFF,0xF8,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,
        0x63,0x00,0x00,0x63,0xFF,0xF8,0x63,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //37
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,
        0x03,0x03,0x00,0x03,0x63,0x00,0x07,0x63,0xFF,0xFE,0x63,0xFF,0xFC,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF8,0xFF,    //38
        0xFF,0xF8,0x00,0x0E,0x00,0x00,0x1C,0x00,0x00,0x3E,0x00,0x00,0xE7,0x80,0x01,0xC1,
        0xC0,0x03,0x80,0xF0,0x03,0x00,0x38,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xFF,    //39
        0xFF,0xF8,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x03,0xFF,0xF8,0x03,0xFF,0xF8,0x01,0x80,0x00,0x03,0x00,0x00,
        0x03,0xFF,0xF8,0x01,0xFF,0xF8,0x01,0x80,0x00,0x03,0x00,0x00,0x03,0xFF,0xF8,0x01,    //3A
        0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xF8,0x03,0xFF,0xF8,0x00,0xC0,
        0x00,0x01,0x80,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x80,0x00,
        0x01,0xFF,0xF8,0x00,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x01,    //3B
        0xFF,0xF0,0x03,0x80,0x38,0x03,0x00,0x18,0x03,0x00,0x18,0x03,0x00,0x18,0x03,0x00,
        0x18,0x03,0x80,0x38,0x01,0xFF,0xF0,0x00,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
        0x03,0xFF,0xFF,0x03,0xFF,0xFF,0x01,0x80,0x60,0x03,0x00,0x30,0x03,0x00,0x30,0x03,    //3C
        0x00,0x30,0x03,0x00,0x30,0x03,0x80,0x70,0x01,0xFF,0xE0,0x00,0x7F,0x80,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x7F,0x80,0x01,0xFF,0xE0,0x03,0x80,0x70,0x03,0x00,0x30,
        0x03,0x00,0x30,0x03,0x00,0x30,0x03,0x00,0x30,0x01,0x80,0x60,0x03,0xFF,0xFF,0x03,    //3D
        0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,
        0xF8,0x03,0xFF,0xF8,0x00,0xC0,0x00,0x01,0x80,0x00,0x03,0x00,0x00,0x03,0x00,0x00,
        0x03,0x80,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xE0,0x01,    //3E
        0xF8,0xF0,0x03,0x18,0x38,0x03,0x0C,0x18,0x03,0x0C,0x18,0x03,0x0C,0x18,0x03,0x0C,
        0x18,0x03,0x86,0x38,0x01,0xC7,0xF0,0x00,0x41,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
        0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x7F,0xFF,0xF0,0x7F,0xFF,0xF8,0x03,    //3F
        0x00,0x18,0x03,0x00,0x18,0x03,0x00,0x18,0x03,0x00,0x18,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x03,0xFF,0xE0,0x03,0xFF,0xF0,0x00,0x00,0x38,0x00,0x00,0x18,
        0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x30,0x00,0x00,0x60,0x03,0xFF,0xF8,0x03,    //40
        0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x00,0x03,0xF0,0x00,0x00,0x7E,
        0x00,0x00,0x0F,0xC0,0x00,0x00,0xF8,0x00,0x00,0xF8,0x00,0x0F,0xC0,0x00,0x7E,0x00,
        0x03,0xF0,0x00,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0x80,0x03,    //41
        0xFF,0xF8,0x00,0x00,0x78,0x00,0x03,0xC0,0x00,0x7E,0x00,0x00,0x7E,0x00,0x00,0x03,
        0xC0,0x00,0x00,0x78,0x03,0xFF,0xF8,0x03,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
        0x03,0x00,0x18,0x03,0x80,0x78,0x01,0xE1,0xE0,0x00,0x7B,0x80,0x00,0x1E,0x00,0x00,    //42
        0x1E,0x00,0x00,0x7B,0x80,0x01,0xE1,0xE0,0x03,0x80,0x78,0x03,0x00,0x18,0x00,0x00,
        0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x03,0xF0,0x03,0x00,0x7E,0x03,0x00,0x0F,0x8F,
        0x00,0x00,0xFE,0x00,0x01,0xF0,0x00,0x0F,0x80,0x00,0x7E,0x00,0x03,0xF0,0x00,0x03,    //43
        0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x03,0x00,0x78,0x03,0x01,
        0xD8,0x03,0x03,0x98,0x03,0x0E,0x18,0x03,0x1C,0x18,0x03,0x70,0x18,0x03,0xE0,0x18,
        0x03,0x80,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //44
        0x18,0x00,0x00,0x18,0x00,0x00,0x3C,0x00,0x7F,0xE7,0xFE,0xFF,0xC3,0xFF,0xC0,0x00,
        0x03,0xC0,0x00,0x03,0xC0,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,    //45
        0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x03,0xC0,0x00,0x03,0xC0,0x00,0x03,
        0xFF,0xC3,0xFF,0x7F,0xE7,0xFE,0x00,0x3C,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,    //46
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x60,0x00,0x00,0xC0,0x00,
        0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,
        0xC0,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    //47
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    };
#endif

//uint8_t const fontb_en[][FONT_B_WIDTH*FONT_B_HEIGHT/8] =
uint8_t const fontb_en[] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xcc,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x08,0x00,0x30,0x00,0x60,0x00,0x08,0x00,0x30,0x00,0x60,0x00,0x00,0x00,
	0x02,0x20,0x03,0xfc,0x1e,0x20,0x02,0x20,0x03,0xfc,0x1e,0x20,0x02,0x20,0x00,0x00,
	0x00,0x00,0x0e,0x18,0x11,0x04,0x3f,0xff,0x10,0x84,0x0c,0x78,0x00,0x00,0x00,0x00,
	0x0f,0x00,0x10,0x84,0x0f,0x38,0x00,0xc0,0x07,0x78,0x18,0x84,0x00,0x78,0x00,0x00,
	0x00,0x78,0x0f,0x84,0x10,0xc4,0x11,0x24,0x0e,0x98,0x00,0xe4,0x00,0x84,0x00,0x08,
	0x08,0x00,0x68,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xe0,0x18,0x18,0x20,0x04,0x40,0x02,0x00,0x00,
	0x00,0x00,0x40,0x02,0x20,0x04,0x18,0x18,0x07,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,
	0x02,0x40,0x02,0x40,0x01,0x80,0x0f,0xf0,0x01,0x80,0x02,0x40,0x02,0x40,0x00,0x00,
	0x00,0x80,0x00,0x80,0x00,0x80,0x0f,0xf8,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00,
	0x00,0x01,0x00,0x0d,0x00,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,
	0x00,0x00,0x00,0x0c,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x06,0x00,0x18,0x00,0x60,0x01,0x80,0x06,0x00,0x18,0x00,0x20,0x00,
	0x00,0x00,0x07,0xf0,0x08,0x08,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xf0,0x00,0x00,
	0x00,0x00,0x08,0x04,0x08,0x04,0x1f,0xfc,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00,
	0x00,0x00,0x0e,0x0c,0x10,0x14,0x10,0x24,0x10,0x44,0x11,0x84,0x0e,0x0c,0x00,0x00,
	0x00,0x00,0x0c,0x18,0x10,0x04,0x11,0x04,0x11,0x04,0x12,0x88,0x0c,0x70,0x00,0x00,
	0x00,0x00,0x00,0xe0,0x03,0x20,0x04,0x24,0x08,0x24,0x1f,0xfc,0x00,0x24,0x00,0x00,
	0x00,0x00,0x1f,0x98,0x10,0x84,0x11,0x04,0x11,0x04,0x10,0x88,0x10,0x70,0x00,0x00,
	0x00,0x00,0x07,0xf0,0x08,0x88,0x11,0x04,0x11,0x04,0x18,0x88,0x00,0x70,0x00,0x00,
	0x00,0x00,0x1c,0x00,0x10,0x00,0x10,0xfc,0x13,0x00,0x1c,0x00,0x10,0x00,0x00,0x00,
	0x00,0x00,0x0e,0x38,0x11,0x44,0x10,0x84,0x10,0x84,0x11,0x44,0x0e,0x38,0x00,0x00,
	0x00,0x00,0x07,0x00,0x08,0x8c,0x10,0x44,0x10,0x44,0x08,0x88,0x07,0xf0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0c,0x03,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x80,0x01,0x40,0x02,0x20,0x04,0x10,0x08,0x08,0x10,0x04,0x00,0x00,
	0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x00,0x00,
	0x00,0x00,0x10,0x04,0x08,0x08,0x04,0x10,0x02,0x20,0x01,0x40,0x00,0x80,0x00,0x00,
	0x00,0x00,0x0e,0x00,0x12,0x00,0x10,0x0c,0x10,0x6c,0x10,0x80,0x0f,0x00,0x00,0x00,
	0x03,0xe0,0x0c,0x18,0x13,0xe4,0x14,0x24,0x17,0xc4,0x08,0x28,0x07,0xd0,0x00,0x00,
	0x00,0x04,0x00,0x3c,0x03,0xc4,0x1c,0x40,0x07,0x40,0x00,0xe4,0x00,0x1c,0x00,0x04,
	0x10,0x04,0x1f,0xfc,0x11,0x04,0x11,0x04,0x11,0x04,0x0e,0x88,0x00,0x70,0x00,0x00,
	0x03,0xe0,0x0c,0x18,0x10,0x04,0x10,0x04,0x10,0x04,0x10,0x08,0x1c,0x10,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xf0,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x11,0x04,0x11,0x04,0x17,0xc4,0x10,0x04,0x08,0x18,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x11,0x04,0x11,0x00,0x17,0xc0,0x10,0x00,0x08,0x00,0x00,0x00,
	0x03,0xe0,0x0c,0x18,0x10,0x04,0x10,0x04,0x10,0x44,0x1c,0x78,0x00,0x40,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x10,0x84,0x00,0x80,0x00,0x80,0x10,0x84,0x1f,0xfc,0x10,0x04,
	0x00,0x00,0x10,0x04,0x10,0x04,0x1f,0xfc,0x10,0x04,0x10,0x04,0x00,0x00,0x00,0x00,
	0x00,0x03,0x00,0x01,0x10,0x01,0x10,0x01,0x1f,0xfe,0x10,0x00,0x10,0x00,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x11,0x04,0x03,0x80,0x14,0x64,0x18,0x1c,0x10,0x04,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x10,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x0c,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x1f,0x00,0x00,0xfc,0x1f,0x00,0x1f,0xfc,0x10,0x04,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x0c,0x04,0x03,0x00,0x00,0xe0,0x10,0x18,0x1f,0xfc,0x10,0x00,
	0x07,0xf0,0x08,0x08,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xf0,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x10,0x84,0x10,0x80,0x10,0x80,0x10,0x80,0x0f,0x00,0x00,0x00,
	0x07,0xf0,0x08,0x18,0x10,0x24,0x10,0x24,0x10,0x1c,0x08,0x0a,0x07,0xf2,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x11,0x04,0x11,0x00,0x11,0xc0,0x11,0x30,0x0e,0x0c,0x00,0x04,
	0x00,0x00,0x0e,0x1c,0x11,0x04,0x10,0x84,0x10,0x84,0x10,0x44,0x1c,0x38,0x00,0x00,
	0x18,0x00,0x10,0x00,0x10,0x04,0x1f,0xfc,0x10,0x04,0x10,0x00,0x18,0x00,0x00,0x00,
	0x10,0x00,0x1f,0xf8,0x10,0x04,0x00,0x04,0x00,0x04,0x10,0x04,0x1f,0xf8,0x10,0x00,
	0x10,0x00,0x1e,0x00,0x11,0xe0,0x00,0x1c,0x00,0x70,0x13,0x80,0x1c,0x00,0x10,0x00,
	0x1f,0xc0,0x10,0x3c,0x00,0xe0,0x1f,0x00,0x00,0xe0,0x10,0x3c,0x1f,0xc0,0x00,0x00,
	0x10,0x04,0x18,0x0c,0x16,0x34,0x01,0xc0,0x01,0xc0,0x16,0x34,0x18,0x0c,0x10,0x04,
	0x10,0x00,0x1c,0x00,0x13,0x04,0x00,0xfc,0x13,0x04,0x1c,0x00,0x10,0x00,0x00,0x00,
	0x08,0x04,0x10,0x1c,0x10,0x64,0x10,0x84,0x13,0x04,0x1c,0x04,0x10,0x18,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xfe,0x40,0x02,0x40,0x02,0x40,0x02,0x00,0x00,
	0x00,0x00,0x30,0x00,0x0c,0x00,0x03,0x80,0x00,0x60,0x00,0x1c,0x00,0x03,0x00,0x00,
	0x00,0x00,0x40,0x02,0x40,0x02,0x40,0x02,0x7f,0xfe,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x00,0x00,
	0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,
	0x00,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x98,0x01,0x24,0x01,0x44,0x01,0x44,0x01,0x44,0x00,0xfc,0x00,0x04,
	0x10,0x00,0x1f,0xfc,0x00,0x88,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x70,0x00,0x00,
	0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x00,
	0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x11,0x08,0x1f,0xfc,0x00,0x04,
	0x00,0x00,0x00,0xf8,0x01,0x44,0x01,0x44,0x01,0x44,0x01,0x44,0x00,0xc8,0x00,0x00,
	0x00,0x00,0x01,0x04,0x01,0x04,0x0f,0xfc,0x11,0x04,0x11,0x04,0x11,0x00,0x18,0x00,
	0x00,0x00,0x00,0xd6,0x01,0x29,0x01,0x29,0x01,0x29,0x01,0xc9,0x01,0x06,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x00,0x84,0x01,0x00,0x01,0x00,0x01,0x04,0x00,0xfc,0x00,0x04,
	0x00,0x00,0x01,0x04,0x19,0x04,0x19,0xfc,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x03,0x00,0x01,0x01,0x01,0x19,0x01,0x19,0xfe,0x00,0x00,0x00,0x00,
	0x10,0x04,0x1f,0xfc,0x00,0x24,0x00,0x40,0x01,0xb4,0x01,0x0c,0x01,0x04,0x00,0x00,
	0x00,0x00,0x10,0x04,0x10,0x04,0x1f,0xfc,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00,
	0x01,0x04,0x01,0xfc,0x01,0x04,0x01,0x00,0x01,0xfc,0x01,0x04,0x01,0x00,0x00,0xfc,
	0x01,0x04,0x01,0xfc,0x00,0x84,0x01,0x00,0x01,0x00,0x01,0x04,0x00,0xfc,0x00,0x04,
	0x00,0x00,0x00,0xf8,0x01,0x04,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0xf8,0x00,0x00,
	0x01,0x01,0x01,0xff,0x00,0x85,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x70,0x00,0x00,
	0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x01,0x05,0x01,0xff,0x00,0x01,
	0x01,0x04,0x01,0x04,0x01,0xfc,0x00,0x84,0x01,0x04,0x01,0x00,0x01,0x80,0x00,0x00,
	0x00,0x00,0x00,0xcc,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x98,0x00,0x00,
	0x00,0x00,0x01,0x00,0x01,0x00,0x07,0xf8,0x01,0x04,0x01,0x04,0x00,0x00,0x00,0x00,
	0x01,0x00,0x01,0xf8,0x00,0x04,0x00,0x04,0x00,0x04,0x01,0x08,0x01,0xfc,0x00,0x04,
	0x01,0x00,0x01,0x80,0x01,0x70,0x00,0x0c,0x00,0x10,0x01,0x60,0x01,0x80,0x01,0x00,
	0x01,0xf0,0x01,0x0c,0x00,0x30,0x01,0xc0,0x00,0x30,0x01,0x0c,0x01,0xf0,0x01,0x00,
	0x00,0x00,0x01,0x04,0x01,0x8c,0x00,0x74,0x01,0x70,0x01,0x8c,0x01,0x04,0x00,0x00,
	0x01,0x01,0x01,0x81,0x01,0x71,0x00,0x0e,0x00,0x18,0x01,0x60,0x01,0x80,0x01,0x00,
	0x00,0x00,0x01,0x84,0x01,0x0c,0x01,0x34,0x01,0x44,0x01,0x84,0x01,0x0c,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x3e,0xfc,0x40,0x02,0x40,0x02,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x40,0x02,0x40,0x02,0x3e,0xfc,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x60,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x20,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
//======================================================================================================
//----chang
uint8_t const fontc_en[][FONT_C_WIDTH*FONT_C_HEIGHT/8] ={0};

#endif

