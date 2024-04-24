#include<iostream>
using namespace std;

int sum(int n1 , int n2) ;
void hello() ;

int main(){
    
    int n1 , n2 ;
    cout << "Enter the first number \n" ;
    cin >> n1 ;
    cout << "Enter the second number \n" ;
    cin >> n2 ;

    cout << "The sum of the number is " << sum(n1 , n2) ;

    hello() ;
    return 0 ;
}


int sum(int num1 , int num2)

{
    int c = 0 ;
    c = num1 + num2 ;
    return c ;
}

void hello()
{
    cout << "Hello there , hhow are you doing \n" ;

}