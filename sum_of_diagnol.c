#include<stdio.h>
#include<stdlib.h>

int sum(int **arr,int dimension){
    int sum=0;
   for(int i=0;i<dimension;i++){
    sum=sum+arr[i][i];
   }
    return sum;
}
int main(){
    int dimension;
    printf("Enter the dimension of matrix: ");
    scanf("%d",&dimension);
    int **arr=(int**)malloc(dimension*sizeof(int*));
    for(int i=0;i<dimension;i++){
        arr[i]=(int*)malloc(dimension*sizeof(int));
    }

    printf("Enter the matrix elements:\n");
    for(int i=0;i<dimension;i++){
        for(int j=0;j<dimension;j++){
            printf("Enter element[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int total_sum=sum(arr, dimension);
    printf("The sum of the diagnol elements is: %d\n",total_sum);
    for(int i=0;i<dimension;i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}
