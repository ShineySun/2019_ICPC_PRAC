// 1094 번 문제
// binarization
// 2018 FOSCAR Algorithm
// 2018 . 11 .18

#include <iostream>

using namespace std;

int main()
{
  int X,count;
  cin >> X;

  count = 0;

  while(X>0)
  {
    if(X%2==1)
      count++;
    X/=2;
  }
  cout << count << endl;
  return 0;
}
