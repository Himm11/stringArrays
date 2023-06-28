#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //rotate array to left by k steps
    int n=0,i=0,k=0;
    //array length
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    //k value
    cin>>k;
    for(i=k;i<n;i++)
    cout<<a[i]<<"\t";
    i=0;
    while(i<k)
    cout<<a[i++]<<"\t";

    return 0;
}