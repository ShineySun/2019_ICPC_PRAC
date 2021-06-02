// 시저 암호
// 2021. 02. 03
// KMU HCI LAB ALGORITHM STUDY
// PROGRAMMERS LEVEL 1
// https://github.com/ShineySun/Algorithm_KMU

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <sstream>

using namespace std;

int solution(string s, int n)
{

  vector<int>data;

  istringstream ss(s);

  string stringBuffer;

  int num = 0;

  while(getline(ss,stringBuffer, ','))
  {
    if(stringBuffer != "null")
    {
      num = stoi(stringBuffer);
      data.push_back(num);
    }
    else
    {
      num = 0;
      data.push_back(num);
    }
  }

  for (int i = 0; i < data.size(); i++)
  {
    cout << data[i] << endl;
  }

  return 1;
}

int main(){
  string s = "5,4,8,11,null,13,4,7,2,null,null,5,1";
  int n = 22;

  int result = solution(s,n);

  cout << result << endl;
}
