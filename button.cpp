#include<graphics.h>
#include<windows.h>
#include<iostream>

using namespace std;
int main()
{

    initwindow(4000,5000,"hh");
   // SetCursorPos(200,300);
    POINT CursorPosition;
     long click_x;
       long click_y;
    while (1)
        {

    if (GetAsyncKeyState(VK_LBUTTON))
    {
GetCursorPos(&CursorPosition);
circle(CursorPosition.x,CursorPosition.y,20);
 click_x=mousex();
 click_y=mousey();
delay(200);
if(click_x>=350 &&click_x<=786&&click_y>=445&&click_y<=510)
{
circle(400,550,20);
   // GetCursorPos(&cursorposition);
}

        }
        }
cleardevice();
getch();





    setfillstyle(SOLID_FILL,RED);
    circle(250,50,20);
    floodfill(250,50,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(250,50,20);
    floodfill(250,50,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(250,50,20);
    floodfill(250,50,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(250,50,20);
    floodfill(250,50,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(250,50,20);
    floodfill(250,50,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    circle(250,450,20);
    floodfill(250,450,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    circle(250,450,20);
    floodfill(250,450,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    circle(250,450,20);
    floodfill(250,450,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    circle(250,450,20);
    floodfill(250,450,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    circle(250,450,20);
    floodfill(250,450,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    circle(50,250,20);
    floodfill(50,250,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    circle(50,250,20);
    floodfill(50,250,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    circle(50,250,20);
    floodfill(50,250,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    circle(50,250,20);
    floodfill(50,250,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    circle(50,250,20);
    floodfill(50,250,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    circle(450,250,20);
    floodfill(450,250,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    circle(450,250,20);
    floodfill(450,250,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    circle(450,250,20);
    floodfill(450,250,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    circle(450,250,20);
    floodfill(450,250,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    circle(450,250,20);
    floodfill(450,250,WHITE);

setfillstyle(SOLID_FILL,BROWN);
bar(80,80,35,35);
floodfill(450,250,WHITE);
bar(420,420,465,465);
bar(35,420,80,465);
bar(420,35,465,80);
floodfill(450,250,WHITE);
}
