#include <stdio.h>

int main (){

    char s;
    float a;
  
    puts("Digite seu sexo (M ou F): ");
    scanf("%s",&s);
  
    puts("Digite sua altura: ");
    scanf("%f",&a);

    if (s == 'M'){
      printf("Seu peso ideal é: %.2f", 72.7 * a - 58);
    } else{
      printf("Seu peso ideal é: %.2f", 62.1 * a - 44.7);
    }
  
    return 0;
}