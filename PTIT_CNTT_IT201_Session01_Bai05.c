#include <stdio.h>

int main(){
    int n=5;
    int arr[]={5,3,6,2,3};
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    for (int i=0;i<5;i++){
        printf("%d",arr[i])
    }
}
//độ phức tạp:O(n^2)
