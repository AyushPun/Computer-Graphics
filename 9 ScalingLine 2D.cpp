#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    float x0, y0, x1, y1, sx = 2, sy = 2;

    initgraph(&gd, &gm, "c:\\TURBOC3\\bgi");

    printf("Enter the starting point coordinates:");
    scanf("%f %f", &x0, &y0);
    printf("Enter the end point coordinates:");
    scanf("%f %f", &x1, &y1);
    setcolor(5);
    line(x0, y0, x1, y1);
    x0 *= sx;
    x1 *= sx;
    y0 *= sy;
    y1 *= sy;

    setcolor(7);
    line(x0, y0, x1, y1);

    getch();
}
