/*
3. Write a C++ program for drawing a simple
object.
*/

#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\turboc3\\bgi");
line(100,100,150,50); // two lines forming the
line(150,50,200,100); // triangle shape
line(150,50,350,50); // lines forming the roof
line(350,50,400,100);
setfillstyle(SOLID_FILL,RED);
rectangle(100,100,200,200); // first rectangle
floodfill(101,199,WHITE);
setfillstyle(SOLID_FILL,BLUE);
rectangle(200,100,400,200); // second rectangle
floodfill(201,199,WHITE);
setfillstyle(LINE_FILL,GREEN);
rectangle(130,130,170,200); // door
floodfill(131,169,WHITE);
setfillstyle(LINE_FILL,YELLOW);
rectangle(250,120,350,180); // window
floodfill(251,179,WHITE);

setfillstyle(LINE_FILL,RED); // filling the
floodfill(149,99,WHITE); // colour in the
// triangle shape

setfillstyle(LINE_FILL,BLUE); // filling the
floodfill(201,99,WHITE); // colour in the
// roof

getch();
closegraph();
}
