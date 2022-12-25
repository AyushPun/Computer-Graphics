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
    double angle1 = 0, angle2 = 180, theta1, theta2;
    int i, a;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\TURBOC3\\bgi");
    a = 0;
    while (a <= 100) {
        theta1 = M_PI * angle1 / 180;
        theta2 = M_PI * angle2 / 180;
        cleardevice();
        drawcircles();
        x[0] = xc + r * cos(theta1);        // x on circle
        y[0] = yc + r * sin(theta1);        // y on circle
        x[1] = xc + (r + 15) * cos(theta2); // x outside of circle
        y[1] = yc + (r + 15) * sin(theta2); // y outside of circle
        x[2] = xc + (r - 15) * cos(theta1); // x inside circle
        y[2] = yc + (r - 15) * sin(theta1); // y inside circle

        angle1 += 20;
        angle2 -= 20;

        circle(x[1], y[1], 15); // for outer circle
        circle(x[2], y[2], 15); // for inner circle
        a = a + 1;
        delay(50);
    }
    getch();
    closegraph();
}