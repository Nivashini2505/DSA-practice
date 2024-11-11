#include<stdio.h>
void peak(int arr[],int n){
   if(n==1){
    printf("%d",arr[0]);
   }
   if(n==2){
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
    }
    else{
        printf("%d",arr[1]);
    }
   }

   for(int i=1;i<n-1;i++){
    if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        printf("%d",arr[i]);
    }
   }

   if(arr[n-1]>arr[n-2]){
    printf("%d",arr[n-1]);  
   }
}
int main(){
    int n;
    printf("Enter the number of numbers in the array: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("enter the elements in the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    peak(arr,n);
    
    free(arr);
    return 0;
}