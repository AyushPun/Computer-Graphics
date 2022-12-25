#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>
int main(int args, char const *argv[])
{
    int gd = DETECT, gm;
    int midx, midy, k = 1, b = 60, a = 60;
    int xradius, yradius = 60;
    initgraph(&gd, &gm, (char *)"");
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    

    while (!kbhit())
    {
        for (a = 60; a >= 0; a = a - 1)
        {
            cleardevice();
            xradius = a;
            if (a == 0)
            {
                k = k + 1;
                for (b = a; b <= 60; b++)
                {
                    cleardevice();
                    xradius = b;
                    if (k % 2 == 1)
                    {
                        outtextxy(midx - 10, midy - 90, "TAIL");
                        setfillstyle(4, 1);
                    }
                    else
                    {
                        outtextxy(midx - 10, midy - 90, "HEAD");
                        setfillstyle(5, 3);
                    }
                    if (b > 0 && b < 57)
                    {

                        int xradius1 = b - 3;
                        fillellipse(midx, midy, xradius1 + 1, yradius);
                        fillellipse(midx, midy, xradius1 + 2, yradius);
                        fillellipse(midx, midy, xradius1 + 3, yradius);
                    }
                    

                    fillellipse(midx, midy, xradius, yradius);
                    delay(10);
                }
            }
            if (a < 57)
            {
                int xradius1 = a + 3;
                fillellipse(midx, midy, xradius1 - 1, yradius);
                fillellipse(midx, midy, xradius1 - 2, yradius);
                fillellipse(midx, midy, xradius1 - 3, yradius);
            }
            if (k % 2 == 1)
            {
                outtextxy(midx - 10, midy - 90, "TAIL");
                setfillstyle(7, 1);
            }
            else
            {
                outtextxy(midx - 10, midy - 90, "HEAD");
                setfillstyle(5, 3);
            }
            
            fillellipse(midx, midy, xradius, yradius);
            rectangle(230, 300, 400, 320);
            rectangle(230, 300, 250, 400);
            rectangle(380, 300, 400, 400);
            delay(10);
        }
    }
    getch();
    closegraph();
    return 0;
}



