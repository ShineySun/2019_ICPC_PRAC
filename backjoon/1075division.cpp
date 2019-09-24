// 1075 번 문제
// 5와 6의 차이
// 2018 FOSCAR Algorithm
// 2018 . 11 .7 

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
  int n,f;
  cin >> n >> f;

  n = n/100*100;
  //cout << n << endl;
  while(1)
  {
    if(n%f == 0)
    {
      printf("%d%d\n",n%100/10,n%10);
      break;
    }
    n++;
  }

  return 0;
}
