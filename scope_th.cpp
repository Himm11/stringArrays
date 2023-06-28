#include<iostream>
using namespace std;
int main(){
    int a=3;
    cout<<a;

    if(true)    //scope of a declared inside this condition is only valid inside and doesnt 
                //exist for main() 
    {
        int a=5;
        cout<<a;
    }
 
    cout<<a;

    if(true){
        int b=11;
        cout<<b;
    }
   
    // cout<<b;    as it was declared only for the if block, hence when used outside
    //it will show error: 'b' was not declared in scope
 
}