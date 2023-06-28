//find factorial of a number
#include<iostream>
using namespace std;
 int main(){
     int n, fact=1,i=1;
     cout<<"Enter a number";
     cin>>n;
     while(i<=n)
     {
        fact=fact*i;
        i++;
     }
     cout<<"Factorial is:"<<fact;
 }