#include<stdio.h>
#include <dos.h>
#include<iostream>
using namespace std;
#include<windows.h>
#include<graphics.h>
#include<mmsystem.h>
void display() {

	cleardevice();
	line(50,50,450,50);//line --//
	line(50,450,450,450);//bottom line//
	line(50,50,50,450);//left line
	line(450,50,450,450);//right line
	line(250,50,250,450); //top line /2
	line(50,250,450,250);
	line(50,150,450,150);
}
int main() {
	initwindow(1400,1000," game");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	outtextxy(199,160,"LOADING PLEASE WAIT.......");
	rectangle(199,179,350,191);
	for(int j=0; j<150; j++) {
		delay(0);
		rectangle(200,180,200+j,190);

	}
	cleardevice();
	getch();
	closegraph();
}
void c() {

	int start=0;
	POINT CursorPosition;
	int click_x;
	int click_y;
	while (1) {

		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();

			for(int t=0; t<100*2; t+=100) {
				if(click_x>=50 &&click_x<=450&&click_y>=50&&click_y<=450) {
					if(click_x>=220&&click_x<=350&&click_y>=220&&click_y<=450) {
						circle(450-t,250,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
					}

					delay(200);
					swapbuffers();
					start=1;
					cleardevice();
					display();
				}
			}
		}
	}
}



























void c() {
	a b;
	int start=0;
	POINT CursorPosition;
	int click_x;
	int click_y;
	while (1) {

		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();

			for(int t=0; t<100*2; t+=100) {
				if(click_x>=50 &&click_x<=450&&click_y>=50&&click_y<=450) {
					if(click_x>=220&&click_x<=350&&click_y>=220&&click_y<=450) {
						circle(450-t,250,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
					} else if(click_x>=200&&click_x<=350&&click_y>=200&&click_y<=350) {
						circle(350-t,250,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
					} else if(click_x>=100&&click_x<=250&&click_y>=100&&click_y<=250) {
						circle(250-t,250,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
					} else if(click_x>=0&&click_x<=75&&click_y>=50&&click_y<=250) {
						circle(150-t,250,20);
						PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);
						//
					}
					delay(200);
					swapbuffers();
					start=1;
					cleardevice();
//right();
					b.display();
					b.fun();
				}
			}
		}
	}
}



























line(70,70,470,70);//line --//
line(70,470,470,470);//bottom line//
line(70,70,70,470);//left line
line(470,70,470,470);//right line
line(270,70,270,470); //top line /2
line(70,270,470,270);
line(70,170,470,170);
line(170,70,170,470);
line(70,370,470,370);
line(370,70,370,470);
