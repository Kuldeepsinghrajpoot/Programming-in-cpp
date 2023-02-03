#include<graphics.h>
#include<windows.h>
int main()
{
    int gm,gd;
    gm=DETECT;
    initgraph(&gm,&gd,"");
POINT cursorPosition;
while(1){
GetCursorPos(&cursorPosition);
circle(cursorPosition.x,cursorPosition.y,40);
delay(100);
//cleardevice();



    getch();
}
}
