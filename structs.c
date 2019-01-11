#include <stdio.h>
#include <string.h>

// structs are user-defined types (UDTs)
// this can later be used as the type of a variable
// structs group a collection of variables which may have different types

// each item in a struct is called a member

// structs can be nested :)

struct month_and_year {
    int month;
    int year;
};

struct credit_card {
    char *                  name;
    char                    number[20];
    struct month_and_year   expiry;
    int                     CVV;
};




int main(int argc, char const *argv[]) {

    // declare a variable of type 'struct credit_card'
    struct credit_card   my_credit_card;

    my_credit_card.name = "Aleksb";

    my_credit_card.expiry.month = 12;
    my_credit_card.expiry.year = 2030;
    my_credit_card.CVV = 707;

    // can't add members at runtime:
    // my_credit_card.signature = "blah";

    /*for (int i = 0; i < 20; i++) {
        my_credit_card.number[i] = "5010-2065-1099"[i];
    }*/
    // can't pass arrays into functions
    // so what gets passed is a pointer to the start of the array
    // i.e. a pointer to my_credit_card.number[0]
    strcpy(my_credit_card.number, "5010-2065-1099-let's-try-to-overflow");


    printf("Name: %s, Number: %s, CVV: %d, year: %d\n", my_credit_card.name,
                                                        my_credit_card.number,
                                                        my_credit_card.CVV,
                                                        my_credit_card.expiry.year
    );

    return 0;
}