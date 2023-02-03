#include<iostream>
using namespace std;
#include<windows.h>
#include<graphics.h>
#include<mmsystem.h>
void e();
void y();
void n();
void m();
void z();
    class a{
    public:
        void display()
        {
			line(50,50,450,50);//line --//
			line(50,450,450,450);//bottom line//
			line(50,50,50,450);//left line
			line(450,50,450,450);//right line
			line(250,50,250,450); //top line /2
			line(50,250,450,250);
			line(50,150,450,150);
			line(150,50,150,450);
			line(50,350,450,350);
			line(350,50,350,450);
			line(250,50,50,250);
			line(450,250,250,450);
			line(250,450,50,250);
			line(250,50,450,250);
			line(50,50,450,450);
			line(50,450,450,50);
			rectangle(450,430,430,450);
rectangle(450,330,430,350);
rectangle(450,230,430,250);
rectangle(450,130,430,150);
rectangle(250,430,230,450);
rectangle(150,430,130,450);
rectangle(450,30,430,50);
rectangle(50,30,30,50);
rectangle(150,30,130,50);
rectangle(250,30,230,50);
rectangle(350,30,330,50);
rectangle(350,430,330,450);
rectangle(250,430,230,450);
rectangle(150,430,130,450);
rectangle(50,430,30,450);
rectangle(350,330,330,350);
rectangle(250,330,230,350);
rectangle(150,330,130,350);
rectangle(50,330,30,350);
rectangle(350,230,330,250);
rectangle(230,230,250,250);
rectangle(130,230,150,250);
rectangle(30,230,50,250);
rectangle(350,130,330,150);
rectangle(250,130,230,150);
rectangle(150,130,130,150);
rectangle(50,130,30,150);
rectangle(670,70,700,90);
    rectangle(670,100,700,120);
    rectangle(670,130,700,150);
    rectangle(670,160,700,180);
    outtextxy(670,190,"yes or no");
    rectangle(670,193,692,205);
    rectangle(712,193,730,205);
     rectangle(860,50,890,70);
    outtextxy(870,52,"X");
        }
};
int main()
{
initwindow(900,900," game",140,140);
 n();
 getch();
}
void y(){
    a b;
    b.display();
	//POINT CursorPosition;
   // floodfill(50,50,WHITE);
	int click_x;
	int click_y;
	int pt=1,p=0,s,w=0,i=100;
        {
			while (pt<=1)
                        {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			//GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			{
			       if(click_x>=130&&click_x<=150&&click_y>=30&&click_y<=50){
                         PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);

                        fillellipse(150,50,20,20);
                        setfillstyle(SOLID_FILL,YELLOW);
                        pt=2+pt;

                        outtext("130");
                           m();
                         b.display();
						delay(200);
						getch();

                    }
			    }
           }
       }
    }
}
void e()
{
  a c;
  c.display();
  //  POINT CursorPosition;
	int click_x;
	int click_y;
	int ppt=0,i=100;
    while (ppt<=2)
                        {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			//GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			{
                     if(click_x>=30&&click_x<=50&&click_y>=30&&click_y<=50){
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(150-i,50,20,20);
                        ppt=2+ppt;
                        z();
						delay(200);
						outtext("30");
                        c.display();
                        	getch();

                    }
			   }
		  }
     }
}
    void n(){
    a b;
    b.display();
	//POINT CursorPosition;
	int click_x;
	int click_y;
	int pt=1,p=0,s,w=0,i=100;
        {
			while (pt<=1)
                        {
		if (GetAsyncKeyState(VK_LBUTTON))
            {
			//GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			{
			     if(click_x>=230&&click_x<=250&&click_y>=30&&click_y<=50){
                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(350-i,50,20,20);
                        pt=2+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						outtext("230");
						y();
					    b.display();
					    	getch();

			         }
                 }
             }
         }
    }
}
 void m(){
    a b;
    b.display();
	//POINT CursorPosition;
	setfillstyle(SOLID_FILL,RED);

    floodfill(50,50,WHITE);
	int click_x;
	int click_y;
	int pt=1,p=0,s,w=0,i=100;
        {
			while (pt<=1)
                        {
		if (GetAsyncKeyState(VK_LBUTTON))
            {
			//GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			{
			     if(click_x>=330&&click_x<=350&&click_y>=30&&click_y<=50)
                    {
                        delay(200);
                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(450-i,50,20,20);
                        pt=2+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
                        outtext("330");
                        e();
						b.display();
							getch();

			        }
			    }
           }
       }
   }
}
 void z(){
    a b;
    b.display();
	//POINT CursorPosition;
	setfillstyle(SOLID_FILL,RED);
    floodfill(50,50,WHITE);
	int click_x;
	int click_y;
	int pt=1,p=0,s,w=0,i=100;
        {
			while (pt<=1)
                        {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			//GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			{
			     if(click_x>=430&&click_x<=450&&click_y>=30&&click_y<=50){
                        setfillstyle(SOLID_FILL,YELLOW);
                        delay(200);
                        cleardevice();
                        fillellipse(150-i,150,20,20);
                        pt=2+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
                        outtext("430");
						b.display();
							getch();

			        }
                }
            }
       }
   }
}
