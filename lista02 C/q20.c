#include <stdio.h>

int main(){

  int c = 1, f1 = 1, f;

  printf("O fatorial dos numeros impares é: ");
  
  for(int i = 1; i <= 10; i++){
    if(i % 2 != 0){
      while(c <= i){
      f1 = f1*c;
      c++;  
      }
      printf("%d ", f1);
    }
  }
  
  return 0;
}