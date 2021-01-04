#include <iostream>

using namespace std;

int get_fibo(int);

int main()
{
  int N;
  cin >> N;

  cout << get_fibo(N) << endl;
  return 0;
}

int get_fibo(int n)
{
  if(n==0) return 0;
  if(n==1) return 1;

  int before = 0;
  int after = 1;

  int result = 0;
  for(int i = 0;i<n-1;i++)
  {
    result = after + before;
    before = after;
    after = result;
  }
  return result;
}
