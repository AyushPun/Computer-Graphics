#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>
void main() {
    int X, Y, X3, Y3, gd = DETECT, gm, i, shx, shy, x, y, y3, x3, x1, y1, x2, y2, X1, Y1, X2, Y2;
    initgraph(&gd, &gm, "c:\\TURBOC3\\bgi");
    printf("Enter the co-ordinates to make rectangle:\n");
    scanf("%d%d%d%d%d%d%d%d", &x, &y, &x1, &y1, &x2, &y2, &x3, &y3);
    line(x, y, x1, y1);
    line(x, y, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    printf("Press 1 For Shearing related to x-axis:\n");
    printf("Press 2 For Shearing related to y-axis:\n");
    scanf("%d", &i);
    switch (i) {
    case 1: {
        printf("Enter Shearing Factor related to x-axis:\n");
        scanf("%d", &shx);
        X = x + (shx * y);
        Y = y;
        X1 = x1 + (shx * y1);
        Y1 = y1;
        line(X, Y, X1, Y1);
        line(X, Y, x2, y2);
        line(x2, y2, x3, y3);
        line(x3, y3, X1, Y1);
        break;
    }
    case 2: {
        printf("Enter Shearing Factor related to y-axis:\n");

        scanf("%d", &shy);
        X2 = x2;
        Y2 = y2 + (x2 * shy);
        X3 = x3;
        Y3 = y3 + (x3 * shy);
        line(x, y, x1, y1);
        line(x, y, X2, Y2);
        line(X2, Y2, X3, Y3);
        line(X3, Y3, x1, y1);
        break;
    }
    }
    getch();
    closegraph();
}