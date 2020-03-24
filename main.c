#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i, aux;
  aux = 1;

  printf("Number of elements: ");
  scanf("%i", &i);

  int fibo [i];
  fibo[0] = 1;
  fibo[1] = 1;

  int a = 2;

  while (a < i){
    fibo[a] = fibo[a-1] + fibo[a-2];
    a++;
  }

  while (aux*aux < i){
    aux++;
  }
  int mat [aux][aux];

  int n = 0;
  for (int i = 0; i< aux; i++){
    for (int j = 0; j < aux; j++){
      mat[i][j] = fibo[n];
      n++;
    }
  }
  for (int i = 0; i< aux; i++){
    for (int j = 0; j < aux; j++){
      printf("%d", mat[i,j]);
    }
  }

  return 0;
}
