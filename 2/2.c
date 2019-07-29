#include <stdio.h>
#include "private_info.h"

int main(){
    char password[20];


    // welcome
    printf("You are logged in as %s\n", USERNAME);
    printf("Please type your password: \n");

    // get input
    scanf("%s", &password);

    // check input
    if (strcmp(password, PASSWORD) == 0){
        printf("Excellent, you are in again after %d", LAST_LOGGED_IN);
    }else{
        printf("Sorry, I can not let you in.");
    }


    return 0;
}
