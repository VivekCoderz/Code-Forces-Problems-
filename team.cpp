#include<iostream>
using namespace std;
int main(){
    int p,count = 0;
    cin>>p;
    while(p--){
        int a,b,c,m=0;
        cin>>a>>b>>c;
        if(a) m++;
        if(b) m++;
        if(c) m++;
        if(m>=2) count++;
    }
    cout<<count<<endl;
    
}