//tarea 12//

#include <stdio.h>
int main(){
	int A;
    float C,B;
    printf("Ingresa un numero\n ");
    scanf("%d",&A);
    printf("Ingresa otro numero\n ");
    scanf("%f",&B);
    printf("Ingresa un numero\n ");
    scanf("%f",&C);
    if(A > B && A > C){
    printf("El numero mayor es %d\n",A);
    }else
	{
        if(B > A && B > C){
        printf("El numero mayor es %f\n",B);
        } else
		{
        printf("El numero mayor es %f\n",C);
        }
        if 
         (A < B && A < C){
    printf("El numero menor es %d\n",A);
    }else
	{
        if(B < A && B < C){
        printf("El numero menor es %f\n",B);
        } else
		{
        printf("El numero menor es %f\n",C);
        }
    }
}

   return 0;
}
