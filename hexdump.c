#include <stdio.h>
#include <ctype.h>

const int ROWS = 24;
const int COLUMNS = 16;

int main(int argc, char const *argv[]) {
    
    // open a file (store file handle in target_file)
    FILE *target_file = fopen(argv[1], "r");

    // create somewhere to store file contents
    unsigned char buffer[ROWS][COLUMNS];

    int num_bytes_read;
    
    // read into buffer from file
    num_bytes_read = fread(buffer, 1, ROWS * COLUMNS, target_file);

    while (num_bytes_read != 0) {
        // print entire screenful of file
        for (int row = 0; row < ROWS; row++) {
            // print row in hexadecimal
            for (int col = 0; col < COLUMNS; col++) {

                // write blanks after end of file
                if (row * COLUMNS + col < num_bytes_read) {
                    printf("%02x ", buffer[row][col]);
                } else {
                    printf("   ");
                }
            }
            
            printf("  ");
            // print row in ASCII
            for (int col = 0; col < COLUMNS; col++) {

                // write blanks after end of file
                if (row * COLUMNS + col < num_bytes_read) {
                    if (isprint(buffer[row][col])) { // make sure it is printable
                        printf("%c", buffer[row][col]);
                    } else { // otherwise print a dot
                        printf(".");
                    }
                } else {
                    printf(" ");
                }
            }

            printf("\n");
        }
        printf("Please press enter.");
        getchar();

        // read next chunk from buffer into file
        num_bytes_read = fread(buffer, 1, ROWS * COLUMNS, target_file);

    }
    
    printf("\n");

    fclose(target_file);

    return 0;
}