#include <stdio.h>
#include <stdlib.h>

int main(){
    //definition of variables 
    int num,num_prime, option_menu, amount_num_negatives, amount_num_even, dividers, amount_prime, i;
    float verification_num, average, count, sum;

    //initialization of variables
    option_menu=0;
    amount_num_negatives=0;
    amount_num_even=0;
    amount_prime=0;
    i=0;
    count=0;
    sum=0;
    dividers=0;

    //input of numbers that are not multiples 150
    do{
        dividers=0;
        printf("\n------------------Enter Numbers---------------\n");
        printf("!! Attention: Numbers multiple of 150 stop the registration!!\n");
        printf("Sign up a number: \n");
        scanf("%d", &num);
        printf("\n-------------------------------------------------\n");

        //check if the number is valid
        verification_num = num % 150;

        if (verification_num!=0){
            //see how many numbers are negative
            if (num<0){
                amount_num_negatives++;
            }

            //see how many are even 
            if (num % 2 == 0){
                amount_num_even++;
            }

            //see how many numbers are prime
            if(num<0){
                num = num*-1;
            }
            num_prime=num;
            for(num_prime; num_prime >0; num_prime--){
                if(num%num_prime==0 && num != num_prime || num ==1){
                    
                    break;
                }else if(num_prime==2){
                    amount_prime++;
                    break;
                }
            }
            //sum of numbers
            sum = sum + num;

            //count how many numbers have been entered
            count++;
        }
    } while (verification_num != 0);
    
    //menu switch case
    while(option_menu!=6){
        //menu
        printf("\n-------------------------------------------------\n");
        printf("Options Menu: \n");
        printf("1 - Amount of numbers entered\n");
        printf("2 - Amount of negative numbers\n");
        printf("3 - Amount of even numbers\n");
        printf("4 - Amount of prime numbers\n");
        printf("5 - Average of the numbers\n");
        printf("6 - Log off\n");
        printf("-------------------------------------------------\n");
        scanf("%d", &option_menu);
        system("clear");
        switch (option_menu){

        //case 1 - Total amount of numbers
        case 1:
            printf("\n----------------------------\n");
            printf("Have been registered %0.f numbers\n", count);
            printf("\n----------------------------\n");
            break;

        //caso 2 - Amount of the negative numbers
        case 2:
            printf("\n----------------------------\n");
            printf("The amount of negative numbers is: %d\n", amount_num_negatives);
            printf("\n----------------------------\n");
            break;

        //caso 3 - Amount of the even numbers
        case 3:
            printf("\n----------------------------\n");
            printf("The amount of even numbers is: %d\n", amount_num_even);
            printf("\n----------------------------\n");
            break;

        //case 4 - Amount of the prime numbers
        case 4:
            printf("\n----------------------------\n");
            printf("The amount of prime numbers is: %d", amount_prime);
            printf("\n----------------------------\n");
            break;

        //case 5 - Average of the numbers
        case 5:
            printf("\n----------------------------\n");
            average = sum/count;
            printf("The average is: %1.f",average);
            printf("\n----------------------------\n");
            break;

        //case 6 - log off
        case 6:
            printf("\n-------------------------------\n");
            printf("Thanks for using the program!\n");
            printf("!!Come back later!!\n");
            printf("\n-------------------------------\n");
            break;
        
        //if an invalid option is entered
        default:
            printf("Typed option unavailable! Try again!\n");
            break;
        }
    }
    return 0;
}

