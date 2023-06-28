#include<iostream>
using namespace std;
//printing fibonaaci series
int main(){
    int i=0;
    int a=0;  //first number of the series
    int b=1;  //second number of the series
    int n=0;   //number of sequences in the series to be printed
    cin>>n;
    //printing the first two numbers of the series
    cout<<a<<" "<<b<<" ";
    for(i=0;i<n;i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }


}

