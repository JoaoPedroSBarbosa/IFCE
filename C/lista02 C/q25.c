#include <stdio.h>

int main(){

  double pi = 0, c = 1;
  
  for(int i = 1; i <= 100; i++){
    if(i % 2 != 0){
      pi = pi + (4/ c); 
      c += 2;
      }else{
      pi = pi - (4/ c);
      c += 2;
    }
  }

  printf("O pi até o centesimo termo da equação será: %.10f", pi);
  
  return 0;
}