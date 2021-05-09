#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    printf("Ola\n");
    //lendo valor inteiro em a
    int a = 50;
    printf("O valor de a é: %d \n", a);
    scanf("%d", &a);
    printf("O novo valor de a é: %d \n", a);
    
    //lendo valor inteiro em b
    float b = 6.6;
    printf("O valor em b é: %f \n ", b);
    scanf("%f",&b);
    printf("O valor de b é: %f \n", b);

    //lendo valor caracter em letra
    char letra = 'c';
    printf("A letra armazenada é: %c \n", letra);
    setbuf(stdin, 0);
    scanf("%c",&letra);
    printf("A letra nova armazenada é: %c \n", letra);
}