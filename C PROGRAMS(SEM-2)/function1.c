#include<stdio.h>
void sum(int a,int b);
int main()
{
	int x,y;
	printf("enter first number");
	scanf("%d",&x);
	printf("enter second number");
	scanf("%d",&y);
	sum(x,y);

}

	void sum(int a,int b) {
		int sum1= a+b;
			printf("sum is ; %d",sum1);
	}
