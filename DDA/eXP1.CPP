#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm;
	int x1,x2,y1,y2,dx,dy,steps,xinc,yinc,i;
	initgraph(&gd,&gm,"c:\\turboC3\\bgi");
	cout<<"Enter values of x1 and y1"<<endl;
	cin>>x1>>y1;
	cout<<"Enter values of x2 and y2"<<endl;
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	steps=abs(dx);
	else
	steps=abs(dy);
	xinc=dx/steps;
	yinc=dy/steps;
	for(i=0;i<steps;i++)
	{
		putpixel(x1,y1,2);
		x1=x1+xinc;
		y1=y1+yinc;
	}
	getch();
	closegraph();
}
