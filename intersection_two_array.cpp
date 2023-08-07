//find intersection of two arrays (size n and m)
//both arrays are already in increasing order
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m,i=0,j=0;
    cin>>n>>m;

    int arr1[n],arr2[m];
    vector<int> ans;
    while(i<n && j<m)    //they don't exceed array size
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++; 
            j++;
        }
        else if (arr1[i]<arr2[j])   //move forward in array1
        {
           i++;
        }
        else{
            j++;       //arr1[i]>arr[j]
        }


    }

}