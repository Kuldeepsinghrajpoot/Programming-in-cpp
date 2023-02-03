#include<graphics.h>
#include<conio.h>
int main()
{
   int gn=DETECT,dm;
   initgraph(&gn,&dm,"");
   line(10,20,30,40);
   getch();

}
