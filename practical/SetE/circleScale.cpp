#include<stdio.h>
#include <graphics.h>

struct Circle {
    int x, y;
    int r;
};

void scaleCircle(struct Circle *c, double factor) {
    c->r *= factor;
}

int main() {
    struct Circle c = {320, 240, 50};
    double factor = 2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circle(c.x, c.y, c.r);
    scaleCircle(&c, factor);
    cleardevice();
    circle(c.x, c.y, c.r);
    getch();
    closegraph();
    return 0;
}