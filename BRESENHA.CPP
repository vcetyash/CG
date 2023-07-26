#include<iostream.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2,dx,dy,pk;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cout<<"Enter values of x1,y1"<<endl;
	cin>>x1>>y1;
	cout<<"Enter values of x2,y2"<<endl;
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	putpixel(x1,y1,2);
	while(y1<y2)
	{
		pk=2*dy-dx;
		if(pk>0)
		{
			x1+=1;
			y1+=1;
			putpixel(x1,y1,2);
		}
		if(pk<0)
		{
			x1+=1;
			putpixel(x1,y1,2);
		}
	}
	getch();
}
