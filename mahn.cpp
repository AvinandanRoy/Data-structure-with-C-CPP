#include<iostream>
using namespace std ;

void printArray(int arr[] , int n )
{
    arr[1] = 0 ;
    cout << "In function : " << sizeof(arr)<< endl ;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << "<-->";
    }
    cout << endl << endl << endl ;
}

int main()
{
    int arr[] ={1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr , n);

    cout << "Inside main : " << sizeof(arr) << endl;
    for(int i = 0 ; i < n ;i++){
        cout << arr[i] << "<-->";
    }
    cout << endl << endl << endl ;

    return 0 ;
}
