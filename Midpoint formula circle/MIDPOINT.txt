#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main() {
	int xc,yc,x,y,r,gd=DETECT,gm,d;
	x=0;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	printf("Enter radius");
	scanf("%d",&r);
	printf("Enter centre coordinates (x,y)");
	scanf("%d%d)",&xc,&yc);
	d=1-r;
	y=r;
	do {
	putpixel(xc+x,yc+y,7);
	putpixel(xc+x,yc-y,7);
	putpixel(xc-x,yc+y,7);
	putpixel(xc-x,yc-y,7);
	putpixel(xc+y,yc+x,7);
	putpixel(xc+y,yc-x,7);
	putpixel(xc-y,yc+x,7);
	putpixel(xc-y,yc-x,7);
	if (d<0) {
		x++;
		d+=2*x+3;
	} else {
		x++;
		y--;
		d+=2*(x-y)+5;
	} } while(x<y);
	getch();
	closegraph();
}