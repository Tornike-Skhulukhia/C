
#include <stdio.h>
#include <math.h>
#define NUMBER 104729
// few lines of code that calculates if number is
// prime and prints if it is

int main(){
    int answer;
    printf("Hi, I will tell you if the number %d is prime", NUMBER);

    // just repeat same process 100 times
    for (int j = 0; j < 1000000; j++){

        answer = 1;  // assume it is prime

        // calculate
        for (int i = 2; i <= pow(NUMBER, 0.5); i++){
            if (NUMBER % i == 0){
                answer = 0;  // it is not prime
                break;
            }
        }
    }
    printf("\nMy CPU calculated that answer is: %s\n",
                (answer == 1) ? "It is prime": "It is not prime");
}