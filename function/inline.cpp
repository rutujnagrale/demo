#include<iostream>
using namespace std;

// Inline functions in C programming plays an important role in small as well as complex code. 
// It saves a huge amount of execution time as well as memory space. For defining an inline function 
// we need to use the “ inline ” keyword. Every time you need a function in code all we have to do is 
// define an inline function logically and then use it as many times you want in a code, as it will help 
// in boosting the execution speed of the code. It is small to define and can be used again and again once defined.
// 

// inline int mul(int n1 , int n2) 
// {
//     return n1 * n2 ;
// }

inline int mul(int n1 , int n2)
{
    static int c = 0 ;      //    this will only executed ones
    c = c + 1 ;
    return (n1*n2)+c ;
}

int main(){
    
    int a , b ;
    cout << "Enter the number = \n" ;
    cin >> a >> b ;
    cout << "The multiplication of the two number is = " << mul(a , b) << endl ; 
    cout << "The multiplication of the two number is = " << mul(a , b) << endl ; 
    cout << "The multiplication of the two number is = " << mul(a , b) << endl ; 
    cout << "The multiplication of the two number is = " << mul(a , b) << endl ; 
    cout << "The multiplication of the two number is = " << mul(a , b) << endl ; 

    return 0 ;
}