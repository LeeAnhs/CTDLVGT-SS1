#include <stdio.h>

int main() {
    int arr[] = {1, 10, 3, 4, 10, 1, 3, 4, 20, 3}; 
    int n = 10;
    //cách 1
    int count[1001] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (count[arr[i]] > 0) {
            printf("%d %d lan\n", arr[i], count[arr[i]]);
            count[arr[i]] = 0; 
        }
    }
    // Độ phức tạp thời gian: O(n)
    // Độ phức tạp không gian: O(n)

    //cách 2

    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) { 
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] == arr[i]) {
                    count++;
                    arr[j] = -1; 
                }
            }
            printf("\n%d %d lan\n", arr[i], count);
        }
    }
    // Độ phức tạp thời gian: O(n^2)
    // Độ phức tạp không gian: O(1)

    return 0;
}
