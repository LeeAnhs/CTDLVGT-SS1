#include <stdio.h>

int main(){
    int count=0;
    int n=11,input;
    int arr[]={1,2,3,4,5,6,7,8,9,13,23,};
    scanf("%d",&input);
    for (int i=0;i<n;i++){
        if(input==arr[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
//độ phức tạp thời gian:O(n)
//độ phức tạp ko gian:O(1)