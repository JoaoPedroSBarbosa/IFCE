#include <stdio.h>

int main(){
  int a, b;
  
  puts("Forneça a Faixa: ");
  scanf("%d",&a);

  puts("Forneça a Faixa: ");
  scanf("%d",&b);

  if(a < b){
    for(int i = a; i <= b; i++){
    if(i % 4 == 0){
      printf(" %d ,",i*i);
    }
  }
  }else{
    for(int i = b; i <= a; i++){
    if(i % 4 == 0){
      printf(" %d ,",i*i);
    }
  }
  }
  
  return 0;
}