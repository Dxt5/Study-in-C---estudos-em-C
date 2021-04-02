//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//funcoes do programa
int main();
int validando(int x,int y,int z,int validacao);
int validando_primo(int x, int y, int z, int validacao);
int menu(int opcao);
int ffatoria_de_cada_e_soma(int x, int y,int z);
int fatorial_da_soma(int x, int y,int z);
int fatorial_4(int x, int y, int z);
bool triangulo_equilatero(int x, int y, int z);
bool triangulo_isoceles(int x, int y, int z);
void sair();
void outro_caso();

//funcao principal
int main(){

    //definicao de variaveis
    int x, y, z, validacao, opcao;
    int resultado, fatorial_x, fatorial_y, fatorial_z;
    int soma, fatorial;
    //inicializacao de variaveis
    opcao =0;

    //entrada de dados
    do{
        //registrar os numeros
        printf("\n------------------Registra numeros---------------\n");
        printf("OBS: So é aceitos numeros positivos menores que 7 e nao primos!!\n\n");
        printf("Cadastre o primeiro numero: \n");
        scanf("%d", &x);
        printf("Cadastre o segundo numero: \n");
        scanf("%d", &y);
        printf("Cadastre o terceiro numero: \n");
        scanf("%d", &z);
        printf("\n-------------------------------------------------\n");

        //validar os numero
        validacao = validando(x, y, z, validacao);

        //somente fazer a validacao de primos se a primeira validacao for correta
        if(validacao == 1){
            validacao = validando_primo(x, y, z, validacao);
        }
        getchar();
        system("cls || clear");
    } while (validacao!=1);

    //menu e execucoes
    do{
        //receber a opcao digitada pelo usuario
        opcao = menu(opcao);

        //escolha de acordo com a opcao do usuario
        switch (opcao){

            //fazer o fatorial de cada um e somar no final
            case 1:
                resultado = fatoria_de_cada_e_soma(x, y, z);
                printf("¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n");
                printf("O resultado de x! + y! + z! e: %d\n",resultado);
                printf("¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n");
                break;

            //fazer o fatorial da soma dos tres termos 
            case 2:
                resultado = fatorial_da_soma(x, y, z);
                printf("¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n");
                printf("O resultado de (x + y + z)! e: %d\n",resultado);
                printf("¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n");
                break;
            
            //fazer o fatorial da soma de x com y mais o fatorial de x-z 
            case 3:
                resultado = fatorial_soma_de_x_cada(x, y, z);
                printf("¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n");
                printf("O resultado de (x+y)! + (x-z)! e: %d\n",resultado);
                printf("¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n");
                break;

            //fazer o fatorial de x menos o fatorial de y+z
            case 4:
                resultado = fatorial_4(x, y, z);
                printf("¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n");
                printf("O resultado de x! - (z+y)! e: %d\n",resultado);
                printf("¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n");
                break;

            //verificar se o x, y, e z forma um triangulo equilatero
            case 5:
                if(triangulo_equilatero(x, y, z)){
                    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨TRIANGULO EQUILATERO¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
                    printf("SIM!!!! Os valores inseridos podem SIM formar um triangulo equilatero!\n");
                    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
                }
                else{
                    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨TRIANGULO Equilatero¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
                    printf("NAO!!!! Os valores inseridos NAO podem formar um triangulo equilatero!\n");
                    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
                }
                break;

            //verificar se os numeros digitados podem ser um triangulo isoceles
            case 6:
                if(triangulo_isoceles(x, y, z)){
                    printf("************************TRIANGULO ISOCELES**************************\n");
                    printf("SIM!!!! Os valores inseridos podem SIM formar um triangulo isoceles!\n");
                    printf("********************************************************************\n");
                }
                else{
                    printf("************************TRIANGULO ISOCELES**************************\n");
                    printf("NAO!!!! Os valores inseridos podem NAO formar um triangulo isoceles!\n");
                    printf("********************************************************************\n");
                }
                break;

            //finalizar programa
            case 7:
                sair();
                break;
            
            // caso seja digita uma opcao que nao esta disponivel no menu
            default:
                outro_caso();
                break;
        }
        
    } while (opcao!=7);
    
    return 0;
}

//funcao para validar se o numero esta dentro das regras: >=0 e <7
int validando(int x,int y,int z,int validacao){
    if(x>=0 && y>=0 && z>=0 && x<7 && y<7 && z<7){
            return validacao=1;
        }
        else{
            return validacao=0;
        }
}

