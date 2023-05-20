//Search number(last position)
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int n=0,i=0,m=-1,c=0;
    //length
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>c; //search number
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==c){
            m=i;
            break;
        }
    }
    cout<<m;
    return 0;
}