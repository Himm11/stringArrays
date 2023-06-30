//given a 32 bit signed int x, return x with its digits reversed
//if reversing causes the value to go outside the signed 32 bit int range, return 0
// range: (-2^31, 2^31 - 1)
#include<iostream>
using namespace std;
int main(){
    int n; //number
    cin>>n;
    int rev=0;   
    int digit=0;
    while(n!=0){
        digit=n%10;
        if((rev>INT32_MAX/10) || (rev<INT32_MIN/10))
          { rev=0;
           break;}
        else
        {
        rev=rev*10 + digit;
        n=n/10;}

    }
    cout<<rev;

}