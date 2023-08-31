#include<stdio.h>

void swap(int *a ,int *b)
{
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

void reverseArray(int arr[] , int n)
{
    int s = 0 , e = n - 1 ;
    while( s < e ){
        swap(&arr[s] , &arr[e]);
        s++ ;
        e-- ;
    }
}

void printArray(int arr[] , int n )
{
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] ={1 , 2,3 ,4 , 5, 6, 7, 8,9};
    int n = sizeof(arr) / sizeof(int);

    printf("Before reversing : \n");
    printArray(arr , n);

    printf("After reversing : \n");
    reverseArray(arr , n);
    printArray(arr , n);
}
