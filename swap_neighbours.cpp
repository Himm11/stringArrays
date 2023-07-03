#include<iostream>
using namespace std;
//swap neighbouring numbers
//output array: {3,2,6,5,8,7,9}
int main(){
    int a[7]={2,3,5,6,7,8,9};
    int b[7];
    int temp;
    for(int i=0;i<7;i+=2)
    {
        if(i+1<7) {//even part of array where everyone has a pair
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;}
      //the single number in the end (in case of odd numbered array) will remain untouched
    }
    
    for(int i=0;i<7;i++){
        cout<<a[i]<<"\t";
    }

}