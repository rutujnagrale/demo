#include<iostream>
using namespace std;

int main(){
    
    int arr[10] = {15 , 78 , 24 , 64} ;

    // cout << arr[0] << endl ;
    // cout << arr[1] << endl ;
    // cout << arr[2] << endl ;
    // cout << arr[3] << endl ;

    cout << endl ;
    arr[2] = 4856 ;

    //  cout << arr[0] << endl ;
    // cout << arr[1] << endl ;
    // cout << arr[2] << endl ;
    // cout << arr[3] << endl ;

    // for (int i = 0; i <= 3; i++)
    // {
    //     cout << "The value of the " << i << " element is " << arr[i] << endl ;
    // }

    int *p = arr ;

    cout << *p << endl ;
    cout << *(p+1) << endl ;
    cout << *(p+2) << endl ;
    cout << *(p+3) << endl ;
    

    return 0 ;
}