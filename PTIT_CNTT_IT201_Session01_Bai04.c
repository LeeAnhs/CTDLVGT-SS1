#include <stdio.h>

int main() {
    //cách 1
    int n,sum=0;
    for (int i=0 ;i<n;i++){
        sum += i;
    }
     printf("%d\n", sum);
    //độ phức tạp:O(n)


    //cách 2
    int sum2=n*(n+1)/2
    printf("%d",sum2);
    //độ phức tạp:O(1)

}

