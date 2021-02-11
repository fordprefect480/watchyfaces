#include "Watchy_Dot.h"
#include <Fonts/FreeMonoBold12pt7b.h>

WatchyDot::WatchyDot(){} //constructor

void WatchyDot::drawWatchFace(){
    display.fillScreen(GxEPD_WHITE);
    display.drawBitmap(0, 0, dot, DISPLAY_WIDTH, DISPLAY_HEIGHT, GxEPD_BLACK);
    display.setTextColor(GxEPD_BLACK);
    display.setFont(&FreeMonoBold12pt7b);
    display.setCursor(130, 50);
    if(currentTime.Hour < 10){
        display.print('0');
    }
    display.print(currentTime.Hour);
    display.print(':');
    if(currentTime.Minute < 10){
        display.print('0');
    }    
    display.print(currentTime.Minute);
}
