#include <stdio.h>

int main (){

    int a;
    puts("Digite um valor inteiro: ");
    scanf("%d",&a);

    printf("O valor em Hexadecimal: %x\nO valor em octal: %o",a ,a);

    return 0;
}