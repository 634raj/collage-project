//recursion
#include<stdio.h>
void printhlw(int n);
int main()
{
	int x;
	printf("enter count");
	scanf("%d",&x);
	printhlw(x);
}

	void printhlw(int n){
		if(n==0){
			
			return;
		}
		printf("hello world\n");
		printhlw(n-1);
	}
