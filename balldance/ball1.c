/*************************************************************************
  > File Name: ball.c
  > Author: hero
  > Mail: @hero 
  > Created Time: 2022年10月25日 星期二 09时10分49秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int top=0,bottom=10,l=0,r=20;
	int velocity_x=1;
	int velocity_y=1;
	int x=1,y=5;
	while(1)
	{

		if(x==top || x==bottom)
			velocity_x=-1*velocity_x;
		if(y==l || y==r)
			velocity_y=-1*velocity_y;
		for(int i=0;i<x;i++)
		{
			printf("\n");
		}
		for(int i=0;i<y;i++)
		{
			printf(" ");
		}
		printf("0\n");
		printf("\x1b[H\x1b[2J");
		sleep(1);
		x+=velocity_x;
		y+=velocity_y;
	}
}
