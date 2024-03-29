#ifndef SPRITES_H
#define SPRITES_H

PROGMEM const unsigned char Lazer[] = {
// Sprite: Image + Mask
// Width: 3 Height: 64
3, 8, 
0x00, 0x07, 0x07, 0x07, 0x00, 0x07, 
};

PROGMEM const unsigned char Spaceship[] = {
// Sprite: Image + Mask
// Width: 10 Height: 128
10, 16, 
0xC0, 0xFF, 0xE0, 0xFF, 0xF0, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xE0, 0xFF, 0xF0, 0xFF, 0xE0, 0xFF, 0xC0, 0xFF, 
0x00, 0x03, 0x01, 0x03, 0x03, 0x03, 0x01, 0x03, 0x03, 0x03, 
0x03, 0x03, 0x01, 0x03, 0x03, 0x03, 0x01, 0x03, 0x00, 0x03, 
};

PROGMEM const unsigned char Armor[] = {
// Sprite: Image + Mask
// Width: 10 Height: 128
10, 16, 
0x00, 0xFF, 0x1C, 0xFF, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0xFF, 0x1C, 0xFF, 0x00, 0xFF, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x01, 0x03, 
0x01, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
};

PROGMEM const unsigned char Health[] = {
// Sprite: Image + Mask
// Width: 10 Height: 128
10, 16, 
0x0C, 0xFF, 0x1E, 0xFF, 0x3F, 0xFF, 0x7E, 0xFF, 0xFE, 0xFF, 
0xFE, 0xFF, 0x7E, 0xFF, 0x3F, 0xFF, 0x1E, 0xFF, 0x0C, 0xFF, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
};

