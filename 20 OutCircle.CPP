#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>
int xc = 225, yc = 200, r = 50;
int x[3], y[3];
void drawcircles() {
    setcolor(YELLOW);
    circle(xc, yc, r);
}
void main() {
    double angle = 0, theta;
    int i, a;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\TURBOC3\\bgi");
    a = 0;
    while (a <= 100) {
        theta = M_PI * angle / 180;
        cleardevice();
        drawcircles();
        x[0] = xc + r * cos(theta);        // x on circle
        y[0] = yc + r * sin(theta);        // y on circle
        x[1] = xc + (r + 15) * cos(theta); // x outside of circle
        y[1] = yc + (r + 15) * sin(theta); // y outside of circle
        x[2] = xc + (r - 15) * cos(theta); // x inside circle
        y[2] = yc + (r - 15) * sin(theta); // y inside circle
        angle += 20;
        circle(x[2], y[2], 15); // for outer circle
        a = a + 1;
        delay(50);
    }
    getch();
    closegraph();
}