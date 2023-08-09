//Given a time in 12 hour AM/PM format, convert it to military (24-hour) time.
//when we want to convert string (integer value) to integer, subtrack it by '0'
//for subtring fo a string s: s.substr(initial value, number of units to be included); 
// Example: Copy two characters of s1 (starting from position 3)
//eg. string r = s1.substr(3, 2);
//append() exists here
//to_string() is also valid here
//stoi() for string to integer

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
  int size= s.length();
  if(s[size-2]=='A'){
      string hh=s.substr(0,2);
      int h=stoi(hh);
      if(h==12){
          string nh="00";
          string nt=nh.append(s.substr(2,6));
          return nt;
      }
      else{
          return s.substr(0,size-2);
      }
  }
  else{
      string hh=s.substr(0,2);
      int h=stoi(hh);
      if(h==12){
          return s.substr(0,size-2);
      }
      else{
          int newhour=h+12;
          string nh=to_string(newhour);
          string nt=nh.append(s.substr(2,6));
          return nt;
      }
  }

    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}