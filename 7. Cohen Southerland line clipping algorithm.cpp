/*
7. Write C++ program to implement Cohen Southerland line clipping algorithm.
*/


#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void Window()
{
	line (200,200,350,200);
	line(350,200,350,350);
	line(200,200,200,350);
	line(200,350,350,350);
}
void Code(char c[4],float x,float y)
{        c[0]=(x<200)?'1':'0';
	 c[1]=(x>350)?'1':'0';
	 c[2]=(y<200)?'1':'0';
	 c[3]=(y>350)?'1':'0';
}
void Clipping  (char c[],char d[],float &x,float &y,float m)
{
	int flag=1,i=0;
	for (i=0;i<4;i++)
	{
		if(c[i]!='0' && d[i]!='0')
		{
			flag=0;
			break;
		}
		if(flag)
		{
			if(c[0]!='0')
			{
				y=m*(200-x)+y;
				x=200;
			}
			else if(c[1]!='0')
			{
				y=m*(350-x)+y;
				x=350;
			}
			else if(c[2]!='0')
			{
				x=((200-y)/m)+x;
				y=200;
			}
			else if(c[3]!='0')
			{
				x=((350-y)/m)+x;
				y=350;
			}
		}
		if (flag==0)
			cout<<"Line lying outside";
	}
}
void main()
{
int gdriver = DETECT, gmode, errorcode;
float x1,y1,x2,y2;
float m;
char c[4],d[4];
clrscr();
initgraph(&gdriver, &gmode, "//Turboc3//bgi");
cout<<"Enter coordinates";
cin>>x1>>y1>>x2>>y2;
cout<<"Before clipping";
Window();
line(x1,y1,x2,y2);
getch();
cleardevice();
m=float((y2-y1)/(x2-x1));
Code(c,x1,y1);
Code(d,x2,y2) ;
Clipping(c,d,x1,y1,m);
Clipping(d,c,x2,y2,m);
cout<<"After Clipping";
Window();
line(x1,y1,x2,y2);
getch();
closegraph();
}
