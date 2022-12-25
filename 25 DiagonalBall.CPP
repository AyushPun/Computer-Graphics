#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main() {
    int gd=DETECT, gm, i, j, xmid, ymid;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    xmid=getmaxx()/2;
    ymid=getmaxy()/2;
    i = xmid;
    j = 50;
    while(!kbhit()) {
	for(; j<=ymid; j++, i--) {
		if(kbhit())
			break;
		cleardevice();
		setcolor(random(i));
		circle(i, j, 50);
		delay(5);
	}
	for(; i<=xmid; j++, i++) {
		if(kbhit())
			break;
		cleardevice();
		setcolor(random(i));
		circle(i, j, 50);
		delay(5);
	}
	for(; j>=ymid; j--, i++) {
		if(kbhit())
			break;
		setcolor(random(i));
		cleardevice();
		circle(i, j, 50);
		delay(5);
	}
	for(; i>=xmid; j--, i--) {
		if(kbhit())
			break;
		setcolor(random(i));
		cleardevice();
		circle(i, j, 50);
		delay(5);
	}
       }
    getch();
    closegraph();
}