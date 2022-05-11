#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	initgraph(400, 600);
	setbkcolor(WHITE);
	cleardevice();
	for (int i = 20; i < 600; i+=20)
	{
		setlinecolor(BLACK);
		line(20, i, 380, i);
	}
	for (int i = 20; i < 400; i += 20)
	{
		setlinecolor(BLACK);
		line(i, 20, i, 580);
	}
	_getch();
	closegraph();
	return 0;
}