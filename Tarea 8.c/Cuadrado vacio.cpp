#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i, j, filas ,columnas;
   
   printf("Introduzca el numero de filas: ");
   fflush(stdout);
   if (scanf("%d", &filas) != 1)
      return EXIT_FAILURE;
   
   printf("Introduzca el numero de columnas: ");

  fflush(stdout);
   if (scanf("%d",&columnas) != 1)
      return EXIT_FAILURE;
   
   for (i = 1; i <= filas; i++){
      for(j = 1; j <= columnas ; j++)
         if (i == 1 || i == filas || j == 1 || j == columnas)
            printf("+");
         else
            printf(" ");
      
      printf("\n");
   }
}
    
    
    
    
    
    
    
    
    
    
    
    
    

