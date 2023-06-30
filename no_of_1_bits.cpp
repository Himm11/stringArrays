//count the number of 1's in binary representation of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    int count;  //to count the number of 1's
    //taking in the number (in decimel form)
    cin>>n;
    while(n!=0){
        //checking last bit (rightmost)
        if(n&1)   //last digit and 1 will give TRUE if 1 is present as last digit
         count++;

         n=n>>1;   //removing the last digit;

    }
    count<<"number of 1's :"<<count;
}