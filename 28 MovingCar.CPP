#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
void main() {
    int gd = DETECT, gm, i = 0, j;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    while (i < getmaxx() && !kbhit()) {
		for (i = 0; i <= getmaxx(); i = i + 10) {
			if(kbhit())
			break;
			setcolor(2);
			// These lines for bonnet and
			// body of car
			line(0 + i, 300, 210 + i, 300);
			line(50 + i, 300, 75 + i, 270);
			line(75 + i, 270, 140 + i, 270);
			line(140 + i, 270, 165 + i, 300);
			line(0 + i, 300, 0 + i, 330);
			line(210 + i, 300, 210 + i, 330);
			// For left wheel of car
			circle(65 + i, 330, 15);
			circle(65 + i, 330, 2);
			// For right wheel of car
			circle(145 + i, 330, 15);
			circle(145 + i, 330, 2);
			// Line left of left wheel
			line(0 + i, 330, 50 + i, 330);
			// Line middle of both wheel
			line(80 + i, 330, 130 + i, 330);
			// Line right of right wheel
			line(210 + i, 330, 160 + i, 330);
			delay(100);
			// To erase previous drawn car
			cleardevice();
		}
		if (i > getmaxx()) {
			i = 0;
		}
    }
    getch();
    closegraph();
}