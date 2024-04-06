#include<stdio.h>
int main()
{
		int i=1974;
		int *ptr=&i;
		int **pptr=&ptr;
		printf("%d\n",**pptr);
		printf("%d\n",*ptr);
		printf("%d\n",*(&i));
		printf("%d\n",**(&ptr));	
		printf("%d\n",**(&pptr));
}
