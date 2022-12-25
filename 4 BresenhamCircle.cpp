#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

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

void bresenhamDrawCircle(int xc, int yc, int r) {
    int x=0, y=r, d=3-(2*r);
    
    while (x<=y) {
        eightWaySymmetricPlot(xc,yc,x,y);  
        if(d < 0) {
            d = d + (4*x) + 6;
        } else {
            d = d + 4*(x-y) + 10;
            y--;
        }
        x++;
        delay(5);
    }
    
}
void main() {
    int gd=DETECT, gm, errorcode;
    int xc, yc, r;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    
    // read result of initialization
    errorcode = graphresult();

    if(errorcode  != grOk) { /*an error occured*/
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to exit");
        getch();
        exit(1); /*terminate with an error code*/
    } 

    printf("Enter the values of center coordinate of circle: ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the value of radius: ");
    scanf("%d", &r);
    bresenhamDrawCircle(xc, yc, r);
    
    getch();
    closegraph();
}
