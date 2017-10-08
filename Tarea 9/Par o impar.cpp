//Par o impar//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int i;
            printf("Introduzca numero:");
    scanf("%d",&i);
    if (i%2==0) {
       printf("Es par.");
    }
    else
    {
       printf("Es impar.");
    }
    system("PAUSE");
    return 0;
}