//funcao para validar se o numero e primo
int validando_primo(int x, int y, int z, int validacao){

    //definicao de variaveis
    int valida_primo;

    //codigo

    valida_primo = x;
    for(valida_primo;valida_primo > 0;valida_primo--){
        if(x % valida_primo==0 && x !=valida_primo || x ==1){
            validacao = 1; // nao e primo 
            break;
        }
        else if(valida_primo==2){
            validacao = 0; //e um primo
            break;
        }
    }
    //validando o segundo numero se o primeiro estiver correto
    if(validacao==1){
        valida_primo = y;
        for(valida_primo;valida_primo > 0;valida_primo--){
            if(y % valida_primo==0 && y !=valida_primo || y ==1){
                validacao = 1;// nao e primo 
                break;
            }
            else if(valida_primo==2){
                validacao = 0; //e um primo 
                break;
            }
        }
    }

    //validando o terceiro numero se o primeiro e o segundo estiverem corretos
    if(validacao==1){
        valida_primo = z;
        for(valida_primo;valida_primo > 0;valida_primo--){
            if(z % valida_primo==0 && z !=valida_primo || z ==1){
                validacao = 1;// nao e primo 
                return 1;
                break;
            }
            else if(valida_primo==2){
                validacao = 0; //e um primo 
                return 0;
                break;
            }
        }
    } 
}

//funcao mostra menu retorna opcao escolhida
int menu(int opcao){
    printf("******************************** MENU *******************************\n");
    printf("1 - x! + y! + z!\n");
    printf("2 - (x + y + z)!\n");
    printf("3 - (x+y)! + (x-z)!\n");
    printf("4 - x! - (z+y)!\n");
    printf("5 - Se fossem lados, os 3 números formariam um triângulo equilátero?\n");
    printf("6 - Se fossem lados, os 3 números formariam um triângulo isósceles?\n");
    printf("7 - Sair\n");
    printf("\nO que deseja executar: \n");
    scanf("%d", &opcao);
    printf("**********************************************************************\n");
    getchar();
    system("cls || clear");
    
    return opcao;
    
}

//funcao caso 1
int fatoria_de_cada_e_soma(int x, int y,int z){

    // definicao de variaveis
    int fatorial_x, fatorial_y, fatorial_z; 

    //codigo
    for (fatorial_x=1; x>1; x--){
            fatorial_x = fatorial_x*x;
    }
    for (fatorial_y=1; y>1; y--){
            fatorial_y = fatorial_y*y;
    }
    for (fatorial_z=1; z>1; z--){
            fatorial_z = fatorial_z*z;
    }
    
    return fatorial_x+fatorial_y+fatorial_z;
}

//funcao caso 2
int fatorial_da_soma(int x, int y,int z){

    //definicao de variaveis
    int soma, fatorial;

    //codigo
    soma = x+y+z;
    for (fatorial=1; soma>1; soma--){
            fatorial = fatorial*soma;
    }
    return fatorial;
}

//funcao caso 3
int fatorial_soma_de_x_cada(int x, int y, int z){
    
    //definicao de variaveis
    int soma, fatorial_1, fatorial_2;

    //codigo
    soma = x+y;
    for (fatorial_1=1; soma>1; soma--){
        fatorial_1 = fatorial_1*soma;
    }
    soma = x-z;
    if(soma <0){
        soma = soma*-1;
    }
    for (fatorial_2=1; soma>1; soma--){
        fatorial_2= fatorial_2*soma;
    }
    return fatorial_1+fatorial_2;
    
}

//funcao caso 4
int fatorial_4(int x, int y, int z){

    //definicao de variaveis
    int fatorial_x, soma, fatorial_soma;

    //codigo
    for (fatorial_x =1; x>1; x--){
        fatorial_x= fatorial_x * x;
    }

    soma = z+y;
    for (fatorial_soma=1; soma>1; soma--){
        fatorial_soma= fatorial_soma*soma;
    }
    return fatorial_x - fatorial_soma ;
}

//funcao caso 5
bool triangulo_equilatero(int x, int y, int z){

    //definicao de variaveis

    //codigo
    if(x==y && x==z && y==z){
        return true;
    }
    else{
        return false;
    }
}

//funcao caso 6
bool triangulo_isoceles(int x, int y, int z){

    //definicao de variaveis

    //codigo
    if(x==y || x==z || y==z){
        return true;
    }
    else{
        return false;
    }
}

//procedimento caso 7
void sair(){

    //definicao de variaveis

    //codigo

    printf("\n---------------------------------\n");
    printf("Obrigado por utilizar o programa!\n");
    printf("!!Volte mais tarde!!\n");
    printf("\n---------------------------------\n");
}

//procedimento caso nao tenha a opcao inserida
void outro_caso(){

    //definicao de variaveis

    //codigo

    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
    printf("Opcao digitada indisponivel! Tente novamente!\n");
    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
}