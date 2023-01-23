    #include<stdio.h>
    #include<graphics.h>
    #include<dos.h>  
    #include<conio.h>

    void main() {
        int gd=DETECT, gm, x1, y1, x2, y2, dx, dy, p, i;
        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        printf("Input coordinates of first point : ");
        scanf("%d %d", &x1, &y1);
        printf("Input coordinates of second point : ");
        scanf("%d %d", &x2, &y2);
        dx = x2-x1;
        dy = y2-y1;
        p = 2*dy-dx;
        putpixel(x1, y1, 3);
        for (i = 0; i < dx; i++) {
            if(p<0) {
                p = p + 2*dy;
            } else {
                y1++;
                p += 2*dy - 2*dx;
            }
            x1++;
            putpixel(x1, y1, 3);
            delay(50);
        }
        getch();
        closegraph();
    }
