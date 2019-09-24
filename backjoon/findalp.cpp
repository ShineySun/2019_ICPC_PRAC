#include <iostream>
#include <cstdio>
#include<string.h>
using namespace std;

int main()
{
  string ans;
  cin >> ans;

  int alp[26];
  memset(alp,-1,sizeof(alp));

  for(int i =0;i<ans.size();i++)
  {
    if(alp[ans[i]-'a'] == -1)
      alp[ans[i]-'a'] = i;
  }

  for(int i =0;i<26;i++)
  {
    printf("%d ",alp[i]);
  }

  return 0;
}
