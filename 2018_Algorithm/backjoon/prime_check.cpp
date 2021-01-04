#include <iostream>

using namespace std;

int prime_check(int n)
{
  if(n==1) return 0;
  for(int i = 2;i<n;i++)
  {
    if(n%i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  int testCase;
  cin >> testCase;
  int count = 0;
  for(int i=0;i<testCase;i++)
  {
    int num;
    cin >> num;
    count += prime_check(num);
  }
  cout << count << endl;

}
