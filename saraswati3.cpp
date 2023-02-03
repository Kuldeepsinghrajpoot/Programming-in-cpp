#include<iostream>
using namespace std;
#include<windows.h>
#include<graphics.h>
#include<mmsystem.h>
bool isRunning=true;
void start();
void setting();
void close();
void close1(int);
void close2();
int close0;
void about();
void pawan();
void pawan_red();
//void pawan_blue();
//void pawan_yellow();
//void pawan_green();
void red();
void blue();
void yellow();
void yellow_draw();
void gota();
void draw_gota();
void green();
void blue_draw();
void output();
void input();
void inputHendle();
void sence();
void hendle();
void refresh(int);
void scene1();
void scene2();
void scene3();
void swaap();
void draw();
void reset();
void reset2();
void how_play();
void reset1(int);
void how_play1(int);
void how_play();
void how_play2();
void sound();
void sound1(int);
int how;
int resat;
int scene;
int sound_switch=1;
int width=100;
int height=150;
int x=1,y=0,n=1;
int i=0,dic;
int clickButton;
int clickButton1;
int clickButton_blue;
int clickButton_yellow_y1;
int clickButton_yellow_y2;
int clickButton_yellow_y3;
int clickButton_yellow_y4;
int clickButton_yellow_y5;

int clickButton_gota;
/* class declyar*/
    class a{
    public:
        void display(){
            rectangle(860,10,890,30);
            outtextxy(870,12,"X");
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
            outtextxy(35, 32,"4");
            outtextxy(135,32,"2");
            outtextxy(235,32,"1");
            outtextxy(335,32,"3");
            outtextxy(435,32,"5");
            outtextxy(35, 132,"6");
            outtextxy(135,132,"7");
            outtextxy(235,132,"8");
            outtextxy(335,132,"9");
            outtextxy(433,132,"10");
            outtextxy(33,232,"11");
            outtextxy(133,232,"12");
            outtextxy(233,232,"13");
            outtextxy(333,232,"14");
            outtextxy(433,232,"15");
            outtextxy(33,332,"16");
            outtextxy(133,332,"17");
            outtextxy(233,332,"18");
            outtextxy(333,332,"19");
            outtextxy(433,332,"20");
            outtextxy(33,432,"21");
            outtextxy(133,432,"22");
            outtextxy(233,432,"23");
            outtextxy(333,432,"24");
            outtextxy(433,432,"25");
            rectangle(778,50,840,70);
            outtextxy(786,52,"Reset");
            outtextxy(782,12,"Settings");
            rectangle(778,130,870,150);
            outtextxy(780,132,"How can Play");
             setfillstyle(SOLID_FILL,WHITE);
             setbkcolor(BLACK);
             int left, top, right, bottom,depth,topflag;
	         bar3d(left = 625, top = 30,right = 660, bottom = 70,depth = 15, topflag = 2);
             setcolor(WHITE);
              setfillstyle(SOLID_FILL,WHITE);
              fillellipse(650,110,20,20);
        }
    };
    a b;
/*------------Main Function------------------*/
int main(){
   start();
   getch();
}

