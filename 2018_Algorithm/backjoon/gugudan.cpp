// 국민대학교 소프트웨어 14학번 김선필

#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  for(int i =0 ; i<9;i++)
  {
    cout << N << " * " <<  i+1 << " = "<< N*(i+1) << endl;
  }

  return 0;
}
