/*Programa para calcular el IVA y el precio*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
      float precio, iva, total;
      printf("\nCalcular IVA de un producto\n\n");
      printf("\nEscriba el precio del producto: ");
      scanf("%f", &precio);
      printf("\n");
      iva=precio*0.14;
      printf("El valor del IVA del producto es de: %f", iva);
      printf("\n\n");
      total=precio+iva;
      printf("El valor del producto con el IVA incluido es de: %f", total);
      printf("\n\n");
      system("PAUSE");
      return 0;
}
