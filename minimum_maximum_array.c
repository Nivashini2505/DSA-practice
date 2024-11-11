#include<stdio.h>
#include<stdlib.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int find_maximum(int arr[],int n){
   sort(arr,n);
   return arr[n-1];
}

int find_minimum(int arr[],int n){
    sort(arr,n);
    return arr[0];
}
int main(){
    int n;
    printf("enter the number of eleemnts in the array:");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int maximum=find_maximum(arr,n);
   printf("the maximum element is:%d\n",maximum);
   int minimum=find_minimum(arr,n);
   printf("the minimum elemnt is:%d",minimum);
   return 0;
}
