#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    float r, scale = 2;

    initgraph(&gd, &gm, "c:\\TURBOC3\\bgi");

    printf("Enter the radius :");
    scanf("%f", &r);
    setcolor(5);
    circle(150, 150, r);
    r *= scale;
    setcolor(2);
    circle(150, 150, r);

    getch();
}
