#include <stdio.h>

int main(){
    int number, start = 0;
    char country[20];
    // greeting
    printf("Hi, lets see how switch and do while work in C\n\n");
    printf("Do you want to get country name with length that you typed?");
    printf("\nType 1 if answer is yes\n");
    // get answer
    scanf(" %d", &start);
    // if answer is 1, ask for number and show Country name
    if (start == 1){
        // get number from 5 to 10
        do
        {
            printf("What number do you want to choose?\n");
            printf("Please use numbers from 5 to 10\n");
            scanf(" %d", &number);

        }while(number < 5 || number > 10);

        printf("Thanks, one of the countries with %d letters in name is: \n", number);

        // Choose country
        switch (number){
            case(5):  { strcpy(country, "Italy");      break;}
            case(6):  { strcpy(country, "France");     break;}
            case(7):  { strcpy(country, "Ireland");    break;}
            case(8):  { strcpy(country, "Portugal");   break;}
            case(9):  { strcpy(country, "Argentina");  break;}
            case(10): { strcpy(country, "Netherland"); break;}
            // No need for default, Sorry
        }

        // print country
        printf("%s", country);

    }else{
        printf("Okay, see you with more interesting program ^_^");
    }

}











