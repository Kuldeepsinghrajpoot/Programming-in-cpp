#include<graphics.h>

int main()
{

    int gd,gm;
    gd = DETECT;
    initgraph(&gd, &gm, "E:\\TC\\BGI");
    line(150, 150, 450, 150);
            line(150, 200, 450, 200);
    line(150, 250, 450, 250);
   getch();
    closegraph();
}



