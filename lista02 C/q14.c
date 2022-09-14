#include <stdio.h>

int main(){
  int a, b, M3 = 0;
  
  puts("Forneça a Faixa: ");
  scanf("%d",&a);

  puts("Forneça a Faixa: ");
  scanf("%d",&b);

  if(a < b){
    for(int i = a; i <= b; i++){
    if(i % 3 == 0){
      M3 += 1;
    }
  }
  }else{
    for(int i = b; i <= a; i++){
    if(i % 3 == 0){
    M3 += 1;
    }
  }
  }

  printf("A quantidade de números divisiveis por 3 é: %d",M3);
  
  return 0;
}