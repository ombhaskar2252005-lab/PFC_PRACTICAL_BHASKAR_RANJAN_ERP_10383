// name: Bhaskar Ranjan
// ERP : 10383
#include <stdio.h>
int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int result = sum_of_digits(number);
    printf("Sum of digits: %d\n", result);
    return 0;
}
//output:
// Enter an integer: 12345
// Sum of digits: 15