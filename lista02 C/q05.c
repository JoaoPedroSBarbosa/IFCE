#include <stdio.h>

int main(){
  int v, t = 1, n = 0;
  float u, r = 0, p = 0;
  char c;

  while(t != 0){
    printf("Qual o seu voto? ");
    scanf("%d",&v);
    
    printf("Confirmar [S ou N]? ");
    scanf("%s",&c); 

    if(c == 'S'){
       if(v == 7){
         r += 1;
       }else if(v == 5){
         p += 1;
       }else if(v == 0){
         n +=1;
       }else if(v < 0){
         break;
       } else{
         n += 1;
       } 
    }else{
       continue;
    }
  }
  if(p > r){
    u = (p /(p + r))*100;
    printf("O Candidato vencedor foi o Paulo com %.2f por cento dos votos.",u); 
  }else{
    u = (r /(p + r))*100;
    printf("O Candidato vencedor foi a Renata com %.2f por cento votos.",u); 
  }

  return 0;
}