// 시저 암호
// 2021. 02. 03
// KMU HCI LAB ALGORITHM STUDY
// PROGRAMMERS LEVEL 1
// https://github.com/ShineySun/Algorithm_KMU

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

string solution(string s, int n)
{
    string answer = "";

  for( int i = 0 ; i < s.length() ; i++)
  {
    if ( s[i] == ' ')
    {
      answer += s[i];
    }
    else
    {
      int start = (s[i] >= 'a')? 'a' : 'A';
      answer += start + (s[i]-start + n)%26;
    }
  }

    return answer;
}

int main(){
  string s = "ZzYy";
  int n = 25;

  string result = solution(s,n);

  cout << result << endl;
}
