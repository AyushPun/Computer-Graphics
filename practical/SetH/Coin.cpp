#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
void coin()
{
    while (!kbhit())
    {
        for (int i = 100; i >= 2; i--)
        {
            fillellipse(210, 110, i, 100);
            setfillstyle(7, 7);
            delay(30);
            cleardevice();
            outtextxy(200, 250, "Heads");
        }
        for (int j = 2; j <= 100; j++)
        {
            ellipse(210, 110, 0, 360, j, 100);
            setfillstyle(7, 7);
            delay(30);
            cleardevice();
            outtextxy(200, 250, "Tails");
        }
    }
}
int main(int args, char const *argv[])
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, (char *)"");
    coin();
    getch();
    closegraph();
    return 0;
}