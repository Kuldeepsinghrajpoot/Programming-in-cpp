#include<graphics.h>
int main()
{
    int gm=DETECT,gt;
    initgraph(&gm,&gt, " ");
    line(150,200,250,200);
    getch();
    closegraph();

}
