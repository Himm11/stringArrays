//given an array 'arr' of size 'n'and an integer 's'
//find pair of elements such that sum of elements of pairs is equal to S
//in the pair, the first value should be smaller than the second value
//moreover, arrange the pairs in ascending order based on value of first element of each pair
//if first value same, compare second value
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;   
    int s;   
    cin>>s;
    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();i++)
        {
            if(arr[i]+arr[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
          
        }

    }
    sort(ans.begin(),ans.end());

}