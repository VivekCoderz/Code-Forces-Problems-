#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Limak , bob;
    cin>>Limak>>bob;
    int year = 0;
    while(Limak<=bob){
        Limak*=3;
        bob*=2;
    }
    cout<<year;
}