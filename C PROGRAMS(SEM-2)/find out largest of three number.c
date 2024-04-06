#include<stdio.h>
int main()
{

int a,b,c;
printf("enter three number");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
  if(a>c)
{
printf("largest number is:%d",a);
}
}
 else if (b>a){ if(b>c){printf("largest nuber is:%d",b);
}
}
else 
{printf("largest number is:%d",c);
}
}
