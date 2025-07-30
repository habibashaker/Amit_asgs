/*
Write a program that ask the user to enter 5 numbers and store it in array called arr_1 using for loop
Then print the following :-
Print the 5 elements of arr_1
- The maximum number in arr_1 and its position in array
- The minimum number in arr_1 and its position in array
 
+POINT Sort elements of array in ascending order
*/

#include <stdio.h>
#include <stdlib.h>

int arr_1[5];
int n = sizeof(arr_1)/sizeof(int);
void max_min(int * parr,int n);
void BubbleSort(int*pArr,int n);
int main(){
    
    for(int i=0;i<5;i++){
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&arr_1[i]);
    }
    printf("\nThe numbers are: ");
    for(int i=0;i<5;i++){
        printf("%d ",arr_1[i]);
    }
    printf("\n");
    max_min(arr_1, n);
    BubbleSort(arr_1,n);
    printf("\nSorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    
}
return 0;
}

void BubbleSort(int*pArr,int n){
    for(int i=0;i<n-1;i++){
        int swapped = 0;
        for(int j=0;j<n-i-1;j++){
            if(*(pArr+j)>*(pArr+j+1)){
                int temp = *(pArr+j);
                    *(pArr+j) = *(pArr+j+1);
                    *(pArr+j+1) = temp;
                    swapped = 1;
            }
        }
        if(!swapped){
            break;
        }
    
    }
}

void max_min(int * parr,int n){
    
    int min = *parr, max = *parr;
    int maxInd = 0,minInd = 0;
    for(int i=1;i<n;i++){
        if(*(parr+i)<min){
            min = *(parr+i);
            minInd = i;
        }
        else if(*(parr+i)>max){
            max = *(parr+i);
            maxInd = i;
        }
    }
    printf("\nThe max number is: %d at position %d \n",max,maxInd);
    printf("The min number is: %d at position %d \n",min,minInd);
}