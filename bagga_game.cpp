#include<graphics.h>
int main() {
	int gm,gd;
	gm=DETECT;
	initwindow(5000,5000,"kuldeep singh rajpoot");
	// initgraph(&gm,&gd,"");
	cleardevice();
	line(50,50,450,50);//line --//
	line(50,450,450,450);//bottom line//
	line(50,50,50,450);//left line
	line(450,50,450,450);//right line
	line(250,50,250,450); //top line /2
	line(50,250,450,250);
	line(50,150,450,150);//rectangle in the box of the line
	line(150,50,150,450);
	line(50,350,450,350);
	line(350,50,350,450);
	line(250,50,50,250);

	line(450,250,250,450);

	line(250,450,50,250);
	line(250,50,450,250);

	line(50,50,450,450);
	line(50,450,450,50);
	outtext("distance in all block is 150,250,350");
	{

		setcolor(RED);
		circle(250,50,20);
		setcolor(RED);
		floodfill(250,50,RED);
		setfillstyle(SOLID_FILL,RED);
		circle(250,50,20);
		setcolor(RED);
		floodfill(250,50,RED);
		setfillstyle(SOLID_FILL,RED);
		circle(250,50,20);
		setcolor(RED);
		floodfill(250,50,RED);
		setfillstyle(SOLID_FILL,RED);
		circle(250,50,20);
		setcolor(RED);
		floodfill(250,50,RED);
		setfillstyle(SOLID_FILL,RED);
		circle(250,50,20);
		setcolor(RED);
		floodfill(250,50,RED);
		setfillstyle(SOLID_FILL,RED);
	}
	{
		setcolor(GREEN);
		circle(250,450,20);
		setcolor(GREEN);
		floodfill(250,450,GREEN);
		setfillstyle(SOLID_FILL,GREEN);
		setcolor(GREEN);
		circle(250,450,20);
		setcolor(GREEN);
		floodfill(250,450,GREEN);
		setfillstyle(SOLID_FILL,GREEN);
		setcolor(GREEN);
		circle(250,450,20);
		setcolor(GREEN);
		floodfill(250,450,GREEN);
		setfillstyle(SOLID_FILL,GREEN);
		setcolor(GREEN);
		circle(250,450,20);
		setcolor(GREEN);
		floodfill(250,450,GREEN);
		setfillstyle(SOLID_FILL,GREEN);
		setcolor(GREEN);
		circle(250,450,20);
		setcolor(GREEN);
		floodfill(250,450,GREEN);
		setfillstyle(SOLID_FILL,GREEN);
	}

	{
		setcolor(YELLOW);
		circle(50,250,20);
		setcolor(YELLOW);
		floodfill(50,250,YELLOW);
		setfillstyle(SOLID_FILL,YELLOW);
		circle(50,250,20);
		setcolor(YELLOW);
		floodfill(50,250,YELLOW);
		setfillstyle(SOLID_FILL,YELLOW);
		circle(50,250,20);
		setcolor(YELLOW);
		floodfill(50,250,YELLOW);
		setfillstyle(SOLID_FILL,YELLOW);
		circle(50,250,20);
		setcolor(YELLOW);
		floodfill(50,250,YELLOW);
		setfillstyle(SOLID_FILL,YELLOW);
		circle(50,250,20);
		setcolor(YELLOW);
		floodfill(50,250,YELLOW);
		setfillstyle(SOLID_FILL,YELLOW);
	}
	{
		setcolor(BLUE);
		circle(450,250,20);
		setcolor(BLUE);
		floodfill(450,250,BLUE);
		setfillstyle(SOLID_FILL,BLUE);
		circle(450,250,20);
		setcolor(BLUE);
		floodfill(450,250,BLUE);
		setfillstyle(SOLID_FILL,BLUE);
		circle(450,250,20);
		setcolor(BLUE);
		floodfill(450,250,BLUE);
		setfillstyle(SOLID_FILL,BLUE);
		circle(450,250,20);
		setcolor(BLUE);
		floodfill(450,250,BLUE);
		setfillstyle(SOLID_FILL,BLUE);
		circle(450,250,20);
		setcolor(BLUE);
		floodfill(450,250,BLUE);
		setfillstyle(SOLID_FILL,BLUE);
	}
	{



		floodfill(450,250,BLUE);
		bar(80,80,35,35);
		bar(420,420,465,465);
		bar(35,420,80,465);
		bar(420,35,465,80);
		setfillstyle(SOLID_FILL,BLUE);
	}
	getch();
}
