//print 1's complement of a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    int mask=0; //masking method used to remove the extra one after using NOT bitwise on number(for reversal)
    cin>>n;
    int m=n;
    while(n!=0){
        mask=(mask<<1) | 1;
//above step adds the required number of 1's on left; coz AND with 1 will give the number itseld)
        n=n>>1;
    }

    int ans;

    //exception case when n=0, coz then complement would directly be 1
    if(m==0){ans=1;}
    else
    ans=(~n) & mask;
    //final answer is bitwise AND op between NOT(n) and mask

    cout<<ans;
}