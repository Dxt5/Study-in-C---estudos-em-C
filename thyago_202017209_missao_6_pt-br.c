#include <stdio.h>
#include <stdlib.h>


/*
.> O programa tem como objetivo ter um menu de opcoes e 
realizar operacoes com dados informados pelo usuario
*/

int main(){
    //definicao de variaveis
    int opcao_menu, num_impar_par;
    float peso, altura, imc;
    float num_1_multiplicacao, num_2_multiplicacao, resultado_m;
    float num_divisao1, num_divisao2, resultado_d;

    //menu de opçoes em portugues do Brasil
    printf("\n-------------------------------------------------\n");
    printf("Menu de opçoes: \n");
    printf("1 - Receber informaçoes do aluno responsavel \n");
    printf("2 - Verificar o seu Indice de Massa Corporal(IMC) \n");
    printf("3 - Verificar se o numero e Par ou Impar \n");
    printf("4 - Efetuar uma multiplicaçao \n");
    printf("5 - Efetuar uma divisao \n");
    printf("6 - Sair \n");
    printf("-------------------------------------------------\n");
    scanf("%d", &opcao_menu);
    system("clear");

    //escolher a opcao que o usuario quer executar
    switch (opcao_menu){
        
    //mostrar informacoes
    case 1:
        printf("\n-----------------------------------\n");
        printf("\nInformações do aluno:\n");
        printf("Nome: Thyago Henrique Moura dos Anjos\n");
        printf("Matrícula: 202017209\n");
        printf("Semestre: 1º semestre\n");
        printf("\n-----------------------------------\n");
        break;

    //conta de imc
    case 2:
        printf("\n--------------------\n");
        printf("Vamos ver o seu IMC!?!\n");
        printf("Qual o seu peso?\n");
        scanf("%f", &peso);

        printf("Qual a sua altura?\n");
        scanf("%f", &altura);

        imc = peso / (altura*altura);
        printf("O seu IMC e: %.1f\n",imc);
        printf("\n--------------------\n");
        break;

    //verificar se o numero e impar ou par
    case 3:
        printf("\n-----------------------------------------\n");
        printf("Vamos verificar se o numero e impar ou par:\n");
        printf("Digite um numero inteiro:\n");
        scanf("%i",&num_impar_par);

        if (num_impar_par % 2 == 0){
            printf("O %i e par!\n", num_impar_par);
        }
        else{
            printf("O %i e impar!\n", num_impar_par);
        }
        printf("\n-----------------------------------------\n");
        break;

    //fazer uma multiplicacao
    case 4:

        printf("\n----------------------------\n");
        printf("Vamos fazer uma multiplicação?\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &num_1_multiplicacao);
        printf("Digite o segundo número:\n");
        scanf("%f", &num_2_multiplicacao);
        resultado_m = num_1_multiplicacao * num_2_multiplicacao;
        printf("O resultado é: %.1f\n", resultado_m);
        printf("\n-----------------------------\n");
        break;

    //fazer uma divisao
    case 5:

        printf("\n-----------------------\n");
        printf("Vamos fazer uma divisao?\n");
        printf("Digite o primeiro numero:\n");
        scanf("%f", &num_divisao1);
        printf("Digite o segundo numero:\n");
        scanf("%f", &num_divisao2);
        resultado_d = num_divisao1/num_divisao2;
        printf("O resultado e: %.1f \n", resultado_d);
        printf("\n------------------------\n");
        break;

    //finalizar o programa
    case 6:
        printf("\n-------------------------------\n");
        printf("Obrigado por utilizar o programa!\n");
        printf("!!Volte mais tarde!!\n");
        printf("\n-------------------------------\n");
        break;

    //caso a opcao desejada nao exista
    default:
        printf("Numero digitado indisponivel!\n");
        break;
    }
    
    return 0;
}
