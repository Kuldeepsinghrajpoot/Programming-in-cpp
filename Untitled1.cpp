#include<iostream>
using namespace std;
#include"windows.h"
#include<graphics.h>
#include<mmsystem.h>
void clr();
void sal();
void cal();
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


line(50,50,450,50);
line(50,450,450,450);//bottom line//
			line(50,50,50,450);//left line
			line(450,50,450,450);
//circle(350,450,20);
rectangle(350,430,330,450);

//circle(250,450,20);
rectangle(250,430,230,450);

//circle(150,450,20);
rectangle(150,430,130,450);

//circle(50,450,20);
rectangle(50,430,30,450);

//circle(350,350,20);
rectangle(350,330,330,350);

//circle(250,350,20);
rectangle(250,330,230,350);

//circle(150,350,20);
rectangle(150,330,130,350);

//circle(50,350,20);
rectangle(50,330,30,350);

//circle(350,250,20);
rectangle(350,230,330,250);


//circle(250,250,20);
rectangle(230,230,250,250);

//circle(150,250,20);
rectangle(130,230,150,250);

//circle(50,250,20);
rectangle(30,230,50,250);


//circle(350,150,20);
rectangle(350,130,330,150);

//circle(250,150,20);
rectangle(250,130,230,150);

//circle(150,150,20);
rectangle(150,130,130,150);

//circle(50,150,20);
rectangle(50,130,30,150);

        }
    };

class r{
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


line(50,50,450,50);
line(50,450,450,450);//bottom line//
			line(50,50,50,450);//left line
			line(450,50,450,450);
//circle(350,450,20);
rectangle(350,430,330,450);

//circle(250,450,20);
rectangle(250,430,230,450);

//circle(150,450,20);
rectangle(150,430,130,450);

//circle(50,450,20);
rectangle(50,430,30,450);

//circle(350,350,20);
rectangle(350,330,330,350);

//circle(250,350,20);
rectangle(250,330,230,350);

//circle(150,350,20);
rectangle(150,330,130,350);

//circle(50,350,20);
rectangle(50,330,30,350);

//circle(350,250,20);
rectangle(350,230,330,250);


//circle(250,250,20);
rectangle(230,230,250,250);

//circle(150,250,20);
rectangle(130,230,150,250);

//circle(50,250,20);
rectangle(30,230,50,250);


//circle(350,150,20);
rectangle(350,130,330,150);

//circle(250,150,20);
rectangle(250,130,230,150);

//circle(150,150,20);
rectangle(150,130,130,150);

//circle(50,150,20);
rectangle(50,130,30,150);
        }
};
int main()
{
 //fillellipse(450,450,20,20);
  clr();
   //cal(),sal();
}
void cal()
{

    r p;
    p.display();
//setfillstyle(SOLID_FILL,BLUE);
//fillellipse(350,450,20,20);

	POINT CursorPosition;
	int click_x;
	int click_y;
    int pt=1;
                    while (pt<=2)
                        {

		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();

               for(int i=0;i<200;i+=100)
			{
			     if(click_x>=130&&click_x<=150&&click_y>=430&&click_y<=450){
                        setfillstyle(SOLID_FILL,BLUE);
                         fillellipse(450,350-i,20,20);
                    // p.display();
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);


                       pt=2+pt;
                       outtextxy(70,70,"second class first if");
                       swapbuffers();
                       cleardevice();
                       p.display();
			       }


                }
           }
      }
//}
//void sal()
{
a b;
b.display();
	POINT CursorPosition;
	int click_x;
	int click_y;
	int tep=0;
	while (tep<=1) {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			int t=100;

			{   for(int n=0;n<200;n+=100)
                    {
					if(click_x>=330&&click_x<=350&&click_y>=430&&click_y<=450) {
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(450,350+n,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=2+tep;
                        swapbuffers();
                        cleardevice();
                        b.display();

                   }
                }
           }
	   }
    }
}

a b;
b.display();
//	POINT CursorPosition;
	//int click_x;
	//int click_y;
	int tep=0;
	while (tep<=1) {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			int t=100;

			{   for(int n=0;n<200;n+=100)
                    {
					if(click_x>=330&&click_x<=350&&click_y>=430&&click_y<=450) {
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(450,350-n,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=2+tep;
                        swapbuffers();
                        cleardevice();
                        b.display();
                   }  
               
                }
        	}
       }
   }
void sal()
{
   cleardevice();
  a b;
b.display();
	POINT CursorPosition;
	int click_x;
	int click_y;
	int tep=2;
	while (tep<=2) {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			int t=100;

			{   for(int n=0;n<200;n+=100)
                    {
					if(click_x>=330&&click_x<=350&&click_y>=330&&click_y<=350) {
                           // if(330!=350)
                           {
                        setfillstyle(SOLID_FILL,RED);
                        fillellipse(450,250-n,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=3+tep;
                            }
                        swapbuffers();
                        //cleardevice();
                        b.display();
					}

           }
       }
	}
 }
 //cleardevice();
//  a b;

b.display();
int tp=0;
 	while (tp<=1) {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			//int t=100;

			{   for(int n=0;n<200;n+=100)
                    {
					if(click_x>=330&&click_x<=350&&click_y>=330&&click_y<=450) {
                          //  if(330!=350)
                          {
                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(450,150-n,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=2+tep;
            }
                        swapbuffers();
                       // cleardevice();
                        b.display();
					}

           }
     }
	}
 }
}

void clr()
{
 initwindow(4000,5000,"k");
 fillellipse(450,250,20,20);
   //fillellipse(50,50,20,20);
   while(1)
   {
    for(int j=0;j<2;j++)
    {
        if(j==0)
        {

     cal();

        }
     // if(j==1)
            {
   sal();
            }
    }

   }
     getch();
}
///@fixme[DONE] Fix swap buffer problem in about function

