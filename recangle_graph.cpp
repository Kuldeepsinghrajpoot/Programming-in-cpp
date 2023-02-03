#include<graphics.h>
int main()
{
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"");
    while(1){
    for(i=5;i<500;i++){

    delay(1);
    rectangle(100,120,0+i,210);
    cleardevice();
    }
    }
    closegraph();
    getch();
}
