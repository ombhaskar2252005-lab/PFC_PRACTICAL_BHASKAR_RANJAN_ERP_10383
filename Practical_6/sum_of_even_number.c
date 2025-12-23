#include <stdio.h>
int main() {
    int n, m, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d%d", &n, &m);
    for (int i = n; i <= m; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}