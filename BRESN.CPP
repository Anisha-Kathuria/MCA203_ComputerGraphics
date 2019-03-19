#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>


//getmaxx(), getmaxy() check max points of x and y
//algo for slope of line |m|<1
void lineBres(int xa,int ya,int xb,int yb)
{
   int dx=abs(xa-xb),dy=abs(ya-yb);
   int p=2*dy-dx;
   int twoDy=2*dy, twodydx=2*(dy-dx);
   int x,y,xEnd;
       if(xa>xb)
       {
	x=xb;
	y=yb;
	xEnd=xa;
	}
	else
	{
	x=xa;
	y=ya;
	xEnd=xb;
	}
      putpixel(x,y,WHITE);
      while(x<xEnd){
      x++;
      if(p<0)
      p+=twoDy;
      else{
      y++;
      p+=twodydx;
      }
      putpixel(x,y,WHITE);
       }
}

void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int xa,ya,xb,yb;
	cout<<"LINE DRAWING ALGO"<<endl;
	cout<<"Enter x and y co-ordinates of point A"<<endl;
	cout<<"X:";
	cin>>xa;
	cout<<"Y:";
	cin>>ya;
	cout<<"Enter x and y co-ordinates of point B"<<endl;
	cout<<"X:";
	cin>>xb;
	cout<<"Y:";
	cin>>yb;
	lineBres(xa,ya,xb,yb);
	getch();
}