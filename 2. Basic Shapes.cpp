/*
2. Write a C++ program to divide screen into
four region and draw circle,rectangle,arc
and ellipse.
*/

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
int main()
{
int gdriver = DETECT, gmode;
int xmax,ymax;
initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");
xmax = getmaxx();
ymax = getmaxy();
line(xmax/2,0,xmax/2,ymax);
line(0,ymax/2,xmax,ymax/2);
circle(170,125,100);
rectangle(58,251,304,392);
arc(500,150,45,135,100);
ellipse(500,300,0,360,75,25);
getch();
closegraph();
return 0;
}
