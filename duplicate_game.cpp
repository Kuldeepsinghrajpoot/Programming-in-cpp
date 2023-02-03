#include <iostream>
using namespace std;
#include<windows.h>
#include<graphics.h>
#include<mmsystem.h>

void sal();
void d();
void c();
class a {
	public:

		void display() {

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
//rectangle(350,230,330,250);


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
		void fun() {
			outtext("distance in all block is 150,250,350");
			circle(250,50,20);
			circle(450,250,20);
			circle(450,150,20);
		}

};
int main() {
	initwindow(1400,1000," game");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	outtextxy(199,160,"LOADING PLEASE WAIT.......");
	rectangle(199,179,350,191);
	for(int j=0; j<150; j++)
	{
		delay(10);
		rectangle(200,180,200+j,190);
	}
	cleardevice();
	c();
	getch();
}
void c()
{
a b;
b.display();
POINT CursorPosition;
	int click_x;
	int click_y;
	int tep=1;

	while (1) {
          //  for(int t=0; t<100*2; t+=100)
			{

		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			int t=100;
                    {
					if(click_x>=430&&click_x<=450&&click_y>=430&&click_y<=450) {
						//circle(450-t,450,20);
						//setfillstyle(SOLID_FILL,RED);
						fillellipse(450,450,20,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						delay(200);
						  swapbuffers();
						  cleardevice();
						  b.display();
                          tep=2+tep;
					}

					else if(click_x>=330&&click_x<=350&&click_y>=430&&click_y<=450) {
                      fillellipse(350,450,20,20);
                     PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
                     delay(200);

                     tep=1+tep;
                      swapbuffers();
						  cleardevice();
                     outtextxy(50,50,"first class");
                     b.display();
					}

					else if(click_x>=230&&click_x<=250&&click_y>=430&&click_y<=450) {
                      fillellipse(250,450,20,20);
                     PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
                     delay(200);
                        tep=1+tep;
                        swapbuffers();
                        cleardevice();
                        swapbuffers();
                        cleardevice();
                        b.display();
                     outtextxy(50,50,"first class");
                }
            }
	     }
     }
   }
}
