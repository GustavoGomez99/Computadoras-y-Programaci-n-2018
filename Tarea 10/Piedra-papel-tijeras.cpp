#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
  char *v[3] = {"piedra","papel","tijeras"};
  int ju, pc, jugados = 1, ganados = 0, perdidos = 0;
  do {
    printf("Jugada %d, elija una opcion (1, 2, 3) G:%d P:%d\n",jugados, ganados, perdidos);
    printf("1. Piedra\n");
    printf("2. Papel\n");
    printf("3. Tijeras\n");
    do
      scanf("%d",&ju);
    while ((ju == '\n') && (ju != '1' || ju != '2' || ju != '3'));
    while(getchar()!='\n');
    ju--;
    pc = rand() % 3;
    printf("Ud eligio %s, la PC eligio %s => ",v[ju], v[pc]);
    if (ju == pc)
      printf("Hay empate\n");
    else if ((ju == 0 && pc == 2)||(ju == 1 && pc == 0)||(ju == 2 && pc == 1)) {
      printf("Ud. gana\n");
      ganados++;
    }
    else {
      printf("La PC gana\n");
      perdidos++;
    }
    jugados++;
    printf("-----------------------------\n");
  } while (ganados < 5 && perdidos < 5);
  if (ganados > perdidos)
    printf("Ud ha ganado en %d intentos.",jugados);
}

