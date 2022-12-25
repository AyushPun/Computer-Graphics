#include <iostream.h>
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
void dda(int x1, int y1, int x2, int y2) {
    x1 *= 4, y1 *= 4, x2 *= 4, y2 *= 4;
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int step;
    if (dx >= dy)
        step = dx;
    else
        step = dy;
    if (dx > 0)
        dx = dx / step;
    if (dy > 0)
        dy = dy / step;
    int x = x1;
    int y = y1;
    int i = 1;
    while (i <= step) {
        putpixel(x, y, 5);
        x = x + dx;
        y = y + dy;
        i = i + 1;
    }
}
void main() {
    int x, y, x1, y1, x2, y2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\TURBOC3\\bgi");
    cleardevice();
    dda(20, 30, 80, 30);
    dda(80, 30, 80, 50);
    dda(20, 30, 20, 50);
    dda(20, 50, 80, 50);
    getch();
    closegraph();
}