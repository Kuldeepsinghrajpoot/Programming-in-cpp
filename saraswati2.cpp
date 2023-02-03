#include<iostream>
using namespace std;
#include<windows.h>
#include<graphics.h>
//#include<mmsystem.h>
#include<ctype.h>
#include<conio.h>
void setting();
void close();
void clr();
void sal();
void cal();
void pawan();
void pawan_red();
void pawan_blue();
void pawan_yellow();
void pawan_green();
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
rectangle(778,10,840,30);
outtextxy(782,12,"Settings");
        }
    };
int main()
{
  clr();
  a b;
  b.display();
  return 0;
}

//first BLUE
void cal()
{
    a b;
    b.display();
	POINT CursorPosition;
	int click_x;
	int click_y;
    int i=100;
    int pt=1;
                    while (pt<=1)
                        {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();

			{
			      if(click_x>=430&&click_x<=450&&click_y>=130&&click_y<=150){
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(550-i,150,20,20);
                       // circle(450-i,150,20);
                        pt=1+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        b.display();
                    }
			      else if(click_x>=330&&click_x<=350&&click_y>=130&&click_y<=150){
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(450-i,150,20,20);
                       // circle(450-i,150,20);
                        pt=1+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        b.display();
                    }
					else
                    {
                        if
                            (click_x>=230&&click_x<=250&&click_y>=130&&click_y<=150)

                             {
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(350-i,150,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        pt=1+pt;
                        b.display();
                   }
					else
                    {
                        if(click_x>=130&&click_x<=150&&click_y>=130&&click_y<=150) {
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(250-i,150,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        pt=1+pt;

                        b.display();
                        }
                         else
                         {
                            if(click_x>=30&&click_x<=50&&click_y>=130&&click_y<=150){
                        //circle(150-i,350,20);
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(150-i,150,20,20);
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						//swapbuffers();
						//cleardevice();
						 pt=1+pt;
						 b.display();
                         }
                    }
                }
            }
        }
    }
  }
}
// first red
void sal()
{
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
			int t=100,n=100;
			{
                    if(click_x>=430&&click_x<=450&&click_y>=230&&click_y<=250){
                        setfillstyle(SOLID_FILL,RED);
                        fillellipse(550-n,250,20,20);
                        tep=1+tep;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						//swapbuffers();
						//cleardevice();
						 b.display();
                    }
					   else if(click_x>=330&&click_x<=350&&click_y>=230&&click_y<=250){
                        setfillstyle(SOLID_FILL,RED);
                        fillellipse(450-n,250,20,20);
                        tep=1+tep;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						//swapbuffers();
						//cleardevice();
						 b.display();
                    }
					else
                    {
                        if(click_x>=230&&click_x<=250&&click_y>=230&&click_y<=250) {

                    {
                        setfillstyle(SOLID_FILL,RED);
                        fillellipse(350-n,250,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=1+tep;
                    }
                        b.display();
					}
					else
                    {if(click_x>=130&&click_x<=150&&click_y>=230&&click_y<=250) {

                          {
                        setfillstyle(SOLID_FILL,RED);
                        fillellipse(250-n,250,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=1+tep;
                         }
                       // swapbuffers();
                       // cleardevice();
                        b.display();
                     }
                     if(click_x>=30&&click_x<=50&&click_y>=230&&click_y<=250) {

                          {
                        setfillstyle(SOLID_FILL,RED);
                        fillellipse(150-n,250,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=1+tep;
                         }
                       // swapbuffers();
                       // cleardevice();
                        b.display();
                     }
                   }
                }
			}
        }
    }
}
//yellow first and now not using this
void pawan(){
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
			int t=100,n=100;
			if(click_x>=430&&click_x<=450&&click_y>=330&&click_y<=350){
                        //circle(450-t,350,20);
						setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(550-n,350,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						//swapbuffers();
						//cleardevice();
						 b.display();
						 tep=1+tep;
                    }
			else if(click_x>=330&&click_x<=350&&click_y>=330&&click_y<=350){
                        //circle(450-t,350,20);
						setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(450-n,350,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						//swapbuffers();
						//cleardevice();
						 b.display();
						 tep=1+tep;
                    }
                    else if(click_x>=230&&click_x<=250&&click_y>=330&&click_y<=350){
                       // circle(350-t,350,20);
                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(350-n,350,20,20);
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						//swapbuffers();
						//cleardevice();
						 b.display();
						 tep=1+tep;
                    }
                    else if(click_x>=130&&click_x<=150&&click_y>=330&&click_y<=350){
                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(250-n,350,20,20);
                        //circle(250-t,350,20);
                        //rectangle(250,330,230,350);
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        tep=1+tep;
						//swapbuffers();
						//cleardevice();
						 b.display();
                    }
                    else if(click_x>=30&&click_x<=50&&click_y>=330&&click_y<=350){
                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(150-n,350,20,20);
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						//swapbuffers();
						//cleardevice();
						 tep=1+tep;
						 b.display();
                 }
           }
     }
}
void pawan_blue()
{
    a b;
    b.display();
	POINT CursorPosition;
	int click_x;
	int click_y;
    int i=100;
    int pt=1;
                    while (pt<=1)
                        {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();

			{
			      if(click_x>=30&&click_x<=50&&click_y>=30&&click_y<=50){
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(150-i,50,20,20);

                        pt=1+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 b.display();
                    }
                   else if(click_x>=130&&click_x<=150&&click_y>=30&&click_y<=50){
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(250-i,50,20,20);

                        pt=1+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        b.display();
                    }
                     else if(click_x>=230&&click_x<=250&&click_y>=30&&click_y<=50){
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(350-i,50,20,20);

                        pt=1+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						 b.display();
                    }
                    else if(click_x>=330&&click_x<=350&&click_y>=30&&click_y<=50){
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(450-i,50,20,20);

                        pt=1+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        b.display();
                    }
                     else if(click_x>=430&&click_x<=450&&click_y>=30&&click_y<=50){
                        setfillstyle(SOLID_FILL,BLUE);
                        fillellipse(550-i,50,20,20);

                        pt=1+pt;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        b.display();
                    }
			}
		}
    }
}
void pawan_yellow()
{
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
			int t=100,n=100;
			  if(click_x>=30&&click_x<=50&&click_y>=30&&click_y<=50){

                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(150-t,50,20,20);
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 tep=1+tep;
						 b.display();
                         }
                       else if(click_x>=30&&click_x<=50&&click_y>=130&&click_y<=150){

                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(150-t,150,20,20);
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 tep=1+tep;
						 b.display();
                         }
			else if(click_x>=30&&click_x<=50&&click_y>=230&&click_y<=250) {

                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(150-t,250,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=1+tep;
                        b.display();
		}
			else if(click_x>=30&&click_x<=50&&click_y>=330&&click_y<=350){
                        setfillstyle(SOLID_FILL,YELLOW);
                        fillellipse(150-t,350,20,20);
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 tep=1+tep;
						 b.display();
                    }
                     else if(click_x>=30&&click_x<=50&&click_y>=430&&click_y<=450){

						setfillstyle(SOLID_FILL,YELLOW);
						fillellipse(150-t,450,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 b.display();
						 tep=1+tep;;
                    }

		   }
    }
}
void pawan_red(){
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
			int t=100,n=100;
                    {
                        if(click_x>=430&&click_x<=450&&click_y>=430&&click_y<=450) {

						setfillstyle(SOLID_FILL,RED);
						fillellipse(550-t,450,20,20);
                        tep=1+tep;;
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 b.display();
						 tep=1+tep;;
					}
					else if(click_x>=330&&click_x<=350&&click_y>=430&&click_y<=450) {

						setfillstyle(SOLID_FILL,RED);
						fillellipse(450-t,450,20,20);
                        tep=1+tep;;
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 b.display();
						 tep=1+tep;;
					}
					 else if(click_x>=230&&click_x<=250&&click_y>=430&&click_y<=450){

						setfillstyle(SOLID_FILL,RED);
						fillellipse(350-t,450,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 b.display();
						 tep=1+tep;;
					}
					else if(click_x>=130&&click_x<=150&&click_y>=430&&click_y<=450){
						setfillstyle(SOLID_FILL,RED);
						fillellipse(250-t,450,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);

						 b.display();
						 tep=1+tep;;
                    }
                       else if(click_x>=30&&click_x<=50&&click_y>=430&&click_y<=450){
						setfillstyle(SOLID_FILL,RED);
						fillellipse(150-t,450,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						 b.display();
						 tep=1+tep;;

                    }
                }
           }
      }
}
void pawan_green()
{
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
			int t=100,n=100;
			 if(click_x>=430&&click_x<=450&&click_y>=30&&click_y<=50){
                        setfillstyle(SOLID_FILL,GREEN);
                        fillellipse(550-t,50,20,20);
                        tep=1+tep;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        b.display();
                    }
			else if(click_x>=430&&click_x<=450&&click_y>=130&&click_y<=150){
                        setfillstyle(SOLID_FILL,GREEN);
                        fillellipse(550-t,150,20,20);
                        tep=1+tep;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        b.display();
                    }
			else if(click_x>=430&&click_x<=450&&click_y>=230&&click_y<=250) {
                        setfillstyle(SOLID_FILL,GREEN);
                        fillellipse(550-t,250,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        outtextxy(50,50,"first class");
                        tep=1+tep;
                        b.display();
		}
			else if(click_x>=430&&click_x<=450&&click_y>=330&&click_y<=350){

						setfillstyle(SOLID_FILL,GREEN);
                        fillellipse(550-t,350,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						 b.display();
						 tep=1+tep;
                    }
			else if(click_x>=430&&click_x<=450&&click_y>=430&&click_y<=450) {
						setfillstyle(SOLID_FILL,GREEN);
						fillellipse(550-t,450,20,20);
                        tep=1+tep;;
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        b.display();
                        tep=1+tep;;
					}
            }
	  }
}

void clr()
{
    initwindow(1360,722,"",00,00);
    readimagefile("li.jpg",0,0,1360,722);
    initwindow(900,500,"",200,100);
    outtextxy(199,160,"LOADING PLEASE WAIT.......");
	rectangle(199,179,350,191);
	int n=0;
    int s=0,y=0,j=0;
	for(int j=0; j<150; j++)
	{
		delay(10);
		rectangle(200,180,200+j,190);
	}
	cleardevice();

    a b;
    b.display();


    rectangle(778,10,840,30);
    outtextxy(782,12,"Settings");

    rectangle(860,10,890,30);
    outtextxy(870,12,"X");

    setfillstyle(SOLID_FILL,BLUE);
    rectangle(670,70,700,90);
    floodfill(671,71,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(670,100,700,120);
    floodfill(671,101,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    rectangle(670,130,700,150);
    floodfill(671,131,WHITE);

    setfillstyle(SOLID_FILL,RED);
    rectangle(670,160,700,180);
    floodfill(671,161,WHITE);

    POINT CursorPosition;
	int click_x;
	int click_y;
	int tep=2,w=0,p=0;
	  do
        {
	while(tep<=1)
	{
	    if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			int t=100,n=100;
                    {
                        if(click_x>=670&&click_x<=700&&click_y>=70&&click_y<=90) {
                                setfillstyle(SOLID_FILL,BLUE);
                                rectangle(670,70,700,90);
                                floodfill(671,71,WHITE);
                                delay(200);
                                PlaySound(TEXT("mouse.wav"),NULL,SND_ASYNC);
                                tep=2+tep;
                                s=1;
                        }
                       else if(click_x>=670&&click_x<=700&&click_y>=100&&click_y<=120) {
                                setfillstyle(SOLID_FILL,YELLOW);
                                rectangle(670,100,700,120);
                                floodfill(671,101,WHITE);
                                delay(200);
                                PlaySound(TEXT("mouse.wav"),NULL,SND_ASYNC);
                                tep=2+tep;;
                                s=2;
                        }
                       else if(click_x>=670&&click_x<=700&&click_y>=130&&click_y<=150) {
                                setfillstyle(SOLID_FILL,GREEN);
                                rectangle(670,130,700,150);
                                floodfill(671,131,WHITE);
                                delay(200);
                                PlaySound(TEXT("mouse.wav"),NULL,SND_ASYNC);
                                tep=2+tep;;
                                s=3;
                        }
                       else if(click_x>=670&&click_x<=700&&click_y>=160&&click_y<=180) {
                                setfillstyle(SOLID_FILL,RED);
                                rectangle(670,160,700,180);
                                floodfill(671,161,WHITE);
                                delay(200);
                                PlaySound(TEXT("mouse.wav"),NULL,SND_ASYNC);
                                tep=2+tep;;
                                s=4;
                        }
                         else if(click_x>=778&&click_x<=840&&click_y>=11&&click_y<=31) {
                               PlaySound(TEXT("mouse.wav"),NULL,SND_ASYNC);
                                delay(200);
                                tep=3+tep;
                                s=6;
                               rectangle(778,10,840,30);
                               outtextxy(782,12,"Settings");

                               setting();
                          }

                       else if(click_x>=860&&click_x<=890&&click_y>=10&&click_y<=30) {
                                PlaySound(TEXT("mouse.wav"),NULL,SND_ASYNC);
                                delay(200);
                                tep=2+tep;
                                s=5;
                                rectangle(860,10,890,30);
                                outtextxy(870,12,"X");
                                //close();
                         }
                }
        }
  }
        tep=tep-tep;
        p++;
                switch(s)
          {
      {
    case 1:
        //cal();// blue
       pawan_blue();
        break;
     case 2:
         //sal(); //red
         pawan_yellow();
         break;
     case 3:
       // pawan(); //yellow
        pawan_green();
        break;
     case 4:
        pawan_red();
        break;
     case 5:
        close();
         break;
     case 6:
       // setting();
        break;
}
}
      }while(1);
     getch();
}
void close()
{
a b;
    outtextxy(650,170,"You are sure close this window");
    outtextxy(670,190,"yes or no");
	POINT CursorPosition;
	int click_x;
	int click_y;
	int tep=2;
	while (tep<=2) {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			int t=100,n=100;
			 if(click_x>=670&&click_x<=692&&click_y>=193&&click_y<=205){
                        tep=1+tep;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						exit(0);
                    }
			else if(click_x>=712&&click_x<=730&&click_y>=193&&click_y<=205){
                        tep=1+tep;
                        PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
                        cleardevice();

                        b.display();
                        rectangle(860,10,890,30);
                        outtextxy(870,12,"X");

                        setfillstyle(SOLID_FILL,BLUE);
                        rectangle(670,70,700,90);
                        floodfill(671,71,WHITE);

                        setfillstyle(SOLID_FILL,YELLOW);
                        rectangle(670,100,700,120);
                        floodfill(671,101,WHITE);

                        setfillstyle(SOLID_FILL,GREEN);
                        rectangle(670,130,700,150);
                        floodfill(671,131,WHITE);

                         setfillstyle(SOLID_FILL,RED);
                         rectangle(670,160,700,180);
                         floodfill(671,161,WHITE);
			     }
             }
       }
}
void setting()
{
   // cleardevice();
    a b;
   // cleardevice();
    POINT CursorPosition;
	int click_x;
	int click_y;
	int p=1;

     settextstyle(9,0,0);
	 setfillstyle(SOLID_FILL,YELLOW);
	 bar(898,498,1,1);
	 setbkcolor(YELLOW);
     setcolor(BLACK);
     outtextxy(382,12,"Settings");
     settextstyle(0,0,0);
     outtextxy(52,70,"Sound");
     outtextxy(52,140,"How to play");
     outtextxy(52,210,"Devloper");
     outtextxy(52,280,"About");
     rectangle(860,50,890,70);
     outtextxy(870,52,"X");

	 while (p<=1) {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			int t=100,n=100;
            if(click_x>=860&&click_x<=890&&click_y>=50&&click_y<=70){

                        //PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						p=2+p;

                    }
		     }
	   }
}
