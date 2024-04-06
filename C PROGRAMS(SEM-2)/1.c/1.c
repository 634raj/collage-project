//calculator program (+,-,/,*,power (#),for all(@)).
#include<stdio.h>
#include<math.h>
int main()
{
       printf("enter which operation we do -> '+' , '-' , '*' , '/' \nfor all operation press '@'\nfor num1 to the power num2 press '#'\n");
    char c;
      scanf(" %c", &c);
     double n1,n2;
   printf("enter first number --");
   scanf("%lf",&n1);
   printf("enter second number--");
   scanf("%lf",&n2);
   
 
   if(c=='+' || c=='-' || c=='*' || c=='/' || c=='@' || c=='#'){
   
   switch (c){
    
    case '+' : printf("addition is       --> %f",n1+n2);
        break;
    case '-' : printf("subtraction is    --> %f",n1-n2);
        break;
    case '/' : printf("division is       --> %f",n1/n2);
        break;
    case '*' : printf("multiplication is --> %f",n1*n2);
        break;
   	case '#' : printf("power is          --> %f",pow(n1,n2));
        break;
    case '@' :  printf("addition is       --> %2f\n",n1+n2);
                printf("subtraction is    --> %2f\n",n1-n2);
                printf("division is       --> %2f\n",n1/n2);
                printf("multiplication is --> %2f\n",n1*n2);
                printf("power is          --> %2f\n",pow(n1,n2));
                break;


   }
   }
else {
    printf("invalid operation");
}


return 0;

}


