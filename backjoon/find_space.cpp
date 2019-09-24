#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  string sol;
  getline(cin,sol);
  int count = 0;

  //cout << sol.length() <<' '<<sol << endl;
  for(int i =0;i<sol.length();i++)
  {
    if(sol[i] == ' ')
      count++;
  }

  if(sol[0] == ' ')  // 생각하기 빡셈..
  {
    //cout << "첫번째 스페이스" << endl;
    count--;
  }

  if(sol[sol.length()-1] == ' ') // 문제 조건 잘보기..
  {
    //cout << "마지막 스페이스" << endl;
    count--;
  }

  cout << count+1 <<endl;


}
