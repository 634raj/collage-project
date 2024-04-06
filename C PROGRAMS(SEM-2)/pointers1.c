#include<stdio.h>
int main()
{
	int price = 263;
	int *ptr = &price;
	int **pptr = &ptr;
	printf("%u\n",&price);
	printf("%u\n",ptr);
	printf("%u\n",*pptr);
	printf("%u\n",&ptr);
	printf("%u\n",pptr);
	printf("%u\n",pptr);
	printf("%d",**pptr);
}
