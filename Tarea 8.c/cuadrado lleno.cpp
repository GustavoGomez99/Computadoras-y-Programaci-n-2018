#include <stdio.h>
int main(){
int n;
int x, y;
printf ("introduzca el lado del cuadrado:\n");
scanf("%i",&n);
for(x=1; x<=n; x++){
	for(y=1; y<=n; y++)
	printf("+");
	printf("\n");
}
	return 0;
}
