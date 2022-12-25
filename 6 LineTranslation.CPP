#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void translateLine(int P[][2], int T[]) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    //original line
    outtextxy(200, 100, "Original Line");
    line(P[0][0], P[0][1], P[1][0], P[1][1]);

    //calculating translated coordinates
    P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];

    //translated line
    setcolor(2);
    outtextxy(200+T[0], 100+T[1], "Translated Line");
    line(P[0][0], P[0][1], P[1][0], P[1][1]);

    getch();
    closegraph();
}

void main() {
    int P[2][2] = {100, 100, 200, 150};     //original coordinates
    int T[] = {50, 100};   //translation factor
    translateLine(P, T);
}