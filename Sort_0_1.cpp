//array with only two kinds of values: 0,1
//sort in ascending order
#include<iostream>
using namespace std;
void sortOne(int arr[], int n){
    int left=0, right=n-1;
    while(left<=right){
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }

       if(arr[left]==1 && arr[right]==0 && left<=right){
        swap(arr[left], arr[right]);
        left++;
        right--;}
    }
}
int main(){
    //concept: left and right side intialise of array
    //move from left to right till 0 is found
    //move from right to left till 1 is found
    //when no more; swap (coz this means o is on right side and 1 is on left side)
    int arr[7]={0,0,1,0,1,0,1};
    sortOne(arr,7);
    for(int i=0;i<7;i++)
    cout<<arr[i];
}

