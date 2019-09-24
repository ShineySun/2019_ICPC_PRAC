// 2864 번 문제
// 5와 6의 차이
// 2018 FOSCAR Algorithm
// 2018 . 11 .7 

#include <iostream>
#include <string>

using namespace std;

string FiveToSix(string s, int len)
{
  for(int i =0;i<len;i++)
  {
    if(s[i] == '5')
      s[i] = '6';
  }
  return s;
}

string SixToFive(string s, int len)
{
  for(int i =0;i<len;i++)
  {
    if(s[i] == '6')
      s[i] = '5';
  }
  return s;
}

int main()
{
    string num1,num2;
    int max,min,len1,len2;
    cin >> num1 >> num2;

    len1 = num1.length();
    len2 = num2.length();

    //cout << stoi(FiveToSix(num1,len1)) << ' '<< stoi(FiveToSix(num2,len2)) << endl;
    //cout << stoi(SixToFive(num1,len1)) << ' ' <<stoi(SixToFive(num2,len2))<<endl;
    max = stoi(FiveToSix(num1,len1)) + stoi(FiveToSix(num2,len2));
    min = stoi(SixToFive(num1,len1)) + stoi(SixToFive(num2,len2));

    cout << min << ' ' << max << endl;


    return 0;
}
