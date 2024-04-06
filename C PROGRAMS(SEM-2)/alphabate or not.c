#include<stdio.h>
// program to cheack given character is alphabate or not
int main()
{
	char n;
	printf("enter a character");
	scanf("%c",&n);
	if(n>='a' && n<='z' || n>='A' && n<='Z') {
		printf("given caracter is alphabate");
	}
	else {printf("invalid character");
	}
}
