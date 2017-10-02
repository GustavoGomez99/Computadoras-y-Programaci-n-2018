#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1=0;
	int n2=0;
	int n3=0;
	printf ("introduce el numero que quiere multiplicar: ");
	scanf ("%d", &n1);
	printf ("introduce hasta que numero lo quieres: " );
	scanf ("%d", &n2);
		for ( n1; n1<=n2; n1=n1+1){
				for(n3=1; n3<=10;n3=n3+1){
					printf (" %d x %d = %d " ,n1,n3,n1*n3);
				}       
}
}

