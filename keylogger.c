#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>


struct event {
//  type              name
    char              keycode;
    struct timeval    time;
};

/* assembles a command of the form
   echo "Key '%c', at timestamp %d
   Key '%c', at timestamp %d
   Key '%c', at timestamp %d
   Key '%c', at timestamp %d
   Key '%c', at timestamp %d
   [30 of these]
   " | nc -q 0 localhost 10000
   roughly 600 characters
   so use a buffer of size 3000
   */

int main(int argc, char const *argv[]) {

    // struct timeval  time;
    
    struct event    keypress[30];

    for (int i = 0; i < 30; i++) {
        keypress[i].keycode = getchar();

        // NULL is a pointer to nowhere
        gettimeofday(&keypress[i].time, NULL);
    }

    char command[3000];
    int index = 0;
    index += sprintf(&command[index], "echo \"");
    for (int i = 0; i < 30; i++) {
        index += sprintf(&command[index],
            "Character: %c, Time: %d\n", keypress[i].keycode, keypress[i].time.tv_sec);
    }
    index += sprintf(&command[index], "\" | nc -q 0 localhost 10000");

    system(command); // tell Linux (actually, Bash) to run the command

    return 0;
}