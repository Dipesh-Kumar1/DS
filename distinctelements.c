#include <stdio.h>

int countDistinct(int arr[], int n) {
    int count = 0;  

    for (int i = 0; i < n; i++) {
        int j;
       
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break; 
            }
        }
      
        if (j == i) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = countDistinct(arr, n);
    printf("Number of distinct elements in the array: %d\n", result);

    return 0;
}
