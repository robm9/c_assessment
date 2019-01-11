#include <stdio.h>

// prints a string
void fake_print(char *string) {

    printf("%c", string[0]);
    printf("%c", string[1]);
}

int fake_strlen(char *string) {

}


// courtesy Preet
int main(int argc, char const *argv[]) {
    // manual strings!
    
    // space == 32

    // C-style strings terminate with a 0
    // 0 is also called a null character
    char manual_string[15] = {'h', 'e', 'l', 'l', 'o', 32,
                             'w', 'o', 'r', 'l', 'd', '\n', 0};

    printf(manual_string);
    fake_print(manual_string);
    fake_print("nice");

    int x = 47;
    char *easy_string = "abcd";
    x = x+1;
    for (int i = -40; i < 60 ; i++) {
        //printf("%d %4d %4c %4x\n", i, manual_string[i], manual_string[i], manual_string[i]);
    }

    return 0;
}