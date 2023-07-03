//return TRUE if number of power of two
//power of two means n==2^x
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=0)
    cout<<"False";
    
    double logVal=log2(n);
    int logVal2=log2(n);

    if(logVal==logVal2)    //log2(n) will be integer if it has a 2^x form
    cout<<"True";
    else
    cout<<"False";
    
    

}