PROGMEM const unsigned char TitleScreen[] = {
// Sprite: Image + Mask
// Width: 128 Height: 512
128, 64, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xF8, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0x1E, 0xFF, 0x1E, 0xFF, 0x1E, 0xFF, 0x3E, 0xFF, 0x3E, 0xFF, 0x3E, 0xFF, 0x3E, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xF8, 0xFF, 0xFC, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0x3E, 0xFF, 0x1E, 0xFF, 0x1E, 0xFF, 0x1E, 0xFF, 0x3E, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xF8, 0xFF, 0xF0, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0xF0, 0xFF, 0xF0, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0x3E, 0xFF, 0x1E, 0xFF, 0x3E, 0xFF, 0x7C, 0xFF, 
0xFC, 0xFF, 0xF8, 0xFF, 0xE0, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0xE0, 0xFF, 0xF0, 0xFF, 0xF8, 0xFF, 0x3C, 0xFF, 0x1E, 0xFF, 0x1E, 0xFF, 0x0E, 0xFF, 0x0E, 0xFF, 0x0E, 0xFF, 0x0E, 0xFF, 0x0C, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x3C, 0xFF, 0xFC, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0x3E, 0xFF, 0x3E, 0xFF, 0x3E, 0xFF, 0x1E, 0xFF, 0x1E, 0xFF, 0x1C, 0xFF, 0x1C, 0xFF, 0x1C, 0xFF, 0x08, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x03, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x1F, 0xFF, 0x1F, 0xFF, 0x1E, 0xFF, 0x1E, 0xFF, 0x3E, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFC, 0xFF, 0xF0, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0x7C, 0xFF, 0x7C, 0xFF, 0x3C, 0xFF, 0x3E, 0xFF, 0x1F, 0xFF, 0x1F, 0xFF, 0x07, 0xFF, 0x01, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xE0, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0xFF, 0x78, 0xFF, 0xF8, 0xFF, 0xF0, 0xFF, 0xF8, 0xFF, 
0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xE0, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x06, 0xFF, 0x06, 0xFF, 0x06, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x1E, 0xFF, 0x9E, 0xFF, 0x9E, 0xFF, 0x9E, 0xFF, 0x9E, 0xFF, 0x9E, 0xFF, 0x9E, 0xFF, 0x1F, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x8F, 0xFF, 0x83, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x1F, 0xFF, 0x1F, 0xFF, 0x1F, 0xFF, 0x0F, 0xFF, 0x81, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0x9F, 0xFF, 0x1F, 0xFF, 0x1F, 0xFF, 0x03, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 
0xC0, 0xFF, 0xC0, 0xFF, 0x03, 0xFF, 0x6F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7C, 0xFF, 0xF0, 0xFF, 0xF0, 0xFF, 0x70, 0xFF, 0x71, 0xFF, 0xE3, 0xFF, 0xE7, 0xFF, 0xC7, 0xFF, 0x0F, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xCE, 0xFF, 0x0C, 0xFF, 0x0C, 0xFF, 0x0C, 0xFF, 0x0C, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xF0, 0xFF, 0xF3, 0xFF, 0x07, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0x06, 0xFF, 0x00, 0xFF, 0xF0, 0xFF, 0xFC, 0xFF, 0x3C, 0xFF, 0x1C, 0xFF, 0x1C, 0xFF, 0x18, 0xFF, 0x18, 0xFF, 0x18, 0xFF, 0x18, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0xF0, 0xFF, 0x78, 0xFF, 0x7C, 0xFF, 0x6E, 0xFF, 0x6E, 0xFF, 0x66, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x03, 0xFF, 0x83, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0x7E, 0xFF, 0x01, 0xFF, 0x07, 0xFF, 0x3F, 0xFF, 0xFE, 0xFF, 0xF0, 0xFF, 0xC0, 0xFF, 0xE0, 0xFF, 0xF0, 0xFF, 0x7E, 0xFF, 0x1F, 0xFF, 0x07, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x18, 0xFF, 0x19, 0xFF, 0x19, 0xFF, 0x39, 0xFF, 0x38, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xE0, 0xFF, 0xFE, 0xFF, 0x3F, 0xFF, 0x07, 0xFF, 0x0F, 0xFF, 0xFE, 0xFF, 0xFC, 0xFF, 0xF0, 0xFF, 0xFC, 0xFF, 0x1F, 0xFF, 
0x07, 0xFF, 0x01, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0xE3, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0x03, 0xFF, 0x00, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0x1C, 0xFF, 0x3C, 0xFF, 0x7C, 0xFF, 0xFC, 0xFF, 0xEE, 0xFF, 0xCF, 0xFF, 0x87, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xC7, 0xFF, 0xC3, 0xFF, 0xC3, 0xFF, 0xC7, 0xFF, 0xC7, 0xFF, 0xC7, 0xFF, 0x03, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x60, 0xFF, 0x60, 0xFF, 0x03, 0xFF, 0x03, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0xE0, 0xFF, 0xC0, 0xFF, 0x00, 0xFF, 0x03, 0xFF, 0x03, 0xFF, 0xE0, 0xFF, 0x06, 0xFF, 0xA7, 0xFF, 0x07, 0xFF, 0x07, 0xFF, 0xC7, 0xFF, 0x43, 0xFF, 0x43, 0xFF, 0xC3, 0xFF, 0x01, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0x03, 0xFF, 0x03, 0xFF, 0x03, 0xFF, 0x03, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0xE0, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x41, 0xFF, 0x43, 0xFF, 0x43, 0xFF, 0xC3, 0xFF, 0x63, 0xFF, 0x23, 0xFF, 0x03, 0xFF, 0x41, 0xFF, 0x40, 0xFF, 0x63, 0xFF, 0xE3, 0xFF, 0xE0, 0xFF, 0x40, 0xFF, 0x40, 0xFF, 0x00, 0xFF, 0x81, 0xFF, 0xC1, 0xFF, 0x61, 0xFF, 0xE0, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0x60, 0xFF, 0x30, 0xFF, 0x11, 0xFF, 0x11, 0xFF, 0x01, 0xFF, 0x00, 0xFF, 0xF0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0x40, 0xFF, 0x60, 0xFF, 0x20, 0xFF, 0x30, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0xF1, 0xFF, 0x11, 0xFF, 0xD1, 0xFF, 0x50, 0xFF, 0x50, 0xFF, 0xD0, 0xFF, 0x90, 0xFF, 0x10, 0xFF, 0x11, 0xFF, 0xD1, 0xFF, 0x50, 0xFF, 0x50, 0xFF, 0x50, 0xFF, 0xD0, 0xFF, 0x10, 0xFF, 0x11, 0xFF, 0xD1, 0xFF, 0x51, 0xFF, 0x50, 0xFF, 0x50, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x90, 0xFF, 0xD0, 0xFF, 0x51, 0xFF, 0x11, 0xFF, 0x91, 0xFF, 0x50, 0xFF, 0x50, 0xFF, 0x50, 0xFF, 0x50, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0xF0, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x0C, 0xFF, 0x0C, 0xFF, 0x00, 0xFF, 0x0E, 0xFF, 0x07, 0xFF, 0x05, 0xFF, 0x04, 0xFF, 0x07, 0xFF, 0x07, 0xFF, 0x0C, 0xFF, 0x00, 0xFF, 0x0F, 0xFF, 0x00, 0xFF, 0x0F, 0xFF, 0x08, 0xFF, 0x00, 0xFF, 0x0F, 0xFF, 0x09, 0xFF, 0x09, 0xFF, 0x09, 0xFF, 0x00, 0xFF, 0x0F, 0xFF, 0x03, 0xFF, 0x0E, 0xFF, 0x0F, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x0E, 0xFF, 0x07, 0xFF, 0x05, 0xFF, 0x04, 0xFF, 0x07, 0xFF, 0x0C, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x07, 0xFF, 0x0C, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x07, 0xFF, 0x0C, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x0E, 0xFF, 0x03, 0xFF, 0x02, 0xFF, 0x02, 0xFF, 0x03, 0xFF, 
0x0B, 0xFF, 0x0E, 0xFF, 0x00, 0xFF, 0x07, 0xFF, 0x04, 0xFF, 0x0C, 0xFF, 0x08, 0xFF, 0x08, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x0F, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x07, 0xFF, 0x0C, 0xFF, 0x08, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x1F, 0xFF, 0x06, 0xFF, 0x06, 0xFF, 0x04, 0xFF, 0x07, 0xFF, 0x00, 0xFF, 0x1F, 0xFF, 0x87, 0xFF, 0xC6, 0xFF, 0x06, 0xFF, 0x0E, 0xFF, 0x1B, 0xFF, 0x00, 0xFF, 0x0E, 0xFF, 0x9B, 0xFF, 0x92, 0xFF, 0x12, 0xFF, 0x12, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x11, 0xFF, 0xD3, 0xFF, 0x92, 0xFF, 0x1E, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x13, 0xFF, 0x12, 0xFF, 0x14, 0xFF, 0x1C, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x82, 0xFF, 0x03, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x30, 0xFF, 0x18, 0xFF, 0x1E, 0xFF, 0x0B, 0xFF, 0x09, 0xFF, 0x0B, 0xFF, 0x0E, 0xFF, 0x1C, 0xFF, 0xB0, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x83, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 
0xF0, 0xFF, 0x10, 0xFF, 0x30, 0xFF, 0x60, 0xFF, 0x60, 0xFF, 0x20, 0xFF, 0xF0, 0xFF, 0xF0, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0x60, 0xFF, 0x38, 0xFF, 0x38, 0xFF, 0x60, 0xFF, 0xC0, 0xFF, 0x00, 0xFF, 0xF8, 0xFF, 0x88, 0xFF, 0xD8, 0xFF, 0x70, 0xFF, 0x00, 0xFF, 0xF8, 0xFF, 0xE8, 0xFF, 0xA8, 0xFF, 0x88, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xF8, 0xFF, 0xA8, 0xFF, 0xE8, 0xFF, 0xF8, 0xFF, 0x00, 0xFF, 0x18, 0xFF, 0x30, 0xFF, 0xF0, 0xFF, 0x18, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xD8, 0xFF, 0x30, 0xFF, 0x30, 0xFF, 0xD8, 0xFF, 0x08, 0xFF, 0x00, 0xFF, 0xFC, 0xFF, 0x34, 0xFF, 0x14, 0xFF, 0x00, 0xFF, 0xF0, 0xFF, 0x10, 0xFF, 0x00, 0xFF, 0xF8, 0xFF, 0xA8, 0xFF, 0xB8, 0xFF, 0x00, 0xFF, 0xE0, 0xFF, 0x70, 0xFF, 0x40, 0xFF, 0xE0, 0xFF, 0x30, 0xFF, 0x00, 0xFF, 0xF0, 0xFF, 
0x90, 0xFF, 0x90, 0xFF, 0x00, 0xFF, 0xFE, 0xFF, 0x10, 0xFF, 0x30, 0xFF, 0xE0, 0xFF, 0x00, 0xFF, 0xB0, 0xFF, 0xA0, 0xFF, 0xF0, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x81, 0xFF, 0x81, 0xFF, 0x99, 0xFF, 0x8F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x8E, 0xFF, 0x99, 0xFF, 0x91, 0xFF, 0x99, 0xFF, 0x8F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xBF, 0xFF, 0x88, 0xFF, 0x88, 0xFF, 0x8F, 0xFF, 0x86, 0xFF, 0xBF, 0xFF, 0xA0, 0xFF, 0xA0, 0xFF, 0xA0, 0xFF, 0xA0, 0xFF, 0x9C, 0xFF, 0x8E, 0xFF, 0x89, 0xFF, 0x89, 0xFF, 0x8F, 0xFF, 0xB8, 0xFF, 0x80, 0xFF, 0x81, 0xFF, 0x83, 0xFF, 0x8C, 0xFF, 0xBE, 0xFF, 0xA7, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 
};

