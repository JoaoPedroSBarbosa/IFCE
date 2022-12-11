#include <stdio.h>
#include <stdlib.h>

struct estoque{
  char NomePeca[50];
  float PrecoPeca;
  int Npeca;
  int Npedido;
};

int main (){
  struct estoque p1, *p = &p1;

  puts("Qual o nome da peça: ");
  fgets(p->NomePeca,50,stdin);

  puts("Qual o preço da peca? ");
  scanf("%f",&p->PrecoPeca);

  puts("Qual o numero da peca?");
  scanf("%d",&p->Npeca);
  
  puts("Qual o numero do pedido?");
  scanf("%d",&p->Npedido);

  printf("\n\n\t----------------Processando----------------\n\n");

  printf("Peca: %sPreco: %.2f\nNumero da Peca: %d\nNumero do Pedido: %d",p->NomePeca,p->PrecoPeca,p->Npeca,p->Npedido);
  
  return 0;
}