
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
void main() {
	int gd = DETECT, gm;
	int midx, midy;
	int i;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;
	while (!kbhit()) {
		for (i = 0; i <= 360; i++) {
			if (kbhit())
				break;
			setfillstyle(1, 2);
			pieslice(midx, midy, 180 + i, 210 + i, 150); // Incrementing starting and ending angles by adding i
			floodfill(midx, midy, 15);
			setfillstyle(1, 3);
			pieslice(midx, midy, 110 + i, 140 + i, 150);
			floodfill(midx, midy, 15);
			setfillstyle(1, 4);
			pieslice(midx, midy, 0 + i, 30 + i, 150);
			floodfill(midx, midy, 15);
			setfillstyle(1, 1);
			pieslice(midx, midy, 80 + i, 50 + i, 150);
			floodfill(midx, midy, 15);
			setfillstyle(1, 5);
			pieslice(midx, midy, 290 + i, 320 + i, 150);
			floodfill(midx, midy, 15);
			setfillstyle(1, 6);
			pieslice(midx, midy, 235 + i, 265 + i, 150);
			floodfill(midx, midy, 15);
			delay(10);
			cleardevice(); 
		}
	}
	getch();
	closegraph();
}
