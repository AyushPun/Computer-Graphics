 #include <graphics.h>
void ellipse(int xc, int yc, int rx, int ry){
    int gm = DETECT, gd;
    int x, y, p;

    initgraph(&gm, &gd, (char *)"");
    x = 0;
    y = ry;
    p = (ry * ry) - (rx * rx * ry) + ((rx * rx) / 4);
    while ((2 * x * ry * ry) < (2 * y * rx * rx)){
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        if (p < 0){
            x = x + 1;
            p = p + (2 * ry * ry * x) + (ry * ry);
        }
        else{
            x = x + 1;
            y = y - 1;
            p = p + (2 * ry * ry * x + ry * ry) - (2 * rx * rx * y);
        }
    }
    p = ((float)x + 0.5) * ((float)x + 0.5) * ry * ry + (y - 1) * (y-1) * rx * rx - rx * rx * ry * ry;
    while (y >= 0){
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        if (p > 0){
            y = y - 1;
            p = p - (2 * rx * rx * y) + (rx * rx);
        }
        else{
            y = y - 1;
            x = x + 1;
            p = p + (2 * ry * ry * x) - (2 * rx * rx * y) - (rx * rx);
        }
    }
}
int main(int args, char const *argv[]){
    int xc=250, yc=150, rx=100, ry=70;
    ellipse(xc, yc, rx, ry);
    getch();
    closegraph();
    return 0;
}

