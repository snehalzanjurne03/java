#include<stdio.h>
void main(){
   int a,b,choice;
    int ans;
     printf("enter 1st no:\n" );
     scanf("%d",&a);
      printf("enter 2nd no:\n");
       scanf("%d",&b);
        printf(" Your 1st no is %d",a);
         printf(" Your 2nd no is %d",b);
       printf("\nEnter choice:\n");
       printf(" 1. Add \n 2. Sub \n 3. Div \n 4. Mul \n");
       scanf(" %d",&choice);

        switch(choice)
        {
          case 1:
              ans=a+b;
               printf("Addition is %d",ans);
          break;
          case 2:
              ans=a-b;
              printf("Subtraction is %d",ans);
            break;
            case 3:
              ans=a*b;
              printf("Multiplication is %d",ans);
            break;
            case 4:
              ans=a/b;
              printf("Division is %d",ans);
            break;
        }
     }