void pawan_blue(){
	POINT CursorPosition;
	int click_x;
	int click_y;
    int i=100;
    int pt=0;
                    while (1&&pt!=1){
                             swaap();
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();{
/* blue color*/
			      if(click_x>=30&&click_x<=50&&click_y>=30&&click_y<=50&&clickButton_blue==3){
                        clickButton_blue=4;
                      pt=1;
                        if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						delay(200);
                    }
                   else if(click_x>=130&&click_x<=150&&click_y>=30&&click_y<=50&&clickButton_blue==1){
                        clickButton_blue=2;
                       pt=1;
                        if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						delay(200);
                    }
                    else if(click_x>=230&&click_x<=250&&click_y>=30&&click_y<=50&&clickButton_blue==0){
                         clickButton_blue=1;
                        pt=1;
                         if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						 delay(200);
                    }
                    else if(click_x>=330&&click_x<=350&&click_y>=30&&click_y<=50&&clickButton_blue==2){
                         clickButton_blue=3;
                         pt=1;
                         if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						 delay(200);
                    }
                     else if(click_x>=430&&click_x<=450&&click_y>=30&&click_y<=50&&clickButton_blue==4){
                          clickButton_blue=5;
                            pt=1;
                          if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						  delay(200);
                    }
///*-----Yellow color----*/

			        if(click_x>=30&&click_x<=50&&click_y>=30&&click_y<=50&&clickButton_yellow_y4==3){
                              clickButton_yellow_y4=4;
                              if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						      delay(200);
                              pt=1;
                         }
                    else if(click_x>=30&&click_x<=50&&click_y>=130&&click_y<=150&&clickButton_yellow_y2==1){
                               clickButton_yellow_y2=2;
                               if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						       delay(200);
						       pt=1;
                         }
			        else if(click_x>=30&&click_x<=50&&click_y>=230&&click_y<=250&&clickButton_yellow_y1==0) {
                                 clickButton_yellow_y1=1;
                                 if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						          delay(200);
                           pt=1;
		       }
			         else if(click_x>=30&&click_x<=50&&click_y>=330&&click_y<=350&&clickButton_yellow_y3==2){
                                 clickButton_yellow_y3=3;
                                 if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						          delay(200);
						           pt=1;
                        }
                     else if(click_x>=30&&click_x<=50&&click_y>=430&&click_y<=450&&clickButton_yellow_y5==4){
                                 clickButton_yellow_y5=5;
						         if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						        delay(200);
                                   pt=1;
                    }

///*----Red color-----*/
         if(click_x>=430&&click_x<=450&&click_y>=430&&click_y<=450&&clickButton1==4) {
						  clickButton1=5;
						  if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						  delay(200);
						     pt=1;
					}
					else if(click_x>=330&&click_x<=350&&click_y>=430&&click_y<=450&&clickButton1==2) {
						 clickButton1=3;
						 if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						 delay(200);
						    pt=1;
					}
					 else if(click_x>=230&&click_x<=250&&click_y>=430&&click_y<=450&&clickButton1==0){
						 clickButton1=1;
						 if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						 delay(200);
						    pt=1;
					}
					else if(click_x>=130&&click_x<=150&&click_y>=430&&click_y<=450&&clickButton1==1){
						 clickButton1=2;
						 if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						 delay(200);
						    pt=1;
                    }
                    else if(click_x>=30&&click_x<=50&&click_y>=430&&click_y<=450&&clickButton1==3){
						  clickButton1=4;
						 if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						 delay(200);
						    pt=1;
                    }
 ///reset
                     else if(click_x>=778&&click_x<=840&&click_y>=50&&click_y<=70) {
                         if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                          resat=1;
                         //  pt=1;
                          if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                   }
///*---- sound----*/
			 if(click_x>=778&&click_x<=840&&click_y>=90&&click_y<=110) {
			           sound();
			           // pt=1;
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                       delay(200);
			 }
///*---- Green color----*/
			 else if(click_x>=430&&click_x<=450&&click_y>=30&&click_y<=50&&clickButton==3){
                        clickButton=4;
                        if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						delay(200);
						   pt=1;
                    }
			else if(click_x>=430&&click_x<=450&&click_y>=130&&click_y<=150&&clickButton==1){
                        clickButton=2;
                        if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						delay(200);
						   pt=1;
                    }
			else if(click_x>=430&&click_x<=450&&click_y>=230&&click_y<=250&&clickButton==0) {
			            clickButton=1;
						if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						delay(200);
						   pt=1;
		            }
			else if(click_x>=430&&click_x<=450&&click_y>=330&&click_y<=350&&clickButton==2){
                        clickButton=3;
						if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						delay(200);
						   pt=1;
                    }
			else if(click_x>=430&&click_x<=450&&click_y>=430&&click_y<=450&&clickButton==4) {
                        clickButton=5;
						if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						delay(200);
						   pt=1;
					}
///*---- setting ----*/
             else if(click_x>=778&&click_x<=840&&click_y>=11&&click_y<=31) {
                               if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                               setting();
                               refresh(scene);
                  }
///*---- close----*/
             else if(click_x>=860&&click_x<=890&&click_y>=10&&click_y<=30) {
                        if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        close0=1;
             }
///*---- reset----*/
                 else if(click_x>=778&&click_x<=840&&click_y>=50&&click_y<=70) {
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                         reset();
                         reset1(resat);
                         }
///*---- how can play----*/
               else if (click_x>=778&&click_x<=870&&click_y>=130&&click_y<=150) {
                              rectangle(778,130,870,150);
                              if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                              how=1;
	              }
              }
          }
      }
       pt=pt-pt;
}
//Gota setting and chance hare
void gota(){
    POINT CursorPosition;
	int click_x;
	int click_y;
	int tep=0;
	while (1&&tep!=1)
        {
              swaap();
		if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			int t=100,n=100;
			  if(click_x>=430&&click_x<=450&&click_y>=430&&click_y<=450&&clickButton_gota==0) {
                           clickButton_gota=1;
                           cout<<clickButton_gota;
						   if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						   delay(200);
						   tep=1;
					}
              else if(click_x>=30&&click_x<=50&&click_y>=30&&click_y<=50&& clickButton_gota==1){
						    clickButton_gota=2;
                            cout<<clickButton_gota;
						    if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						    delay(200);
						      tep=1;
					}
             else if(click_x>=30&&click_x<=50&&click_y>=430&&click_y<=450&&clickButton_gota==2){
                             clickButton_gota=3;
                             cout<<clickButton_gota;
						     if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						     delay(200);
						       tep=1;
                    }
             else if(click_x>=430&&click_x<=450&&click_y>=30&&click_y<=50&&clickButton_gota==3){
                             clickButton_gota=4;
                             cout<<clickButton_gota;
                             if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						     delay(200);
						       tep=1;
                    }
///*---- setting ----*/
             else if(click_x>=778&&click_x<=840&&click_y>=11&&click_y<=31) {
                               if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                               setting();
                               refresh(scene);
                  }
///*---- close----*/
             else if(click_x>=860&&click_x<=890&&click_y>=10&&click_y<=30) {
                        if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        close0=1;
               }
///*---- reset----*/
             else if(click_x>=778&&click_x<=840&&click_y>=50&&click_y<=70) {
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                         reset();
                         reset1(resat);
                         }
///*---- how can play----*/
             else if (click_x>=778&&click_x<=870&&click_y>=130&&click_y<=150) {
                     rectangle(778,130,870,150);
                        if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        how=1;
	              }
///*---- sound----*/
			 else if(click_x>=778&&click_x<=840&&click_y>=90&&click_y<=110) {
			                 sound();
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                       delay(200);
			      }
            }
       }
       tep=tep-tep;
}
void donate_chance();
///start and launch
void start(){
    //initwindow(1360,722,"",00,00);
    //readimagefile("li.jpg",0,0,1360,722);
    initwindow(910,650,"",120,20);
    outtextxy(199,160,"LOADING PLEASE WAIT.......");
	rectangle(199,179,350,191);
	int n=0;
    int s=0,y=0,j=0;
	for(int j=0; j<150; j++){
		delay(10);
		rectangle(200,180,200+j,190);
	}
   cleardevice();
   b.display();
   swapbuffers();
   circle(50,50,20);
   int z=0;
   v:
	 for(i=0;i<4;i++){
            donate_chance();
             swaap();
            if(i==0){
                gota();
                swaap();
             }
              if(i==1){

               pawan_blue();///blue ,red ,yellow,green
               swaap(); ///All the function is swapping
            }
    }
    goto v;
}
void donate_chance(){
    if(i==0)
    {
         line(560,30,600,45);
         line(560,70,600,45);
    }
    else if(i==1)
    {
          line(560,100,600,115);
          line(560,140,600,115);
    }
}
int sound_switch1;
void draw_fun();
///*---- Swap option ----*/
void swaap(){
    cleardevice();
    sound1(sound_switch);
    donate_chance();
    output();
    blue();
    yellow();
    inputHendle();
    draw_fun();
    refresh(scene);
    close1(close0);
    reset1(resat);
    how_play1(how);

    swapbuffers();
}
///*---- Close option ----*/
void close(){
	POINT CursorPosition;
	int click_x;
	int click_y;
	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
	        if(click_x>=860&&click_x<=890&&click_y>=10&&click_y<=30) {
                        if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        close0=1;
                         }
			 else if(click_x>=600&&click_x<=660&&click_y>=210&&click_y<=240){
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						close0=2;
			     }
           }
     }
