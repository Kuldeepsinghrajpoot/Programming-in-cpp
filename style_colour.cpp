#include<graphics.h>
int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm," ");
    setbkcolor(BLUE);
    getch();
    closegraph();
}
