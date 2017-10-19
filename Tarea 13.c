#include <math.h>
#include <stdio.h>

int main()
{
    int n1, n2, opcion, suma, resta;

    do
    {
        printf( "\n   1. sumar los numeros.", 163 );
        printf( "\n   2. restar los numeros.", 163 );
        printf( "\n   3. Salir." );
        printf( "\n\n   Introduzca opci%cn (1-3): ", 162 );

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
        	
            case 1: printf( "\n   Introduzca el primer numero: ", 163 );
                    scanf( "%d", &n1 );
                     printf( "\n   Introduzca el segundo numero: ", 163 );
                    scanf( "%d", &n2 );
                    suma=n1+n2;
                    printf( "\n   La suma de los numeros es:%d\n\n", suma );
                    break;

            case 2: printf( "\n   Introduzca el primer numero: ", 163 );
                    scanf( "%d", &n1 );
                     printf( "\n   Introduzca el segundo numero: ", 163 );
                    scanf( "%d", &n2 );
                    	resta=n1-n2;
                    printf( "\n   La resta de los numeros es: %d\n\n", resta );
         }

         

    } while ( opcion != 3 );

    return 0;
}
