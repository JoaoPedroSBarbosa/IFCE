#include <stdio.h>
#define qtd 15

int main(){

  float x[qtd];
  float me, ma;
  
  for(int i = 0; i < qtd; i++){
    printf("Insira o elemento do vetor de float: ");
    scanf("%f",&x[i]);

    if(i == 0){
      me = x[0];
      ma = x[0];
    }else{
      if(x[i] > ma){
        ma = x[i];
      }else if(x[i] < me){
        me = x[i];
      }
    }
  }

  printf("A soma do maior elemento com o menor elemento é: %f", me + ma);
  
  return 0;
  
}