// 1357 
// 거꾸로 덧셈
// string 을 이용한 접근보다는 수학적 계산으로 풀이하는게
// 적절하다고 판단되는 문제

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

#include <iostream>
#include <string>

using namespace std;

int Rev(int x)
{
  int rev=0;
  while(x)
  {
    rev*=10;
    rev += x%10;
    x /=10;
  }
  return rev;
}

int main()
{
  int x,y;
  cin >> x >> y;

  cout << Rev(Rev(x)+Rev(y));
  return 0;
}
