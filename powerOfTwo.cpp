//return TRUE if number of power of two
//power of two means n==2^x
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //max int value= 2^31 - 1
    //check number of all 2^(0....30)
    int n=0;
    cin>>n;
    int num=1;
    int count=0;
    for(int i=0;i<=30;i++)
    {

        if(num==n)     //condition for 
           { cout<<"true";
            break;}
        else
        count++;
        
        if(num<INT32_MAX/2)
        num=num*2;
    
    }
    if(count==31)
    cout<<"false";

}