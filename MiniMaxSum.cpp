//Given five positive integers, find the minimum and maximum values that can be calculated 
//by summing exactly four of the five integers. Then print the respective minimum and
// maximum values as a single line of two space-separated long integers.

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int val, i;
	long long int sum = 0;
	vector<int> array;
	for (i = 0; i < 5; i++)
	{
		cin >> val;
		sum += val;
		//cout<<sum<<" ";
		array.push_back(val);
	}

	//cout<<endl;
	sort(array.begin(), array.end());

	/*for(i=0; i < 5; i++)
	{
	 cout<<array[i]<<endl;
	}*/
	cout << sum - array[4] << " " << sum - array[0];
	return 0;
}
//sort() takes a third parameter that is used to specify the order in which elements are to be sorted. 
//We can pass the “greater()” function to sort in descending order. 
//sort(arr, arr + n, greater<int>());