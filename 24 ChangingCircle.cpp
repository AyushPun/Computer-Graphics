#include <graphics.h>
#include <conio.h>

int main(int args,char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int x=getmaxx();
    int y=getmaxy();
    int y_max=y;
    int r=10;
    circle(x/2,y/2,r);
    while(!kbhit()){
        while(r<y/2){
            cleardevice();
            circle(x/2,y/2,r);
            delay(10);
            r=r+1;
        }
        while(r>10){
            cleardevice();
            circle(x/2,y/2,r);
            delay(10);
           r=r-1;
        }
    }
    getch();
    closegraph();
    return 0;
}
