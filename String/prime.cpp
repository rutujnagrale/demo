#include<iostream>
using namespace std;

int main(){
    
    
    int n , i = 1 , c = 0;
    cin >> n ;
   // cout<< 15 ;
    while(i<n)          

    {
        if(n%i==0)
        {
            c++ ;
            cout << c ;
        }
        i++ ;
    }

    if(c==1)
        cout << "Its a prime number" ;
    else
        cout << "its not a prime number" ;

    return 0 ;
}