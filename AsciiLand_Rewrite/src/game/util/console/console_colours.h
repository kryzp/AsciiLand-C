#ifndef CONSOLE_COLOURS_H
#define CONSOLE_COLOURS_H

#include <windows.h>

typedef enum Console_Colour
{
    //=========================[Foreground]=========================//
    // General
	FG_BLACK = 0,
	FG_GREY = FOREGROUND_INTENSITY,
	FG_WHITE = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
    FG_BRIGHT_WHITE = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
    
	// Red
	FG_DARK_RED = FOREGROUND_RED,
	FG_LIGHT_RED = FOREGROUND_RED | FOREGROUND_INTENSITY,
    
	// Green
	FG_DARK_GREEN = FOREGROUND_GREEN,
	FG_LIGHT_GREEN = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    
	// Blue
	FG_DARK_BLUE = FOREGROUND_BLUE,
	FG_LIGHT_BLUE = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
    
	// Orange
	FG_DARK_YELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
	FG_LIGHT_YELLOW = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    
	// Aqua
	FG_DARK_AQUA = FOREGROUND_BLUE | FOREGROUND_GREEN,
	FG_LIGHT_AQUA = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    
	// Magenta
	FG_DARK_MAGENTA = FOREGROUND_RED | FOREGROUND_BLUE,
	FG_LIGHT_MAGENTA = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
    
    //=========================[Background]=========================//
    // General
	BG_BLACK = 0,
	BG_GREY = BACKGROUND_INTENSITY,
    BG_WHITE = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
	BG_BRIGHT_WHITE = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
    
	// Red
	BG_DARK_RED = BACKGROUND_RED,
	BG_LIGHT_RED = BACKGROUND_RED | BACKGROUND_INTENSITY,
    
	// Green
	BG_DARK_GREEN = BACKGROUND_GREEN,
	BG_LIGHT_GREEN = BACKGROUND_GREEN | BACKGROUND_INTENSITY,
    
	// Blue
	BG_DARK_BLUE = BACKGROUND_BLUE,
	BG_LIGHT_BLUE = BACKGROUND_BLUE | BACKGROUND_INTENSITY,
    
	// Orange
	BG_DARK_YELLOW = BACKGROUND_RED | BACKGROUND_GREEN,
	BG_LIGHT_YELLOW = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY,
    
	// Cyan
	BG_DARK_AQUA = BACKGROUND_BLUE | BACKGROUND_GREEN,
	BG_LIGHT_AQUA = BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY,
    
	// Magenta
	BG_DARK_MAGENTA = BACKGROUND_RED | BACKGROUND_BLUE,
	BG_LIGHT_MAGENTA = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY
} Console_Colour;

#endif //CONSOLE_COLOURS_H