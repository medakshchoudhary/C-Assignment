#include <stdio.h>

void findDuplicates(int arr[], int size) {
    printf("Duplicate elements in the array: ");

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        // Check if the current element is a duplicate
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // Print the element if it's a duplicate and not printed before
        if (isDuplicate) {
            int alreadyPrinted = 0;
            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k]) {
                    alreadyPrinted = 1;
                    break;
                }
            }

            if (!alreadyPrinted) {
                printf("%d ", arr[i]);
            }
        }
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, size);

    return 0;
}
