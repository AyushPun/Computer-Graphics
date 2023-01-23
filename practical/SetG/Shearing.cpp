#include <graphics.h>
#include <math.h>

void shear(int x1, int y1, float shx, float shy)
{
    int x2 = x1 + (int)(y1 * shx);
    int y2 = y1 + (int)(x1 * shy);
    line(x1, y1, x2, y2);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1 = 100, y1 = 100;
    shear(x1, y1, 0.5, 0);
    getch();
    cleardevice();
    shear(x1, y1, 0, 0.5);
    getch();
    closegraph();
    return 0;
}