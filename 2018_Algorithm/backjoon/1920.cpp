#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  int M, N, temp;

  cin >> N;

  vector<int> v1(N);

  for(int i = 0; i < N; i++)
  {
    cin >> temp;
    v1[i] = temp;
  }

  sort(v1.begin(),v1.end());

  cin >> M;

  vector<int> v2(M);

  for(int i =0; i<M; i++)
  {
    cin >> temp;
    v2.push_back(temp);
  }

  // for(int i = 0; i < N; i++)
  // {
  //   cout << v1[i] << ' ';
  // }
  // cout << endl;
}
