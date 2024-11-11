#include<stdio.h>

int findpeak(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return arr[i];
               }

    }
}
int main(){
    int arr[4]={5,10,20,15};
    int n=4;
    int peak_element=findpeak(arr,n);
    printf("The peak element is:%d",peak_element);
    return 0;
}