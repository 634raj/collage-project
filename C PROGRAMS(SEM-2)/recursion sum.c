#include<stdio.h>
int sum(int a);
int main()
{
	int x;
	printf("enter num");
	scanf("%d",&x);
	printf("sum is %d",sum(x));
	
}

	int sum(int a){
		if(a==1){
				return 1;
				
		}
		int sum1=sum(a-1);
		int suma=sum1+a;
		return suma;
	}
