#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void password_check(char *password, char **dictionary, int dict_length) {

    if (strlen(password) < 6) {
        printf("That password is too short. Must be at least 6.\n");
        return;
    }

    int L = 0;
    int R = dict_length - 1;

    while (L <= R) {
        int M = (L + R) / 2;
        int comparison = strcmp(dictionary[M], password);

        if (comparison < 0) {
            L = M + 1;
        } else if (comparison > 0) {
            R = M - 1;
        } else {
            printf("Don't choose a dictionary word, silly!\n");
            return;
        }
    }
    printf("Good password! Maybe...\n");

}