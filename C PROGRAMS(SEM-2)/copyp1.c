#include <stdio.h>
#include <string.h>
#include<math.h>

float main() {
    printf("\n");
    printf("       \033[1;31m|      |   _____    _____   _____             _____            _____\n");
    printf("       \033[1;31m|      |  |        |       |     |   |\\   |  |     |  |\\  /|  |     \n");
    printf("       \033[1;31m|      |  |_____   |_____  |____/    | \\  |  |_____|  | \\/ |  |_____\n");
    printf("       \033[1;31m|      |        |  |       |  \\      |  \\ |  |     |  |    |  |     \n");
    printf("       \033[1;31m|______|  ______|  |_____  |    \\    |   \\|  |     |  |    |  |_____\n");
    printf("<--------------------------------------------------------------------------------->\033[1;32m\n\n\n");
    printf("                                    LOGIN PLEASE\n");
    printf("                                 ******************\n\n");
    char username[20];
    char password[20];
    char correctUsername[] = "user@123";
    char correctPassword[] = "password@123";
    char exit[] = "e";
    do{
    printf("\033[1;32m                          ENTER USENAME  : ");
    scanf("%s", username);
    printf("\033[1;32m                          ENTER PASSWORD : ");
    scanf("%s", password);
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        // do something
        do{
         printf("                                 APPLICATION\n");
    printf("                           ___________________________\n");
    printf("                          | (1.) CONTACT              |\n");
    printf("                          | (2.) CALCULATOR           |\n");
    printf("                          | (3.) CLOCK                |\n");
    printf("                          | (4.) NOTES                |\n");
    printf("                          |___________________________|\n");
    int a;
    printf("                          ");
    scanf("%d",&a);
    switch(a){
        case 1 : 
        break;
        case 2 : // CALCULATOR PROGRAM
                    printf("\033[1;32m*------------------------------------------------------------------------------------*\n");
	                printf("\033[1;32m|   \033[1;31m######  \033[1;34m######  \033[1;31m##      \033[1;34m######  \033[1;31m##  ##  \033[1;34m##      \033[1;31m######  \033[1;34m######  \033[1;31m######  \033[1;34m######   \033[1;32m|\n");
	                printf("\033[1;32m|   \033[1;31m##      \033[1;34m##  ##  \033[1;31m##      \033[1;34m##      \033[1;31m##  ##  \033[1;34m##      \033[1;31m##  ##    \033[1;34m##    \033[1;31m##  ##  \033[1;34m##  ##   \033[1;32m|\n");
	                printf("\033[1;32m|   \033[1;31m##      \033[1;34m######  \033[1;31m##      \033[1;34m##      \033[1;31m##  ##  \033[1;34m##      \033[1;31m######    \033[1;34m##    \033[1;31m##  ##  \033[1;34m####     \033[1;32m|\n");
	                printf("\033[1;32m|   \033[1;31m##      \033[1;34m##  ##  \033[1;31m##      \033[1;34m##      \033[1;31m##  ##  \033[1;34m##      \033[1;31m##  ##    \033[1;34m##    \033[1;31m##  ##  \033[1;34m## ##    \033[1;32m|\n");
	                printf("\033[1;32m|   \033[1;31m######  \033[1;34m##  ##  \033[1;31m######  \033[1;34m######  \033[1;31m######  \033[1;34m######  \033[1;31m##  ##    \033[1;34m##    \033[1;31m######  \033[1;34m##  ##   \033[1;32m|\n");
	                printf("\033[1;32m*------------------------------------------------------------------------------------*\n\n");
                     char c;
                      do {
                      printf("ENTER OPERATOR :  '+' , '-' , '*' , '/' , 'a' , 'p' \n");
  
    
                       scanf(" %c", &c);
                       double n1,n2;
                        if(c=='+' || c=='-' || c=='*' || c=='/' || c=='a' || c=='p'){
                       printf("ENTER NUM1 : ");
                        scanf("%lf",&n1);
                        printf("ENTER NUM2 : ");
                       scanf("%lf",&n2);
                         printf("---------------------------------------------------\n");
   
                          switch (c){
    
                                 case '+' : printf("RESULT --> %.2f",n1+n2);
                                     break;
                                 case '-' : printf("RESULT --> %.2f",n1-n2);
                                     break;
                                 case '/' : if (n2 != 0){
                                   printf("RESULT --> %.2f\n", n1/n2);
                                     break;
                                      }    
                                     else {
                                      printf("\033[1;31mError! Division by zero.\033[1;32m\n");
                                      break;
                                          }
                        
                                     break; 
                                     printf("RESULT --> %.2f",n1/n2);
                                      break;
                                 case '*' : printf("RESULT --> %.2f",n1*n2);
                                        break;
                                 case 'p' : printf("RESULT --> %.2f",pow(n1,n2));
                                       break;
                                 case 'a' :  printf("ADDITION       --> %.2f\n",n1+n2);
                                     printf("SUBTRACTION    --> %.2f\n",n1-n2);
                                      printf("MULTIPLICATION --> %.2f\n",n1*n2);
                                        printf("POWER          --> %.2f\n",pow(n1,n2));
                                     if (n2 != 0){
                                      printf("DIVISION       --> %.2f\n", n1/n2);
                                         break;
                                      }    
                                    else {
                           
                                      }
                                      break;
                                     }
                                      printf("---------------------------------------------------\n");
                                      }
                                       else if(c == 'e'){
                                       break;
                                        }
                                        else {
                                       printf("---------------------------------------------------\n");
                                        printf("\033[1;31mERROR! INVALID OPERATOR...\033[1;32m \n");
                                     printf("---------------------------------------------------\n");
                                          }
    
    
                                           }
                                          while(1|0);


        break;
        case 3 : 
        break;
        case 4 : 
        break;

    }
       
    } 
    while(0|1);
    }
    else if(strcmp(username, exit) == 0 && strcmp(password, exit) == 0){
        break;
    }
       //
    else {
        printf("                          \033[1;31mINVALID! USERNAME OR PASSWORD\033[0m\n");
        printf("                          -----------------------------\n");
        printf("                                 ---TRY AGAIN---   \n");
        printf("                          -----------------------------\n");
    }
    }
    while(0|1);
    return 0;
}
