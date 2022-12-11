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

    if(x % 2 == 0){
      if(x < 0){
        break;
      }else{
        if(ma < x){
          ma = x;
        }else if(x < me){
          me = x;
        }
      }
    }else{
      if(ma < x){
        ma = x;
      }else if(x < me){
        me = x;
      }  
    }   
  }
  printf("O produto do menor número e do maior é: %d", me*ma);
  return 0;
}