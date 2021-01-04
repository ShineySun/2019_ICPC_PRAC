// 시간 초과로 인해 재 설계
// vector를 이용해 풀이

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  int N,M;
  int count = 0;
  string ans;
  scanf("%d %d",&N,&M);

  vector<string> no_listen(N);
  vector<string> result;

  for(int i =0;i<N;i++)
  {
    cin >> no_listen[i];
  }

  sort(no_listen.begin(),no_listen.end());

  for(int i =0;i<M;i++)
  {
    cin >> ans;
    if(binary_search(no_listen.begin(),no_listen.end(),ans))
    {
      count++;
      result.push_back(ans);
    }
  }
  sort(result.begin(),result.end());

  vector<string>::iterator it;
  printf("%d\n",count);
  for(it = result.begin();it!=result.end();it++)
  {
    cout << *it << endl;
  }

  return 0;
}
