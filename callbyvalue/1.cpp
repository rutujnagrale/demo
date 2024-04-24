#include<iostream>
using namespace std;

int sum(int n1 , int n2)
{
    int c = 0 ;
    c = n1 + n2 ;
    return c ;
}

int main(){
    
    cout << "The sum of the given number is \n" << sum(4 , 5) ;
    // cout << "The sum of the given number is \n" << swap(4 , 5) ;
    return 0 ;

}