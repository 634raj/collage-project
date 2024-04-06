#include<stdio.h>
int main()
{
	int a;
	printf("enter a value ---");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		for(int z=1;z<=a;z++){printf("*  ");
		}
		printf("\n");
	}
}
