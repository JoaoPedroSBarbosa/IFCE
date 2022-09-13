#include <stdio.h>

int main(){
  int x, me, ma, t = 1;
  
  printf("Digite um valor inteiro: ");
  scanf("%d",&x);

  ma = x;
  me = x;  

  while(t != 0){
    printf("Digite um valor inteiro: ");
    scanf("%d",&x);

    if(ma < x && x != 0){
      ma = x;
    }else if(x < me && x != 0){
      me = x;
    }else if(x == 0){
      break;
    } 
  }
  printf("%d e %d", me, ma);
  return 0;
}