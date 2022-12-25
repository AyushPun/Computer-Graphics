#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main() {
    //auto detect graphic drivers & set graphic mode to highest resolution
    int gd=DETECT, gm, i;

    // variable declarations
    float dx, dy, step, x, y;
    int x1, x2, y1, y2; 

    //initialize the variables for graphics driver and mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    //white background color
    setbkcolor(WHITE);

    // initialize coordinate points of line
    x1=100, y1=100, x2=200, y2=300;
     
    // change in x and y coordinates
    dx = (float)(x2-x1);
    dy = (float)(y2-y1);

    // greater change will become step
    if(dx >= dy) {
        step = dx; 
    } else {
        step = dy;
    }

    //step to increament in x and y coordinates
    dx = dx/step;
    dy = dy/step;
    x=x1;
    y=y1;
    i = 1;
    while(i<=step) {
        // function will put pixel in given coordinates
        putpixel(x, y, RED);
        x += dx;
        y += dy;
        i++;
    }

    //holds the output console until key press
    getch();

    // unloads the graphics drivers
    closegraph(); 
}