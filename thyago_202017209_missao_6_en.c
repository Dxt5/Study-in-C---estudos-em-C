#include <stdio.h>
#include <stdlib.h>


/*
.> The program has as objective to have a menu of options and perform
operations with data informed by the user
*/

int main(){
    //Variable definition
    int option_menu, num_odd_even;
    float weight, high, bmi;
    float num_1_multiplication, num_2_multiplication, result_m;
    float num_division1, num_division2, result_d;

    //Options menu
    printf("\n-------------------------------------------------\n");
    printf("Option Menu: \n");
    printf("1 - Receive information from the responsible student \n");
    printf("2 - Check your Body Mass Index(BMI) \n");
    printf("3 - Check if the number is even or odd\n");
    printf("4 - Do a multiplication\n");
    printf("5 - Do a division\n");
    printf("6 - Log off \n");
    printf("-------------------------------------------------\n");
    scanf("%d", &option_menu);
    system("clear");
    switch (option_menu){
        
    //case 1: show information
    case 1:
        printf("\n-----------------------------------\n");
        printf("\nStudent Information:\n");
        printf("Name: Thyago Henrique Moura dos Anjos\n");
        printf("Matriculation Number: 202017209\n");
        printf("Semester: 1º semester\n");
        printf("\n-----------------------------------\n");
        break;

    //case 2: BMI
    case 2:
        printf("\n--------------------\n");
        printf("Let's see your BMI!?!\n");
        printf("What is your weight?\n");
        scanf("%f", &weight);

        printf("What is your heigh?\n");
        scanf("%f", &high);

        bmi = weight / (high*high);
        printf("The your BMI is: %.1f\n",bmi);
        printf("\n--------------------\n");
        break;

    //case 3: Check if number is even or odd
    case 3:
        printf("\n-----------------------------------------\n");
        printf("Let's check if number is even or odd:\n");
        printf("Type an integer number:\n");
        scanf("%i",&num_odd_even);

        if (num_odd_even % 2 == 0){
            printf("The %i is even!\n", num_odd_even);
        }
        else{
            printf("The %i is odd!\n", num_odd_even);
        }
        printf("\n-----------------------------------------\n");
        break;

    //case 4: Do a multiplication
    case 4:

        printf("\n----------------------------\n");
        printf("Let's do a multiplication?\n");
        printf("Type the first number:\n");
        scanf("%f", &num_1_multiplication);
        printf("Type the second number:\n");
        scanf("%f", &num_2_multiplication);
        result_m = num_1_multiplication* num_2_multiplication;
        printf("The result is: %.1f\n", result_m);
        printf("\n-----------------------------\n");
        break;

    //case 5: Do a division
    case 5:

        printf("\n-----------------------\n");
        printf("Let's do a division?\n");
        printf("Type the first number:\n");
        scanf("%f", &num_division1);
        printf("Type the second number:\n");
        scanf("%f", &num_division2);
        result_d = num_division1/num_division2;
        printf("The result is: %.1f \n", result_d);
        printf("\n------------------------\n");
        break;

    //case 5:stop the program
    case 6:
        printf("\n-------------------------------\n");
        printf("Thanks for using the program!!\n");
        printf("!!Come Back Later!!\n");
        printf("\n-------------------------------\n");
        break;

    //if the option is not found
    default:
        printf("Typed option unavailable! Try Again\n");
        break;
    }
    
    return 0;
}
