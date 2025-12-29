// name: Bhaskar Ranjan
// ERP : 10383
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    swap(&num1, &num2);
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
//output:
// Enter two integers: 5 10
// Before swapping: num1 = 5, num2 = 10
// After swapping: num1 = 10, num2 = 5