void close1(int close0){
    if(close0==1){
         close2();
         setbkcolor(LIGHTBLUE);
    }
    else if(close0==2)
    {}
    setbkcolor(BLACK);
}
void close2(){
     width = getmaxx();
     height = getmaxy();
     setfillstyle(SOLID_FILL, BLACK);
     bar(10, 10, width-10, height-10);
     setfillstyle(SOLID_FILL, DARKGRAY);
     bar(205, 155, width-195, height-405);
     setbkcolor(DARKGRAY);
     rectangle(200,150,720,250);
     rectangle(205,155,715,245);
     outtextxy(290,170,"Are you sure for close the window Yes or No");
     rectangle(250,240,310,210);
     outtextxy(270,220,"Yes");
     rectangle(600,240,660,210);
     outtextxy(620,220,"N0");
     setbkcolor(BLACK);
     POINT CursorPosition;
	 int click_x;
	 int click_y;
	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
	       if(click_x>=860&&click_x<=890&&click_y>=10&&click_y<=30) {
                     if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        close0=1;
                         }
			 else if(click_x>=250&&click_x<=310&&click_y>=210&&click_y<=240){
                     if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						exit(0);
                    }
			 else if(click_x>=600&&click_x<=660&&click_y>=210&&click_y<=240){
                      if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						close0=2;
			     }
           }
}
///* RESET Option*/
void reset(){
POINT CursorPosition;
	int click_x;
	int click_y;{
	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
	        if(click_x>=778&&click_x<=840&&click_y>=50&&click_y<=70) {
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        resat=1;
                         }
			 else if(click_x>=600&&click_x<=660&&click_y>=210&&click_y<=240){
                      if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        resat=2;
			     }
           }
     }
}
void reset1(int resat){
    if(resat==1)
    {
        reset2();
    }
    else if(resat==2)
    {}
}
void reset2(){
     width = getmaxx();
     height = getmaxy();
     setfillstyle(SOLID_FILL, BLACK);
     bar(10, 10, width-10, height-10);
     setfillstyle(SOLID_FILL, BLACK);
     setfillstyle(SOLID_FILL, BROWN);
     bar(205, 155, width-195, height-405);
     setbkcolor(BLACK);
     setbkcolor(BROWN);
     rectangle(200,150,720,250);
     rectangle(205,155,715,245);
     outtextxy(290,170,"Are you sure for reset the window ");
     rectangle(250,240,310,210);
     outtextxy(260,220,"Reset");
     rectangle(600,240,660,210);
     outtextxy(610,220,"Cancel");
     setbkcolor(BLACK);
     POINT CursorPosition;
	 int click_x;
	 int click_y;
	 if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
	       if(click_x>=778&&click_x<=840&&click_y>=50&&click_y<=70) {
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        resat=1;
                         }
			 else if(click_x>=250&&click_x<=310&&click_y>=210&&click_y<=240){
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                       i=0;
						clickButton=0;
                        clickButton1=0;
                        clickButton_gota=0;
                        clickButton_blue=0;
                         // clickButton_yellow=0;
                                      clickButton_yellow_y1=0;
                                     clickButton_yellow_y2=0;
                                     clickButton_yellow_y3=0;
                                     clickButton_yellow_y4=0;
                                      clickButton_yellow_y5=0;
                        resat=2;
                    }
			else if(click_x>=600&&click_x<=660&&click_y>=210&&click_y<=240){
                      if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
						resat=2;
			     }
           }
}
///*---- Setting option ----*/
void setting(){
    POINT CursorPosition;
	int click_x;
	int click_y;
	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
            if(click_x>=778&&click_x<=840&&click_y>=11&&click_y<=31) {
                              if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                               rectangle(778,10,840,30);
                               outtextxy(782,12,"Settings");
                               scene=1;
                   }
           }
}
	void refresh(int scene) {
    b.display();
    if(scene == 1) {
        scene1();
     }
    else if(scene == 2) {
    }
     else if(scene == 3) {
            scene1();
    }
     else if(scene == 4) {
            scene2();
    }
     else if(scene == 5) {
             scene3();
    }
    setbkcolor(BLACK);
}
/*--------------------------------------*/
///To Draw Scene-1
///discription
void scene1() {
    setfillstyle(SOLID_FILL, MAGENTA);
    bar(160, 10, width-10, height-10);
    setfillstyle(SOLID_FILL, BLACK);
    bar(10, 10, 160,height-10);
    rectangle(35,25,5,5);
    outtextxy(12,7,"X");
    setbkcolor(BLACK);
    rectangle(20,30,150,210);
    outtextxy(50,50,"Discription");
    rectangle(20,30,150,410);
    outtextxy(50,250,"Developer");
    rectangle(20,30,150,610);
    outtextxy(50,450,"About");

    setfillstyle(SOLID_FILL,RED);
    setbkcolor( RED);
    int topflag;
    int depth;
    int left, top, right, bottom;
	bar3d(left = 350, top = 50,right = 700, bottom = 80,depth = 20, topflag = 2);
    outtextxy(500,55,"Discription");
    width = getmaxx();
    height = getmaxy();
    POINT CursorPosition;
	int click_x;
	int click_y;
	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
            if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=210) {
                          if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                             scene=3;
			}
			 else if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=410) {
                            scene=4;
                            if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
			}
			else if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=610) {
                     scene=5;
                   if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
			}
            else if(click_x>=5&&click_x<=35&&click_y>=5&&click_y<=25){
                            if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                         scene=2;
                    }
           }
    }
