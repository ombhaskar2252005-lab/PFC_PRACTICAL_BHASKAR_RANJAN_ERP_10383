// name: Bhaskar ranjan
// erp: 10383
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, temp;

    for (i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }

    printf("Reversed array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
// output:
// Reversed array:
// 5 4 3 2 1