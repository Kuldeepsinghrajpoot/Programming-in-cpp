/*#include<graphics.h>
int main(){
    int i,gd,gm;
    gd = DETECT;
    initgraph(&gd, &gm, " ");
    setbkcolor(WHITE);
    while(1)
    {
    for(i=5;i<900;i++)
        {
            setcolor(BLUE);
   delay(1);
   cleardevice();
   line(0+i,300,150+i,300);
   line(70+i,0,210+i,280);
   //rectangle(900,200,200 ,310);
   circle(40+i,331,20);
   circle(110+i,331,20);
   line(00, 350, 800, 350);
   outtext("kuldeep");
    }

    }
   getch();
   closegraph();
}
*/
// C++ Implementation for drawing line
#include <graphics.h>
#include<iostream>
using namespace std;
// driver code
int main(){
    cout<<"hello";
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	//line for x1, y1, x2, y2
	line(150, 150, 450, 150);
	//line for x1,y1,x2,y2
	line(150, 200, 450, 200);
	//line for x1, y1, x2, y2
	line(150, 250, 450, 250);
	getch();
	closegraph();
}



