#include <iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int po = 0;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i]>0 && arr[i]>=arr[s-1]) po++;
    }
    cout<<po;
}