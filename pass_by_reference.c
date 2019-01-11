



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is just like copy-pasting the contents of password_check.h right here
// Note that your own header files use "..."
#include "password_check.h"



// this is a comparison function used for sorting
//int compare_strings(char **first, char **second) {

// pass by value example
void broken_increment(int a) {
    a = a + 1;
}

// pass by reference example
void increment(int *ptr_to_something) {

    // WRONG: adds 1 to the pointer (actually adds sizeof(int) to the address)
    // printf("%p\n", ptr_to_something);
    // ptr_to_something = ptr_to_something + 1;
    // printf("%p\n", ptr_to_something);

    *ptr_to_something = *ptr_to_something + 1;

}


int main(int argc, char const *argv[]) {


    int x = 2;
    broken_increment(x);
    printf("x is %d\n", x);

    int y = 2;
    increment(&y);
    printf("y is %d\n", y);

    return 0;
}