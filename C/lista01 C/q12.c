#include <stdio.h>

int main (){

    int a, b;

    puts("Digite qualquer valor inteiro: ");
    scanf("%d",&a);

    puts("Digite qualquer valor inteiro: ");
    scanf("%d",&b);

    printf("Soma: %d\nProduto: %d\nDiferença: %d\nQuociente: %d\nResto da divisão: %d", a + b, a*b, a - b, a / b, a % b);
  
    return 0;
}