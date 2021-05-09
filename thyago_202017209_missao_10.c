//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//variaveis globais
int valida;

//funcoes
int validando_email(char email[], int valida);
int validando_password(char password[], int valida);
int validando_user(int valida, char user[]);
int valida_sinistra(char sinistra[], int valida);

//principal
int main(){
    char password[1000], user[1000], email[1000], sinistra[1000];
    int valida;
    valida = 0;
    
    //email
    printf("-------------------Login-----------------\n");
    printf("Digite seu email:\n\n");
    printf("OBS:\n-Apenas minusculas!\n-'@' e '.' sao unicos especiais permitidos e obrigatorios!\n");
    scanf("%s", email);
    valida = validando_email(email, valida);

    //user
    printf("\nUsername:\n");
    printf("OBS:\n-Apenas minusculas!\n-Nao sao aceitos numeros e nem especiais\n-Maximo de 10 caracteres e minimo de 5\n");
    scanf("%s", user);
    valida = validando_user(valida, user);

    //senha
    printf("\nPassword:\n");
    printf("OBS:\n-Minimo de 8 caracteres\nMaximo de 40 caracteres\n");
    scanf("%s", password);
    valida = validando_password(password, valida);
    
    //realizar a segunda confirmação
    if(valida==0){
        printf("------------------Frase Sinistra-------------------------------\n");
        printf("\nPara completar totalmente seu login insira uma frase sinistra:\n");
        scanf("%s",sinistra);
        valida = valida_sinistra(sinistra, valida);
        if(valida !=0){
            printf("\nLogin invalido!\n");
        }
        else{
            printf("Parabéns cara, você conseguiu!\n");
        }
    }
    else{
        printf("\nLogin invalido!\n");
    }
    return 0;
}

//errada
int validando_email(char email[], int valida){
    int tam_email, ascii;
    tam_email = strlen(email);

    for(int i=0;i<tam_email;i++){
        ascii = email[i];
        if(islower(email[i]) || email[i]=='@' || email[i]=='.'){
            valida=0;
        }
        else if(email){
            printf("erro1\n");
            valida=1;
            break;
        }
    }
    return valida;
}


//validar o nome inserido
int validando_user(int valida, char user[]){
    int tam_user;

    tam_user = strlen(user);

    for(int i =0;i<tam_user;i++){
        //verifica se sao minusculas
        if(islower(user[i])){
            valida=0;
        }
        else{
            valida =1;
            break;
        }
        //verificar se ha números ou caracteres especiais
        if(isalpha(user[i])){
            valida=0;
        }
        else{
            valida=1;
            break;
        }
        //verificar maximo de 10 caracteres, minimo de 5 caracteres
        if(tam_user<5 || tam_user>10){
            valida =1;
            break;
        }
        else{
            valida =0;
        }
    }
    return valida;
}


//validar a senha inserida
int validando_password(char password[], int valida){
    int tam_pass;

    tam_pass = strlen(password);

    if(tam_pass<8 || tam_pass>40){
        valida =1;
    }
    else{
        valida =0;
    }
    return valida;
}

//errada
//valida frase sinistra
int valida_sinistra(char sinistra[], int valida){
    int tam_sinistra, count_space, ascii;

    count_space =0;

    tam_sinistra = strlen(sinistra);
    
    if(tam_sinistra<70){
        valida =1;
        return valida;
    }
    for(int i=0; i<tam_sinistra; i++){
        ascii = sinistra[i];
        if(ascii==32){
            count_space++;
        }
    }
    if(count_space<5){
        valida =1;
        return valida;
    }
    
    if(isupper(sinistra[0]) && ispunct(sinistra[tam_sinistra])){
        valida=0;
    }
    else{
        valida=1;
        return valida;
    }
    return valida;
}