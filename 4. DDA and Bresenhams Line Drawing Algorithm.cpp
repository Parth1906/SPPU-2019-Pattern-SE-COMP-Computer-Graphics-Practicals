/*
4. Write a c++ program for drawing a line using
DDA and Bresahnams Line Drawing Algorithm
*/


#include<iostream.h>
#include<graphics.h>
#include<math.h>

int sign(int x)
{
if(x<0)
return -1;
else if(x>0)
return 1;
else
return 0;
}
void bline(int x1,int y1,int x2,int y2,int col)
{
int dx,dy,e,x,y,i=1;
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
e=2*dy-dx;
while(i<=dx)
{
while(e>=0)
{
y++;
e=e-2*dx;
}

x++;
e=e+2*dy;
putpixel(x,y,col);
i++;
}
}
void ddaline(int x1,int y1,int x2,int y2,int
col)
{
int x,y,len,i;
float dx,dy;
if(x1==x2 && y1==y2)
putpixel(x1,y1,col);
else
{
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx&gt;dy)
len=dx;
else
len=dy;
dx=(x2-x1)/len;
dy=(y2-y1)/len;
x=x1+0.5*sign(dx);
y=y1+0.5*sign(dy);
i=1;
while(i<len)
{
putpixel(x,y,col);
x=x+dx;
y=y+dy;
i++;
}
}
}
int main()

{
int ch,col,x1,x2,y1,y2;
cout<<"\n------------MENU------------\n"
cout<<"1.USING DDA\n";
cout<<"2.Using Bresahnams\n";
cout<<"\nEnter your choice : \n";
cin>>ch;
cout<<"\nEnter points x1,y1,x2,y2 : \n";
cin>>x1>>y1>>x2>>y2;
cout<<"\nEnter colour 1-15 : \n";
cin>>col;
if(col>15||col<1)
col=1;
int gd=DETECT,gm;
initgraph(&gd,&gm,”c:\\turboc3\\bgi”);
switch(ch)
{
case 1:
ddaline(x1,y1,x2,y2,col);
ddaline(300,300,400,300,col);
ddaline(300,300,300,400,col);
ddaline(300,400,400,400,col);
ddaline(400,400,400,300,col);
break;
case 2:
bline(x1,y1,x2,y2,col);
ddaline(300,300,400,300,col);
ddaline(300,300,300,400,col);
ddaline(300,400,400,400,col);
ddaline(400,400,400,300,col);
break;
default :
cout<<"\nEnter valid choice :\n";
}

getch();
closegraph();
return 0;
}
