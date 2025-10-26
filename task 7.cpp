#include <stdio.h>

int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1; 
}

int main() {
    int arr[10];
    int num, result;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);

    result = search(arr, 10, num);

    if (result == -1) {
        printf("Number not found in the array.\n");
    } else {
        printf("Number found at index: %d\n", result);
    }

    return 0;
}
