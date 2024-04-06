//calculator program (+,-,/,*,power (p),for all(a)).
#include<stdio.h>
#include<math.h>
float main()
{

    printf("ENTER OPERATOR :  '+' , '-' , '*' , '/' , 'a' , 'p' \n");
  
    char c;
      scanf(" %c", &c);
     double n1,n2;
   printf("ENTER NUM1 : ");
   scanf("%lf",&n1);
   printf("ENTER NUM2 : ");
   scanf("%lf",&n2);
   printf("------------------------------------------------------\n");
   
 
   if(c=='+' || c=='-' || c=='*' || c=='/' || c=='a' || c=='p'){
   
   switch (c){
    
    case '+' : printf("RESULT --> %f",n1+n2);
        break;
    case '-' : printf("RESULT --> %f",n1-n2);
        break;
    case '/' : printf("RESULT --> %f",n1/n2);
        break;
    case '*' : printf("RESULT --> %f",n1*n2);
        break;
   	case 'p' : printf("RESULT --> %f",pow(n1,n2));
        break;
    case 'a' :  printf("ADDITION       --> %2f\n",n1+n2);
                printf("SUBTRACTION    --> %2f\n",n1-n2);
                printf("DIVISION       --> %2f\n",n1/n2);
                printf("MULTIPLICATION --> %2f\n",n1*n2);
                printf("POWER          --> %2f\n",pow(n1,n2));
                break;


   }
   }
else {
    printf("ERROR! INVALID OPERATOR... ");
}


return 0;

}


