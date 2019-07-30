/*
    swap values of variables using pointers
*/

# include <stdio.h>

int main(){
    void swap_them(int *a, int *b){
        // swap values of supplied pointer values
        printf("Address of a: %p, address of b: %p\n", &a, &b);

        printf("a is: %d\n", *a);
        printf("b is: %d\n", *b);

        int temp = *a;
        //printf("temp is: %d\n", temp);

        *a = *b;
        printf("a is: %d\n", *a);
        // *a = *b;
        *b = temp;
        printf("b is: %d\n", *b);

        printf("Address of a: %p, address of b: %p\n", &a, &b);
    };

    int x = 3, y = 100;
    printf("Valus of x: %d, value of y: %d\n", x, y);

    printf("Address of x: %p, address of y: %p\n", &x, &y);

    swap_them(&x, &y);
    printf("Valus of x: %d, value of y: %d\n", x, y);
    printf("Address of x: %p, address of y: %p\n", &x, &y);

    return 0;
}
