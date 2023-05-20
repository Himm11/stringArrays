//search given number(first position)
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n=0,i=0,c=0;
    cin>>n;   //array length
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>c; //number to search
    int m=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==c)
        {m=i;
        break;}
    }
    cout<<m;
    
    return 0;
}