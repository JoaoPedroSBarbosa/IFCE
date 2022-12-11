#include <stdio.h>

int main(){

  int m3 = 0, m5 = 0;

  for(int i = 0; i <= 200; i++){
    if(i <= 100){
      if(i % 3 == 0){
        m3 += i;
      }
    }else{
      if(i % 5 == 0){
        m5 += i;
    }
   }
  }

  printf("Somatório de multiplos de 3 na faixa de 0 a 100: %d\nSomatório de multiplos de 5 na faixa de 100 a 200: %d", m3, m5);
  
  return 0;
}