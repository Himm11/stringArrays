//given an array of size n containing each number between 1 and n-1 atleast once
//find duplicate number in array
#include<iostream>
using namespace std;
int main()
{int n;
    //concept: XOR
    cout<<"size of the array";
    cin>>n; //size of the array
    int a[n];
    cout<<"input values of the array";
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=0;
    for(int i=0;i<n;i++)
    ans=ans^a[i];

    for(int i=0;i<n;i++){
        ans=ans^i;
    }

    cout<<ans;

}
