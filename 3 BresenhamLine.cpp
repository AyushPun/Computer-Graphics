    #include<stdio.h>
    #include<graphics.h>  
    #include<conio.h>

    void bresenhamDrawLine(int x1, int y1, int x2, int y2) {
        int dx, dy, p, x, y;
        dx = x2 - x1;
        dy = y2 - y1;
        x=x1;
        y=y1;
        p = 2 * dx - dy;
        while (x <= x2)
        {
            putpixel(x, y);
            x++;
            if(p<0) {
                p = p + 2*dy;
            } else {
                p = p + 2*dy - 2*dx;
                y++;
            }
        }
        
    }

    void main() {
        int gd=DETECT, gm, x1, y1, x2, y2;
        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        printf("Input coordinates of first point : ");
        scanf("%d %d", &x1, &y1);
        printf("Input coordinates of second point : ");
        scanf("%d %d", &x2, &y2);
        bresenhamDrawLine(x1, y1, x2, y2);
        getch();
        closegraph();
    }