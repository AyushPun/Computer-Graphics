#include <stdio.h>
#include<math.h>
#include <graphics.h>
#include <conio.h>

void eightWaySymmetricPlot(int xc,int yc,int x,int y)  {
    putpixel(x+xc,y+yc,RED);
    putpixel(x+xc,-y+yc,YELLOW);
    putpixel(-x+xc,-y+yc,GREEN);
    putpixel(-x+xc,y+yc,YELLOW);
    putpixel(y+xc,x+yc,12);
    putpixel(y+xc,-x+yc,14);
    putpixel(-y+xc,-x+yc,15);
    putpixel(-y+xc,x+yc,6);
}

void main() {
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    int xc, xy, x, y;
    float p, r;
    printf("--Input center and radius of a circle--\n");
    printf("Enter Center(xc, yc) : ");
    scanf("%d %d", &xc, &yc);
    printf("Enter radius 'r' : ");
    scanf("%f", &r);
    x=0;
    y=r
    p=(5/4)-r;
    do{
      eightWaySymmetricPlot(xc, yc, x, y);
      if(p<0){
        p += (2*x)+1;  
      } else {
        p += (2*(x-y))+1;
        y--;
      }
      x++;
    }while(x,y);
    if(x==y) {
      eightWaySymmetricPlot(xc, yc, x, y);
    }
    getch();
    closegraph();
}