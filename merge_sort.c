#include<stdio.h>
#include<stdlib.h>

int* merge(int* left,int*right,int n,int m){
    int i=0;
    int j=0;
    int c=0;
    int* res=(int*)malloc((n+m)*sizeof(int));
    while(i<n && j<m){
        if(left[i]<right[j]){
            res[c]=left[i];
            c++;
            i++;
        }
        else{
            res[c]=right[j];
            c++;
            j++;
        }
    }
    while(i<n){
        res[c]=left[i];
        c++;
        i++;
    }
    while(j<m){
        res[c]=right[j];
        c++;
        j++;
    }
    return res;

}
int* mergesort(int* arr,int n){
    if(n<2){
        return arr;
    }
    int mid=n/2;
    int* left=(int*)malloc(mid*sizeof(int));
    int* right=(int*)malloc((n-mid)*sizeof(int));
    for(int i=0;i<mid;i++){
        left[i]=arr[i];
    }
    for(int j=mid;j<n;j++){
        right[j-mid]=arr[j];
    }
    int* left_res=mergesort(left,mid);
    int* right_res=mergesort(right,n-mid);
    return merge(left_res,right_res,mid,n-mid);

}
int main(){
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* res=(int*)malloc(n*sizeof(int));
    res=mergesort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",res[i]);
    }
    return 0;

}