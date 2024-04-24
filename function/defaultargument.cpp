#include<iostream>
using namespace std;

//   if you pass only one argument then it will take the default value 
///   but if you pass any value then the defalut value will get ingored 

float interstmoney(int money , float intesrt = 1.08)
{
    return money * intesrt ;
}

int main(){
    int money ;
    cout << "Enter the money you have = \n" ;
    cin >> money ;

    cout << "If you have " << money << " rupess in your bank then you will get " << interstmoney(money) << " rupess in interst \n" ;
    cout << "If you have " << money << " rupess in your bank then you will get " << interstmoney(money , 1.1) << " rupess in interst \n" ;

    return 0 ;
}