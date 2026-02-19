
#include <stdio.h>
#include <graphics.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
putpixel(170,100,WHITE);

setcolor(YELLOW);
line(180,240,200,100);

setcolor(CYAN);
line(50,50,250,250);

setcolor(BLUE);
line(220,202,155,155);

setcolor(RED);
circle(250,250,170);

setcolor(12);
rectangle(80,25,20,150);
outtextxy(119,400,"Rabindra Upadhayaya");
outtextxy(121,420,"240355");


setbkcolor(05);

getch();
closegraph();
return 0;


}
