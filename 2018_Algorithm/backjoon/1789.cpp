// 1 ≤ S ≤ 4,294,967,295
// long long 자료형 사용해야함

#include <iostream>

using namespace std;

int main()
{
  long long S,sol;
  int num,count;

  cin >> S;

  sol = 0;
  num = 1;  // 자연수
  count = 0;

  while(1)
  {
    sol += num++;
    if(sol > S)
    {
      break;
    }
    count++;
  }
  cout << count << endl;

  return 0;

}
