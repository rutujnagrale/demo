#include<iostream>
using namespace std;

typedef struct employee
{
    int id ;
    char c ;
    float salary ;
}ep;

int main(){
    
    struct employee rutuj ;
    struct employee yash ;

    rutuj.id = 1 ;
    rutuj.c = 'R' ;
    rutuj.salary = 1000 ;



    yash.id = 2 ;
    yash.c = 'Y' ;
    yash.salary = 45000 ;


    cout << rutuj.c << endl ;
    cout << rutuj.id << endl ;
    cout << rutuj.salary << endl ;
    cout << endl ;

    cout << yash.c << endl ;
    cout << yash.id << endl ;
    cout << yash.salary << endl ;

    return 0 ;
}