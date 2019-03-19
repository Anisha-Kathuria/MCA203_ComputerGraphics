#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>


void circlePlotPoints(int xCenter,int yCenter,int x, int y)
{
putpixel(xCenter +x, yCenter+y,WHITE);
putpixel(xCenter -x, yCenter+y,WHITE);
putpixel(xCenter +x, yCenter-y,WHITE);
putpixel(xCenter -x, yCenter-y,WHITE);
putpixel(xCenter +y, yCenter+x,WHITE);
putpixel(xCenter -y, yCenter+x,WHITE);
putpixel(xCenter +y, yCenter-x,WHITE);
putpixel(xCenter -y, yCenter-x,WHITE);
}

void circleMidpoint(int xCenter, int yCenter, int radius)
{
  int x = 0;
  int y = radius;
  int p= 1 - radius;
  circlePlotPoints( xCenter, yCenter, x,y);

  while(x<y){
    x++;
    if(p<0)
   {
     p+=2*x+1;
   }
    else
   {
     y--;
     p+=2*(x-y)+1;
   }
    circlePlotPoints(xCenter, yCenter, x,y);
   }
}

void main()
{
	clrscr();
	int gd=DETECT,gm;
	int x,y,r;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cout<<"DRAW CIRCLE"<<endl;
	cout<<"Enter the center point"<<endl;
	cout<<"X:";
	cin>>x;
	cout<<"Y:";
	cin>>y;
	cout<<"Enter radius: ";
	cin>>r;
	circleMidpoint(x,y,r);
	getch();
  }