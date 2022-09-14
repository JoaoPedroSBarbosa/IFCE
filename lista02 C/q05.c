#include <stdio.h>

int main(){
  int v, r = 0, p = 0, t = 1, n = 0;
  float u;
  char c;

  while(t != 0){
    printf("Qual o seu voto? ");
    scanf("%d",&v);
    
    if(v == 7){
      printf("Confirmar [S ou N]? ");
      scanf("%s",&c); 
      if(c == 'S'){
        r += 1;
      }else{
        continue;
      }  
    }else if(v == 5){
      printf("Confirmar [S ou N]? ");
      scanf("%s",&c); 
      if(c == 'S'){
        p ++;
      }else{
        continue;
      }  
    }else if(v == 0){
      printf("Confirmar [S ou N]? ");
      scanf("%s",&c); 
      if(c == 'S'){
        n ++;
      }else{
        continue;
      }  
    }else if(v < 0){
      break;
    }else{
      printf("Confirmar [S ou N]? ");
      scanf("%s",&c); 
      if(c == 'S'){
        n += 1;
      }else{
        continue;
      }
    }
  }
  if(p > r){
    u = (float)p/((float)p + (float)r)*100;
    printf("Paulo foi o candidadto vencedor com %.2f por cento dos votos.", u);
    printf("Houveram %d votos nulos nessa eleição", n);
  }else{
    u = (float)p/((float)p + (float)r)*100;
    printf("Paulo foi o candidadto vencedor com %.2f por cento dos votos.", u);
    printf("\nHouveram %d votos nulos nessa eleição", n);
  }
  return 0;
}