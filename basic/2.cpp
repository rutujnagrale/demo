#include<iostream>
#include<iomanip>
using namespace std ;


int main()
{ 
    // int a = 78 ;
    // cout << a <<endl ;
    // // int a = 45 ;
    // // cout << a << endl ;

    // const int a = 45 ;
    // cout << a << endl ;
    // cout << ::a << endl ;

    // *********************************************** //
    // manipulator ////
    int a = 4 , b = 21 , c = 84554 ;

    cout << a << endl ;
    cout << b << endl ;
    cout << c << endl ;
    cout << endl ;

    cout << setw(4) << a << endl ;
    cout << setw(4) << b << endl ;
    cout << setw(4) << c << endl ;
}