///*----Developer section------*/
void scene2() {
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(160, 10, width-10, height-10);
    setfillstyle(SOLID_FILL, BLACK);
    bar(10, 10, 160,height-10);
    rectangle(35,25,5,5);
    outtextxy(12,7,"X");
    setbkcolor(BLACK);
    rectangle(20,30,150,210);
    outtextxy(50,50,"Discription");
    rectangle(20,30,150,410);
    outtextxy(50,250,"Developer");
    rectangle(20,30,150,610);
    outtextxy(50,450,"About");
    setbkcolor(BLACK);

    //setcolor(RED);
    setfillstyle(SOLID_FILL,BROWN);
    setbkcolor( BROWN);
    int topflag;
    int depth;
    int left, top, right, bottom;
	bar3d(left = 350, top = 50,right = 700, bottom = 80,depth = 20, topflag = 2);
    outtextxy(500,55,"Developer");

     setbkcolor(LIGHTBLUE);
    readimagefile("kuldeep.jpg",200,80,100,180);
    outtextxy(400,260,"Create Date  -  27-January-2020");
    outtextxy(400,280,"Modify       -                        ");
    outtextxy(400,300,"Name         -  Kuldeep Singh Rajpoot ");
    outtextxy(400,320,"Contact      -  www.facebook.com");
    outtextxy(400,340,"Email ID     -  kuldeepsinghrajpoot4@gnail.com");
    POINT CursorPosition;
	int click_x;
	int click_y;
	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
            if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=210) {
                             if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                             scene=3;
			}
			 else if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=410) {
                            scene=4;
                           if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
			}
			else if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=610) {
                     scene=5;
                  if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
			}
            else if(click_x>=5&&click_x<=35&&click_y>=5&&click_y<=25){
                           if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                         scene=2;
                    }
         }
}
///About section option
void scene3(){
    setfillstyle(SOLID_FILL, BLUE);
    bar(160, 10, width-10, height-10);
    setfillstyle(SOLID_FILL, BLACK);
    bar(10, 10, 160,height-10);
    setbkcolor(BLACK);
    rectangle(35,25,5,5);
    outtextxy(12,7,"X");
    rectangle(20,30,150,210);
    outtextxy(50,50,"Discription");
    rectangle(20,30,150,410);
    outtextxy(50,250,"Developer");

    rectangle(20,30,150,610);
    outtextxy(50,450,"About");
    //setcolor(RED);
    int topflag;
    int depth;
    int left, top, right, bottom;
	bar3d(left = 350, top = 50,right = 700, bottom = 80,depth = 20, topflag = 2);
    outtextxy(500,55,"About");
    POINT CursorPosition;
	int click_x;
	int click_y;
	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
             if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=210) {
                            if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                             scene=3;
			}
			 else if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=410) {
                            scene=4;
                            if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
			}
			 else if(click_x>=20&&click_x<=150&&click_y>=30&&click_y<=610) {
                     scene=5;
                   if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
			}
             else if(click_x>=5&&click_x<=35&&click_y>=5&&click_y<=25){
                           if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                         scene=2;
                    }
	     }
}
///how play
void how_play(){
     POINT CursorPosition;
	int click_x;
	int click_y;
	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			if(click_x>=778&&click_x<=870&&click_y>=130&&click_y<=150) {
                      if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        how=1;
			}
			else if(click_x>=5&&click_x<=35&&click_y>=5&&click_y<=25) {
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        how=2;
                 }
	   }
}
void how_play1(int how){
	    if(how==1){
             how_play2();
	    }
	 else if(how==2)
       {}}
