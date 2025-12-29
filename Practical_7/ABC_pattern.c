// name: Bhaskar Ranjan
// ERP : 10383
#include <stdio.h>
int main () {
    int i, j;
    char ch;
    for(i = 0; i <= 4; i++) {
        ch = 'A';
        for (i = 1; i <= 4; i++) {
            ch = 'A';
            for (j = 1; j <= i; j++){
                printf("%c ", ch);
                ch++;
            }
            printf("\n");
        }
    }
    return 0;

}
// output:
// A
// A B
// A B C
// A B C D
