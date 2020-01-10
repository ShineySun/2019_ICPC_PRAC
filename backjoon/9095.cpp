// 9095 번 문제
// 1,2,3 Plus
// 2020 FOSCAR Algorithm
// 2020 . 01 .10

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  // def variables
  int testcase;

  // get input num of test case
  cin >> testcase;

  // memory alloc
  vector<int> n(testcase,0);
  vector<int> table(12,0);

  for(int t = 0; t < testcase; t++)
  {
    cin >> n[t];
  }

  table[1] = 1;
  table[2] = 2;
  table[3] = 4;

  for(int i = 4; i < 12; i++)
  {
    table[i] = table[i-1] + table[i-2] + table[i-3];
    //cout << i << ' ' << table[i] << endl;
  }

  for(int t = 0; t < testcase; t++)
  {
    cout << table[n[t]] << endl;
  }

}
