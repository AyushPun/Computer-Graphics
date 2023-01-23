#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void translateCircle(int P[], int T[], int r) {
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    //original circle
    outtextxy(P[0]+100, P[1]-50, "Original Circle");
    circle(P[0], P[1], r);

    //calculating translated coordinates
    P[0] = P[0] + T[0];
    P[1] = P[1] + T[1];

    //translated circle
    setcolor(2);
    outtextxy(P[0]+100, P[1]-50, "Translated Circle");
    circle(P[0], P[1], r);
    getch();
    closegraph();
}

void main() {
    int P[2], T[2], r;
    printf("Input center coordinates of a circle : ");
    scanf("%d %d", &P[0], &P[1]); //original coordinates
    printf("Input radius of a circle : ");
    scanf("%d", &r);
    printf("Input translation factor : ");
    scanf("%d %d", &T[0], &T[1]); //translation factor
    translateCircle(P, T, r);
}