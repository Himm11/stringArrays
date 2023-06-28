//Check whether the number is strong or not
//Number is strong if sum of factorial of its digit is equal to the number itself
//for e.g. , the number is 145
//then 1! + 4! + 5! = 1 + 24 + 120 = 145 
//145 is strong

#include<iostream>
using namespace std;

int main()
{
int n,i=0;
int fact,rem;
cout << "Enter a number ";
cin >> n;
int sum = 0;
int temp = n;
while(n)
{
i = 1,fact = 1;
rem = n % 10;   //last digit of number

while(i <= rem)
{
fact = fact * i;
i++;
}
sum = sum + fact;
n = n / 10;
}
if(sum == temp)
     cout << temp << " is a strong number\n";
else
     cout << temp << " is not a strong number\n";

return 0;
}