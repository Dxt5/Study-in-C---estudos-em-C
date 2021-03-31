#include <stdio.h>
#include <stdlib.h>

int main(){
    //definiçao de variaveis
    int num,num_primo, opcao_menu, qtd_num_negativos, qtd_num_pares, div, qtd_primos, i;
    float verificacao_num, media, cont, soma;

    //inicializaçao de variavel
    opcao_menu=0;
    qtd_num_negativos=0;
    qtd_num_pares=0;
    qtd_primos=0;
    i=0;
    cont=0;
    soma=0;
    div=0;

    //entrada dos numeros que nao sao multiplos de 150
    do{
        div=0;
        printf("\n------------------Registra numeros---------------\n");
        printf("!! Atençao: Numeros multiplos de 150 param o cadastramento !!\n");
        printf("Cadastre um numero: \n");
        scanf("%d", &num);
        printf("\n-------------------------------------------------\n");

        //verificar se o numero e valido
        verificacao_num = num % 150;

        if (verificacao_num!=0){
            //ver quantos sao negativos
            if (num<0){
                qtd_num_negativos++;
            }

            //ver quantos sao pares
            if (num % 2 == 0){
                qtd_num_pares++;
            }

            //ver quantos sao primos
            if(num<0){
                num = num*-1;
            }
            num_primo=num;
            for(num_primo; num_primo >0; num_primo--){
                if(num%num_primo==0 && num != num_primo || num ==1){
                    
                    break;
                }else if(num_primo==2){
                    qtd_primos++;
                    break;
                }
            }
            //soma dos numeros
            soma = soma + num;

            //contar quantos numeros foram inseridos
            cont++;
        }
    } while (verificacao_num != 0);
    
    //menu com switch case
    while(opcao_menu!=6){
        //menu
        printf("\n-------------------------------------------------\n");
        printf("Menu de opçoes: \n");
        printf("1 - Quantidade de números inseridos \n");
        printf("2 - Quantidade de números negativos \n");
        printf("3 - Quantidade de números pares \n");
        printf("4 - Quantidade de números primos \n");
        printf("5 - Média dos números \n");
        printf("6 - Sair \n");
        printf("-------------------------------------------------\n");
        scanf("%d", &opcao_menu);
        system("clear");
        switch (opcao_menu){

        //caso 1 - Quantidade de números inseridos
        case 1:
            printf("\n----------------------------\n");
            printf("Foram registrados %0.f numeros\n", cont);
            printf("\n----------------------------\n");
            break;

        //caso 2 - Quantidade de números negativos
        case 2:
            printf("\n----------------------------\n");
            printf("A quantidade de numeros negativos e: %d\n", qtd_num_negativos);
            printf("\n----------------------------\n");
            break;

        //caso 3 - Quantidade de números pares
        case 3:
            printf("\n----------------------------\n");
            printf("A quantidade de numeros pares e: %d\n", qtd_num_pares);
            printf("\n----------------------------\n");
            break;

        //caso 4 - Quantidade de números primos
        case 4:
            printf("\n----------------------------\n");
            printf("A quantidade de primos e: %d", qtd_primos);
            printf("\n----------------------------\n");
            break;

        //caso 5 - Média dos números
        case 5:
            printf("\n----------------------------\n");
            media = soma/cont;
            printf("A media e: %1.f",media);
            printf("\n----------------------------\n");
            break;

        //caso 6 - sair
        case 6:
            printf("\n-------------------------------\n");
            printf("Obrigado por utilizar o programa!\n");
            printf("!!Volte mais tarde!!\n");
            printf("\n-------------------------------\n");
            break;
        
        //caso seja inserida uma opcao que nao existe
        default:
            printf("Opcao digitada indisponivel! Tente novamente!\n");
            break;
        }
    }
    return 0;
}