void how_play2(){
    width = getmaxx();
    height = getmaxy();
    setfillstyle(SOLID_FILL, BLACK);
    bar(160, 10, width-10, height-10);
    setfillstyle(SOLID_FILL, BLACK);
    bar(10, 10, 160,height-10);
    setbkcolor(BLACK);
    rectangle(35,25,5,5);
    outtextxy(15,7,"X");

    setfillstyle(SOLID_FILL,LIGHTBLUE);
    setbkcolor(LIGHTBLUE);
    int topflag;
    int depth;
    int left, top, right, bottom;
	bar3d(left = 250, top = 50,right = 600, bottom = 80,depth = 20, topflag = 2);
    outtextxy(400,55,"How can play");

    setbkcolor(BLACK);
    POINT CursorPosition;
	int click_x;
	int click_y;

	if (GetAsyncKeyState(VK_LBUTTON)) {
			GetCursorPos(&CursorPosition);
			click_x=mousex();
			click_y=mousey();
			 if(click_x>=5&&click_x<=35&&click_y>=5&&click_y<=25) {
                       if(sound_switch==1){PlaySound(TEXT("rajpoot.wav"),NULL,SND_ASYNC);}
                        how=2;
              }
	   }
}
void sound(){
       sound_switch=(sound_switch==1)?sound_switch=0:sound_switch=1;
       setbkcolor(BLACK);
       sound1(sound_switch);
}
void sound1(int sound_switch){
    if(sound_switch==1){
             rectangle(774,90,865,110);
             outtextxy(784,92,"Sound : ON");}
    else if(sound_switch==0){
             rectangle(774,90,865,110);
             outtextxy(784,92,"Sound : OFF");}
}
/*1st blue */
void blue(){
    b.display();
    blue_draw();
    setfillstyle(SOLID_FILL,BLUE);
}
void blue_draw(){
    int i=100;
     setfillstyle(SOLID_FILL,BLUE);
                    if(clickButton_blue>=3)
                        fillellipse(450-i,50,20,20);
                    if(clickButton_blue>=4)
                        fillellipse(150-i,50,20,20);
                    if(clickButton_blue>=5)
                        fillellipse(550-i,50,20,20);
                    if(clickButton_blue>=1)
                        fillellipse(350-i,50,20,20);
                    if(clickButton_blue>=2)
                        fillellipse(250-i,50,20,20);
}
/* 2nd red

color of red in right side of diagram */
void output(){
    b.display();
    input();
    setfillstyle(SOLID_FILL,RED);
}
void input(){
    int t=100;
    setfillstyle(SOLID_FILL,RED);
                    if(clickButton>=1)
                        fillellipse(550-t,250,20,20);
                    if(clickButton>=3)
                        fillellipse(550-t,350,20,20);
                    if(clickButton>=5)
						 fillellipse(550-t,450,20,20);
                    if(clickButton>=4)
                        fillellipse(550-t,50,20,20);
                    if(clickButton>=2)
                         fillellipse(550-t,150,20,20);
}
/*3rd green
buttom of the diagram
*/
void inputHendle(){
     b.display();
     draw();
     setfillstyle(SOLID_FILL,GREEN);
}
void draw(){
    int t=100;
     setfillstyle(SOLID_FILL,GREEN);
        if(clickButton1>=5)
            fillellipse(550-t,450,20,20);
        if(clickButton1>=3&&clickButton1<5)
            fillellipse(450-t,450,20,20);
        if(clickButton1>=1&&clickButton1<2)
            fillellipse(350-t,450,20,20);
        
            fillellipse(350-t,450,20,20);
        if(clickButton1>=2&&clickButton1<4)
            fillellipse(250-t,450,20,20);
        if(clickButton1>=4)
            fillellipse(150-t,450,20,20);
}
/* 4th Yellow  
left side color yellow of the diagram
*/
void  yellow(){
    b.display();
    yellow_draw();
    setfillstyle(SOLID_FILL,YELLOW);
}
void yellow_draw(){
    int t=100;
    setfillstyle(SOLID_FILL,YELLOW);
        if(clickButton_yellow_y5>=5)
            fillellipse(150-t,450,20,20);
        if(clickButton_yellow_y3>=3&&clickButton_yellow_y5<5)
            fillellipse(150-t,350,20,20);
// first fillellipse
        if(clickButton_yellow_y1>=1)
            fillellipse(150-t,250,20,20);
        if(clickButton_yellow_y1>=1)
            fillellipse(150-t,250,20,20);
        if(clickButton_yellow_y1>=1)
            fillellipse(150-t,250,20,20);
        if(clickButton_yellow_y1>=1&&clickButton_yellow_y2<1)
            fillellipse(150-t,250,20,20);
        if(clickButton_yellow_y1>=1&&clickButton_yellow_y3<1)
            fillellipse(150-t,250,20,20);
        if(clickButton_yellow_y2>=2&&clickButton_yellow_y4<1)
            fillellipse(150-t,150,20,20);
        if(clickButton_yellow_y4>=4)
            fillellipse(150-t,50,20,20);
}
void draw_fun(){
  b.display();
  draw_gota();
  setbkcolor(BLACK);
  setfillstyle(SOLID_FILL,BROWN);
}
/*Gota setting  */
void draw_gota(){
       setfillstyle(SOLID_FILL,WHITENESS);
       setbkcolor(BLACK);
        int left, top, right, bottom;
        int depth;
        int topflag;
        if(clickButton_gota>=1)
	             bar3d(left = 425, top = 435,right = 460, bottom = 475,depth = 15, topflag = 2);
                 setcolor(WHITE);
        if(clickButton_gota>=3)
	             bar3d(left = 25, top = 435,right = 60, bottom = 475,depth = 15, topflag = 2);
                 setcolor(WHITE);
        if(clickButton_gota>=2)
	             bar3d(left = 25, top = 35,right = 60, bottom = 75,depth = 15, topflag = 2);
                 setcolor(WHITE);
        if(clickButton_gota>=4)
	             bar3d(left = 425, top = 35,right = 460, bottom = 75,depth = 15, topflag = 2);
                 setcolor(WHITE);
}
