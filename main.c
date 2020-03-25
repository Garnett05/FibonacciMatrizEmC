#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int z, aux;
  aux = 1;

  printf("Number of elements: ");
  scanf("%i", &z);

  int fibo [z];
  fibo[0] = 1;
  fibo[1] = 1;

  int a = 2;

  while (a < z){
    fibo[a] = fibo[a-1] + fibo[a-2];
    a++;
  }

  while (aux*aux < z){
    aux++;
  }

  int mat [aux][aux];
  
  int n = 0;
  for (int i = 0; i < aux; i++){    
    for (int j = 0; j < aux; j++){
      if (n < z){
        mat[i][j] = fibo[n];
      }
      else{
        mat[i][j] = 0;
      }
      n++;
    }
  }   
  printf("Matriz no formato normal:");
  for (int i = 0; i < aux; i++){
      printf("\n");
      for (int j = 0; j < aux; j++){
       printf("%i ", mat[i][j]);
    }
  }
  printf("\n\nMatriz no formato oposto:");
  for (int i = 0; i < aux; i++){
      printf("\n");
      for (int j = 0; j < aux; j++){
       printf("%i ", mat[i][j] * -1);
    }
  }
  printf("\n\nMatriz no formato transposto:");
  for (int i = 0; i < aux; i++){
      printf("\n");
      for (int j = 0; j < aux; j++){
       printf("%i ", mat[j][i]);
    }
  }
  //A primeira matriz exibe os números da sequência fibonacci em ordem linear.
  //A segunda matriz exibe da mesma maneira que a primeira, porém os elementos são multiplicados por -1".
  //A última matriz 'troca' as linhas pelas colunas, gerando assim uma nova matriz.

  return 0;
}