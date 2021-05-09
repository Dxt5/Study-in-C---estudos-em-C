#include <stdio.h>
#include <stdlib.h>

//funcoes
int cadastra_id(int matriz_cadastro[3][3]);
int validar_posicao(int posicao);
int valida_id(int id_cadastro);
void lista_matriz(int matriz_cadastro[3][3]);

//principal
int main(){
    int opcao;
    int matriz_cadastro[3][3] = {-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int linha, coluna, id_cadastro;

    while(opcao!=3){
        //menu
        opcao = menu(opcao);

        //opcoes
        switch (opcao){
        case 1:
            printf("--------------CADASTRO-------------\n");
            printf("OBS: as posicoes vao de 0 a 2\n\n");

            //linha
            printf("Em qual LINHA deseja inserir o ID: \n");
            scanf("%d",&linha);
            linha = validar_posicao(linha);

            //limpa tela
            getchar();
            system("cls || clear");

            //coluna
            printf("Em qual COLUNA deseja inserir o ID: \n");
            scanf("%d",&coluna);
            coluna = validar_posicao(coluna);

            //limpa tela
            getchar();
            system("cls || clear");

            //id
            printf("Cadastre o ID do aluno:\n");
            printf("OBS: ID sao validos entre 0 e 100!!\n\n");
            scanf("%d",&id_cadastro);

            //limpa tela
            getchar();
            system("cls || clear");

            //atualizar ID depois da validacao
            id_cadastro = valida_id(id_cadastro);

            //matriz
            matriz_cadastro[linha][coluna]=id_cadastro;
            printf("-------ID CADASTRADO!!------\n");
            break;

        case 2:
            //limpa tela
            getchar();
            system("cls || clear");

            //Mostrar a matriz
            lista_matriz(matriz_cadastro);
            break;

        case 3:
            //Encerrar
            sair();
            break;

        default:
            printf("Opcao inserida indisponivel! Tente novamente...\n");
            break;
        }
    }
    return 0;
}

//menu
int menu(int opcao){
    printf("\n-------------MENU----------------\n");
    printf("1 - Cadastrar Aluno \n");
    printf("2 - Ver Turma \n");
    printf("3 - Sair \n");
    scanf("%d",&opcao);
    return opcao;
}

//valida posicao na matriz
int validar_posicao(int posicao){
    if(posicao<0 || posicao>=3){
        while(posicao<0 || posicao>=3){
            printf("Posicao Invalida!! Tente novamente:\n");
            scanf("%d",&posicao);
        }
    }
    return posicao;
}

//validando ID
int valida_id(int id){
    if(id<0 || id>100){
        while(id<0 || id>100){
            printf("\nID invalido!! \nDigite um ID valido:\n");
            scanf("%d",&id);
        }
    }
    else{
        return id;
    }
    return id;
}

//case 2
void lista_matriz(int matriz_cadastro[3][3]){
    printf("---------CADASTRADOS-----------\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3; j++){
            printf("%d ",matriz_cadastro[i][j]);
        }
        printf("\n");
    }
}

//case 3
void sair(){
    
    //limpa tela
    getchar();
    system("cls || clear");
    printf("\n---------------------------------\n");
    printf("Obrigado por utilizar o programa!\n");
    printf("!!Volte mais tarde!!\n");
    printf("\n---------------------------------\n");
}