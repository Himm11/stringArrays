#include<iostream>
using namespace std;
//pattern:
//        1
//      1 2 1
//    1 2 3 3 1
int main(){
    int n=0, i=0,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {   
        //Initial space
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }

        //First triangle
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
       
        //Second triangle
        k=i-1;
        while(k>0)
        cout<<k--;

        cout<<endl;

    }
}