PROGMEM const unsigned char RegularEnemy[] = {
// Sprite: Image + Mask
// Width: 10 Height: 128
10, 16, 
0x30, 0xFF, 0x78, 0xFF, 0x86, 0xFF, 0x68, 0xFF, 0x54, 0xFF, 
0x54, 0xFF, 0x68, 0xFF, 0x86, 0xFF, 0x78, 0xFF, 0x30, 0xFF, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
};

PROGMEM const unsigned char Blob[] = {
// Sprite: Image + Mask
// Width: 10 Height: 128
10, 16, 
0x38, 0xFF, 0x44, 0xFF, 0x92, 0xFF, 0x29, 0xFF, 0x55, 0xFF, 
0x55, 0xFF, 0x29, 0xFF, 0x92, 0xFF, 0x44, 0xFF, 0x38, 0xFF, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
};

//this is the same as the ship's lazer, we can remove this or make the enemyLazer unique
PROGMEM const unsigned char EnemyLazer[] = { 
// Sprite: Image + Mask
// Width: 3 Height: 64
3, 8, 
0x00, 0x07, 0x07, 0x07, 0x00, 0x07, 
};

PROGMEM const unsigned char BlobLazer[] = {
// Sprite: Image + Mask
// Width: 6 Height: 64
6, 8, 
0x00, 0x3F, 0x0E, 0x3F, 0x0E, 0x3F, 
0x0E, 0x3F, 0x0E, 0x3F, 0x00, 0x3F, 
};

PROGMEM const unsigned char Twin[] = {
// Sprite: Image + Mask
// Width: 10 Height: 128
10, 16, 
0x00, 0xFF, 0x74, 0xFF, 0x8A, 0xFF, 0x42, 0xFF, 0x56, 0xFF, 
0x56, 0xFF, 0x42, 0xFF, 0x8A, 0xFF, 0x74, 0xFF, 0x00, 0xFF, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 
};
#endif
