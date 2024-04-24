#include<iostream>
using namespace std;

class student
{
    public:
    int id ;
    char c ;
    int age ;
    
};

int main(){

    student arr[4] ;

    for (int i = 0; i < 4; i++)
    {
        cout << i << " enter id "<< endl ;
        cin >> arr[i].id ;
        cout << i << " enter char "<< endl ;
        cin >> arr[i].c ;
        cout << i << " enter age "<< endl ;
        cin >> arr[i].age ;
    }

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i].c ;
    //     cout << arr[i].age ;
    //     cout << arr[i].id ;
    // }
    
      



    return 0 ;
}