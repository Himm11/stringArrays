#include<iostream>
using namespace std;
//finding number that occurs only once in an array while all the other numbers occurs twice
int main(){
    //concept: same numbers with opposite sign will cancel each other
    //XOR properties:
    //1. a XOR a = 0
    //2. a XOR 0 = a

    int ans=0;
    int a[7]={1,2,3,2,4,1,3};
    for(int i=0;i<7;i++){
        ans=ans^a[i];
    }
    cout<<ans;
}