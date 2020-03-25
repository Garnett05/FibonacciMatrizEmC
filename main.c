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
  for (int i = 0; i < aux; i++){    
    for (int j = 0; j < aux; j++){
      if (fibo[n] != 0){
        mat[i][j] = fibo[n];
      }
      else{
        mat[i][j] = 0;
      }
      n++;
    }
  }
     
  printf("%i \n", aux);
  printf("%i ", mat[0][0]);
  printf("%i ", mat[0][1]);
  printf("%i", mat[0][2]);
  printf("\n%i ", mat[1][0]);
  printf("%i ", mat[1][1]);
  printf("%i ", mat[1][2]);
  printf("\n%i ", mat[2][0]);
  printf("%i ", mat[2][1]);
  printf("%i", mat[2][2]);
   
  /*for (int i = 0; i < aux; i++){
      printf("\n");
      for (int j = 0; j < aux; j++){
       printf("%i ", mat[i][j]);
    }
  }*/
  return 0;
}