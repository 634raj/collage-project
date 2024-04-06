#include<stdio.h>
 void main()
{
	float math,eng,phy,com,chem,hindi,a,sum;
	printf("enter your marks in mathmatics-- ");
	scanf("%f",&math);
		printf("enter your marks in english--");
	scanf("%f",&eng);
		printf("enter your marks in physics--");
	scanf("%f",&phy);
		printf("enter your marks in computer--");
	scanf("%f",&com);
		printf("enter your marks in chemestry-- ");
	scanf("%f",&chem);
		printf("enter your marks in hindi--");
	scanf("%f",&hindi);
	sum=math+eng+phy+com+chem+hindi;
	a=sum/6;
	printf("your percentage : %f\n",a);
	if(a>90)
	{
		printf("you got A grade");
	}
	else if(a>70&&a<=90)
	{
		printf("you got B grade");
	}
	else if(a>50&&a<=70)
	{
		printf("you got C grade");
	}
	else if(a>35&&a<=50)
	{
		printf("you got D grade");
	}
	else 
	{
		printf("FAIL");
	}
	
	
	
	}
