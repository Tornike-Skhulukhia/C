#include <stdio.h>

int main(){
    // get multiple inputs with one scanf
    int month, day, year;

    printf("hello, do you remember date of your birth?");
    printf("\nPlease type in d/m/yyyy format\n");
    scanf(" %d/%d/%d", &day, &month, &year);

    printf("\nSo, you are saying that you were born at %d/%d/%d ?",
                                                    day, month, year);

    // ##############################################
    // integer division VS float division (be careful with %d and %f-s)
    printf("\n\nOkay, lets divide date of your birthday by 4\n\n");
    printf("If we do it directly(integer division), answer is %d\n", day / 4);
    printf("But more precise answer in most cases will be %.3f\n", day / 4.0);

    // typecasting
    printf("\nLet's see how year of your birth looks as an integer: %d", year);

    printf("\nAnd same data typecasted to float: %f", (float)year);

    printf("\nOne more, lets try with char: %c", (char)year);

}
