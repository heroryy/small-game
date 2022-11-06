/*************************************************************************
  > File Name: ball.c
  > Author: hero
  > Mail: @hero 
  > Created Time: 2022年10月25日 星期二 09时10分49秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int up=0,down=6,l=0,right=6;
	int velocity=1;
	int x=1;
	while(1)
	{

		//for(int x=1;x<10;x++)
		//{
			if(x>10 || x<1)
				velocity=-1*velocity;
			for(int i=0;i<x;i++)
			{
				printf("\n");
			}
			for(int i=0;i<5;i++)
			{
				printf(" ");
			}
			printf("0\n");
			printf("\x1b[H\x1b[2J");
		    sleep(1);
			x+=velocity;
		//}
	}
}
