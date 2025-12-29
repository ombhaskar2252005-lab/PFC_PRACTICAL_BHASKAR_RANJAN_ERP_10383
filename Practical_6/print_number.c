#include <stdio.h>
// name: Bhaskar Ranjan
// ERP : 10383
int main() {
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) {
        printf("%d\n", i);
    }
    return 0;
}
// output:
// Enter value of a and b: 5 10
// 5
// 6
// 7
// 8
// 9
// 10
