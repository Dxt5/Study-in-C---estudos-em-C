#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//uma linha de comentario
/*comentários enormes*/

int main(){
    //declarações
    int num;

    //printar o numero
    printf("Digite um numero: \n");
    scanf("%d", &num);

    //se
    if(num < 10){
        printf("Esse numero é menor que 10 \n");
    } 
    //senao
    else{
        printf("Esse numero é maior que 10 \n");
    }

    //escolha...caso,interrompa...outrocaso
    switch (num){
    case 10:
        printf("Executando caso %d \n", num);
        //interrompa
        break;

    //outrocaso
    default:
        printf("Executando outrocaso \n");
        break;
    }
    
    
    return 0;
}