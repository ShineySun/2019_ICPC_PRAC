#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
  string ans;

  getline(cin,ans);
  int count = 0;

  for(int i=0;i<ans.size();i++)
  {
    if(ans[i]==' ')
      count++;
  }
  printf("%d\n",count+1);

  return 0;
}
