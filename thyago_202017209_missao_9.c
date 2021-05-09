#include <stdio.h>
#include <stdlib.h>

//variaveis globais
int num[10000];
int tam;

//funcoes
int menu(int opcao);
void info_gerais(int i, float soma);
void listar_idades();
void menor_maior_media(float soma, int i);
void mudar_posicao();
void excluir_posicao();
void pesquisar_posicao();
void sair();


int main(){
    //definicao de variaveis
    int i, validacao, opcao;
    float soma;
    

    //inicializacao de variaveis
    i=0;
    opcao=0;

    //codigo
    while(1){
        //receber a idade
        printf("\n\n---------REGISTRAR IDADES-----------\n");
        printf("obs: Caso queria parar o cadastramento digite 150!\n\n");
        printf("Digite a %dº idade: \n",(i+1));
        scanf("%d",&validacao);
        
        //validar a idade
        if(validacao<0 || validacao >=150){
            printf("\n----!!FIM DE REGISTROS!!---");
            getchar();
            system("cls || clear");
            break;
        }
        else{
            num[i]= validacao;
        }

        //soma para fazer a media
        soma = soma + num[i];

        //adicionar posicao no vetor
        i++;
        printf("\n----------IDADE REGISTRADA!!-----------");
        getchar();
        system("cls || clear");
    }

    //registrar tamanho do vetor
    tam = i;
    //menu
    while(opcao != 7){
        opcao = menu(opcao);

        //escolha caso
        switch (opcao){
            //ver numeros inseridos, media das idades, menor idade e maior idade
            case 1:
                info_gerais(i, soma);
                break;

            //editar idade    
            case 2:
                listar_idades();
                break;

            //listar idades maiores e menores que a media
            case 3:
                menor_maior_media(soma, i);
                break;

            //editar uma posicao
            case 4:
                mudar_posicao();
                break;

            //excluir idade
            case 5:
                excluir_posicao();
                break;

            //pesquisar uma idade
            case 6:
                pesquisar_posicao();
                break;

            //finalizar programa
            case 7:
                sair();
                break;

            //caso seja escolhida uma opcao que nao existe no menu
            default:
                printf("Opcao digitada indisponivel! Tente novamente!\n");
                break;
            }
    }
    return 0;
}

//mostrar menu
int menu(int opcao){
    printf("\n\n-------------------------------------------------\n");
    printf("Menu: \n");
    printf("1 - Informações Gerais \n");
    printf("2 - Listar idades \n");
    printf("3 - Listar Maiores/Menores que a média \n");
    printf("4 - Editar idade \n");
    printf("5 - Excluir idade \n");
    printf("6 - Pesquisar posição \n");
    printf("7 - Sair \n");
    printf("-------------------------------------------------\n");
    scanf("%d", &opcao);
    system("clear");
    return opcao;
}

//realizar o caso 1
void info_gerais(int i, float soma){

    //definicao de variaveis
    float media;
    int menor, maior;

    //codigo

    //quantidade de idades inseridas
    printf("\n   TOTAL DE IDADES INSERIDAS   \n");
    printf("\nNumeros de idades inseridas: %d \n", i);
    printf("\n***********************************\n");

    //media das idades inseridas
    media = soma/i;
    printf("\n    MEDIA DE IDADES    \n");
    printf("\nMedia das idades: %.2f \n",media);
    printf("\n******************************\n");

    
    //menor idade inserida
    menor = num[0];
    for(int i=0; i< num[i]; i++){
        if(num[i]< menor){
            menor = num[i];
        }
    }
    printf("\n    MENOR IDADE INSERIDA   \n");
    printf("\nMenor idade inserida: %d \n",menor);
    printf("\n******************************\n");
    
    //maior idade inserida
    maior = num[0];
    for(i=0; i< num[i]; i++){
        if(num[i]> menor){
            maior = num[i];
        }
    }
    printf("\n   MAIOR IDADE INSERIDA   \n");
    printf("\nMaior idade inserida: %d \n",maior);
    printf("\n******************************\n");
    
}

//realizar caso 2
void listar_idades(){

    //codigo
    printf("----------IDADES REGISTRADAS--------\n");
    for(int i=0; i < tam; i++){
        printf("%dº Idade Registrada: %d; \n", (i+1), num[i]);
    }
}

