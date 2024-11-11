#include<stdio.h>
#include<stdlib.h>

void findsmallestnum(int arr[],int n){

   for(int i=0;i<n;i++){ 
    for(int j=0;j<n-i-1;j++){
        
        if(arr[j]>arr[j+1]){
             int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
        
    }

   }

    printf("the smallest number in the array is: %d\n",arr[0]);
    
    printf("the second smallest number in the array is: %d",arr[1]);
   

}
int main(){
    int n;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter any %d numbers: ",n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findsmallestnum(arr,n);
    free(arr);
   
    return 0;

}