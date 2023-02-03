#include<graphics.h>
int main()
{
    int gm=DETECT,gt;
    initgraph(&gm,&gt, " ");
    line(150,200,250,300);
    getch();
    closegraph();
  return(0);
}
