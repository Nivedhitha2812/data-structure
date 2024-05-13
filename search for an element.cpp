#include <stdio.h>
int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int x = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, n, x);    
    if (result == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at position: %d\n", result);
    }    
    return 0;
}
