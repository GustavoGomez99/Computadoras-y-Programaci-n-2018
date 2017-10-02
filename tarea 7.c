#include <stdio.h>
#include <stdlib.h>
int main(void)
{
            int num1,num2,num3;
            printf("Introduzca numero 1:");
    scanf("%d",&num1);

            printf("Introduzca numero 2:");
    scanf("%d",&num2);

            printf("Introduzca numero 3:");
    scanf("%d",&num3);
    if (num1<num2 && num1<num3)
    {
        printf("%d",num1);
    }
    else if (num2<num1 && num2<num3)
    {
        printf("%d",num2);
    
       }
    else if (num3<num2 && num3<num1)
    {

        printf("%d",num3);   
    }
    system("PAUSE");     
    return 0;
}
