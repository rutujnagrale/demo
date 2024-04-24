#include<iostream>
using namespace std;

struct employee 
{
    char c ;
    char name[100] ;
    int salary ;
};

int main(){

    struct employee rutuj ;

    rutuj.c = 'R' ;
    // rutuj.name = 'Rutuj' ;
    rutuj.salary = 100000 ;

   cout << rutuj.c << endl ;
   cout << rutuj.salary << endl ;
//    cout << rutuj.c< endl ;




    return 0 ;
}