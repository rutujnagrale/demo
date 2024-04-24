#include<iostream>
using namespace std;

int fibo(int n)
{

    if(n<=1)
        return 1 ;


    else
    {
        static  int a = 0 , b = 1 , c ;
        c = a + b ;
        a = b; 
        b = c ;
        cout << c << " " ;
        fibo(n-1) ;
    }
}

int main(){

    int n ;
    cout << "Enter the range of the fibonnaci = \n" ;
    cin >> n ;
    fibo(n) ;

    return 0 ;
}