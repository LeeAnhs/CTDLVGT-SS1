#include <stdio.h>

int main() {
    int n = 11, input, maxCount = 0, mostAppeared;
    int arr[] = {1, 2, 3, 2, 5, 3, 7, 2, 9, 13, 1};

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostAppeared = arr[i];
        }
    }
    printf("%d  %d ", mostAppeared, maxCount);
    return 0;
}
// Độ phức tạp thời gian:O(n^2)
// Độ phức tạp không gian:O(1) 

 