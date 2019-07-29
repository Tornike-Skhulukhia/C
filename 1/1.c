/*
    Just playing with basic data types, 
    simple loop and memory.
*/

#include <stdio.h>
#include <string.h>

int main(void){
    // define array
    char name[] = "Tornike", short_name[] = "toka";

    printf("Name is %s and it has size %d\n", name, sizeof(name));
    printf("Short name is %s and it has size %d\n", short_name, sizeof(short_name));

    for (int i = 0; i < 4; i++){
        //printf("%d\n", i);
       name[i] = short_name[i];
    };
    // :-)
    name[7] = '\0';

    printf("Name is %s and it has size %d\n", name, sizeof(name));

    // as direct assignment after declaring is not allowed
    strcpy(name, "unknown");
    printf("\nName now is \'%s\' and it has size %d\n", name, sizeof(name));

    // "garbage"
    char g[12];
    printf("Some random values from memory: %s\n", g);

    return 0;
}
