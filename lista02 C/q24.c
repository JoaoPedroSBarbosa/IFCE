#include <stdio.h>

int main(){

  int c1, c2, h;

  for(int h = 1; h <= 500; h++){
    for(int c1 = 1; c1 <= 500; c1++){
      for(int c2 = 1; c2 <= 500; c2++){

        int a = (c1*c1) + (c2*c2);
        int b = (h*h);

        if(a == b){
          printf("\n(%d, %d, %d) é uma tripla de pitagoras.\n", c1, c2, h);
        }
      }
    }
 }
  
  return 0;
  
}