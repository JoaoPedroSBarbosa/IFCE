#include <stdio.h>

int main (){

    int a, b, c;

    puts("Digite um valor inteiro para o A: ");
    scanf("%d",&a);

    puts("Digite um valor inteiro para o B: ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("A = %d\nB = %d", a, b);
  
    return 0;
}