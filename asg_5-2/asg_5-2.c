#include <stdio.h>
#include <stdlib.h>

// int arr[8]={1,2,3,4,5,6,7,8};
// int n = sizeof(arr)/sizeof(int);
void reverseArray(int*pArr,int n);

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int * arr = (int*) malloc (n*sizeof(int));

    if(!arr){
        printf("Memory allocation failed.\n");
        return -1;
    }

    
    for(int i=0;i<n;i++){
        printf("Enter number %d: \n",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal Array: ");
     for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    reverseArray(arr,n);
    free(arr);
    
    return 0;
}
void reverseArray(int*pArr,int n){
    int temp = 0;
    for(int i = 0;i<n/2;i++){
        temp = pArr[i]; 
        pArr[i]=pArr[n-i-1];
        pArr[n-i-1]=temp;
    }
    
    printf("\nReverse Array: ");
    for(int i = 0;i<n;i++){
        printf("%d ",pArr[i]);
    
    }
    
}