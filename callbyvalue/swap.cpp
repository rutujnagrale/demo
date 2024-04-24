#include<iostream>
using namespace std;


void swap(int* a , int* b)
{
    int temp = 0 ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
}

int main(){
    
    int a = 4 , b = 5 ;

    cout << "The element before the swap is " << a << "  " <<  b << endl ;
    swap(&a , &b) ;
    cout << "The element before the swap is " << a << "  " <<  b << endl ;


    return 0 ;
}