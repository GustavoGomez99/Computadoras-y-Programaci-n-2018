#include <stdio.h>

int main()
{
    int i, numero;
    {
        printf( " La tabla de multiplicar del 3 es:" );
			numero=3;
			for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d * %d = %d", i, numero, i * 3 );
   }
    return 0;
}
