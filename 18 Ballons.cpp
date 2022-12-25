#include <graphics.h>
#include <conio.h>

int main(int args,char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int x=getmaxx();
    int y=getmaxy()-50;
    int y_max=y;
    ellipse(x/2,y,0,360,40,80);
    arc(x/2,y+90,90,275,10);
    arc(x/2,y+110,275,90,10);
    while(!kbhit()){
        while(y>0){
            cleardevice();
            ellipse(x/2,y,0,360,40,80);
            arc(x/2,y+90,90,275,10);
            arc(x/2,y+110,275,90,10);
            delay(10);
            y=y-1;
        }
        while(y<y_max){
            cleardevice();
            ellipse(x/2,y,0,360,40,80);
            arc(x/2,y+90,90,275,10);
            arc(x/2,y+110,275,90,10);
            delay(10);
            y=y+1;
        }
    }
    getch();
    closegraph();
    return 0;
}

