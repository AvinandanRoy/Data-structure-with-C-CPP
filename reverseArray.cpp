#include<iostream>
using namespace std ;

void reverseArray(int arr[] , int n)
{
    int s = 0 , e = n -1 ;
    while(s < e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[] , int n)
{
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << "\t" ;
    }
    cout << endl ;
}

int main()
{
    int arr[] ={1 , 2,3 ,4 , 5, 6, 7, 8,9};
    int n = sizeof(arr) / sizeof(int);

    cout << "Before reversing :"<<endl ;
    printArray(arr , n );

    cout << "After reversing :" << endl ;
    reverseArray(arr , n);
    printArray(arr , n);
}
