include <stdio.h>

int main(){

  int a;

 for(int i = 1; i <= 10; i++){
   a = i;
   a --;
   printf("\n%d (pós-incremento) - %d (pré-incremento) = %d\n ",i, a, i-a);
 }

 return 0;
  
}