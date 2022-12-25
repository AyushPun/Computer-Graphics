#include<stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265
int main(int args, char const *argv[])
{
    int gd = DETECT, gm;
    double degree;
    double degVal;
    int i, j, k;
    int x1, y1, x2, y2, x3, y3, x4, y4;
    double A[3][3], B[3][3], C[3][3];
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    char o[] = "before";
    char t[] = "after";

    printf("Enter CO-ordinates of triangle: ");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    A[0][0] = x1;
    A[1][0] = y1;
    A[2][0] = 1;
    A[0][1] = x2;
    A[1][1] = y2;
    A[2][1] = 1;
    A[0][2] = x3;
    A[1][2] = y3;
    A[2][2] = 1;
    printf("Enter Rotation Angle: ");
    scanf("%lf", &degree);
    degVal = degree * PI / 180;
    B[0][0] = cos(degVal);
    B[0][1] = -sin(degVal);
    B[0][2] = 0;
    B[1][0] = sin(degVal);
    B[1][1] = cos(degVal);
    B[1][2] = 0;
    B[2][0] = 0;
    B[2][1] = 0;
    B[2][2] = 1;

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    C[i][j] = 0;
	    for (k = 0; k < 3; k++)
		C[i][j] = C[i][j] + B[i][k] * A[k][j];
	}
    }
    // draw triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    outtextxy(x1, y1, o);
    x1 = C[0][0];
    y1 = C[1][0];
    x2 = C[0][1];
    y2 = C[1][1];
    x3 = C[0][2];
    y3 = C[1][2];
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    outtextxy(x1, y1, t);
    getch();
    closegraph();
    return 0;
}
