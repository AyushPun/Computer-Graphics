#include <iostream.h> 
#include <stdio.h>
#include <graphics.h>
#include<conio.h> 

int main(int args, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    circle(200, 200, 50);
    line(175, 190, 185, 190);
    line(215, 190, 225, 190);
    line(200, 195, 200, 205);
    line(190, 225, 210, 225);

    line(250, 350, 300, 300);
    line(300, 300, 350, 350);
    line(250, 350, 250, 450);
    line(350, 350, 350, 450);
    line(250, 450, 350, 450);
    getch();
    closegraph();
    return 0;
}

// hut
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); /* Draw Hut */
    setcolor(WHITE);
    rectangle(150, 180, 250, 300);
    rectangle(250, 180, 420, 300);
    rectangle(180, 250, 220, 300);
    line(200, 100, 150, 180);
    line(200, 100, 250, 180);
    line(200, 100, 370, 100);
    line(370, 100, 420, 180); /* Fill colours */
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(SLASH_FILL, BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);
    getch();
    closegraph();
    return 0;
}
