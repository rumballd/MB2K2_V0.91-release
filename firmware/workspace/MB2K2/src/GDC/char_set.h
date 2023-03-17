/*
 * char_set.h
 *
 *  Created on: Apr 11, 2020
 *      Author: david
 */


#ifndef CHAR_SET_H_
#define CHAR_SET_H_

// this array contains the CHARS1.CHR character set
    char charSet[1086] = {
// character set attributes
    84, // screen chars/row
    24, // screen rows
    7,  // char x pixels
    11, // char y rows
    9,  // bounding box pixels
    12, // bounding box rows
    4,  // initial attributes
    11  // char spacing (pixels)

    // character set patterns
    , 0b00000000 //Character = ' '
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00001000 //Character = '!'
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00100100 //Character = '"'
    , 0b00100100
    , 0b00100100
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00010100 //Character = '#'
    , 0b00010100
    , 0b00010100
    , 0b01111111
    , 0b00010100
    , 0b01111111
    , 0b00010100
    , 0b00010100
    , 0b00010100
    , 0b00000000
    , 0b00000000
   //
    , 0b00001000 //Character = '$'
    , 0b00111111
    , 0b01001000
    , 0b01001000
    , 0b00111110
    , 0b00001001
    , 0b00001001
    , 0b01111110
    , 0b00001000
    , 0b00000000
    , 0b00000000
   //
    , 0b00100000 //Character = '%'
    , 0b01010001
    , 0b00100010
    , 0b00000100
    , 0b00001000
    , 0b00010000
    , 0b00100010
    , 0b01000101
    , 0b00000010
    , 0b00000000
    , 0b00000000
   //
    , 0b00111000 //Character = '&'
    , 0b01000100
    , 0b01000100
    , 0b00101000
    , 0b00010000
    , 0b00101001
    , 0b01000110
    , 0b01000110
    , 0b00111001
    , 0b00000000
    , 0b00000000
   //
    , 0b00001100 //Character = '''
    , 0b00001100
    , 0b00001000
    , 0b00010000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000100 //Character = '('
    , 0b00001000
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00001000
    , 0b00000100
    , 0b00000000
    , 0b00000000
   //
    , 0b00010000 //Character = ')'
    , 0b00001000
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b00001000
    , 0b00010000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = '//'
    , 0b00001000
    , 0b01001001
    , 0b00101010
    , 0b01111111
    , 0b00101010
    , 0b01001001
    , 0b00001000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = '+'
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b01111111
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = ','
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00011000
    , 0b00011000
    , 0b00010000
    , 0b00100000
   //
    , 0b00000000 //Character = '-'
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00111110
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'fred'
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00011000
    , 0b00011000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = '/'
    , 0b00000001
    , 0b00000010
    , 0b00000100
    , 0b00001000
    , 0b00010000
    , 0b00100000
    , 0b01000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = '0'
    , 0b01000001
    , 0b01000011
    , 0b01000101
    , 0b01001001
    , 0b01010001
    , 0b01100001
    , 0b01000001
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00001000 //Character = '1'
    , 0b00011000
    , 0b00101000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = '2'
    , 0b01000001
    , 0b00000001
    , 0b00000010
    , 0b00011100
    , 0b00100000
    , 0b01000000
    , 0b01000000
    , 0b01111111
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = '3'
    , 0b01000001
    , 0b00000001
    , 0b00000001
    , 0b00011110
    , 0b00000001
    , 0b00000001
    , 0b01000001
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00000010 //Character = '4'
    , 0b00000110
    , 0b00001010
    , 0b00010010
    , 0b00100010
    , 0b01000010
    , 0b01111111
    , 0b00000010
    , 0b00000010
    , 0b00000000
    , 0b00000000
   //
    , 0b01111111 //Character = '5'
    , 0b01000000
    , 0b01000000
    , 0b01111100
    , 0b00000010
    , 0b00000001
    , 0b00000001
    , 0b01000010
    , 0b00111100
    , 0b00000000
    , 0b00000000
   //
    , 0b00011110 //Character = '6'
    , 0b00100000
    , 0b01000000
    , 0b01000000
    , 0b01111110
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b01111111 //Character = '7'
    , 0b01000001
    , 0b00000010
    , 0b00000100
    , 0b00001000
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = '8'
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00111110
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = '9'
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00111111
    , 0b00000001
    , 0b00000001
    , 0b00000010
    , 0b00111100
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = ':'
    , 0b00000000
    , 0b00000000
    , 0b00011000
    , 0b00011000
    , 0b00000000
    , 0b00000000
    , 0b00011000
    , 0b00011000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = ';'
    , 0b00000000
    , 0b00000000
    , 0b00011000
    , 0b00011000
    , 0b00000000
    , 0b00000000
    , 0b00011000
    , 0b00011000
    , 0b00010000
    , 0b00100000
   //
    , 0b00000100 //Character = '<'
    , 0b00001000
    , 0b00010000
    , 0b00100000
    , 0b01000000
    , 0b00100000
    , 0b00010000
    , 0b00001000
    , 0b00000100
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = '='
    , 0b00000000
    , 0b00000000
    , 0b00111110
    , 0b00000000
    , 0b00111110
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00010000 //Character = '>'
    , 0b00001000
    , 0b00000100
    , 0b00000010
    , 0b00000001
    , 0b00000010
    , 0b00000100
    , 0b00001000
    , 0b00010000
    , 0b00000000
    , 0b00000000
   //
    , 0b00011110 //Character = '?'
    , 0b00100001
    , 0b00100001
    , 0b00000001
    , 0b00000110
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00001000
    , 0b00000000
    , 0b00000000
   //
    , 0b00011110 //Character = '@'
    , 0b00100001
    , 0b01001101
    , 0b01010101
    , 0b01010101
    , 0b01011110
    , 0b01000000
    , 0b00100000
    , 0b00011110
    , 0b00000000
    , 0b00000000
   //
    , 0b00011100 //Character = 'A'
    , 0b00100010
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01111111
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00000000
    , 0b00000000
   //
    , 0b01111110 //Character = 'B'
    , 0b00100001
    , 0b00100001
    , 0b00100001
    , 0b00111110
    , 0b00100001
    , 0b00100001
    , 0b00100001
    , 0b01111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00011110 //Character = 'C'
    , 0b00100001
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b00100001
    , 0b00011110
    , 0b00000000
    , 0b00000000
   //
    , 0b01111100 //Character = 'D'
    , 0b01000010
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000010
    , 0b01111100
    , 0b00000000
    , 0b00000000
   //
    , 0b01111111 //Character = 'E'
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01111000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01111111
    , 0b00000000
    , 0b00000000
   //
    , 0b01111111 //Character = 'F'
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01111000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00011110 //Character = 'G'
    , 0b00100001
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01001111
    , 0b01000001
    , 0b00100001
    , 0b00011110
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'H'
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01111111
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = 'I'
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00011111 //Character = 'J'
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b01000100
    , 0b00111000
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'K'
    , 0b01000010
    , 0b01000100
    , 0b01001000
    , 0b01010000
    , 0b01101000
    , 0b01000100
    , 0b01000010
    , 0b01000001
    , 0b00000000
    , 0b00000000
   //
    , 0b01000000 //Character = 'L'
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01111111
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'M'
    , 0b01100011
    , 0b01010101
    , 0b01001001
    , 0b01001001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'N'
    , 0b01100001
    , 0b01010001
    , 0b01001001
    , 0b01000101
    , 0b01000011
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00000000
    , 0b00000000
   //
    , 0b00011100 //Character = 'O'
    , 0b00100010
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00100010
    , 0b00011100
    , 0b00000000
    , 0b00000000
   //
    , 0b01111110 //Character = 'P'
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01111110
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00011100 //Character = 'Q'
    , 0b00100010
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01001001
    , 0b01000101
    , 0b00100010
    , 0b00011101
    , 0b00000000
    , 0b00000000
   //
    , 0b01111110 //Character = 'R'
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01111110
    , 0b01001000
    , 0b01000100
    , 0b01000010
    , 0b01000001
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = 'S'
    , 0b01000001
    , 0b01000000
    , 0b01000000
    , 0b00111110
    , 0b00000001
    , 0b00000001
    , 0b01000001
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b01111111 //Character = 'T'
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'U'
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'V'
    , 0b01000001
    , 0b01000001
    , 0b00100010
    , 0b00100010
    , 0b00010100
    , 0b00010100
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'W'
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01001001
    , 0b01001001
    , 0b01010101
    , 0b01100011
    , 0b01000001
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'X'
    , 0b01000001
    , 0b00100010
    , 0b00010100
    , 0b00001000
    , 0b00010100
    , 0b00100010
    , 0b01000001
    , 0b01000001
    , 0b00000000
    , 0b00000000
   //
    , 0b01000001 //Character = 'Y'
    , 0b01000001
    , 0b00100010
    , 0b00010100
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00000000
   //
    , 0b01111111 //Character = 'Z'
    , 0b00000001
    , 0b00000010
    , 0b00000100
    , 0b00001000
    , 0b00010000
    , 0b00100000
    , 0b01000000
    , 0b01111111
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = '['
    , 0b00100000
    , 0b00100000
    , 0b00100000
    , 0b00100000
    , 0b00100000
    , 0b00100000
    , 0b00100000
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = '\'
    , 0b01000000
    , 0b00100000
    , 0b00010000
    , 0b00001000
    , 0b00000100
    , 0b00000010
    , 0b00000001
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00111110 //Character = ']'
    , 0b00000010
    , 0b00000010
    , 0b00000010
    , 0b00000010
    , 0b00000010
    , 0b00000010
    , 0b00000010
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00001000 //Character = '^'
    , 0b00011100
    , 0b00101010
    , 0b01001001
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = '_'
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00011000 //Character = '`'
    , 0b00011000
    , 0b00001000
    , 0b00000100
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'a'
    , 0b00000000
    , 0b00000000
    , 0b00111100
    , 0b00000010
    , 0b00111110
    , 0b01000010
    , 0b01000010
    , 0b00111101
    , 0b00000000
    , 0b00000000
   //
    , 0b01000000 //Character = 'b'
    , 0b01000000
    , 0b01000000
    , 0b01011100
    , 0b01100010
    , 0b01000010
    , 0b01000010
    , 0b01100010
    , 0b01011100
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'c'
    , 0b00000000
    , 0b00000000
    , 0b00111100
    , 0b01000010
    , 0b01000000
    , 0b01000000
    , 0b01000010
    , 0b00111100
    , 0b00000000
    , 0b00000000
   //
    , 0b00000010 //Character = 'd'
    , 0b00000010
    , 0b00000010
    , 0b00111010
    , 0b01000110
    , 0b01000010
    , 0b01000010
    , 0b01000110
    , 0b00111010
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'e'
    , 0b00000000
    , 0b00000000
    , 0b00111100
    , 0b01000010
    , 0b01111110
    , 0b01000000
    , 0b01000000
    , 0b00111100
    , 0b00000000
    , 0b00000000
   //
    , 0b00001100 //Character = 'f'
    , 0b00010010
    , 0b00010000
    , 0b00010000
    , 0b01111100
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'g'
    , 0b00000000
    , 0b00000000
    , 0b00111010
    , 0b01000110
    , 0b01000010
    , 0b01000110
    , 0b00111010
    , 0b00000010
    , 0b01000010
    , 0b00111100
   //
    , 0b01000000 //Character = 'h'
    , 0b01000000
    , 0b01000000
    , 0b01011100
    , 0b01100010
    , 0b01000010
    , 0b01000010
    , 0b01000010
    , 0b01000010
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'i'
    , 0b00001000
    , 0b00000000
    , 0b00011000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00011100
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'j'
    , 0b00000010
    , 0b00000000
    , 0b00000110
    , 0b00000010
    , 0b00000010
    , 0b00000010
    , 0b00000010
    , 0b00000010
    , 0b00100010
    , 0b00011100
   //
    , 0b01000000 //Character = 'k'
    , 0b01000000
    , 0b01000000
    , 0b01000100
    , 0b01001000
    , 0b01010000
    , 0b01101000
    , 0b01000100
    , 0b01000010
    , 0b00000000
    , 0b00000000
   //
    , 0b00011000 //Character = 'l'
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00011100
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'm'
    , 0b00000000
    , 0b00000000
    , 0b01110110
    , 0b01001001
    , 0b01001001
    , 0b01001001
    , 0b01001001
    , 0b01001001
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'n'
    , 0b00000000
    , 0b00000000
    , 0b01011100
    , 0b01100010
    , 0b01000010
    , 0b01000010
    , 0b01000010
    , 0b01000010
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'o'
    , 0b00000000
    , 0b00000000
    , 0b00111110
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'p'
    , 0b00000000
    , 0b00000000
    , 0b01011100
    , 0b01100010
    , 0b01000010
    , 0b01100010
    , 0b01011100
    , 0b01000000
    , 0b01000000
    , 0b01000000
   //
    , 0b00000000 //Character = 'q'
    , 0b00000000
    , 0b00000000
    , 0b00111010
    , 0b01000110
    , 0b01000010
    , 0b01000110
    , 0b00111010
    , 0b00000010
    , 0b00000010
    , 0b00000011
   //
    , 0b00000000 //Character = 'r'
    , 0b00000000
    , 0b00000000
    , 0b01011100
    , 0b01100010
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b01000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 's'
    , 0b00000000
    , 0b00000000
    , 0b00111100
    , 0b01000010
    , 0b00110000
    , 0b00001100
    , 0b01000010
    , 0b00111100
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 't'
    , 0b00010000
    , 0b00010000
    , 0b01111100
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00010010
    , 0b00001100
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'u'
    , 0b00000000
    , 0b00000000
    , 0b01000010
    , 0b01000010
    , 0b01000010
    , 0b01000010
    , 0b01000110
    , 0b00111010
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'v'
    , 0b00000000
    , 0b00000000
    , 0b01000001
    , 0b01000001
    , 0b01000001
    , 0b00100010
    , 0b00010100
    , 0b00001000
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'w'
    , 0b00000000
    , 0b00000000
    , 0b01000001
    , 0b01001001
    , 0b01001001
    , 0b01001001
    , 0b01001001
    , 0b00110110
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'x'
    , 0b00000000
    , 0b00000000
    , 0b01000010
    , 0b00100100
    , 0b00011000
    , 0b00011000
    , 0b00100100
    , 0b01000010
    , 0b00000000
    , 0b00000000
   //
    , 0b00000000 //Character = 'y'
    , 0b00000000
    , 0b00000000
    , 0b01000010
    , 0b01000010
    , 0b01000010
    , 0b01000110
    , 0b00111010
    , 0b00000010
    , 0b01000010
    , 0b00111100
   //
    , 0b00000000 //Character = 'z'
    , 0b00000000
    , 0b00000000
    , 0b01111110
    , 0b00000100
    , 0b00001000
    , 0b00010000
    , 0b00100000
    , 0b01111110
    , 0b00000000
    , 0b00000000
   //
    , 0b00001100 //Character = '{'
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00100000
    , 0b00010000
    , 0b00010000
    , 0b00010000
    , 0b00001100
    , 0b00000000
    , 0b00000000
   //
    , 0b00001000 //Character = '|'
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00001000
    , 0b00001000
    , 0b00001000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00011000 //Character = '}'
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b00000010
    , 0b00000100
    , 0b00000100
    , 0b00000100
    , 0b00011000
    , 0b00000000
    , 0b00000000
   //
    , 0b00110000 //Character = '~'
    , 0b01001001
    , 0b00000110
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b00000000
   //
    , 0b00101010 //Character = 'del'
    , 0b01010101
    , 0b00101010
    , 0b01010101
    , 0b00101010
    , 0b01010101
    , 0b00101010
    , 0b01010101
    , 0b00101010
    , 0b00000000
    , 0b00000000
   //
    , 0b01111111 // Cursor type 1
    , 0b01111111
    , 0b01111111
    , 0b01111111
    , 0b01111111
    , 0b01111111
    , 0b01111111
    , 0b01111111
    , 0b01111111
    , 0b00000000
    , 0b00000000
   //
    , 0b01100011 // Cursor type 2
    , 0b01000001
    , 0b01000001
    , 0b00000000
    , 0b00000000
    , 0b00000000
    , 0b01000001
    , 0b01000001
    , 0b01100011
    , 0b00000000
    , 0b00000000

};

#endif /* CHAR_SET_H_ */