//realizar caso 3
void menor_maior_media(float soma, int i){
    //definicao de variaveis
    float media;

    //codigo
    media = soma/i;

    //maiores que a media
    printf("------MAIORES QUE A MEDIA------\n");
    for(int i=0; i< num[i]; i++){
        if(num[i]>media){
            printf("Maior que a media: %d \n", num[i]);
        }
    }

    //menores que a media
    printf("\n------MENORES QUE A MEDIA------\n");
    for(int i=0; i< num[i]; i++){
        if(num[i]<media){
            printf("Menor que a media: %d \n", num[i]);
        }
    }
}

//realizar caso 4
void mudar_posicao(){
    //definicao de variaveis
    int alterar, posicao, confirmacao;

    //codigo
    do{
        printf("\n------ALTERAR IDADE------\n");
        printf("!!Lembre que as posições começam por: 0,1,2,3!!\n");
        printf("Digite a posicao que deseja alterar: \n");
        scanf("%d",&alterar);

        if(alterar>tam){
            printf("------------------------------------------\n");
            printf("Opcao invalida!!\n");
            
        }
        else{
            for(int i=0; i<=alterar;i++){
                posicao = num[i];
            }
            printf("------------------------------------------\n");
            printf("\n\nA posicao foi encontrada!\nIDADE = %d\n", posicao);
        }
        
    }while(alterar>tam);

    for(int i=0; i<=alterar ;i++){
        posicao = num[i];
    }

    printf("------------------------------------------\n");
    printf("\nVoce deseja realmente editar a idade?\n1 - sim \n2 - nao \n");
    scanf("%d", &confirmacao);

    if(confirmacao == 1){
        printf("------------------------------------------\n");
        printf("\nDigite um novo numero para a posicao: \n");
        scanf("%d", &num[alterar]);

        getchar();
        system("cls || clear");
        printf("\n!!ALTERACAO BEM SUCEDIDA!!\n");
    }
    else{
        getchar();
        system("cls || clear");
        printf("---------------------------\n");
        printf("SE PRECISAR VOLTE NOVAMENTE\n");
    }
    
}

//realizar o caso 5
void excluir_posicao(){
    //definicao de variaveis
    int excluir, posicao, confirmacao;

    //codigo
    do{
        printf("--------------REMOVER IDADE---------\n");
        printf("!!Lembre que as posições começam por: 0,1,2,3!!\n");
        printf("Digite a posição que deseja excluir: \n");
        scanf("%d",&excluir);
        if(excluir>tam){
            printf("------------------------------------------\n");
            printf("Opcao invalida!!\n");
                
        }
        else{
            for(int i=0; i<=excluir;i++){
                posicao = num[i];
            }
            printf("------------------------------------------\n");
            printf("\n\nA posicao foi encontrada!\nIDADE = %d\n", posicao);
        }
    }while(excluir>tam);

    printf("----------------------------------------\n");
    printf("\nVoce deseja realmente excluir a idade?\n1- sim \n2- nao\n");
    scanf("%d", &confirmacao);

    if(confirmacao == 1){
        for(int i=excluir; i<(tam-1) ;i++){
            num[i]=num[i+1];
        }
        tam--;
        getchar();
        system("cls || clear");
        printf("\n-----------IDADE EXCLUIDA!------\n");
    }
    else{
        getchar();
        system("cls || clear");
        printf("---------------------------\n");
        printf("SE PRECISAR VOLTE NOVAMENTE\n");
    }
}

//realizar o caso 6
void pesquisar_posicao(){
    //definicao de variaveis
    int pesquisar, posicao;

    //codigo
    printf("-----------------PESQUISAR-------------\n");
    printf("!!Lembre que as posições começam por: 0,1,2,3!!\n");
    printf("Digite a posição que deseja pesquisar: \n");
    scanf("%d",&pesquisar);

    if(pesquisar>tam){
        printf("------------------------------------------\n");
        printf("Opcao invalida!!\n");
                
    }
    else{
        for(int i=0; i<=pesquisar;i++){
            posicao = num[i];
        }
        printf("------------------------------------------\n");
        printf("\n\nA posicao foi encontrada!\nIDADE = %d\n", posicao);
    }
    
}

//finalizar programa com uma mensagem ao usuario
void sair(){

    //codigo
    printf("\n---------------------------------\n");
    printf("Obrigado por utilizar o programa!\n");
    printf("!!Volte mais tarde!!\n");
    printf("\n---------------------------------\n");
}
